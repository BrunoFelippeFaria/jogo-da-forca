cmake_minimum_required(VERSION 3.10)
project(jogo-da-forca VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets)
qt_standard_project_setup()

include_directories(src/include)

set(
    SOURCE_FILES
    src/main.cpp
    src/Gui.cpp
)

qt_add_executable(jogo-da-forca ${SOURCE_FILES})

target_link_libraries(jogo-da-forca  PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Widgets
)