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
	//mo.init();
	while(1)
	{
		vector<string> inputList;
		string inList;
		cout<<"please input code to decode or decode\n"
			<<"C is for code\n"
			<<"D is for decode"
			<<endl;
		char inChoice;
		inChoice = getch();
		if('c' == inChoice || 'C' == inChoice)
		{
			cout << "please input \n"<<endl;
			getline(cin, inList);
			split<string>(inputList, inList, " ");
			getch();
			//mo.code();
		}
		else if('d' == inChoice || 'D' ==inChoice)
		{
			//
		}
		else
		{
			cout<<"error input"<<endl;
		}

	}
	getch();
}

