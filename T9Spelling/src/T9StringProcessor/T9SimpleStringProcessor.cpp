#include "T9SimpleStringProcessor.h"

namespace T9Processor
{
    T9SimpleStringProcessor::T9SimpleStringProcessor(const T9AlhabetMapType alphabetType)
        :_t9Alphabet(T9SimpleAlphabetFactory::Create(T9AlhabetMapType::Latin))
    {
    }

    T9SimpleStringProcessor::~T9SimpleStringProcessor()
    {
        _t9Alphabet.reset();
    }

    std::string T9SimpleStringProcessor::Process (const std::string & processingString) const
    {
    	if(processingString.empty())
    	    return "";
    	std::string resultString;
    	for (unsigned int index = 0; index < processingString.length(); index++)
    	{
    		std::string processedSymbolsString = _t9Alphabet.get()->GetT9String(processingString[index]);
    		if(resultString.back() == processedSymbolsString.back())
    			resultString.append(" ");
            resultString.append(_t9Alphabet.get()->GetT9String(processingString[index]));
    	}
    	return resultString;
    }
}
