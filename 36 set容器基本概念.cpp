///*
//* ����Ԫ���ڲ���ʱ���ᱻ�Զ�����
//* set�������������ظ���Ԫ��
//* multiset�����������ظ���Ԫ��
//*/
//
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
//
//
//void test01()
//{
//	set<int>s1;
//
//	//�������ݵ�ʱ��ֻ��inser��ʽ
//	s1.insert(10);
//	s1.insert(40);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(30);
//
//	printSet(s1);
//
//	//��������
//	set<int>s2(s1);
//	printSet(s2);
//
//	set<int>s3;
//	s3 = s2;
//	printSet(s3);
//}
//
//using namespace std;
//
//int main()
//{
//	test01();
//}