#include <iostream>
#include <string>
using namespace std;

void beginStr(string &s, int start, int end){
	for (; start < end; start++, end--)
	{
		char tmp = s[start];
		s[start] = s[end];
		s[end] = tmp;
	}
}

int main1()
{
	string s;
	getline(cin, s);

	int length = s.length();

	//先将句子按字符反转
	beginStr(s, 0, length - 1); 

	int i = 0, j = 0;
	//再将句子的单词按字符反转
	for (i = 0; i<length; i++) 
	{
		if (s[i] == ' ') 
		{
			beginStr(s, j, i - 1); 
			j = i + 1;
		}
	}
	cout << s << endl;
	system("pause");
	return 0;
}
