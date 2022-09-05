cmake_minimum_required(VERSION 3.10.0)

project(100BoxesCPP)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(LIBNAME Lib)

add_executable(${PROJECT_NAME} main.cpp)

set(CMAKE_POSITION_INDEPENDENT_CODE, ON)

enable_testing()

add_subdirectory(googletest)

set(Headers 
    BoxesSimulation.hpp
    Box.hpp
    Ticket.hpp
    Player.hpp
    StrategyBase.hpp
    CycleStrategy.hpp
)

set(Sources
    BoxesSimulation.cpp
    Box.cpp 
    Ticket.cpp 
    Player.cpp
    StrategyBase.cpp
    CycleStrategy.cpp
)

add_library(${LIBNAME} STATIC ${Sources} ${Headers})
target_link_libraries(${PROJECT_NAME} ${LIBNAME})

add_subdirectory(tests)

