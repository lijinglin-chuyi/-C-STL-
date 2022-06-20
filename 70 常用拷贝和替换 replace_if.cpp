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
////谓词
//class greater30
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 30;
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
//	//打印
//	for_each(v.begin(), v.end(), myPrint);
//	//替换
//	cout << "替换后：" << endl << "-----------------------" << endl;
//	replace_if(v.begin(), v.end(), greater30(), 3000);
//	for_each(v.begin(), v.end(), MyPrint());
//	cout << endl;
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