add_executable(
        TestChartVy
        testChartVy.cpp
)

target_link_libraries(
        TestChartVy PRIVATE
        GTest::GTest
        Window
        GraphicsObjects
)

gtest_discover_tests(TestChartVy)
