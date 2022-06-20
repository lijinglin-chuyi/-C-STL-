//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace	std;
//
//class Greater20
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 20;
//	}
//};
//
//void test01()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(30);
//	
//	int num = count_if(v.begin(), v.end(), Greater20());
//
//	cout << "寻找到20的数量为：" << num << endl;
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
//class AgeGreater20
//{
//public:
//	bool operator()(const Person& p)
//	{
//		if (p.m_Age > 20)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//};
//
//void test02()
//{
//	vector<Person>v;
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("bbb", 20);
//
//	Person pp("bbb", 20);
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	int num = count_if(v.begin(), v.end(), AgeGreater20());
//	cout << "找到大于20年龄的有：" << num << endl;
//}
//
//int main()
//{
//	test02();
//}