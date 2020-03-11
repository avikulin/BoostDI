cmake_minimum_required(VERSION 3.5)

project(BoostDI LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(interfaces)
include_directories(boost)
include_directories(bindings)

add_executable(BoostDI main.cpp
                       boost/di.hpp
                       interfaces/base_interfaces.hpp
                       inventory/renderer.cpp
                       inventory/gui_view.cpp
                       inventory/text_view.cpp
                       inventory/controller.cpp
                       inventory/model.cpp
                       inventory/user.cpp
                       inventory/controller.cpp
                       inventory/app.cpp)
