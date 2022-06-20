//#include <iostream>
//using namespace std;
//
////1.search
//void test01()
//{
//	string str1 = "abcdefgde";
//	int pos = str1.find("df");
//	if (pos == -1)
//	{
//		cout << "can't find the target!" << endl;
//	}
//	else
//	{
//		cout << pos << endl;
//	}
//	
//	//rfind,从右往查找，find从左往右查找
//	pos = str1.rfind("de");
//	cout << pos << endl;
//}
//
////2.replace
//void test02()
//{
//	string str1 = "abcdefg";
//	//从1号位置起将3个字符换成1111
//	str1.replace(1, 3, "1111");
//	cout << str1 << endl;
//}
//
//int main()
//{
//	test02();
//}