#include <gtest/gtest.h>
#include <potential.h>
#include <iostream>

TEST(MinimalPotential, Tes1){
    EXPECT_NO_THROW(calculation::MinimumPotential(5.5f, 12, 4, 20));
}

TEST(MinimalPotential, Test2){
    EXPECT_NEAR(calculation::MinimumPotential(5.5f, 12, 4, 20), 9.609f,0.001f);
}

TEST(MinimalPotential, Test3){
    EXPECT_NEAR(calculation::MinimumPotential(1, 3, 9, 11), 15.225f,0.001f);
}

int main(int argc, char* argv[]){
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}