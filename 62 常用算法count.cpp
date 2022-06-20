//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace	std;
//
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
//	int num = count(v.begin(), v.end(), 30);
//	cout << "ÕÒµ½" << num << "¸ö30" << endl;
//
//
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
//	bool operator==(const Person& p)
//	{
//		if (this->m_Age == p.m_Age && this->m_Name == p.m_Name)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//	string m_Name;
//	int m_Age;
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
//	int num = count(v.begin(), v.end(), pp);
//}
//
//int main()
//{
//	test01();
//}