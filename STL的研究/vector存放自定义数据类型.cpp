#include<vector>//用vector要加上
#include<iostream>
#include<string>
using namespace std;
//vector存放自定义数据类型
class Person
{
public:
	string m_Name;
	int m_Age;
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
};
void test01()
{
	vector<Person>v;
	Person p1("aaa", 1000);
	Person p2("bbb", 1999);
	Person p3("ccc", 1888);
	Person p4("ddd", 1550);
	Person p5("eee", 344);
	//向容器中添加数据
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	//遍历容器数据
	for (vector<Person>::iterator vv = v.begin(); vv != v.end(); vv++)//vv按照指针对待它   iterator按照迭代器对待它
	{
		cout << "姓名：" << (*vv).m_Name;
		cout << "年龄：" << (*vv).m_Age << endl;
		cout << "姓名：" << vv->m_Name << endl;
	}
}

//存放自定义类型指针
void test02()
{
	vector<Person*>v;
	Person p1("aaa", 1000);
	Person p2("bbb", 1999);
	Person p3("ccc", 1888);
	Person p4("ddd", 1550);
	Person p5("eee", 344);
	//向容器中添加数据
	v.push_back(&p1);//要加入取址符号
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);
	//遍历容器
	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名：" << (*it)->m_Name << endl;
		cout << "年龄：" << (*it)->m_Age << endl;
	}
}
int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}