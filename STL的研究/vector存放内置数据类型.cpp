#include<iostream>
#include<string>
//vector�������������������
#include<vector>
#include<algorithm>//��׼�㷨ͷ�ļ�
using namespace std;
void myPrint(int val)
{
	cout << val << endl;;
}
void test01()
{
	//����һ��vector������������
	vector<int>v;               //vector<��������>������
	//�������в�������
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	//ͨ�����������������е�����
	vector<int>::iterator itBegin = v.begin();//��ʼ��������ָ��������һ��Ԫ��    iteraorΪ������  itBeginΪ��������
	vector<int>::iterator itEnd = v.end();//������������ָ�����������һ��Ԫ�ص���һ��λ��
	//��һ�ֱ�����ʽ
	cout << "��һ��" << endl;
	while (itBegin != itEnd)
	{
	
		cout << *itBegin << endl;
		itBegin++;
	}

	//�ڶ��ֱ�����ʽ
	cout << "�ڶ���" << endl;
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		
		cout << *it<<endl;
	}

	//�����ֱ��� ����STL�ṩ�����㷨
	cout << "������" << endl;
	for_each(v.begin(), v.end(), myPrint);//#include<algorithm>//��׼�㷨ͷ�ļ�
	//myPrint�����˺����ص����������忴stl���壩���Բ��ô���
}
int main()
{
	test01();

	system("pause");
	return 0;
}
