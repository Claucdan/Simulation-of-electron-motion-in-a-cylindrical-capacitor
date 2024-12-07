add_executable(
        TestForPotential
        testForMinimumPotential.cpp
)

target_link_libraries(
        TestForPotential PRIVATE
        GTest::GTest
        CalculationOfPotential
)

include(GoogleTest)
gtest_discover_tests(TestForPotential)