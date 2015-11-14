#ifndef _CODE_H_
#define _CODE_H_

#include <iostream>
#include <string>
#include <vector>
#include <map>

class morse
{
public:
	std::string code(std::string str);
	void decode();
	void init();

private:
	std::vector<std::string> alphabeta;
};



#endif