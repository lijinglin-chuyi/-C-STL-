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
//void test01()
//{
//	set<int>s1;
//	pair<set<int>::iterator,bool> ret = s1.insert(10);
//
//
//	if (ret.second)
//	{
//		cout << "��һ�β���ɹ�" << endl;
//	}
//	else
//	{
//		cout << "��һ�β���ʧ��" << endl;
//	}
//
//	ret = s1.insert(10);
//	
//	if (ret.second)
//	{
//		cout << "�ڶ��β���ɹ�" << endl;
//	}
//	else
//	{
//		cout << "�ڶ��β���ʧ��" << endl;
//	}
//
//	multiset<int>s2;
//	s2.insert(10);
//	s2.insert(10);
//	for (multiset<int>::iterator it = s2.begin(); it != s2.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	
//
//}
//
//
//
//int main()
//{
//	test01();
//}