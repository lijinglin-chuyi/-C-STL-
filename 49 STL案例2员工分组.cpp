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
//		worker.m_Name = "员工";
//		worker.m_Name += nameSeed[i];
//		worker.m_SAlary = rand() % 10000 + 10000;//0~19999
//		//v.at(i) = worker;//报错，at只允许用于访问
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
//		//插入员工
//		m.insert(pair<int, Worker>(depthId, *it));
//	}
//}
//
//void showWorkerByGroup(multimap<int,Worker>&m)
//{
//	cout << "策划部门：" << endl;
//	multimap<int,Worker>::iterator pos =  m.find(CEHUA);
//	int count = m.count(CEHUA);
//	int index = 0;
//	for (multimap<int,Worker>::iterator it = pos; it != m.end() && index < count; it++,index++)
//	{
//		cout << "姓名：" << it->second.m_Name << " 工资：" << it->second.m_SAlary << endl;
//	}
//
//	cout << "-----------------------" << endl;
//	cout << "美术部门：" << endl;
//	pos = m.find(MEISHU);
//	count = m.count(MEISHU);
//	index = 0;
//	for (multimap<int, Worker>::iterator it = pos; it != m.end() && index < count; it++, index++)
//	{
//		cout << "姓名：" << it->second.m_Name << " 工资：" << it->second.m_SAlary << endl;
//	}
//	cout << "-----------------------" << endl;
//	cout << "研发部门：" << endl;
//	pos = m.find(YANFA);
//	count = m.count(YANFA);
//	index = 0;
//	for (multimap<int, Worker>::iterator it = pos; it != m.end() && index < count; it++, index++)
//	{
//		cout << "姓名：" << it->second.m_Name << " 工资：" << it->second.m_SAlary << endl;
//	}
//
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	//1.创建员工
//	vector<Worker> vWorker;
//	createWorker(vWorker);
//
//	//测试
//	/*for (vector<Worker>::iterator it = vWorker.begin(); it != vWorker.end(); it++)
//	{
//		cout << "姓名：" << it->m_Name << "工资：" << it->m_SAlary << endl;
//	}*/
//	//2.员工分组
//	multimap<int, Worker>mWorker;
//	setGroup(vWorker, mWorker);
//
//	//3.显示分组的员工
//	showWorkerByGroup(mWorker);
//}