//#include <iostream>
//#include <map>
//
//using namespace std;
//
///*
//* map�����ڹ���ʽ�������ײ�ṹ�Ƕ�����ʵ��
//* map���������������ظ���keyֵԪ��
//* multimap�������������ظ���keyԪ��
//* ���Ը���keyֵ���ٵ��ҵ�valueֵ
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
////Ϊ�պʹ�С
//void test01()
//{
//	//����map����
//	map<int, int>m;
//
//	//ʹ����������
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(4, 40));
//
//	printMap(m);
//
//	if (m.empty())
//	{
//		cout << "mΪ��" << endl;
//	}
//	else
//	{
//		cout << "m��Ϊ��" << endl;
//		cout << "m�Ĵ�СΪ��" << m.size() << endl;
//	}
//}
//
////����
//void test02()
//{
//	//����map����
//	map<int, int>m;
//
//	//ʹ����������
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(4, 40));
//	
//	//����map����
//	map<int, int>m1;
//
//	//ʹ����������
//	m1.insert(pair<int, int>(10, 100));
//	m1.insert(pair<int, int>(20, 200));
//	m1.insert(pair<int, int>(30, 300));
//	m1.insert(pair<int, int>(40, 400));
//	cout << "-----------------------" << endl;
//	cout << "����ǰ��" << endl;
//	printMap(m);
//	printMap(m1);
//
//	cout << "������" << endl;
//	m.swap(m1);
//	printMap(m);
//	printMap(m1);
//
//
//}
//
//int main()
//{
//	test02();
//}