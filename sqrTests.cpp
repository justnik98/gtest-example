//
// Created by justnik on 06.03.2021.
//

#include "gtest/gtest.h"
#include "sqr.cpp"

TEST(Sqr, PositiveInput) {
    int a = 7;
    ASSERT_EQ(sqr(a), 49);
}

TEST(Sqr, NegativeInput) {
    int a = -5;
    ASSERT_EQ(sqr(a), 25);
}
