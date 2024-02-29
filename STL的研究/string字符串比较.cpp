#include<iostream>
#include<string>
using namespace std;
//字符串比较
//变量为字符串
//变量1.compare(变量2）
/*比较方式：
字符串比较是按字符的ASCII码进行比较
= 返回 0
> 返回 1
<  返回 -1*/
//主要用于比较两个字符串是否相等，判断谁大谁小的意义并不是很大
/*
函数原型
int compare(const string& s)const;//与字符串s比较
int compare(const char* s)const;//与字符串s比较
*/
void test01()
{
	string str1 = "hello";
	string str2 = "xello";
	if (str1.compare(str2) == 0)
	{
		cout << "str1=str2" << endl;
	}
	else if (str1.compare(str2) > 0)
	{
		cout << "str1>str2" << endl;
	}
	else
	{
		cout << "str1<str2" << endl;
	}
}

int main()
{
	test01();

	system("pause");
	return 0;
}