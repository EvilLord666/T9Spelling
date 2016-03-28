#ifndef T9_LATIN_MAP
#define T9_LATIN_MAP

#include <map>
#include "T9AlphabetMap.h"

namespace T9Processor
{
    class T9LatinMap: public T9AlphabetMap
    {
    public:
    	T9LatinMap();
    	~T9LatinMap();
    	std::string GetT9String(const char& symbol) const;
    private:
    	void InitAlphabetMap();
    private:
    	std::map<std::string, std::string> _latinMap;
    };
}

#endif
