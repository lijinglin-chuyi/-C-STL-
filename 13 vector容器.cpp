//#include <iostream>
//#include <vector>
//using namespace std;
//
////vector为动态数组
////动态扩展，不是在原空间之后续借新空间，而是寻找更大的内存空间，然后将源数据拷贝至新空间，释放原空间
//
//void printVector(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
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
//	printVector(v1);
//	vector<int> v2(v1.begin(), v1.end());
//	printVector(v2);
//
//	vector<int> v3(10, 100);
//	printVector(v3);
//
//	vector<int> v4(v3);
//	printVector(v4);
//}
//
//
//
//int main()
//{
//	test01();
//}