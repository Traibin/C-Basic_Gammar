#include<iostream>
using namespace std;
int main()
{
	////首先介绍输入一个字符查询ASCII码的语法
	//char a = '!';//' '中，可以换成别的字符
	//cout << a<<"的ASCII码为" << (int)a << endl;//关键语法
	//只能用char类型，不能用string
	//对输入的字符串大小写进行转化 为全部大写的字符串
	//方法一
	cout << "输入$结束程序" << endl;
	cout << "请输入您想转换的字符串" << endl;
	while (1)
	{
		//加while原因是字符串a是一个字符一个字符进行转换的
		//先进行a[0]然后继续循环到a[1]
		cout << "验证语句" << endl;
		char a;
		cin >> a;//可以为一个很长的字符串
		if ((a >= 65) && (a <= 90))//a和z可以换为对应的ASCII值97和122,相互转换
		{
			//若想大写转换为小写可加语句  a+=32;该语句也是  a=a+32
			//A=65  Z=90
			cout << a;
		}
		else if ((a >= 97) && (a <= 122))//A和Z可以换为对应的ASCII值65和90，相互转换
		{
			//a=97  z=122
			a-=32;
			cout << a;
		}
		if (a == '$')
		{
			break;
		}
	}
	//方法二
	//char a[20];
	//int i = 0;
	//cout << "请输入一串字符:\n";
	//cin >> a;
	//for (; a[i]; i++)
	//{
	//	if (a[i] >= 'a' && a[i] <= 'z')//a和z可以换为对应的ASCII值97和122
	//		a[i] -= 32;
	//	else if (a[i] >= 'A' && a[i] <= 'Z')//A和Z可以换为对应的ASCII值65和90
	//		a[i] += 32;
	//}
	//for (i = 0; a[i]; i++)
	//	cout << a[i];
	//cout << endl;
	system("pause");
	return 0;
}