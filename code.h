#ifndef _CODE_H_
#define _CODE_H_

#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

class morse
{
public:
	vector<string> alphaList;
	vector<string>numList;

	void init();

	string code(string str);
	string decode(string str);


private:
	std::vector<std::string> alphabeta;
};



#endif