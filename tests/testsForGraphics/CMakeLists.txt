add_executable(
        TestForWindowGraphic
        testForWindowGraphic.cpp
)

target_link_libraries(
        TestForWindowGraphic PRIVATE
        GTest::GTest
        Window
        GraphicsObjects
)

include(GoogleTest)
gtest_discover_tests(TestForWindowGraphic)