//#include <iostream>
//#include <vector>
//#include <numeric>
//#include <algorithm>
//
//using namespace std;
//
//class myprint
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
//	vector<int>vtraget;
//	vtraget.resize(v1.size() + v2.size());
//	//1.����������������
//	//2.���������������������С���
//	//3.Ŀ������������ǰ���ٿռ�
//	//4.��ʵ�ʽ���С�ڿ��ٿռ��ʱ�򣬺���ͻ����Ϊ0������set_intersection�᷵��һ�����������λ�ã�������ʱ��ʹ�����
//	auto itend = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vtraget.begin());
//	for_each(vtraget.begin(), itend, myprint());
//}
//
//int main()
//{
//	test01();
//}
