#include <gtest/gtest.h>
#include "../include/add.hpp"

TEST(HelloTest, BasicAssertions) {

    EXPECT_STRNE("hello", "world");

    EXPECT_EQ(1+2, 3);

}


TEST(AddTest, BasicAssertions) {

    EXPECT_EQ(add(1,2), 3);

}

