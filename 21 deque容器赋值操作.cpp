//#include <iostream>
//#include <deque>
//using namespace std;
//
//
//void printDeque(const deque<int>d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	deque<int>d;
//	for (int i = 0; i < 10; i++)
//	{
//		d.push_back(i);
//	}
//	printDeque(d);
//
//	//operator=¸³Öµ
//	deque<int> d2;
//	d2 = d;
//	printDeque(d2);
//
//	//assign¸³Öµ
//	deque<int>d3;
//	d3.assign(d2.begin(), d2.end());
//	printDeque(d3);
//
//	//n¸öm
//	deque<int>d4;
//	d4.assign(10, 100);
//	printDeque(d4);
//
//}
//
//int main()
//{
//	test01();
//}