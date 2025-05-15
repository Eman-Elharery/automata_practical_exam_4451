#include <gtest/gtest.h>
#include "task2_PDA.cpp"

TEST(AcceptedTest, BasicCases) {
    EXPECT_FALSE(accepted("1100"));
    EXPECT_TRUE(accepted("101"));
    EXPECT_FALSE(accepted("1111"));
    EXPECT_FALSE(accepted("110111"));
    EXPECT_TRUE(accepted("01010"));
}


