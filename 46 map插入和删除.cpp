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
////插入和删除
//void test01()
//{
//	//创建map容器
//	map<int, int>m;
//
//	//使用匿名对组
//	m.insert(pair<int, int>(1, 10));
//	//第二种创造方式，无需虚入类型
//	m.insert(make_pair(2, 20));
//	//第三种，比较长
//	m.insert(map<int, int>::value_type(3, 30));
//	//第四种，利用中括号重载
//	m[4] = 40;
//
//	printMap(m);
//	//不建议这种，如果插错了，会自动补全value的值为0,不过可以使用[]来访问key值对应的value
//	//cout << m[5] << endl;
//	m.erase(m.begin());
//	printMap(m);
//	//按照键值进行删除
//	m.erase(3);
//	printMap(m);
//	//按照区间来进行删除
//	//m.erase(m.begin(), m.end());
//	m.clear();
//	printMap(m);
//}
//
//
//
//int main()
//{
//	test01();
//}