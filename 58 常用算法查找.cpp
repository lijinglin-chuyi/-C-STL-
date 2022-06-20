//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	auto it = find(v.begin(), v.end(), 5);
//	if (it != v.end())
//	{
//		cout << "查找到数值为：" << *it << endl;
//	}
//	else
//	{
//		cout << "未查找到数值" << endl;
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
//	bool operator==(const Person&p)
//	{
//		if (this->m_Age ==p.m_Age && this->m_Name == p.m_Name)
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
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	Person pp("bbb", 20);
//	auto it = find(v.begin(), v.end(), pp);
//	if (it!= v.end())
//	{
//		cout << "查找到姓名：" << it->m_Name << "年龄：" << it->m_Age << endl;
//	}
//	else
//	{
//		cout << "未查找到" << endl;
//	}
//
//}
//
//int main()
//{
//	test02();
//}