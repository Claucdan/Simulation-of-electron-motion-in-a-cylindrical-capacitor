add_executable(
        TestChartAy
        testChartAy.cpp
)

target_link_libraries(
        TestChartAy PRIVATE
        GTest::GTest
        Window
        GraphicsObjects
)

include(GoogleTest)
gtest_discover_tests(TestChartAy)
