//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
///*
//* 返回bool类型的反函数称为谓词
//* 如果operator()接受一个参数，那么叫做一元谓词
//* 如果operator()接收两个参数，那么叫做二院谓词
//*/
//
////二元谓词
//class MyCompare
//{
//public:
//	bool operator()(int v1, int v2)
//	{
//		return v1 > v2;
//	}
//};
//
//void test01()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(40);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(50);
//
//	sort(v.begin(), v.end());
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << endl;
//	}
//
//	//使用函数对象仿函数改变算法策略,降序排列
//	sort(v.begin(), v.end(), MyCompare());
//	cout << "----------------" << endl;
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << endl;
//	}
//}
//
//int main()
//{
//	test01();
//}