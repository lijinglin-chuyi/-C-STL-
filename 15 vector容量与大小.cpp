//#include <iostream>
//#include <vector>
//using namespace std;
//
////vector容量与大小操作
//
//void printVector(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1)
//
//	//判断容器是否为空
//	if (v1.empty())//为真代表容器为空
//	{
//		cout << "v1为空" << endl;
//	}
//	else
//	{
//		cout << "v1不为空" << endl;
//		cout << "v1的容量为:" << v1.capacity() << endl;
//		cout << "v1的大小为：" << v1.size() << endl;
//		
//	}
//	v1.resize(5);
//	printVector(v1);
//
//
//}
//
//int main()
//{
//	test01();
//}
