/*
 * T9LatinMap.cpp
 *
 *  Created on: 26 марта 2016 г.
 *      Author: michael
 */
#include <algorithm>
#include <functional>
#include <iostream>
#include "T9LatinMap.h"
#include "T9LatinSymbolFind.h"

namespace T9Processor
{
    T9LatinMap::T9LatinMap()
        :_latinMap(std::map<std::string, std::string>())
    {
    	InitAlphabetMap();
    }

    T9LatinMap::~T9LatinMap()
    {

    }

    void T9LatinMap::InitAlphabetMap()
    {
         _latinMap.insert(std::pair<std::string, std::string>("abc", "2"));
         _latinMap.insert(std::pair<std::string, std::string>("def", "3"));
         _latinMap.insert(std::pair<std::string, std::string>("ghi", "4"));
         _latinMap.insert(std::pair<std::string, std::string>("jkl", "5"));
         _latinMap.insert(std::pair<std::string, std::string>("mno", "6"));
         _latinMap.insert(std::pair<std::string, std::string>("pqrs", "7"));
         _latinMap.insert(std::pair<std::string, std::string>("tuv", "8"));
         _latinMap.insert(std::pair<std::string, std::string>("wxyz", "9"));
         _latinMap.insert(std::pair<std::string, std::string>(" ", "0"));
    }

    std::string T9LatinMap::GetT9String(const char& symbol) const
    {
    	// to do: not optimal (should use lambda)
		auto result = std::find_if(_latinMap.begin(), _latinMap.end(), std::bind2nd(T9LatinSymbolFind(), symbol));
    	if(result == _latinMap.end())
    		throw ("Bad input symbol (expecting latin lowercase symbol)");
    	std::string output;
    	int appendTimes = result->first.find(symbol) + 1;
    	for(int repeat = 0; repeat < appendTimes; repeat++)
    	    output.append(result->second);
    	return output;
    }
}
