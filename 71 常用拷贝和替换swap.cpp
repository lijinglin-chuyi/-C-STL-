//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <ctime>
//using namespace	std;
//
////merge�ϲ����������������һ���µ�����֮��
//
//void myPrint(int val)
//{
//	cout << val << " ";
//}
//
//class MyPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
////ν��
//class greater30
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 30;
//	}
//};
//
//void test01()
//{
//	vector<int>v1;
//	vector<int>v2;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 100);
//	}
//	cout << "����ǰ��" << endl;
//	for_each(v1.begin(), v1.end(), myPrint);
//	cout << endl;
//	for_each(v2.begin(), v2.end(), myPrint);
//	cout << endl;
//	swap(v1, v2);
//	cout << "������" << endl;
//	cout << "-----------------------" << endl;
//	for_each(v1.begin(), v1.end(), myPrint);
//	cout << endl;
//	for_each(v2.begin(), v2.end(), myPrint);
//	cout << endl;
//}
//
//
//
//
//
//int main()
//{
//	test01();
//}