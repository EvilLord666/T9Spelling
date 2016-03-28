#ifndef T9_SIMPLE_ALPHABET_FACTORY
#define T9_SIMPLE_ALPHABET_FACTORY


#include <memory>
#include "../T9Alphabet/T9LatinMap.h"

namespace T9Processor
{
    enum T9AlhabetMapType
    {
    	Latin = 1
    };

    class T9SimpleAlphabetFactory
    {
    public:
		static std::shared_ptr<T9AlphabetMap> Create(T9AlhabetMapType alphabetType);
    };
}

#endif
