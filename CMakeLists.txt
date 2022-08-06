cmake_minimum_required(VERSION 3.20)

project("mathlaw" VERSION 1.0.0 LANGUAGES C CXX)


set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# OPTION
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

option(ENABLE_ALGEBRA_TESTING       "Enable the Algebra Unit Testing build"     ON)
option(ENABLE_CALCULUS_TESTING      "Enable the Calculus Unit Testing build"    ON)
option(ENABLE_DISCRETE_TESTING      "Enable the Discrete Unit Testing build"    ON)
option(ENABLE_GEOMETRY_TESTING      "Enable the Geometry Unit Testing build"    ON)
option(ENABLE_NUMBER_TESTING        "Enable the Number Unit Testing build"      ON)
option(ENABLE_STATISTICS_TESTING    "Enable the Statistics Unit Testing build"  ON)

option(ENABLE_ALGEBRA_EXAMPLES       "Enable the Algebra Examples build"     OFF)
option(ENABLE_CALCULUS_EXAMPLES      "Enable the Calculus Examples build"    OFF)
option(ENABLE_DISCRETE_EXAMPLES      "Enable the Discrete Examples build"    OFF)
option(ENABLE_GEOMETRY_EXAMPLES      "Enable the Geometry Examples build"    OFF)
option(ENABLE_NUMBER_EXAMPLES        "Enable the Number Examples build"      OFF)
option(ENABLE_STATISTICS_EXAMPLES    "Enable the Statistics Examples build"  OFF)

#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# PROJECT
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

set(LIBRARY_NAME "mathlaw")

#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# CMAKE MODULES
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

if (    ENABLE_ALGEBRA_TESTING OR ENABLE_CALCULUS_TESTING OR
        ENABLE_DISCRETE_TESTING OR ENABLE_GEOMETRY_TESTING OR
        ENABLE_NUMBER_TESTING OR ENABLE_STATISTICS_TESTING)
    include(CTest)
    find_package(Catch2 CONFIG REQUIRED)
endif()

#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# SUB DIRECTORIES
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

if (    ENABLE_ALGEBRA_TESTING OR ENABLE_CALCULUS_TESTING OR
        ENABLE_DISCRETE_TESTING OR ENABLE_GEOMETRY_TESTING OR
        ENABLE_NUMBER_TESTING OR ENABLE_STATISTICS_TESTING)
    add_subdirectory(tests)
endif()

if (    ENABLE_ALGEBRA_EXAMPLES OR ENABLE_CALCULUS_EXAMPLES OR
        ENABLE_DISCRETE_EXAMPLES OR ENABLE_GEOMETRY_EXAMPLES OR
        ENABLE_NUMBER_EXAMPLES OR ENABLE_STATISTICS_EXAMPLES)
    add_subdirectory(examples)
endif()

add_subdirectory(src)

#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# INSTALL
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

install(TARGETS ${LIBRARY_NAME}
        EXPORT ${LIBRARY_NAME}
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
        PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})



