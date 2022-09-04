cmake_minimum_required(VERSION 3.10.0)

set(This 100BoxesCPPTests)

set(Sources
    ExampleTests.cpp
    BoxesSimulationTests.cpp
)

add_executable(${This} ${Sources})

target_link_libraries(${This} PUBLIC 
    gtest_main
    Lib
)

add_test(
    NAME ${This}
    COMMAND ${This}
)