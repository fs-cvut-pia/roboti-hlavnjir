cmake_minimum_required(VERSION 3.16)
project(roboti_hlavnjir_main)

set_target_properties(bar PROPERTIES CXX_STANDARD 14)
target_compile_features(bar PUBLIC cxx_std_11)

include_directories(.)

add_executable(roboti_hlavnjir_main
        Bludiste.cpp
        bludiste.dat
        Bludiste.h
        main.cpp
        Prohledavac.h
        README.md
        VasRobot.h
        VasRobot.cpp)
