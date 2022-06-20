//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
////常用遍历算法 transform
//
//class Transform
//{
//public:
//	int operator()(int v)
//	{
//		//return v;
//		return v+1000;//搬运期间可以做逻辑运算
//	}
//};
//
//
//class MyPrint
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
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	vector<int>vtarget;
//	vtarget.resize(v.size());//目标容器必须提前开辟空间，否则会报错
//	transform(v.begin(), v.end(), vtarget.begin(), Transform());
//	for_each(vtarget.begin(), vtarget.end(), MyPrint());
//	cout << endl;
//}
//
//int main()
//{
//	test01();
//}