//#include <iostream>
//#include <vector>
//#include <map>
//#include <ctime>
//using namespace std;
//
//#define CEHUA 0
//#define MEISHU 1
//#define YANFA 2
//
//class Worker
//{
//public:
//	
//	string m_Name;
//	int m_SAlary;
//
//
//};
//
//void createWorker(vector<Worker>& v)
//{
//	string nameSeed = "ABCDEFGHIJ";
//	for (int i = 0; i < 10; i++)
//	{
//		Worker worker;
//		worker.m_Name = "Ա��";
//		worker.m_Name += nameSeed[i];
//		worker.m_SAlary = rand() % 10000 + 10000;//0~19999
//		//v.at(i) = worker;//����atֻ�������ڷ���
//		v.push_back(worker);
//	}
//
//}
//
//void setGroup(vector<Worker>& v, multimap<int, Worker>& m)
//{
//	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		int depthId = rand() % 3;//0,1,2
//		//����Ա��
//		m.insert(pair<int, Worker>(depthId, *it));
//	}
//}
//
//void showWorkerByGroup(multimap<int,Worker>&m)
//{
//	cout << "�߻����ţ�" << endl;
//	multimap<int,Worker>::iterator pos =  m.find(CEHUA);
//	int count = m.count(CEHUA);
//	int index = 0;
//	for (multimap<int,Worker>::iterator it = pos; it != m.end() && index < count; it++,index++)
//	{
//		cout << "������" << it->second.m_Name << " ���ʣ�" << it->second.m_SAlary << endl;
//	}
//
//	cout << "-----------------------" << endl;
//	cout << "�������ţ�" << endl;
//	pos = m.find(MEISHU);
//	count = m.count(MEISHU);
//	index = 0;
//	for (multimap<int, Worker>::iterator it = pos; it != m.end() && index < count; it++, index++)
//	{
//		cout << "������" << it->second.m_Name << " ���ʣ�" << it->second.m_SAlary << endl;
//	}
//	cout << "-----------------------" << endl;
//	cout << "�з����ţ�" << endl;
//	pos = m.find(YANFA);
//	count = m.count(YANFA);
//	index = 0;
//	for (multimap<int, Worker>::iterator it = pos; it != m.end() && index < count; it++, index++)
//	{
//		cout << "������" << it->second.m_Name << " ���ʣ�" << it->second.m_SAlary << endl;
//	}
//
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	//1.����Ա��
//	vector<Worker> vWorker;
//	createWorker(vWorker);
//
//	//����
//	/*for (vector<Worker>::iterator it = vWorker.begin(); it != vWorker.end(); it++)
//	{
//		cout << "������" << it->m_Name << "���ʣ�" << it->m_SAlary << endl;
//	}*/
//	//2.Ա������
//	multimap<int, Worker>mWorker;
//	setGroup(vWorker, mWorker);
//
//	//3.��ʾ�����Ա��
//	showWorkerByGroup(mWorker);
//}