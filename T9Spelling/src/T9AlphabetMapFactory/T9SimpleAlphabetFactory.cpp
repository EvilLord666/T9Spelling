/*
 * T9SimpleAlphabetFactory.cpp
 *
 *  Created on: 26 марта 2016 г.
 *      Author: michael
 */
#include "T9SimpleAlphabetFactory.h"

namespace T9Processor
{
    std::shared_ptr<T9AlphabetMap> T9SimpleAlphabetFactory::Create(T9AlhabetMapType alphabetType)
    {
    	// simple factory : here we could construct only one type of alphabet
    	return std::shared_ptr<T9LatinMap>(new T9LatinMap());
    }
}
