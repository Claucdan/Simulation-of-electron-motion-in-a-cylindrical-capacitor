#include <gtest/gtest.h>
#include <WindowGraphic.h>
#include <ChartForYt.h>

TEST(TestForChartOfYt, Test1){
    EXPECT_NO_THROW(graphicsObjects::ChartForYt());
}

TEST(TestForChartOfYt, Test2){
    graphics::Window window(0, 0, 0);
    window.Show(0);
    graphicsObjects::ChartForYt object;
    EXPECT_NO_THROW(window.DrawObject(&object));
}



int main(int argc, char* argv[]){
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
