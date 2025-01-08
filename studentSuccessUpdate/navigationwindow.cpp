#include "navigationwindow.h"
#include "ui_navigationwindow.h"
#include <QVBoxLayout>
#include <QLabel>
#include <QDesktopServices>
#include <QUrl>

NavigationWindow::NavigationWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::NavigationWindow) {
    ui->setupUi(this);

    // Add pages to the QStackedWidget
    ui->stackedWidget->addWidget(new QWidget(this)); // Welcome Page
    ui->stackedWidget->addWidget(new QWidget(this)); // Milestone Page
    ui->stackedWidget->addWidget(new QWidget(this)); // Recommendation Page
    ui->stackedWidget->addWidget(new QWidget(this)); // Guidance Page

    // Default to showing the welcome page
    ui->stackedWidget->setCurrentIndex(0);

    // Connect buttons to slots
    connect(ui->milestoneButton, &QPushButton::clicked, this, &NavigationWindow::on_milestoneButton_clicked);
    connect(ui->recommendationButton, &QPushButton::clicked, this, &NavigationWindow::on_recommendationButton_clicked);
    connect(ui->guidanceButton, &QPushButton::clicked, this, &NavigationWindow::on_guidanceButton_clicked);

    // Initialize the milestone page with a default major and GPA

}

NavigationWindow::~NavigationWindow() {
    delete ui;
}

void NavigationWindow::setStudentDetails(const QString &name, const QString &gpa, const QString &semester, const QString &major) {
    ui->studentNameLabel->setText("Welcome " + name);
    ui->gpaLabel->setText("<b> GPA: </b>" + gpa);
    ui->semesterLabel->setText("<b> Semester: </b>" + semester);
    ui->majorLabel->setText("<b>Major: </b>" + major);

    generateGuidancePageContent(gpa, semester, major);

    updateMilestonePage(major, gpa);
    updateRecommendationPage(major, gpa);
}

void NavigationWindow::generateGuidancePageContent(const QString &gpa, const QString &semester, const QString &major) {
    // Retrieve the guidance page and layout
    QWidget *guidancePage = ui->stackedWidget->widget(3);  // Assuming the guidance page is at index 3
    QVBoxLayout *layout = qobject_cast<QVBoxLayout *>(guidancePage->layout());

    // If layout is not found, create a new one
    if (!layout) {
        layout = new QVBoxLayout(guidancePage);
    } else {
        // Clear the existing layout items
        QLayoutItem *item;
        while ((item = layout->takeAt(0)) != nullptr) {
            delete item->widget();
            delete item;
        }
    }

    // Generate the guidance text based on input parameters
    QString guidanceText = generateGuidanceText(gpa, semester, major);
    QLabel *guidanceLabel = new QLabel(guidanceText);
    guidanceLabel->setWordWrap(true);  // Make the label's text wrap to fit the layout

    // Set the alignment of the label to top-left
    guidanceLabel->setAlignment(Qt::AlignLeft | Qt::AlignTop);

    // Add the guidance label to the layout
    layout->addWidget(guidanceLabel);

    // Add the additional content programmatically (Learning Tips and Study Tips)
    QLabel *learningTitleLabel = new QLabel("Learning Tips:");
    learningTitleLabel->setStyleSheet("color: rgb(0, 0, 255); font: 700 14pt 'Segoe UI';");
    layout->addWidget(learningTitleLabel);

    QLabel *learningContentLabel = new QLabel(
        "Practice Active Recall\n"
        "Test yourself on key concepts instead of passively re-reading notes.\n"
        "Example: After studying a topic, close your book and try to explain it in your own words.\n\n"
        "Use Spaced Repetition\n"
        "Review material at gradually increasing intervals to improve long-term memory retention.\n"
        "Example: Use flashcards or apps like Anki to space out your study sessions effectively.\n\n"
        "Learn by Teaching\n"
        "Explain topics to others as if you’re teaching; it reinforces your understanding.\n"
        "Example: Form a study group and take turns teaching each other different topics."
        );
    learningContentLabel->setWordWrap(true);
    learningContentLabel->setStyleSheet("font: 10pt 'Segoe UI'; color: rgb(0, 0, 0);");
    layout->addWidget(learningContentLabel);

    QLabel *studyTitleLabel = new QLabel("Study Tips:");
    studyTitleLabel->setStyleSheet("color: rgb(0, 0, 255); font: 700 14pt 'Segoe UI';");
    layout->addWidget(studyTitleLabel);

    QLabel *studyContentLabel = new QLabel(
        "Create a Dedicated Study Schedule\n"
        "Set specific times and durations for studying each day to build a habit.\n"
        "Example: Study math from 3–4 PM and take a 10-minute break before moving to another subject.\n\n"
        "Minimize Distractions"
        );
    studyContentLabel->setWordWrap(true);
    studyContentLabel->setStyleSheet("font: 10pt 'Segoe UI'; color: rgb(0, 0, 0);");
    layout->addWidget(studyContentLabel);
}

QString NavigationWindow::generateGuidanceText(const QString &gpa, const QString &semester, const QString &major) {
    double gpaValue = gpa.toDouble();
    int semesterValue = semester.toInt();
    QString guidance;

    if (gpaValue >= 3.5) {
        guidance = "You are performing excellently! Consider applying for honors programs or internships in <b>" +  major + "</b>.";
    } else if (gpaValue >= 3.0) {
        guidance = "Great job! Keep working hard and explore opportunities like workshops and seminars related to <b>" + major + "</b>.";
    } else {
        guidance = "Focus on improving your GPA. Seek tutoring services or guidance counseling to enhance your performance.";
    }

    if (semesterValue <= 2) {
        guidance += "\nAs you're in your early semesters, focus on building a strong foundation in core subjects.";
    } else {
        guidance += "\nConsider preparing for your capstone project or exploring career opportunities in <b>" +  major + "</b>.";
    }

    return guidance;
}

// Function to dynamically populate the milestone page based on major and GPA
void NavigationWindow::updateMilestonePage(const QString &major, const QString &gpa)
{
    // Clear the existing content of the milestone page
    QWidget *milestonePage = ui->stackedWidget->widget(1);
    QLayout *layout = milestonePage->layout();
    if (layout) {
        QLayoutItem *item;
        while ((item = layout->takeAt(0)) != nullptr) {
            delete item->widget();
            delete item;
        }
        delete layout;
    }

    // Create a new layout for the milestone page
    QVBoxLayout *milestoneLayout = new QVBoxLayout(milestonePage);

    // Declare the variables for each section
    QString scholarship, financialAid, fellowship, internship;

    // Set the information for the major selected
    if (major == "Computer Science") {
        scholarship = "<b>Scholarship:</b> <a href='https://www.jkcf.org/our-scholarships/undergraduate-transfer-scholarship/' target='_blank'>Jack Kent Cooke Scholarship</a> – Received for demonstrating outstanding academic performance and leadership potential.";
        financialAid = "<b>Financial Aid:</b> <a href='https://www.hesc.ny.gov/pay-for-college/apply-for-financial-aid/nys-tap.html' target='_blank'>TAP (Tuition Assistance Program)</a> – Received for academic expenses while pursuing the Computer Science major.";
        fellowship = "<b>Fellowship:</b> <a href='https://www.jumpstartadvisorygroup.com/' target='_blank'>JumpStart</a> – Currently in progress, focusing on software engineering fundamentals and career readiness.";
        internship = "<b>Internship:</b> <a href='https://careers.jpmorgan.com/us/en/about-us' target='_blank'>JPMorgan Chase Internship</a> – Successfully completed, gaining hands-on experience in software development and financial technology.";
    } else if (major == "Accounting") {
        scholarship = "<b>Scholarship:</b> <a href='https://www.jkcf.org/our-scholarships/undergraduate-transfer-scholarship/' target='_blank'>Jack Kent Cooke Scholarship</a> – Awarded for excelling in financial analysis and business ethics.";
        financialAid = "<b>Financial Aid:</b> <a href='https://www.hesc.ny.gov/pay-for-college/apply-for-financial-aid/nys-tap.html' target='_blank'>TAP</a> – Received, providing critical support for tuition and coursework materials.";
        fellowship = "<b>Fellowship:</b> <a href='https://www.jumpstartadvisorygroup.com/' target='_blank'>JumpStart</a> – In progress, exploring opportunities in financial consulting and auditing.";
        internship = "<b>Internship:</b> <a href='https://careers.jpmorgan.com/us/en/about-us' target='_blank'>JPMorgan Chase Internship</a> – Completed with experience in corporate finance and risk management.";
    } else if (major == "Nursing") {
        scholarship = "<b>Scholarship:</b> <a href='https://www.jkcf.org/our-scholarships/undergraduate-transfer-scholarship/' target='_blank'>Jack Kent Cooke Scholarship</a> – Granted for commitment to healthcare and academic excellence in nursing studies.";
        financialAid = "<b>Financial Aid:</b> <a href='https://www.hesc.ny.gov/pay-for-college/apply-for-financial-aid/nys-tap.html' target='_blank'>TAP</a> – Received for assistance with clinical training and related coursework.";
        fellowship = "<b>Fellowship:</b> <a href='https://www.jumpstartadvisorygroup.com/' target='_blank'>JumpStart</a> – In progress, focusing on patient care innovation and leadership in healthcare.";
        internship = "<b>Internship:</b> <a href='https://careers.jpmorgan.com/us/en/about-us' target='_blank'>JPMorgan Chase Internship</a> – Completed, contributing to health and wellness initiatives within corporate settings.";
    } else if (major == "Biology") {
        scholarship = "<b>Scholarship:</b> <a href='https://www.jkcf.org/our-scholarships/undergraduate-transfer-scholarship/' target='_blank'>Jack Kent Cooke Scholarship</a> – Received for achievements in life sciences and commitment to research.";
        financialAid = "<b>Financial Aid:</b> <a href='https://www.hesc.ny.gov/pay-for-college/apply-for-financial-aid/nys-tap.html' target='_blank'>TAP</a> – Received to support expenses for lab-based coursework and research projects.";
        fellowship = "<b>Fellowship:</b> <a href='https://www.jumpstartadvisorygroup.com/' target='_blank'>JumpStart</a> – Currently in progress, emphasizing biotechnology and research skill development.";
        internship = "<b>Internship:</b> <a href='https://careers.jpmorgan.com/us/en/about-us' target='_blank'>JPMorgan Chase Internship</a> – Completed, focusing on biological data analysis for environmental initiatives.";
    } else if (major == "Math") {
        scholarship = "<b>Scholarship:</b> <a href='https://www.jkcf.org/our-scholarships/undergraduate-transfer-scholarship/' target='_blank'>Jack Kent Cooke Scholarship</a> – Received for excellence in mathematics and potential for contribution to STEM fields.";
        financialAid = "<b>Financial Aid:</b> <a href='https://www.hesc.ny.gov/pay-for-college/apply-for-financial-aid/nys-tap.html' target='_blank'>TAP</a> – Awarded to cover tuition and resources for advanced mathematics courses.";
        fellowship = "<b>Fellowship:</b> <a href='https://www.jumpstartadvisorygroup.com/' target='_blank'>JumpStart</a> – In progress, targeting data science and applications of mathematics in technology.";
        internship = "<b>Internship:</b> <a href='https://careers.jpmorgan.com/us/en/about-us' target='_blank'>JPMorgan Chase Internship</a> – Completed, with focus on quantitative analysis and financial modeling.";
    } else if (major == "Physics") {
        scholarship = "<b>Scholarship:</b> <a href='https://www.jkcf.org/our-scholarships/undergraduate-transfer-scholarship/' target='_blank'>Jack Kent Cooke Scholarship</a> – Received for excellence in physics and commitment to scientific discovery.";
        financialAid = "<b>Financial Aid:</b> <a href='https://www.hesc.ny.gov/pay-for-college/apply-for-financial-aid/nys-tap.html' target='_blank'>TAP</a> – Received for support in laboratory and field research activities.";
        fellowship = "<b>Fellowship:</b> <a href='https://www.jumpstartadvisorygroup.com/' target='_blank'>JumpStart</a> – In progress, focusing on renewable energy and quantum computing.";
        internship = "<b>Internship:</b> <a href='https://careers.jpmorgan.com/us/en/about-us' target='_blank'>JPMorgan Chase Internship</a> – Completed, focusing on data analysis and algorithm development in physics simulations.";
    } else if (major == "Chemistry") {
        scholarship = "<b>Scholarship:</b> <a href='https://www.jkcf.org/our-scholarships/undergraduate-transfer-scholarship/' target='_blank'>Jack Kent Cooke Scholarship</a> – Awarded for achievements in chemical research and academic excellence.";
        financialAid = "<b>Financial Aid:</b> <a href='https://www.hesc.ny.gov/pay-for-college/apply-for-financial-aid/nys-tap.html' target='_blank'>TAP</a> – Provided for lab-based coursework and research materials.";
        fellowship = "<b>Fellowship:</b> <a href='https://www.jumpstartadvisorygroup.com/' target='_blank'>JumpStart</a> – In progress, with focus on pharmaceutical research and chemical engineering.";
        internship = "<b>Internship:</b> <a href='https://careers.jpmorgan.com/us/en/about-us' target='_blank'>JPMorgan Chase Internship</a> – Completed, working with chemistry-driven financial technologies.";
    }

    // Adjust the spacing for the layout
    milestoneLayout->setSpacing(1); // Reduce space between labels

    // Define a stylesheet for labels
    QString labelStyle = "font-size: 16px; font-weight: regular;";

    // Create and configure each QLabel
    QLabel *scholarshipLabel = new QLabel(scholarship, milestonePage);
    scholarshipLabel->setStyleSheet(labelStyle);
    scholarshipLabel->setWordWrap(true); // Enable word wrapping
    milestoneLayout->addWidget(scholarshipLabel);

    QLabel *financialAidLabel = new QLabel(financialAid, milestonePage);
    financialAidLabel->setStyleSheet(labelStyle);
    financialAidLabel->setWordWrap(true); // Enable word wrapping
    milestoneLayout->addWidget(financialAidLabel);

    QLabel *fellowshipLabel = new QLabel(fellowship, milestonePage);
    fellowshipLabel->setStyleSheet(labelStyle);
    fellowshipLabel->setWordWrap(true); // Enable word wrapping
    milestoneLayout->addWidget(fellowshipLabel);

    QLabel *internshipLabel = new QLabel(internship, milestonePage);
    internshipLabel->setStyleSheet(labelStyle);
    internshipLabel->setWordWrap(true); // Enable word wrapping
    milestoneLayout->addWidget(internshipLabel);

    // Connect each label to open the link
    connect(scholarshipLabel, &QLabel::linkActivated, [](const QString &link) {
        QDesktopServices::openUrl(QUrl(link));
    });
    connect(financialAidLabel, &QLabel::linkActivated, [](const QString &link) {
        QDesktopServices::openUrl(QUrl(link));
    });
    connect(fellowshipLabel, &QLabel::linkActivated, [](const QString &link) {
        QDesktopServices::openUrl(QUrl(link));
    });
    connect(internshipLabel, &QLabel::linkActivated, [](const QString &link) {
        QDesktopServices::openUrl(QUrl(link));
    });

    // Set the layout to the milestone page
    milestonePage->setLayout(milestoneLayout);
}



void NavigationWindow::updateRecommendationPage(const QString &major, const QString &gpa) {
    // Clear the existing content of the recommendation page
    QWidget *recommendationPage = ui->stackedWidget->widget(2);  // Assuming the recommendation page is at index 2
    QLayout *layout = recommendationPage->layout();

    // Only clear widgets from the layout without deleting it
    if (layout) {
        QLayoutItem *item;
        while ((item = layout->takeAt(0)) != nullptr) {
            delete item->widget();  // Delete the widget but not the layout itself
            delete item;            // Delete the layout item
        }
    }

    // Create a new layout for the recommendation page
    QVBoxLayout *recommendationLayout = new QVBoxLayout(recommendationPage);

    // Define variables for dynamic content
    QString scholarships, internships, fellowships, clubs;

    // Populate content based on the major
    if (major == "Computer Science") {
        scholarships = "<a href=\"https://scholarships.google.com/\">Google Lime Scholarship</a> – For students with strong leadership and technical skills.<br>"
                       "<a href=\"https://www.womentechmakers.com/scholars/\">Women Techmakers Scholars Program</a> – Encourages diversity in technology.";
        internships = "<a href=\"https://careers.microsoft.com/us/en/students\">Microsoft Explore Internship</a> – Designed for early college students.<br>"
                      "<a href=\"https://www.amazon.jobs/en/jobs/1451242/amazon-future-engineer-internship-program\">Amazon Future Engineer Internship</a> – Focused on tech and innovation.";
        fellowships = "<a href=\"https://www.codepath.org/fellowships\">CodePath Fellowship</a> – Offers advanced programming preparation.<br>"
                      "<a href=\"https://openai.com/research/residency\">OpenAI Residency</a> – For those interested in AI and ML.";
        clubs = "<a href=\"https://acm.org/\">Association for Computing Machinery (ACM)</a>.<br>"
                "<a href=\"https://www.wics.org/\">Women in Computer Science (WiCS)</a>.";
    } else if (major == "Accounting") {
        scholarships = "<a href=\"https://www.aicpa.org/\">AICPA Scholarships</a> – For students pursuing accounting.<br>"
                       "<a href=\"https://www.rjscholarship.org/\">Ritchie-Jennings Memorial Scholarship</a> – For forensic accounting.";
        internships = "<a href=\"https://www.pwc.com/us/en/careers/student-programs.html\">PwC Start Internship</a> – Foundational experience in accounting.<br>"
                      "<a href=\"https://home.kpmg/xx/en/home/careers/student-programs/internships.html\">KPMG Internship Program</a> – Insights into audit, tax, and advisory.";
        fellowships = "<a href=\"https://naba.com/fellowships/\">NABA Fellowship</a> – Tailored for underrepresented students.<br>"
                      "<a href=\"https://www.aicpa.org/\">AICPA Leadership Fellows Program</a>.";
        clubs = "<a href=\"https://www.betaalphapsi.org/\">Beta Alpha Psi</a> – Honors accounting, finance, and IS students.<br>"
                "<a href=\"https://www.nabainc.org/\">NABA Student Chapters</a> – Networking for accounting students.";
    } else if (major == "Nursing") {
        scholarships = "<a href=\"https://www.tylenol.com/\">Tylenol Future Care Scholarship</a> – For healthcare-focused students.<br>"
                       "<a href=\"https://www.nbna.org/scholarships\">NBNA Scholarship</a> – For excelling nursing students.";
        internships = "<a href=\"https://www.mayoclinic.org/\">Mayo Clinic Summer Nursing Internship</a> – Clinical experience.<br>"
                      "<a href=\"https://www.cedars-sinai.org/\">Cedars-Sinai Nursing Internships</a> – Exposure to patient care.";
        fellowships = "<a href=\"https://www.hrsa.gov/nurse-corps\">HRSA Nurse Corps Fellowship</a> – Supports underserved communities.<br>"
                      "<a href=\"https://www.sigmath.org/\">Sigma Theta Tau Fellowship</a> – Leadership in nursing.";
        clubs = "<a href=\"https://www.nursingworld.org/ana/\">American Nurses Association (ANA)</a>.<br>"
                "<a href=\"https://www.nsna.org/\">Student Nurses Association (SNA)</a>.";
    } else if (major == "Biology") {
        scholarships = "<a href=\"https://goldwater.scholarsapply.org/\">Barry Goldwater Scholarship</a> – For natural science research careers.<br>"
                       "<a href=\"https://www.nih.gov/\">NIH Undergraduate Scholarship</a> – For biomedical research.";
        internships = "<a href=\"https://www.nih.gov/\">NIH Summer Internship Program (SIP)</a> – Lab-based research.<br>"
                      "<a href=\"https://www.hhmi.org/\">HHMI Summer Program</a> – Focused on life sciences research.";
        fellowships = "<a href=\"https://www.amgenscholars.com/\">Amgen Scholars Program</a> – Biomedical science leadership development.<br>"
                      "<a href=\"https://www.scripps.edu/\">Scripps Research Fellowships</a> – Advanced research in biology.";
        clubs = "<a href=\"https://www.asbmb.org/\">American Society for Biochemistry and Molecular Biology (ASBMB)</a>.<br>"
                "<a href=\"https://www.betabetabeta.org/\">Beta Beta Beta National Biological Honor Society</a>.";
    } else if (major == "Math") {
        scholarships = "<a href=\"https://www.nsf.gov/funding/pgm_summ.jsp?pims_id=6201\">National Science Foundation (NSF) Graduate Research Fellowship</a> – For students advancing in STEM fields.<br>"
                       "<a href=\"https://www.siam.org/\">Society for Industrial and Applied Mathematics (SIAM) Scholarship</a> – For students excelling in applied mathematics.";
        internships = "<a href=\"https://www.nsa.gov/\">National Security Agency (NSA) Math Summer Internship</a> – For students interested in cryptography and data analysis.<br>"
                      "<a href=\"https://www.citadel.com/\">Quantitative Analysis Internship at Citadel</a> – Focuses on mathematical modeling and financial applications.";
        fellowships = "<a href=\"https://www.msri.org/\">Mathematical Sciences Research Institute (MSRI) Fellowship</a> – Supports advanced mathematical research.<br>"
                      "<a href=\"https://dimacs.rutgers.edu/\">DIMACS REU Program</a> – For undergraduates in discrete mathematics and computer science.";
        clubs = "<a href=\"https://www.maa.org/\">Mathematics Association of America (MAA)</a> – Encourages participation in math competitions and conferences.<br>"
                "<a href=\"https://www.pme-math.org/\">Pi Mu Epsilon</a> – An honor society for recognizing excellence in mathematics.";
    }

    // Create and configure each QLabel for recommendations
    QString labelStyle = "font-size: 16px; font-weight: regular;";

    // Scholarships
    QLabel *scholarshipsLabel = new QLabel("<b>Scholarships:</b><br>" + scholarships, recommendationPage);
    scholarshipsLabel->setStyleSheet(labelStyle);
    scholarshipsLabel->setWordWrap(true);
    scholarshipsLabel->setOpenExternalLinks(true);
    recommendationLayout->addWidget(scholarshipsLabel);

    // Internships
    QLabel *internshipsLabel = new QLabel("<b>Internships:</b><br>" + internships, recommendationPage);
    internshipsLabel->setStyleSheet(labelStyle);
    internshipsLabel->setWordWrap(true);
    internshipsLabel->setOpenExternalLinks(true);
    recommendationLayout->addWidget(internshipsLabel);

    // Fellowships
    QLabel *fellowshipsLabel = new QLabel("<b>Fellowships:</b><br>" + fellowships, recommendationPage);
    fellowshipsLabel->setStyleSheet(labelStyle);
    fellowshipsLabel->setWordWrap(true);
    fellowshipsLabel->setOpenExternalLinks(true);
    recommendationLayout->addWidget(fellowshipsLabel);

    // Clubs and Organizations
    QLabel *clubsLabel = new QLabel("<b>Clubs and Organizations:</b><br>" + clubs, recommendationPage);
    clubsLabel->setStyleSheet(labelStyle);
    clubsLabel->setWordWrap(true);
    clubsLabel->setOpenExternalLinks(true);
    recommendationLayout->addWidget(clubsLabel);

    // Set the layout to the recommendation page
    recommendationPage->setLayout(recommendationLayout);


    // Set the layout to the recommendation page
    recommendationPage->setLayout(recommendationLayout);
}


void NavigationWindow::on_milestoneButton_clicked() {
    ui->stackedWidget->setCurrentIndex(1);
}

void NavigationWindow::on_recommendationButton_clicked() {
    ui->stackedWidget->setCurrentIndex(2);
}

void NavigationWindow::on_guidanceButton_clicked() {
    ui->stackedWidget->setCurrentIndex(3);
}
