//#include <iostream>
//#include <deque>
//using namespace std;
//
///*
//* vector����ͷ�����ݵĲ������ɾ��Ч�ʵͣ���Ϊ��Ҫ�ƶ���������Խ��Ч��Խ��
//* deque��ͷ���Ĳ���ɾ���ٶȱ�vector��
//*/
////���캯��
//
//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		//*it = 100;
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	deque<int> d;
//	for (int i = 0; i < 10; i++)
//	{
//		d.push_back(i);
//	}
//	printDeque(d);
//
//	deque<int>d2(d.begin(), d.end());
//	printDeque(d2);
//
//	deque<int>d3(10, 100);
//	printDeque(d3);
//
//	deque<int>d4(d3);
//	printDeque(d4);
//}
//
//
//
//int main()
//{
//	test01();
//}