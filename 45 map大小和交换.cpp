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
//	for (map<int, int>::const_iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << (*it).first << " " << "value = " << it->second << endl;
//	}
//	cout << endl;
//}
//
////为空和大小
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
//	if (m.empty())
//	{
//		cout << "m为空" << endl;
//	}
//	else
//	{
//		cout << "m不为空" << endl;
//		cout << "m的大小为：" << m.size() << endl;
//	}
//}
//
////交换
//void test02()
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
//	//创建map容器
//	map<int, int>m1;
//
//	//使用匿名对组
//	m1.insert(pair<int, int>(10, 100));
//	m1.insert(pair<int, int>(20, 200));
//	m1.insert(pair<int, int>(30, 300));
//	m1.insert(pair<int, int>(40, 400));
//	cout << "-----------------------" << endl;
//	cout << "交换前：" << endl;
//	printMap(m);
//	printMap(m1);
//
//	cout << "交换后：" << endl;
//	m.swap(m1);
//	printMap(m);
//	printMap(m1);
//
//
//}
//
//int main()
//{
//	test02();
//}