#include<iostream>
#include<string>
using namespace std;
//string�ַ���ƴ��
/*
string& operator+=��const char* str��//����+=������
string& operator+=��const char c��//����+=������ ׷��һ���ַ�
string& operator+=��const string& str)//����+=������
string& append��const char *s��//���ַ���s���ӵ���ǰ�ַ�����β
string& append��const char *s��int n��//���ַ�����ǰn���ַ����ӵ���ǰ�ַ�����β
string& append��const string &s��//ͬoperator+=��const string& str��
string& append��const string &s��int pos��int n��//�ַ���s�д�pos��ʼ��n���ַ������ӵ��ַ�����β
*/
void test01()
{
	string str1 = "��";
	str1 += "������Ϸ";
	cout << "str1=" << str1 << endl;

	str1 += ':';//׷��һ���ַ�
	cout << "str1=" << str1 << endl;

	string str2 = "LOL DNF";
	str1 += str2;
	cout << "str1=" << str1 << endl;


	string str3 = "I ";
	str3.append("love");
	cout << "str3=" << str3 << endl;


	str3.append("game abcd", 4);
	cout << "str3=" << str3 << endl;

	str3.append(str2);
	cout << "str3=" << str3 << endl;

	//str3.append(str2, 0, 3);//ֻ��ȡ��LOL
	str3.append(str2, 4, 3);//ֻ��ȡ��DNF������2 ���ĸ�λ�ÿ�ʼ��ȡ������3 ��ȡ�ַ�����  �׸��ַ�Ϊ0���ո���һ���ַ�
	cout << "str3=" << str3 << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}