#include <gtest/gtest.h>
#include "../include/math.hpp"

TEST(HelloTest, BasicAssertions) {

    EXPECT_STRNE("hello", "world");

    EXPECT_EQ(1+2, 3);

}


TEST(AddTest, BasicAssertions) {

    EXPECT_EQ(add(1,2), 3);

}


TEST(MultTest, BasicAssertions) {

    EXPECT_EQ(mult(1,2), 2);

    EXPECT_EQ(mult(2,2), 4);
}

