#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

class myprint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

void test01()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}
	//首先设置目标容器的数量
	vector<int>vtraget;
	vtraget.resize(max(v1.size(),v2.size()));
	//1.两个容器必须有序
	//2.最特殊情况，其中一个最大的集合的大小，完全没有交集
	//3.目标容器必须提前开辟空间
	//4.当实际交集小于开辟空间的时候，后面就会填充为0，但是set_intersection会返回一个交集的最后位置，遍历的时候使用这个
	cout << "v1-v2的插值" << endl;
	auto itend = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vtraget.begin());
	for_each(vtraget.begin(), itend, myprint());
	cout << endl;
	cout << "v2-v1的插值" << endl;
	itend = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vtraget.begin());
	for_each(vtraget.begin(), itend, myprint());
	cout << endl;
}

int main()
{
	test01();
}
