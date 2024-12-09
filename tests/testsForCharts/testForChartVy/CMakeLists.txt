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

include(GoogleTest)
gtest_discover_tests(TestChartVy)
