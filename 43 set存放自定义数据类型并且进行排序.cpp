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
//		cout << "������" << it->m_Name << "���䣺" << it->m_Age << endl;
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	//�Զ�������������Ҫָ������,���÷�������������������һ����
//	set<Person,comparePerson>s1;
//	Person p1("����", 24);
//	Person p2("����", 28);
//	Person p3("�ŷ�", 25);
//	Person p4("����", 21);
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