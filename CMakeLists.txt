cmake_minimum_required(VERSION 3.16)
project(roboti_hlavnjir_main)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(roboti_hlavnjir_main
        Bludiste.cpp
        bludiste.dat
        Bludiste.h
        main.cpp
        Prohledavac.h
        README.md VasRobot.h VasRobot.cpp insp.cpp)
