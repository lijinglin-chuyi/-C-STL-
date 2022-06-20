//#include <iostream>
//#include <list>
//#include <algorithm>
//
////list迭代器是双向的，只能前移后移
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
//bool myCompare(int v1, int v2)
//{
//	return v1 > v2;
//}
//
//void test01()
//{
//	list<int>L1;
//	//尾插
//	L1.push_back(20);
//	L1.push_back(10);
//	L1.push_back(50);
//	L1.push_back(40);
//	L1.push_back(30);
//	cout << "反转前：" << endl;
//	printList(L1);
//
//	L1.reverse();
//	cout << "反转后：" << endl;
//	printList(L1);
//
//	//排序
//	cout << "排序前：" << endl;
//	printList(L1);
//
//	//所有不支持随机访问迭代器的容器，不可以用标准算法
//	//不支持随机访问迭代器的容器，内部会提供一些对应的算法
//	//sort(L1.begin(), L1.end());
//	L1.sort();//升序
//	cout << "排序后：" << endl;
//	printList(L1);
//	L1.sort(myCompare);
//	printList(L1);
//}
//
//int main()
//{
//	test01();
//}