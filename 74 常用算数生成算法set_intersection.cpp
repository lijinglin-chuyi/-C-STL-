//#include <iostream>
//#include <vector>
//#include <numeric>
//#include <algorithm>
//
//using namespace std;
//
//class myPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
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
//		v2.push_back(i + 5);
//	}
//	//��������Ŀ��������������ȥ������������С��һ��
//	vector<int>vTraget;
//	vTraget.resize(min(v1.size(), v2.size()));
//	//1.����������������
//	//2.���������������������С���������ٿռ�Ϊ��С�����Ĵ�С����
//	//3.Ŀ������������ǰ���ٿռ�
//	//4.��ʵ�ʽ���С�ڿ��ٿռ��ʱ�򣬺���ͻ����Ϊ0������set_intersection�᷵��һ�����������λ�ã�������ʱ��ʹ�����
//	auto itEnd = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTraget.begin());
//	for_each(vTraget.begin(), itEnd, myPrint());
//}
//
//int main()
//{
//	test01();
//}
