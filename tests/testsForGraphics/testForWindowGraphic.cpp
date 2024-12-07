#include <gtest/gtest.h>
#include <WindowGraphic.h>

TEST(WindowGraphics, Test1){
    EXPECT_NO_THROW(graphics::Window((HINSTANCE)0,(HINSTANCE)0,(LPSTR)0));
}

TEST(WindowGraphics, Test2){
    graphics::Window window(0,0,0);

    EXPECT_EQ(window.IsShowed(), false);
}

TEST(WindowGraphics, Test3){
    graphics::Window window(0,0,0);

    EXPECT_NO_THROW(window.Show(0));
}

TEST(WindowGraphics, Test4){
    graphics::Window window(0, 0, 0);
    window.Show(0);

    EXPECT_EQ(window.IsShowed(), true);
}

TEST(WindowGraphics, Test5){
    graphics::Window window(0, 0, 0);
    window.Show(1);

    EXPECT_EQ(window.IsShowed(), true);
}

TEST(WindowGraphics, Test6){
    graphics::Window window(0, 0, 0);
    window.Show(0);

    EXPECT_NO_THROW(window.Stop());
}

TEST(WindowGraphics, Test7){
    graphics::Window window(0, 0, 0);
    window.Show(1);

    EXPECT_NO_THROW(window.Stop());
}

TEST(WindowGraphics, Tes8){
    graphics::Window window(0, 0, 0);
    window.Show(0);
    window.Stop();

    EXPECT_EQ(window.IsShowed(), false);
}

TEST(WindowGraphics, Test9){
    graphics::Window window(0, 0, 0);
    window.Show(1);
    window.Stop();

    EXPECT_EQ(window.IsShowed(), false);
}


int main(int argc, char* argv[]){
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}