#include <stdio.h>
#include "gtest/gtest.h"
#pragma once

extern "C" {
#include "success.h"

}


extern int testVar;
extern float sort_Array[10];
extern int medianIndex;

TEST(Rangecheck, validrange) {
	sort_Array[10];
	sort();
	EXPECT_EQ(sort(), 0);

}

/*TEST(Rangecheck, Invalidrange) {
	sort();
	EXPECT_EQ(sort(), 1);

}*/

TEST(MedianCheck, validMedianIndex) {
	sort();
	EXPECT_EQ(medianIndex, 5);

}



