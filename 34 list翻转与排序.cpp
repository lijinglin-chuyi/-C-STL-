//#include <iostream>
//#include <list>
//#include <algorithm>
//
////list��������˫��ģ�ֻ��ǰ�ƺ���
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
//	//β��
//	L1.push_back(20);
//	L1.push_back(10);
//	L1.push_back(50);
//	L1.push_back(40);
//	L1.push_back(30);
//	cout << "��תǰ��" << endl;
//	printList(L1);
//
//	L1.reverse();
//	cout << "��ת��" << endl;
//	printList(L1);
//
//	//����
//	cout << "����ǰ��" << endl;
//	printList(L1);
//
//	//���в�֧��������ʵ��������������������ñ�׼�㷨
//	//��֧��������ʵ��������������ڲ����ṩһЩ��Ӧ���㷨
//	//sort(L1.begin(), L1.end());
//	L1.sort();//����
//	cout << "�����" << endl;
//	printList(L1);
//	L1.sort(myCompare);
//	printList(L1);
//}
//
//int main()
//{
//	test01();
//}