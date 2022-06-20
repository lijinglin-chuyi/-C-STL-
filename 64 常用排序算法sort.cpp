//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace	std;
//
//class Greater20
//{
//public:
//	bool operator()(int v1, int v2)
//	{
//		return v1 > v2;
//	}
//};
//void myPrint(int val)
//{
//	cout << val << endl;
//}
//
//class MyPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << endl;
//	}
//};
//class mySort
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
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(50);
//	v.push_back(40);
//
//	sort(v.begin(), v.end());
//	for_each(v.begin(), v.end(), myPrint);
//	cout << "-------------" << endl;
//	//sort(v.begin(), v.end(), greater<int>());
//	sort(v.begin(), v.end(), mySort());
//	//for_each(v.begin(), v.end(), myPrint);
//	for_each(v.begin(), v.end(), MyPrint());
//}
//
//
//
//
//
//int main()
//{
//	test01();
//}