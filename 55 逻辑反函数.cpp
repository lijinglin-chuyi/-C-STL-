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
//	vector<bool>v;
//	v.push_back(true);
//	v.push_back(false);
//	v.push_back(true);
//	v.push_back(false);
//	v.push_back(true);
//	for (auto it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	//�����߼��ǽ�����v���˵�v2�У�����ִ��ȡ������
//	vector<bool>v2;
//	v2.resize(v.size());
//	transform(v.begin(), v.end(), v2.begin(),logical_not<bool>());
//	for (auto it = v2.begin(); it != v2.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//
//
//int main()
//{
//	test01();
//}