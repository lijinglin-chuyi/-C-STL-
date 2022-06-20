//#include <iostream>
//#include <set>
//using namespace std;
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
//class comparePerson
//{
//public:
//	bool operator()(const Person& p1, const Person& p2) const
//	{
//
//
//		return p1.m_Age > p2.m_Age;
//
//
//	}
//};
//
//void printSet(const set<Person, comparePerson>& s)
//{
//	for (set<Person, comparePerson>::const_iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << "姓名：" << it->m_Name << "年龄：" << it->m_Age << endl;
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	//自定义数据类型需要指定规则,利用反函数，反函数本质是一个类
//	set<Person,comparePerson>s1;
//	Person p1("刘备", 24);
//	Person p2("关羽", 28);
//	Person p3("张飞", 25);
//	Person p4("赵云", 21);
//	s1.insert(p1);
//	s1.insert(p2);
//	s1.insert(p3);
//	s1.insert(p4);
//
//	printSet(s1);
//
//
//
//}
//
//
//
//int main()
//{
//	test01();
//}