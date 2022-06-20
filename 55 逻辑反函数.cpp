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
//	vector<bool>v;
//	v.push_back(true);
//	v.push_back(false);
//	v.push_back(true);
//	v.push_back(false);
//	v.push_back(true);
//	for (auto it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	//利用逻辑非将容器v搬运到v2中，并且执行取反操作
//	vector<bool>v2;
//	v2.resize(v.size());
//	transform(v.begin(), v.end(), v2.begin(),logical_not<bool>());
//	for (auto it = v2.begin(); it != v2.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//
//
//int main()
//{
//	test01();
//}