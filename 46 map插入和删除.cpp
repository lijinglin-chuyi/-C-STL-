//#include <iostream>
//#include <map>
//
//using namespace std;
//
///*
//* map�����ڹ���ʽ�������ײ�ṹ�Ƕ�����ʵ��
//* map���������������ظ���keyֵԪ��
//* multimap�������������ظ���keyԪ��
//* ���Ը���keyֵ���ٵ��ҵ�valueֵ
//*/
//
//void printMap(const map<int, int>& m)
//{
//	for (map<int, int>::const_iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << (*it).first << " " << "value = " << it->second << endl;
//	}
//	cout << endl;
//}
//
////�����ɾ��
//void test01()
//{
//	//����map����
//	map<int, int>m;
//
//	//ʹ����������
//	m.insert(pair<int, int>(1, 10));
//	//�ڶ��ִ��췽ʽ��������������
//	m.insert(make_pair(2, 20));
//	//�����֣��Ƚϳ�
//	m.insert(map<int, int>::value_type(3, 30));
//	//�����֣���������������
//	m[4] = 40;
//
//	printMap(m);
//	//���������֣��������ˣ����Զ���ȫvalue��ֵΪ0,��������ʹ��[]������keyֵ��Ӧ��value
//	//cout << m[5] << endl;
//	m.erase(m.begin());
//	printMap(m);
//	//���ռ�ֵ����ɾ��
//	m.erase(3);
//	printMap(m);
//	//��������������ɾ��
//	//m.erase(m.begin(), m.end());
//	m.clear();
//	printMap(m);
//}
//
//
//
//int main()
//{
//	test01();
//}