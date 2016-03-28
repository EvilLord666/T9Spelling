#include <iostream>
#include "gtest/gtest.h"
#include "TestT9LatinMap.h"
#include "TestT9SimpleStringProcessor.h"

int main(int argc, char* argv[])
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
