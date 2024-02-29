#include<iostream>
#include<string>
using namespace std;
//string求子串
/*
功能描述：
从字符串中获取想要的子串
函数原型
string substr（int pos=0,int n=npos) const;//返回有pos开始的n个字符组成的字符串
*/
void test01()
{
	string str = "abcdef";
	string subStr = str.substr(1, 3);
	cout << "subStr=" << subStr << endl;
}
void test02()
{
	string email = "traibin@sina.com";
	//从邮件地址 获取 用户名信息
	int pos = email.find("@");
	string usrName = email.substr(0, pos);
	cout << "usrName=" << usrName << endl;
}
int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}