#ifndef T9_LATIN_SYMBOL_FIND
#define T9_LATIN_SYMBOL_FIND

#include <map>
#include <functional>

namespace T9Processor
{
    class T9LatinSymbolFind : public std::binary_function<std::pair<std::string, std::string>, const char &, bool>
	{
	public:
    	bool operator()(const std::pair<std::string, std::string>& item, const char& searchingSymbol) const
    	{
            return item.first.find(searchingSymbol) != std::string::npos;
    	}
	};
}

#endif
