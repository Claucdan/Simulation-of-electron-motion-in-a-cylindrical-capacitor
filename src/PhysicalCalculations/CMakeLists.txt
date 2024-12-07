add_library(
        CalculationOfPotential
        potential.h
        potential.cpp
)

target_include_directories(
        CalculationOfPotential PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}"
)