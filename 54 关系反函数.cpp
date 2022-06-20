//#include <iostream>
//#include <functional>
//#include <vector>
//#include <algorithm>
//using namespace std;
////使用内建函数对象必须包含此头文件
///*
//* STL内建了一些函数对象
//* 分类：
//* 算数仿函数
//* 关系仿函数
//* 逻辑仿函数
//*/
//
//class MyCompare
//{
//public:
//	bool operator()(int v1, int v2)
//	{
//		return v1 > v2;
//	}
//};
//
////greater 二元反函数，大于关系反函数
//void test01()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(20);
//	v.push_back(50);
//	for (auto it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << endl;
//	}
//	cout << "------------------" << endl;
//	sort(v.begin(), v.end(), MyCompare());
//	for (auto it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << endl;
//	}
//	//使用内建函数对象,匿名函数对象
//	sort(v.begin(), v.end(), greater<int>());
//	cout << "------------------" << endl;
//	for (auto it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << endl;
//	}
//}
//
//
//
//int main()
//{
//	test01();
//}