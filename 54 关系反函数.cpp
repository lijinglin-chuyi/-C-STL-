//#include <iostream>
//#include <functional>
//#include <vector>
//#include <algorithm>
//using namespace std;
////ʹ���ڽ�����������������ͷ�ļ�
///*
//* STL�ڽ���һЩ��������
//* ���ࣺ
//* �����º���
//* ��ϵ�º���
//* �߼��º���
//*/
//
//class MyCompare
//{
//public:
//	bool operator()(int v1, int v2)
//	{
//		return v1 > v2;
//	}
//};
//
////greater ��Ԫ�����������ڹ�ϵ������
//void test01()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(20);
//	v.push_back(50);
//	for (auto it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << endl;
//	}
//	cout << "------------------" << endl;
//	sort(v.begin(), v.end(), MyCompare());
//	for (auto it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << endl;
//	}
//	//ʹ���ڽ���������,������������
//	sort(v.begin(), v.end(), greater<int>());
//	cout << "------------------" << endl;
//	for (auto it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << endl;
//	}
//}
//
//
//
//int main()
//{
//	test01();
//}