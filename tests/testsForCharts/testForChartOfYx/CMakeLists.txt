add_executable(
        TestForChartYx
        testChartYx.cpp
)

target_link_libraries(
        TestForChartYx PRIVATE
        GTest::GTest
        Window
        GraphicsObjects
)

gtest_discover_tests(TestForChartYx)