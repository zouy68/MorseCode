#include "code.h"
#include <algorithm>



string morse::code(string str)
{
	string result;
	if(str.size() == 0)
		return result;
	transform(str.begin(), str.end(), str.begin(), toupper);  
	vector<string> resultList;
	
	/*for(int i = 0; i < str.size(); ++i)
		resultList.push_back(alphaList.at(str[i]-'A'));
		
	for(int i = 0; i < resultList.size(); ++i)
		result += resultList[i]+" ";*/
	for(int i = 0; i < str.size(); ++i)
	{
		if(str[i]>='A' && str[i] <= 'Z')
			result += alphaList.at(str[i]-'A')+" ";
		else if(str[i]>='0' && str[i] <= '9')
			result += numList.at(str[i]-'0')+" ";
		else 
			continue;
	}

	return result;
}
string morse::decode(string str)
{
	string result;
	return result;
}
void morse::init()
{
	string tmpCharList[] = {
		".-","-...","-.-." ,"-.."					//a--d
		,".","..-.","--.","....",".."				//e--i
		,".---","-.-",".-..","--","-.","---"		//j--o
		,".--.","--.-",".-.","...","-"				//p--t
		,"..-","...-",".--","-..-","-.--","--.."	//u--z

	};

	size_t s_count=sizeof(tmpCharList)/sizeof(string);
	for(int i= 0; i < s_count; ++i )
		alphaList.push_back(tmpCharList[i]);

	string tmpNumList[] = {
		"-----",".----","..---","...--","....-"	//0-4
		,".....","-....","--...","---..","----."	//5-9
	};
	s_count=sizeof(tmpNumList)/sizeof(string);
	for(int i= 0; i < s_count; ++i )
		numList.push_back(tmpNumList[i]);

}