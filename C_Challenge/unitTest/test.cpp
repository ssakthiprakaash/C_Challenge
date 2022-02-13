#include <stdio.h>
#include "gtest/gtest.h"
#pragma once

extern "C" {
#include "success.h"

}


extern int testVar;

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);

}

TEST(TestCaseName, TestName1) {
	int var;
	EXPECT_EQ(1, 1);
	EXPECT_TRUE(true);
	testVar = 5;
	var = success();
	EXPECT_EQ(var, testVar);
}


TEST(TestCaseName, TestName2) {
	int var;
	EXPECT_EQ(1, 1);
	EXPECT_TRUE(true);
	testVar = 7;
	var = success();
	EXPECT_EQ(var, 8);
}

