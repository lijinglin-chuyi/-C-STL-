//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
///*
//* ����bool���͵ķ�������Ϊν��
//* ���operator()����һ����������ô����һԪν��
//* ���operator()����������������ô������Ժν��
//*/
//
////��Ԫν��
//class MyCompare
//{
//public:
//	bool operator()(int v1, int v2)
//	{
//		return v1 > v2;
//	}
//};
//
//void test01()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(40);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(50);
//
//	sort(v.begin(), v.end());
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << endl;
//	}
//
//	//ʹ�ú�������º����ı��㷨����,��������
//	sort(v.begin(), v.end(), MyCompare());
//	cout << "----------------" << endl;
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << endl;
//	}
//}
//
//int main()
//{
//	test01();
//}