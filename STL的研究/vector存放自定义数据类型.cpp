#include<vector>//��vectorҪ����
#include<iostream>
#include<string>
using namespace std;
//vector����Զ�����������
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
	//���������������
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	//������������
	for (vector<Person>::iterator vv = v.begin(); vv != v.end(); vv++)//vv����ָ��Դ���   iterator���յ������Դ���
	{
		cout << "������" << (*vv).m_Name;
		cout << "���䣺" << (*vv).m_Age << endl;
		cout << "������" << vv->m_Name << endl;
	}
}

//����Զ�������ָ��
void test02()
{
	vector<Person*>v;
	Person p1("aaa", 1000);
	Person p2("bbb", 1999);
	Person p3("ccc", 1888);
	Person p4("ddd", 1550);
	Person p5("eee", 344);
	//���������������
	v.push_back(&p1);//Ҫ����ȡַ����
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);
	//��������
	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "������" << (*it)->m_Name << endl;
		cout << "���䣺" << (*it)->m_Age << endl;
	}
}
int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}