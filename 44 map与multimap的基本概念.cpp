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
//	for (map<int,int>::const_iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << (*it).first << " " << "value = " << it->second << endl;
//	}
//	cout << endl;
//}
//
////map���������븳ֵ
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
//	//��������
//	map<int, int>m2(m);
//	printMap(m2);
//
//	//��ֵ
//	map<int, int>m3;
//	m3 = m2;
//	printMap(m3);
//}
//
//int main()
//{
//	test01();
//}