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

include(GoogleTest)
gtest_discover_tests(TestChartYt)
