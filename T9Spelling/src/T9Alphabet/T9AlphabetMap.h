#ifndef T9_ALPHABET_MAP
#define T9_ALPHABET_MAP

#include <string>

namespace T9Processor
{
    class T9AlphabetMap
	{
	public:
    	virtual ~T9AlphabetMap(){}
	    virtual std::string GetT9String(const char& symbol) const = 0;
	private:
	    virtual void InitAlphabetMap() = 0;
	};
}

#endif
