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
	//��������Ŀ������������
	vector<int>vtraget;
	vtraget.resize(max(v1.size(),v2.size()));
	//1.����������������
	//2.���������������һ�����ļ��ϵĴ�С����ȫû�н���
	//3.Ŀ������������ǰ���ٿռ�
	//4.��ʵ�ʽ���С�ڿ��ٿռ��ʱ�򣬺���ͻ����Ϊ0������set_intersection�᷵��һ�����������λ�ã�������ʱ��ʹ�����
	cout << "v1-v2�Ĳ�ֵ" << endl;
	auto itend = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vtraget.begin());
	for_each(vtraget.begin(), itend, myprint());
	cout << endl;
	cout << "v2-v1�Ĳ�ֵ" << endl;
	itend = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vtraget.begin());
	for_each(vtraget.begin(), itend, myprint());
	cout << endl;
}

int main()
{
	test01();
}
