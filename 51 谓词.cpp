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
////一元谓词
//class GreateFive
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
//
//void test01()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	//查找容器是否有大于5的数字,此处创建了一个匿名函数对象
//	vector<int>::iterator it = find_if(v.begin(),v.end(),GreateFive());
//	if (it == v.end())
//	{
//		cout << "未找到" << endl;
//	}
//	else
//	{
//		cout << "找到大于5的数字为：" << *it << endl;
//	}
//}
//
//int main()
//{
//	test01();
//}