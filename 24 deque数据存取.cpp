//#include <iostream>
//#include <deque>
//
//using namespace std;
//
//void test01()
//{
//	deque<int> d;
//
//	d.push_back(10);
//	d.push_back(20);
//	d.push_back(30);
//	d.push_back(100);
//	d.push_back(200);
//	d.push_back(300);
//
//	//通过[]方式访问元素
//	//300,200,100,10,20,30
//	for (int i = 0; i < d.size(); i++)
//	{
//		cout << d[i] << " ";
//	}
//	cout << endl;
//
//	//通过at的方式进行访问
//	for (int i = 0; i < d.size(); i++)
//	{
//		cout << d.at(i) << " ";
//	}
//	cout << endl;
//
//	cout << "第一个元素为：" << d.front() << endl;
//	cout << "最后一个元素为:" << d.back() << endl;
//}
//
//int main()
//{
//	test01();
//}