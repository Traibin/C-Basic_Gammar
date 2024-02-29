#include<iostream>
#include<string>
#include<vector>
using namespace std;
/*
int find(const string&str,int pos =0)const;//查找str第一次出现位置从pos开始查找
int find(const char* s，int pos =0）const；//查找s第一次出现位置从pos开始查找
int find（const char* s，int pos，int n）const；//从pos位置查找s的前n个字符第一次位置
int find（const char c，int pos =0）const；//查找字符c第一次出现位置
int rfind（const string& str，int pos=npos）const；//查找str最后一次位置从pos开始查找
int rfind（const char* s，int pos =nops)const;//查找s最后一次出现位置从pos开始查找
int rfind (const char* s,int pos,int n)const;//从pos查找s的前n个字符最后一次位置
int rfind (const char c,int pos=0)const;//查找字符c最后一次出现位置
string& replace(int pos,int n,const string& str);//替换从pos开始n个字符为字符串str
string& replace(int pos,int n,const char* s);//替换从pos开始的n个字符为字符串s
*/
//string字符串查找和替换
//查找
void test01()
{
	//find
	string str1 = "abcdefghijkde";
	int pos = str1.find("de");
	//int find(const string&str,int pos =0)const;//查找str第一次出现位置从pos开始查找
	int pos1 = str1.find("df");//没有字符串返回-1
	cout << "pos=" << pos << endl;
	cout << "pos1=" << pos1 << endl;

	//rfind
	int pos2 = str1.rfind("de");
	cout << "pos2=" << pos2 << endl;
	//rfind和find区别
	//rfind从右往左  find从左往右
	//注意;不是数字右往左，字符串下标永远是左往右开始标
}
//替换
void test02()
{
	string str1 = "abcdefg";
	//从1号位置起三个字符，替换为“1111"
	str1.replace(1, 3, "1111");
	cout << "str1=" << str1 << endl;
}


int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}