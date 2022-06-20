//#include <iostream>
//#include <list>
//using namespace std;
//
//
///*
//* 链表优点：
//* 1.可以对任意位置进行快速插入或删除元素
//* 2.缺点是容器遍历速度没有数组快，占用空间比较大
//* 3.采用动态存储分配，不会造成内存浪费和溢出
//* 4.时间和空间复杂度比较高
//* 5.list有一个重要的性质，插入操作和删除操作都不会造成原有list迭代器的失效，这在vector是不成立的
//*/
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
//	list<int> L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//	L1.push_back(50);
//
//	printList(L1);
//
//	list<int>L2(L1.begin(), L1.end());
//	printList(L2);
//
//	list<int>L3(L2);
//	printList(L3);
//
//	list<int>L4(10, 1000);
//	printList(L4);
//}
//
//int main()
//{
//	test01();
//}