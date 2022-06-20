//#include <iostream>
//#include <list>
//
//using namespace std;
//
//void printList(const list<int>& L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	list<int>L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//	L1.push_back(50);
//
//	printList(L1);
//	//判断容器是否为空
//	if (L1.empty())
//	{
//		cout << "L1为空" << endl;
//	}
//	else
//	{
//		cout << "L1不为空" << endl;
//		cout << "L1的元素个数为：" << L1.size() << endl;
//	}
//	L1.resize(10);
//	printList(L1);
//	L1.resize(20, 10000);
//	printList(L1);
//	L1.resize(4);
//	printList(L1);
//
//
//}
//
//int main()
//{
//	test01();
//}