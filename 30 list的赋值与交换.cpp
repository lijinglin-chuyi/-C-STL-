//#include <iostream>
//#include <list>
//using namespace std;
//
//
///*
//* �����ŵ㣺
//* 1.���Զ�����λ�ý��п��ٲ����ɾ��Ԫ��
//* 2.ȱ�������������ٶ�û������죬ռ�ÿռ�Ƚϴ�
//* 3.���ö�̬�洢���䣬��������ڴ��˷Ѻ����
//* 4.ʱ��Ϳռ临�ӶȱȽϸ�
//* 5.list��һ����Ҫ�����ʣ����������ɾ���������������ԭ��list��������ʧЧ������vector�ǲ�������
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
//	list<int>L2;
//	L2 = L1;
//	printList(L2);
//
//	list<int>L3;
//	L3.assign(L2.begin(), L2.end());
//	printList(L3);
//
//	list<int>L4;
//	L4.assign(10, 100);
//	printList(L4);
//
//}
//
////����
//void test02()
//{
//	list<int> L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//	L1.push_back(50);
//
//	list<int>L2;
//	L2.assign(10, 100);
//
//	cout << "����ǰ��" << endl;
//	printList(L1);
//	printList(L2);
//
//	L1.swap(L2);
//	cout << "������" << endl;
//	printList(L1);
//	printList(L2);
//
//}
//
//int main()
//{
//	test02();
//}