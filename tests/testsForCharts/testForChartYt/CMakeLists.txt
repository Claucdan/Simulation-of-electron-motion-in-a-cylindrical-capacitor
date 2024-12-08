add_executable(
        TestChartYt
        testChartYt.cpp
)

target_link_libraries(
        TestChartYt PRIVATE
        GTest::GTest
        Window
        GraphicsObjects
)

gtest_discover_tests(TestChartYt)
