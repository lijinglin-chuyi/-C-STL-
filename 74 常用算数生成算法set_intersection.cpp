//#include <iostream>
//#include <vector>
//#include <numeric>
//#include <algorithm>
//
//using namespace std;
//
//class myPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//void test01()
//{
//	vector<int>v1;
//	vector<int>v2;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 5);
//	}
//	//首先设置目标容器的数量，去两个集合中最小的一个
//	vector<int>vTraget;
//	vTraget.resize(min(v1.size(), v2.size()));
//	//1.两个容器必须有序
//	//2.最特殊情况，大容器包含小容器，开辟空间为最小容器的大小即可
//	//3.目标容器必须提前开辟空间
//	//4.当实际交集小于开辟空间的时候，后面就会填充为0，但是set_intersection会返回一个交集的最后位置，遍历的时候使用这个
//	auto itEnd = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTraget.begin());
//	for_each(vTraget.begin(), itEnd, myPrint());
//}
//
//int main()
//{
//	test01();
//}
