//#include <iostream>
//#include <map>
//
//using namespace std;
//
///*
//* map是属于关联式容器，底层结构是二叉树实现
//* map不允许容器中有重复的key值元素
//* multimap允许容器中有重复的key元素
//* 可以根据key值快速地找到value值
//*/
//
//class MyComparee
//{
//public:
//	bool operator()(int v1, int v2)const//作为成员函数重载最好加上const
//	{
//		return v1 > v2;
//	}
//};
//
//void printMap(const map<int, int,MyComparee>& m)
//{
//	for (map<int, int,MyComparee>::const_iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << (*it).first << " " << "value = " << it->second << endl;
//	}
//	cout << endl;
//}
//
////map容器查找与统计
//void test01()
//{
//	//创建map容器
//	map<int, int,MyComparee>m;
//
//	//使用匿名对组
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(4, 40));
//
//	printMap(m);
//
//}
//
//
//
//int main()
//{
//	test01();
//}