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
////map����������ͳ��
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
//	map<int,int>::iterator pos = m.find(5);
//	if (pos != m.end())
//	{
//		cout << "���ҵ���Ԫ�� key = " << pos->first << "  value = " << pos->second << endl;
//	}
//	else
//	{
//		cout << "δ�ҵ�Ԫ��" << endl;
//	}
//
//	//ͳ��
//	int num = m.count(3);
//
//		//map����������ظ�key��Ԫ�أ�countͳ�ƶ��Խ��Ҫô��1Ҫô��0
//		cout << "num = " << num << endl;
//}
//
//
//
//int main()
//{
//	test01();
//}