//#include<iostream>
//#include<fstream>
//#include<string>
//using namespace std;
////文本文件  读文件
//void test()
//{
//	//1、包含头文件
//
//	//2、创建流对象
//	ifstream ifs;
//
//	//3、打开文件 并判断是否打开成功
//	ifs.open("test.txt", ios::in);
//	if (!ifs.is_open())//is_open用于判断是否打开
//	{
//		//路径写错就会报错
//		cout << "文件打开失败" << endl;
//		return;
//	}
//	//4、读数据
//	////第一种
//	//char buf[1024] = { 0 };
//	//while (ifs >> buf)
//	//{
//	//	cout << buf << endl;
//	//}
//	////第二种
//	///*char buf[1024] = { 0 };*/
//	//while (ifs.getline(buf, sizeof(buf)))
//	//{
//	//	cout << buf << endl;
//	//}
//	//第三种
//	string buff;
//	while (getline(ifs, buff))
//	{
//		cout << buff << endl;
//
//	}
//	////第四种
//	//char c;
//	//while ((c = ifs.get()) != EOF)//EOF  end of file 文件尾
//	//{
//	//	cout << c;
//	//}
//
//		//5、关闭文件
//		ifs.close();
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}