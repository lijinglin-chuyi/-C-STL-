//#include <iostream>
//#include <set>
//using namespace std;
//
//void printSet(const set<int>& s)
//{
//	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//class myCompare
//{
//public:
//	bool operator()(int v1, int v2)const
//	{
//		return v1 > v2;
//	}
//};
//
//void test01()
//{
//	set<int>s1;
//	s1.insert(10);
//	s1.insert(40);
//	s1.insert(20);
//	s1.insert(50);
//	s1.insert(30);
//
//	printSet(s1);
//
//	//指定排序规则从大到小，要在插数据之前告诉
//	set<int,myCompare>s2;
//	s2.insert(10);
//	s2.insert(40);
//	s2.insert(20);
//	s2.insert(50);
//	s2.insert(30);
//	for (set<int,myCompare>::iterator it = s2.begin(); it != s2.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//
//
//int main()
//{
//	test01();
//}