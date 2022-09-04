#include<gtest/gtest.h>
#include <iostream>
#include "../Example.hpp"
using namespace std;

TEST(ExampleTests, DemonstrateGTestMacros) {
    EXPECT_TRUE(true);

    Example example;
    EXPECT_EQ(example.getFive(), 5);
}