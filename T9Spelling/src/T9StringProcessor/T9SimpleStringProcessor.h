#ifndef T9_SIMPLE_STRING_PROCESSOR
#define T9_SIMPLE_STRING_PROCESSOR

#include "../T9AlphabetMapFactory/T9SimpleAlphabetFactory.h"

namespace T9Processor
{
    class T9SimpleStringProcessor
	{
    public:
    	T9SimpleStringProcessor(const T9AlhabetMapType alphabetType);
    	~T9SimpleStringProcessor();
    	std::string Process (const std::string & processingString) const;
    private:
    	std::shared_ptr<T9AlphabetMap> _t9Alphabet;
	};
}

#endif
