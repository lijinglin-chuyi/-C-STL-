//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <ctime>
//using namespace	std;
//
////merge合并两组有序的容器到一个新的容器之中
//
//void myPrint(int val)
//{
//	cout << val << " ";
//}
//
//class MyPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//void test01()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(20);
//	v.push_back(40);
//	v.push_back(30);
//
//	cout << "替换前：" << endl;
//	for_each(v.begin(), v.end(), MyPrint());
//	cout << endl;
//	cout << "替换后：" << endl;
//	replace(v.begin(), v.end(), 20, 2000);
//	for_each(v.begin(), v.end(), MyPrint());
//
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