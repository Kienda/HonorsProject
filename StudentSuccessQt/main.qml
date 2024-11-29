import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    id: mainWindow
    width: 640
    height: 480
    visible: true
    title: qsTr("Student Success")
    color: "blue" // Set background color

    Column {
        id: mainColumn
        anchors.centerIn: parent
        spacing: 20

        Text {
            text: "Student Success Empowers your \nacademic journey..."
                    color: "white" // Text color set to white
                    font.bold: true
                    font.pixelSize: 24
                    horizontalAlignment: Text.AlignLeft // Align text to the left
                    wrapMode: Text.WordWrap // Ensure the text wraps to fit the lines
        }

        TextField {
            id: userNameField
            placeholderText: "Enter Username"
            width: 200
            color: "black"
            background: Rectangle {
                color: "white"
                radius: 5
            }
        }

        TextField {
            id: passwordField
            placeholderText: "Enter Password"
            echoMode: TextInput.Password
            width: 200
            color: "black"
            background: Rectangle {
                color: "white"
                radius: 5
            }
        }

        Row {
            spacing: 10

            Button {
                id: loginButton
                text: "Sign In"
                width: 100
                height: 30
                font.bold: true
                background: Rectangle {
                    color: "white"
                    radius: 15
                    border.color: "blue"
                    border.width: 2
                }
                contentItem: Text {
                    text: loginButton.text
                    color: "blue"
                    font.bold: true
                    horizontalAlignment: Text.AlignHCenter
                    verticalAlignment: Text.AlignVCenter
                }
                onClicked: {
                    signInWindow.show()
                }
            }

            Button {
                id: signupButton
                text: "Sign Up"
                width: 100
                height: 30
                font.bold: true
                background: Rectangle {
                    color: "white"
                    radius: 15
                    border.color: "blue"
                    border.width: 2
                }
                contentItem: Text {
                    text: signupButton.text
                    color: "blue"
                    font.bold: true
                    horizontalAlignment: Text.AlignHCenter
                    verticalAlignment: Text.AlignVCenter
                }
                onClicked: {
                    signUpWindow.show()
                }
            }
        }
    }

    // Sign In Information Window
    Window {
        id: signInWindow
        width: 400
        height: 500
        visible: false
        title: "Sign In Information"

        Rectangle {
            anchors.fill: parent
            color: "white"

            Column {
                spacing: 20
                anchors.centerIn: parent
                anchors.margins: 20

                Text {
                    text: "Our Services"
                    font.pixelSize: 18
                    font.bold: true
                    color: "black"
                    horizontalAlignment: Text.AlignHCenter
                }

                // Profile Set Up Button
                Button {
                    text: "Profile Set Up"
                    width: 250
                    height: 40
                    background: Rectangle {
                        id: profileBackground
                        color: "blue"
                        radius: 5

                        MouseArea {
                            anchors.fill: parent
                            onEntered: {
                                profileBackground.color = "#add8e6"; // Light blue
                                profileText.color = "#000080"; // Dark blue
                            }
                            onExited: {
                                profileBackground.color = "blue";
                                profileText.color = "white";
                            }
                        }
                    }
                    contentItem: Text {
                        id: profileText
                        text: "Profile Set Up"
                        color: "white"
                        font.bold: true
                        horizontalAlignment: Text.AlignHCenter
                        verticalAlignment: Text.AlignVCenter
                    }
                    onClicked: profileSetUpWindow.visible = true
                }

                // Milestone Button
                Button {
                                    text: "Milestone"
                                    width: 250
                                    height: 40
                                    background: Rectangle {
                                        id: milestoneBackground
                                        color: "blue"
                                        radius: 5

                                        MouseArea {
                                            anchors.fill: parent
                                            onEntered: {
                                                milestoneBackground.color = "#add8e6"; // Light blue
                                                milestoneText.color = "#000080"; // Dark blue
                                            }
                                            onExited: {
                                                milestoneBackground.color = "blue";
                                                milestoneText.color = "white";
                                            }
                                        }
                                    }
                                    contentItem: Text {
                                        id: milestoneText
                                        text: "Milestone"
                                        color: "white"
                                        font.bold: true
                                        horizontalAlignment: Text.AlignHCenter
                                        verticalAlignment: Text.AlignVCenter
                                    }
                                    onClicked: milestoneWindow.visible = true
                                }

                // Recommendation Button
                Button {
                    text: "Recommendation"
                    width: 250
                    height: 40
                    background: Rectangle {
                        id: recommendationBackground
                        color: "blue"
                        radius: 5

                        MouseArea {
                            anchors.fill: parent
                            onEntered: {
                                recommendationBackground.color = "#add8e6"; // Light blue
                                recommendationText.color = "#000080"; // Dark blue
                            }
                            onExited: {
                                recommendationBackground.color = "blue";
                                recommendationText.color = "white";
                            }
                        }
                    }
                    contentItem: Text {
                        id: recommendationText
                        text: "Recommendation"
                        color: "white"
                        font.bold: true
                        horizontalAlignment: Text.AlignHCenter
                        verticalAlignment: Text.AlignVCenter
                    }
                    onClicked: recommendationWindow.visible = true
                }

                // Guidance Button
                Button {
                    text: "Guidance"
                    width: 250
                    height: 40
                    background: Rectangle {
                        id: guidanceBackground
                        color: "blue"
                        radius: 5

                        MouseArea {
                            anchors.fill: parent
                            onEntered: {
                                guidanceBackground.color = "#add8e6"; // Light blue
                                guidanceText.color = "#000080"; // Dark blue
                            }
                            onExited: {
                                guidanceBackground.color = "blue";
                                guidanceText.color = "white";
                            }
                        }
                    }
                    contentItem: Text {
                        id: guidanceText
                        text: "Guidance"
                        color: "white"
                        font.bold: true
                        horizontalAlignment: Text.AlignHCenter
                        verticalAlignment: Text.AlignVCenter
                    }
                    onClicked: guidanceWindow.visible = true
                }
            }
        }

        // Empty windows for each service
        Window {
            id: profileSetUpWindow
            width: 640
            height: 480
            visible: false
            title: "Profile Set Up"

            Rectangle {
                anchors.fill: parent
                color: "white"
            }
        }

        Window {
            id: milestoneWindow
            width: 640
            height: 480
            visible: false
            title: "Milestone"
            color: "#ffffff"  // White background for the window

            Rectangle {
                anchors.fill: parent
                color: "#ffffff"  // White background for the content area
                radius: 10

                Column {
                    spacing: 20
                    anchors.centerIn: parent
                    padding: 20

                    Text {
                        text: "Milestones:"
                        font.pixelSize: 20
                        font.bold: true
                        color: "#0000ff"  // Blue text for the header
                    }

                    Text {
                        text: "Scholarship (Received): Jack Kent Cooke"
                        font.pixelSize: 16
                        color: "#000000"  // Black text for the content
                    }

                    Text {
                        text: "Financial Aid (Received): Tap"
                        font.pixelSize: 16
                        color: "#000000"
                    }

                    Text {
                        text: "Fellowship (In Progress): Jump Start"
                        font.pixelSize: 16
                        color: "#000000"
                    }

                    Button {
                        text: "Close"
                        width: parent.width * 0.6
                        height: 40
                        anchors.horizontalCenter: parent.horizontalCenter
                        background: Rectangle {
                            color: "#0000ff"  // Blue button background
                            radius: 5
                        }
                        onClicked: milestoneWindow.visible = false
                    }
                }
            }
        }

        Window {
            id: recommendationWindow
            width: 640
            height: 480
            visible: false
            title: "Recommendation"

            Rectangle {
                anchors.fill: parent
                color: "white"
            }
        }

        Window {
            id: guidanceWindow
            width: 640
            height: 480
            visible: false
            title: "Guidance"
            color: "#0000ff"  // Blue top window

            Rectangle {
                anchors.fill: parent
                color: "#ffffff"  // White background for the content area
                radius: 10

                Column {
                    spacing: 15
                    anchors.centerIn: parent
                    padding: 20

                    // Title
                    Text {
                        text: "Learning Tips"
                        font.pixelSize: 20
                        font.bold: true
                        color: "#0000ff"  // Blue title text
                        anchors.horizontalCenter: parent.horizontalCenter
                    }

                    // Tip 1
                    Text {
                        text: "Practice Active Recall"
                        font.pixelSize: 16
                        font.bold: true
                        color: "#0000ff"  // Blue subheading
                    }
                    Text {
                        text: "Test yourself on key concepts instead of passively re-reading notes.\nExample: After studying a topic, close your book and try to explain it in your own words."
                        font.pixelSize: 14
                        color: "#000000"  // Black content text
                    }

                    // Tip 2
                    Text {
                        text: "Use Spaced Repetition"
                        font.pixelSize: 16
                        font.bold: true
                        color: "#0000ff"
                    }
                    Text {
                        text: "Review material at gradually increasing intervals to improve long-term memory retention.\nExample: Use flashcards or apps like Anki to space out your study sessions effectively."
                        font.pixelSize: 14
                        color: "#000000"
                    }

                    // Tip 3
                    Text {
                        text: "Learn by Teaching"
                        font.pixelSize: 16
                        font.bold: true
                        color: "#0000ff"
                    }
                    Text {
                        text: "Explain topics to others as if you’re teaching; it reinforces your understanding.\nExample: Form a study group and take turns teaching each other different topics."
                        font.pixelSize: 14
                        color: "#000000"
                    }

                    // Tip 4
                    Text {
                        text: "Create a Dedicated Study Schedule"
                        font.pixelSize: 16
                        font.bold: true
                        color: "#0000ff"
                    }
                    Text {
                        text: "Set specific times and durations for studying each day to build a habit.\nExample: Study math from 3–4 PM and take a 10-minute break before moving to another subject."
                        font.pixelSize: 14
                        color: "#000000"
                    }

                    // Tip 5
                    Text {
                        text: "Minimize Distractions"
                        font.pixelSize: 16
                        font.bold: true
                        color: "#0000ff"
                    }
                    Text {
                        text: "Study in a quiet environment and put your phone on silent mode or use focus apps.\nExample: Use apps like Focus@Will or the Pomodoro Timer for timed, distraction-free sessions."
                        font.pixelSize: 14
                        color: "#000000"
                    }

                    // Tip 6
                    Text {
                        text: "Practice Time Management"
                        font.pixelSize: 16
                        font.bold: true
                        color: "#0000ff"
                    }
                    Text {
                        text: "Break your study material into manageable chunks and prioritize based on deadlines.\nExample: Use a planner to divide study topics across the week, focusing on upcoming exams first."
                        font.pixelSize: 14
                        color: "#000000"
                    }

                    // Close Button
                    Button {
                        text: "Close"
                        width: parent.width * 0.6
                        height: 40
                        anchors.horizontalCenter: parent.horizontalCenter
                        background: Rectangle {
                            color: "#0000ff"  // Blue button background
                            radius: 5
                        }
                        onClicked: guidanceWindow.visible = false
                    }
                }
            }
        }
    }





    // Sign Up Information Window
    Window {
        id: signUpWindow
        width: 400
        height: 500
        visible: false
        title: "Student Sign-Up"

        Rectangle {
            anchors.fill: parent
            color: "white"
            border.color: "blue"
            border.width: 2

            Column {
                spacing: 15
                anchors.centerIn: parent

                Text {
                    text: "Create Your Account"
                    font.pixelSize: 20
                    font.bold: true
                    color: "blue"
                    horizontalAlignment: Text.AlignHCenter
                    verticalAlignment: Text.AlignVCenter
                }

                TextField {
                    id: nameField
                    placeholderText: "Enter Name"
                    width: 300
                    height: 40
                    font.pixelSize: 16
                    background: Rectangle {
                        color: "lightgray"
                        radius: 5
                    }
                }

                TextField {
                    id: emailField
                    placeholderText: "Enter Email"
                    width: 300
                    height: 40
                    font.pixelSize: 16
                    background: Rectangle {
                        color: "lightgray"
                        radius: 5
                    }
                }

                TextField {
                    id: majorField
                    placeholderText: "Enter Major"
                    width: 300
                    height: 40
                    font.pixelSize: 16
                    background: Rectangle {
                        color: "lightgray"
                        radius: 5
                    }
                }

                TextField {
                    id: emplIDField
                    placeholderText: "Enter Employee ID"
                    width: 300
                    height: 40
                    font.pixelSize: 16
                    background: Rectangle {
                        color: "lightgray"
                        radius: 5
                    }
                }

                TextField {
                    id: semesterField
                    placeholderText: "Enter Semester"
                    width: 300
                    height: 40
                    font.pixelSize: 16
                    background: Rectangle {
                        color: "lightgray"
                        radius: 5
                    }
                }

                TextField {
                    id: gpaField
                    placeholderText: "Enter GPA"
                    width: 300
                    height: 40
                    font.pixelSize: 16
                    background: Rectangle {
                        color: "lightgray"
                        radius: 5
                    }
                }

                Button {
                    text: "Submit"
                    width: 150
                    height: 40
                    font.bold: true
                    background: Rectangle {
                        color: "blue"
                        radius: 5
                    }
                    contentItem: Text {
                        text: "Submit"
                        color: "white"
                        font.bold: true
                        horizontalAlignment: Text.AlignHCenter
                        verticalAlignment: Text.AlignVCenter
                    }
                    onClicked: {
                        console.log("Name: " + nameField.text)
                        console.log("Email: " + emailField.text)
                        console.log("Major: " + majorField.text)
                        console.log("Employee ID: " + emplIDField.text)
                        console.log("Semester: " + semesterField.text)
                        console.log("GPA: " + gpaField.text)
                        // Add logic to save or handle the submitted data
                    }
                }
            }
        }
    }


}

