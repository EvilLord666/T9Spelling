#include "gtest/gtest.h"
#include "T9StringProcessor/T9SimpleStringProcessor.h"

namespace T9SpellingTests
{
    void RunT9Processor(std::string processingString, std::string expectedResult);

    TEST(T9SimpleStringProcessor, TestProcessSuccessfully)
    {
        std::string testingString = "ibuiqcawfvhm";
        std::string expectingResult = "444228844477222 29333888446";
        RunT9Processor(testingString, expectingResult);
    }

    TEST(T9SimpleStringProcessor, TestProcessFails)
    {
        std::string testingString = "[\&$::";
        ASSERT_ANY_THROW(RunT9Processor(testingString, ""));
    }

    void RunT9Processor(std::string processingString, std::string expectedResult)
    {
    	T9Processor::T9SimpleStringProcessor processor(T9Processor::T9AlhabetMapType::Latin);
    	std::string actualResult = processor.Process(processingString);
    	ASSERT_STREQ(expectedResult.c_str(), actualResult.c_str());
    }
}
