///*
//* ����������һ���࣬Ҳ�зº���
//* ����������ʹ��ʱ����������ͨ��������ʹ�ã�Ҳ�����в�����Ҳ�����з���ֵ
//* ��������������Լ�������
//* �����������
//*/
//#include <iostream>
//using namespace std;
//
//class MyAdd
//{
//public:
//	int operator()(int v1,int v2)
//	{
//		return v1 + v2;
//	}
//};
//
////����������ʹ��ʱ����������ͨ�����������ã�Ҳ�����в�����Ҳ�����з���ֵ
//void test01()
//{
//	MyAdd myAdd;
//	cout << myAdd(10,10) << endl;
//}
//
////�������󳬳���ͨ�����ĸ����������������Լ���״̬
//class MyPrint
//{
//public:
//	MyPrint()
//	{
//		this->count = 0;
//	}
//	void operator()(string test)
//	{
//		cout << test << endl;
//		this->count++;
//	}
//	int count;//�ڲ��Լ���״̬
//};
//
//
//
//void test02()
//{
//	MyPrint	myPrint;
//	myPrint("hello world");
//	myPrint("hello world");
//	myPrint("hello world");
//	cout << "myPrint���õĴ���Ϊ��" << myPrint.count << endl;
//}
//
//void doPrint(MyPrint& mp, string test)
//{
//	mp(test);
//}
//
////3.�������������Ϊ��������
//void test03()
//{
//	MyPrint myPrint;
//	doPrint(myPrint,"Hello C++");
//}
//
//int main()
//{
//	test03();
//}