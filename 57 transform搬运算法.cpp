//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
////���ñ����㷨 transform
//
//class Transform
//{
//public:
//	int operator()(int v)
//	{
//		//return v;
//		return v+1000;//�����ڼ�������߼�����
//	}
//};
//
//
//class MyPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	vector<int>vtarget;
//	vtarget.resize(v.size());//Ŀ������������ǰ���ٿռ䣬����ᱨ��
//	transform(v.begin(), v.end(), vtarget.begin(), Transform());
//	for_each(vtarget.begin(), vtarget.end(), MyPrint());
//	cout << endl;
//}
//
//int main()
//{
//	test01();
//}