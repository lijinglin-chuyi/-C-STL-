//#include <iostream>
//#include <list>
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
//void test01()
//{
//	list<int>L1;
//	//β��
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	//L1[0]��������ʹ��[]����list�����е�Ԫ��
//	//L1.at(),��������at��ʽ����list�е�Ԫ��
//
//	//ԭ����list������������ʹ���������Կռ�洢���ݣ�������Ҳ�ǲ�֧��������ʵ�
//
//	cout << "��һ��Ԫ��Ϊ��" << L1.front() << endl;
//	cout << "���һ��Ԫ�أ�" << L1.back() <<  endl;
//
//	//��֤�������ǲ�֧��������ʵ�
//	list<int>::iterator it = L1.begin();
//
//	it++;//֧��˫��
//	it--;//֧��˫��
//	//it =it + 1; //���󣬲�������Ծ���ʣ���ʹ��+1
//
//
//}
//
//int main()
//{
//	test01();
//}