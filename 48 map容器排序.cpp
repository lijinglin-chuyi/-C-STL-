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
//class MyComparee
//{
//public:
//	bool operator()(int v1, int v2)const//��Ϊ��Ա����������ü���const
//	{
//		return v1 > v2;
//	}
//};
//
//void printMap(const map<int, int,MyComparee>& m)
//{
//	for (map<int, int,MyComparee>::const_iterator it = m.begin(); it != m.end(); it++)
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
//	map<int, int,MyComparee>m;
//
//	//ʹ����������
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(4, 40));
//
//	printMap(m);
//
//}
//
//
//
//int main()
//{
//	test01();
//}