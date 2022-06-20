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
////map容器查找与统计
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
//	map<int,int>::iterator pos = m.find(5);
//	if (pos != m.end())
//	{
//		cout << "查找到了元素 key = " << pos->first << "  value = " << pos->second << endl;
//	}
//	else
//	{
//		cout << "未找到元素" << endl;
//	}
//
//	//统计
//	int num = m.count(3);
//
//		//map不允许插入重复key的元素，count统计而言结果要么是1要么是0
//		cout << "num = " << num << endl;
//}
//
//
//
//int main()
//{
//	test01();
//}