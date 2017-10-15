project(struct-factory)
cmake_minimum_required(VERSION 3.7)
###################################################
# LIBRARIES
# QT
SET(CMAKE_AUTOMOC ON)
SET(CMAKE_AUTORCC ON)
SET(CMAKE_INCLUDE_CURRENT_DIR ON)
FIND_PACKAGE(Qt5 COMPONENTS Core Widgets PrintSupport REQUIRED)
FIND_PACKAGE(Qt5Core REQUIRED)


add_executable(
    struct
    main.cpp
    bottin_atom.cpp
    toQString.cpp
    )

add_executable(
    struct_widget
    main_widget.cpp
    bottin_atom.cpp
    bottin_atom_qwidget.cpp
    toQString.cpp
    )


target_include_directories(
    struct
    PUBLIC
    ${Qt5Core_INCLUDE_DIRS}
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Catch/include
    )
target_link_libraries(
    struct
    Qt5::Core
    )


target_include_directories(
    struct_widget
    PUBLIC
    ${Qt5Core_INCLUDE_DIRS}
    ${Qt5Widgets_INCLUDE_DIRS}
    ${CMAKE_CURRENT_SOURCE_DIR}
    )

target_link_libraries(
    struct_widget
    Qt5::Widgets
    Qt5::Core
    )
