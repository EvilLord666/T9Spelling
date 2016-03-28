#include <memory>
#include "gtest/gtest.h"
#include "T9AlphabetMapFactory/T9SimpleAlphabetFactory.h"

// test for getting digits from specific group
namespace T9SpellingTests
{
    void RunT9LatinMapTest(const std::string& expectedResult, const char& symbol);

    TEST(T9LatinMap, TestGetT9StringForKey2Successfully)
	{
    	RunT9LatinMapTest("222", 'c');
	}

    TEST(T9LatinMap, TestGetT9StringForKey3Successfully)
    {
    	RunT9LatinMapTest("33", 'e');
	}

    TEST(T9LatinMap, TestGetT9StringForKey4Successfully)
    {
    	RunT9LatinMapTest("4", 'g');
	}

    TEST(T9LatinMap, TestGetT9StringForKey5Successfully)
    {
    	RunT9LatinMapTest("55", 'k');
	}

    TEST(T9LatinMap, TestGetT9StringForKey6Successfully)
    {
    	RunT9LatinMapTest("666", 'o');
	}

    TEST(T9LatinMap, TestGetT9StringForKey7Successfully)
    {
    	RunT9LatinMapTest("7777", 's');
	}

    TEST(T9LatinMap, TestGetT9StringForKey8Successfully)
    {
    	RunT9LatinMapTest("8", 't');
	}

    TEST(T9LatinMap, TestGetT9StringForKey9Successfully)
    {
    	RunT9LatinMapTest("9999", 'z');
	}

    TEST(T9LatinMap, TestGetT9StringForKey0Successfully)
    {
    	RunT9LatinMapTest("0", ' ');
	}

    TEST(T9LatinMap, TestGetT9StringFails)
    {
    	ASSERT_ANY_THROW(RunT9LatinMapTest("", '['));
	}

    void RunT9LatinMapTest(const std::string& expectedResult, const char& symbol)
    {
    	std::shared_ptr<T9Processor::T9AlphabetMap> t9LatinMap = T9Processor::T9SimpleAlphabetFactory::Create(T9Processor::T9AlhabetMapType::Latin);
    	std::string actualResult = t9LatinMap.get()->GetT9String(symbol);
    	ASSERT_STREQ(expectedResult.c_str(), actualResult.c_str());
        t9LatinMap.reset();
    }
}
