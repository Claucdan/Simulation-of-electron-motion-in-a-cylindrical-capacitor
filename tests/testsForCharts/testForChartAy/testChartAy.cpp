#include <gtest/gtest.h>
#include <WindowGraphic.h>
#include <ChartForAy.h>

TEST(TestForChartOfAy, Test1){
    EXPECT_NO_THROW(graphicsObjects::ChartForAy());
}

TEST(TestForChartOfAy, Test2){
    graphics::Window window(0, 0, 0);
    window.Show(0);
    graphicsObjects::ChartForAy object;
    EXPECT_NO_THROW(window.DrawObject(&object));
}



int main(int argc, char* argv[]){
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
