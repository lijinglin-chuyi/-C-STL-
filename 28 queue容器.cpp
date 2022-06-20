//#include <iostream>
//#include <queue>
//using namespace std;
//
////queue是一种先进先出的容器，拥有队头和队尾，只能一端进，一端出
////只有队头和队尾的元素，不允许遍历操作
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
//void test01()
//{
//	queue<Person> q;
//	Person p1("熏悟空", 30);
//	Person p2("唐曾",300);
//	Person p3("陈树彬", 1000);
//	Person p4("刘小华", 220);
//
//	q.push(p1);
//	q.push(p2);
//	q.push(p3);
//	q.push(p4);
//	cout << "队列大小：" << q.size() << endl;
//	//只要队列不为空，查看队头队尾并且出队
//	while (!q.empty())
//	{
//		//查看队头
//		cout << "队头姓名：" << q.front().m_Name << "年龄：" << q.front().m_Age << endl;
//		//查看队尾
//		cout << "队尾姓名：" << q.back().m_Name << "年龄：" << q.back().m_Age << endl;
//		q.pop();
//	}
//	cout << "队列大小：" << q.size() << endl;
//}
//
//int main()
//{
//	test01();
//}