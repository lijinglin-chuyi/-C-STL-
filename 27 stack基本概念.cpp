//#include <iostream>
//#include <stack>
//using namespace std;
//
////stack，也叫作栈，先进后出(FILO)，也叫作First in last out，栈不允许有遍历的行为，只有栈顶的元素可以被访问，遍历不允许遍历过程中有元素被删除
////栈可以判断容器是否为空，拥有一个empty的接口
////栈可以判断元素个数，有一个size的接口
//
//
//void test01()
//{
//	stack<int> st;
//	st.push(10);
//	st.push(20);
//	st.push(30);
//	st.push(40);
//
//	cout << "栈的大小为：" << st.size() << endl;
//	//只要栈不为空，我们就查看栈顶并且执行出栈操作
//	while (!st.empty())
//	{
//		cout << "栈顶元素为：" << st.top() << endl;
//
//		//出栈
//		st.pop();
//	}
//	cout << "栈的大小：" << st.size();
//}
//
//int main()
//{
//	test01();
//}