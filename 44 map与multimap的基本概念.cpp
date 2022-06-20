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
//void printMap(const map<int, int>& m)
//{
//	for (map<int,int>::const_iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << (*it).first << " " << "value = " << it->second << endl;
//	}
//	cout << endl;
//}
//
////map容器构造与赋值
//void test01()
//{
//	//创建map容器
//	map<int, int>m;
//
//	//使用匿名对组
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(4, 40));
//
//	printMap(m);
//
//	//拷贝构造
//	map<int, int>m2(m);
//	printMap(m2);
//
//	//赋值
//	map<int, int>m3;
//	m3 = m2;
//	printMap(m3);
//}
//
//int main()
//{
//	test01();
//}