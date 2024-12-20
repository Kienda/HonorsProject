cmake_minimum_required(VERSION 3.16)

# Project Metadata
project(studentSuccessUpdate VERSION 0.1 LANGUAGES CXX)

# Enable Qt features
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Debugging support
option(BUILD_DEBUG "Enable debug symbols" ON)
if(BUILD_DEBUG)
    set(CMAKE_BUILD_TYPE Debug)
endif()

# Find Qt Package
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

# Source Files
set(PROJECT_SOURCES
    main.cpp
    mainwindow.cpp mainwindow.h mainwindow.ui

    student.cpp student.h
)

# Add Executable
if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(studentSuccessUpdate
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        user.h user.cpp





        navigationwindow.ui
        navigationwindow.h navigationwindow.cpp navigationwindow.ui
        milestonewindow.h milestonewindow.cpp milestonewindow.ui
        recommendationwindow.h recommendationwindow.cpp recommendationwindow.ui
        guidancewindow.h guidancewindow.cpp guidancewindow.ui
    )
else()
    if(ANDROID)
        add_library(studentSuccessUpdate SHARED
            ${PROJECT_SOURCES}
        )
    else()
        add_executable(studentSuccessUpdate
            ${PROJECT_SOURCES}
        )
    endif()
endif()

# Link Libraries
target_link_libraries(studentSuccessUpdate PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

# Bundle Settings for macOS/iOS
if(${QT_VERSION} VERSION_LESS 6.1.0)
    set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.studentSuccessUpdate)
endif()
set_target_properties(studentSuccessUpdate PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

# Installation
include(GNUInstallDirs)
install(TARGETS studentSuccessUpdate
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

# Finalize executable for Qt6
if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(studentSuccessUpdate)
endif()
