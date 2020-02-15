#include<iostream>
using namespace std;
#include <boost/lexical_cast.hpp>

//说明：lexical_cast可能会崩溃，使用时需使用异常捕获
//lexical_cast也可指定转换位数
void TestLexicalCast()
{
	using boost::lexical_cast;
	//字符串转整形
	try
	{
		//字符串转整形
		int a = lexical_cast<int>("123");
		cout << a << endl;
		//字符串转浮点型
		float b = lexical_cast<float>("456",2);
		cout << b << endl;
		//整形转字符串
		string c = lexical_cast<string>(789);
		cout << c << endl;
		//浮点型转字符串
		string d = lexical_cast<string>(987.1); //精度问题？？？
		cout << d << endl;
	}
	catch (const std::exception& e)
	{
		//cout << "转换失败！！！" << endl;
		cout << e.what() << endl;
	}
}
int main()
{
	//传统C、C++风格
	int a = atoi("123");
	cout << a << endl;
	
	char b[64] = { 0 };
	itoa(456,b,10);
	cout << b << endl;

	char c[64] = { 0 };
	gcvt(1.23456,3,c);

	cout << c << endl;
	cout << "/////////////////////////////" << endl;
	//boost风格
	TestLexicalCast();

	return 0;
}