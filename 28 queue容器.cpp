//#include <iostream>
//#include <queue>
//using namespace std;
//
////queue��һ���Ƚ��ȳ���������ӵ�ж�ͷ�Ͷ�β��ֻ��һ�˽���һ�˳�
////ֻ�ж�ͷ�Ͷ�β��Ԫ�أ��������������
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
//	Person p1("Ѭ���", 30);
//	Person p2("����",300);
//	Person p3("������", 1000);
//	Person p4("��С��", 220);
//
//	q.push(p1);
//	q.push(p2);
//	q.push(p3);
//	q.push(p4);
//	cout << "���д�С��" << q.size() << endl;
//	//ֻҪ���в�Ϊ�գ��鿴��ͷ��β���ҳ���
//	while (!q.empty())
//	{
//		//�鿴��ͷ
//		cout << "��ͷ������" << q.front().m_Name << "���䣺" << q.front().m_Age << endl;
//		//�鿴��β
//		cout << "��β������" << q.back().m_Name << "���䣺" << q.back().m_Age << endl;
//		q.pop();
//	}
//	cout << "���д�С��" << q.size() << endl;
//}
//
//int main()
//{
//	test01();
//}