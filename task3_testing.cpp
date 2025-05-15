#include <gtest/gtest.h>
#include "task3_Turing_Machine.cpp"

TEST(TuringTest, BasicCases) {
    EXPECT_FALSE(Turing_Machine("1100"));
    EXPECT_TRUE(Turing_Machine("0101"));
    EXPECT_FALSE(Turing_Machine("1111"));
    EXPECT_FALSE(Turing_Machine("01010101"));
    EXPECT_TRUE(Turing_Machine("00110011")); 
}
