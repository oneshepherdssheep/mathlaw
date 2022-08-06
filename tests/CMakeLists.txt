if (ENABLE_ALGEBRA_TESTING)
    add_subdirectory(algebra)
endif()

if(ENABLE_CALCULUS_TESTING)
    add_subdirectory(calculus)
endif()

if(ENABLE_DISCRETE_TESTING)
    add_subdirectory(discrete)
endif()

if(ENABLE_GEOMETRY_TESTING)
    add_subdirectory(geometry)
endif()

if(ENABLE_NUMBER_TESTING)
    add_subdirectory(number)
endif()

if(ENABLE_STATISTICS_TESTING)
    add_subdirectory(statistics)
endif()
