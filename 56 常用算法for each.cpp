///*
//* �㷨��Ҫ��ͷ�ļ�<algorithm><functional><numeric>���
//* algorithm������STLͷ�ļ�֮������һ������Χ�漰���Ƚϡ����������ҡ������Ȳ�������ֵ���޸�
//* numeric�����С��ֻ��������������������м���ѧ�����ģ�庯��
//* functional������һЩģ���࣬����������������
//*/
//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//void print1(int val)
//{
//	cout << val << " ";
//}
//
//class print2
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
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	//��ͨ����
//	for_each(v.begin(),v.end(),print1);
//	cout << endl;
//	//�º�������������
//	for_each(v.begin(), v.end(), print2());
//}
//
//int main()
//{
//	test01();
//}