//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace	std;
//
//class GreaterFive
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
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	auto it = find_if(v.begin(), v.end(), GreaterFive());
//	if (it!=v.end())
//	{
//		cout << "找到大于5的数字为：" << *it << endl;
//	}
//	else
//	{
//		cout << "没有找到" << endl;
//	}
//}
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	string m_Name;
//	int m_Age;
//};
//
//class Greater20
//{
//public:
//	bool operator()(const Person& p)
//	{
//		return p.m_Age > 20;
//	}
//};
//
//void test02()
//{
//	vector<Person>v;
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//
//	vector<Person>::iterator it = find_if(v.begin(), v.end(), Greater20());
//	if (it != v.end())
//	{
//		cout << "找到年龄大于20为" << it->m_Name << " " << it->m_Age << endl;
//	}
//	else
//	{
//		cout << "未找到年龄大于20的" << endl;
//	}
//}
//
//int main()
//{
//	test02();
//}