#include <gtest/gtest.h>
#include <WindowGraphic.h>
#include <ChartForYx.h>

TEST(TestForChartOfYx, Test1){
    EXPECT_NO_THROW(graphicsObjects::ChartForYx());
}

TEST(TestForChartOfYx, Test2){
    graphics::Window window(0, 0, 0);
    window.Show(0);
    graphicsObjects::ChartForYx object;
    EXPECT_NO_THROW(window.DrawObject(&object));
}



int main(int argc, char* argv[]){
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}