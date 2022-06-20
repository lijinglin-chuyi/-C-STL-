///*
//* 算法主要由头文件<algorithm><functional><numeric>组成
//* algorithm是所有STL头文件之中最大的一个，范围涉及到比较、交换、查找、遍历等操作、赋值、修改
//* numeric体积很小，只包括几个在序列上面进行简单数学运算的模板函数
//* functional定义了一些模板类，用于声明函数对象
//*/
//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//void print1(int val)
//{
//	cout << val << " ";
//}
//
//class print2
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//void test01()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	//普通函数
//	for_each(v.begin(),v.end(),print1);
//	cout << endl;
//	//仿函数，函数对象
//	for_each(v.begin(), v.end(), print2());
//}
//
//int main()
//{
//	test01();
//}