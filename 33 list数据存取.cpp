//#include <iostream>
//#include <list>
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
//void test01()
//{
//	list<int>L1;
//	//尾插
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	//L1[0]，不可以使用[]访问list容器中的元素
//	//L1.at(),不可以用at方式访问list中的元素
//
//	//原因是list本质链表，不是使用连续线性空间存储数据，迭代器也是不支持随机访问的
//
//	cout << "第一个元素为：" << L1.front() << endl;
//	cout << "最后一个元素：" << L1.back() <<  endl;
//
//	//验证迭代器是不支持随机访问的
//	list<int>::iterator it = L1.begin();
//
//	it++;//支持双向
//	it--;//支持双向
//	//it =it + 1; //错误，不可以跳跃访问，即使是+1
//
//
//}
//
//int main()
//{
//	test01();
//}