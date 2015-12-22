#include "main.h"

using namespace std;

template<typename T>
void split(vector<T> &strvec, const T test, const T sparator )
{
	T::size_type pos1, pos2;
	if(sparator.size() == 0)
	{
		strvec.push_back(test);
		return;
	}
	pos2 = test.find(sparator);
	pos1 = 0;        
	while (T::npos != pos2)
	{
		strvec.push_back(test.substr(pos1, pos2 - pos1));               
		pos1 = pos2 + 1;
		pos2 = test.find(sparator, pos1);
	}
	strvec.push_back(test.substr(pos1));

}


void main()
{
	morse mo;
	mo.init();
	mo.alphaList;

	string result;


	vector<string> inputList;
	string inList;
	cout<<"please input string to code or decode\n"
		<<"C is for code\n "
		<<"D is for decode\n";
	char inChoice;
	inChoice = getch();
	cout<<"you input:"<<inChoice<<endl;


	if('c' == inChoice || 'C' == inChoice)
	{
		cout << "please input string to code "<<endl;
		getline(cin, inList);
		split<string>(inputList, inList, " ");
		for(int i = 0; i < inputList.size(); ++i)
		{
			result += mo.code(inputList[i]);
			result += " || ";
		}
	}
	else if('d' == inChoice || 'D' ==inChoice)
	{	
		cout << "please input string to decode"<<endl;
		getline(cin, inList);
		split<string>(inputList, inList, " ");
		//mo.decode();
	}
	else
	{
		cout<<"error input"<<endl;
	}

	cout<< result << endl;
	system("pause");


}

