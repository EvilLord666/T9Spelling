//============================================================================

// Name        : T9Spelling.cpp
// Author      : Ushakov Michael
// Version     :
// Copyright   : Ushakov Michael aka EvilLord666
// Description : T9 Spelling Google Task (see http://code.google.com/codejam/contest/dashboard?c=351101#s=p2), Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <fstream>
#include "T9StringProcessor/T9SimpleStringProcessor.h"

#define PROCESSING_FILE_PATH "C-small-practice.in"
#define MAX_STRINGS_QUANTITY 100

int main()
{
	std::ifstream inputFileReader(PROCESSING_FILE_PATH);
	T9Processor::T9SimpleStringProcessor processor(T9Processor::T9AlhabetMapType::Latin);
	int numberOfStrings = 0;
	std::cout <<"input number of strings to processing (from 1 to 100)"<<std::endl;
	std::cin >> numberOfStrings;
	if(numberOfStrings > MAX_STRINGS_QUANTITY)
	{
		std::cout <<"Entered number of string is greater than 100, so it was truncated to 100"<<std::endl;
		numberOfStrings = MAX_STRINGS_QUANTITY;
	}
	std::string processingString;
	// reading header
	std::getline(inputFileReader, processingString);
	// reading body
	for (int n = 0; n < numberOfStrings; n++)
	{
		std::getline(inputFileReader, processingString);
	    std::string output = processor.Process(processingString);
	    std::cout << "Case #" << n + 1 << ": " << output << std::endl;
	}
	return 0;
}
