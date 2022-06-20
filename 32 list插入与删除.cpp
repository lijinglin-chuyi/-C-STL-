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
//	//尾插
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//
//	//头插
//	L1.push_front(100);
//	L1.push_front(200);
//	L1.push_front(300);
//
//	printList(L1);
//
//	//尾删
//	L1.pop_back();
//	printList(L1);
//	//头删
//	L1.pop_front();
//	printList(L1);
//
//	//insert
//	list<int>::iterator it = L1.begin();
//	L1.insert(++it, 1000);
//	//200 1000 100 10 20
//	printList(L1);
//
//	//删除
//	it = L1.begin();
//	L1.erase(it);
//	//1000 100 10 20
//	printList(L1);
//
//	//按照值的方式移除,删除容器中所有匹配的值
//	L1.push_back(10000);
//	L1.push_back(10000);
//	printList(L1);
//	L1.remove(10000);
//	printList(L1);
//
//	//清空
//	L1.clear();
//	printList(L1);
//
//
//
//
//
//}
//
//int main()
//{
//	test01();
//}