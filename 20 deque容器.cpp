//#include <iostream>
//#include <deque>
//using namespace std;
//
///*
//* vector对于头部数据的插入或者删除效率低，因为需要移动，数据量越大，效率越低
//* deque对头部的插入删除速度比vector快
//*/
////构造函数
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