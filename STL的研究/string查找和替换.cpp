#include<iostream>
#include<string>
#include<vector>
using namespace std;
/*
int find(const string&str,int pos =0)const;//����str��һ�γ���λ�ô�pos��ʼ����
int find(const char* s��int pos =0��const��//����s��һ�γ���λ�ô�pos��ʼ����
int find��const char* s��int pos��int n��const��//��posλ�ò���s��ǰn���ַ���һ��λ��
int find��const char c��int pos =0��const��//�����ַ�c��һ�γ���λ��
int rfind��const string& str��int pos=npos��const��//����str���һ��λ�ô�pos��ʼ����
int rfind��const char* s��int pos =nops)const;//����s���һ�γ���λ�ô�pos��ʼ����
int rfind (const char* s,int pos,int n)const;//��pos����s��ǰn���ַ����һ��λ��
int rfind (const char c,int pos=0)const;//�����ַ�c���һ�γ���λ��
string& replace(int pos,int n,const string& str);//�滻��pos��ʼn���ַ�Ϊ�ַ���str
string& replace(int pos,int n,const char* s);//�滻��pos��ʼ��n���ַ�Ϊ�ַ���s
*/
//string�ַ������Һ��滻
//����
void test01()
{
	//find
	string str1 = "abcdefghijkde";
	int pos = str1.find("de");
	//int find(const string&str,int pos =0)const;//����str��һ�γ���λ�ô�pos��ʼ����
	int pos1 = str1.find("df");//û���ַ�������-1
	cout << "pos=" << pos << endl;
	cout << "pos1=" << pos1 << endl;

	//rfind
	int pos2 = str1.rfind("de");
	cout << "pos2=" << pos2 << endl;
	//rfind��find����
	//rfind��������  find��������
	//ע��;���������������ַ����±���Զ�������ҿ�ʼ��
}
//�滻
void test02()
{
	string str1 = "abcdefg";
	//��1��λ���������ַ����滻Ϊ��1111"
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