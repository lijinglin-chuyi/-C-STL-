///*
//* 函数对象是一个类，也叫仿函数
//* 函数对象在使用时，可以像普通函数那样使用，也可以有参数，也可以有返回值
//* 函数对象可以有自己的属性
//* 函数对象可以
//*/
//#include <iostream>
//using namespace std;
//
//class MyAdd
//{
//public:
//	int operator()(int v1,int v2)
//	{
//		return v1 + v2;
//	}
//};
//
////函数对象在使用时，可以像普通函数那样调用，也可以有参数，也可以有返回值
//void test01()
//{
//	MyAdd myAdd;
//	cout << myAdd(10,10) << endl;
//}
//
////函数对象超出普通函数的概念，函数对象可以有自己的状态
//class MyPrint
//{
//public:
//	MyPrint()
//	{
//		this->count = 0;
//	}
//	void operator()(string test)
//	{
//		cout << test << endl;
//		this->count++;
//	}
//	int count;//内部自己的状态
//};
//
//
//
//void test02()
//{
//	MyPrint	myPrint;
//	myPrint("hello world");
//	myPrint("hello world");
//	myPrint("hello world");
//	cout << "myPrint调用的次数为：" << myPrint.count << endl;
//}
//
//void doPrint(MyPrint& mp, string test)
//{
//	mp(test);
//}
//
////3.函数对象可以作为参数传递
//void test03()
//{
//	MyPrint myPrint;
//	doPrint(myPrint,"Hello C++");
//}
//
//int main()
//{
//	test03();
//}