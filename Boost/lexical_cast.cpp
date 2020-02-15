#include<iostream>
using namespace std;
#include <boost/lexical_cast.hpp>

//˵����lexical_cast���ܻ������ʹ��ʱ��ʹ���쳣����
//lexical_castҲ��ָ��ת��λ��
void TestLexicalCast()
{
	using boost::lexical_cast;
	//�ַ���ת����
	try
	{
		//�ַ���ת����
		int a = lexical_cast<int>("123");
		cout << a << endl;
		//�ַ���ת������
		float b = lexical_cast<float>("456",2);
		cout << b << endl;
		//����ת�ַ���
		string c = lexical_cast<string>(789);
		cout << c << endl;
		//������ת�ַ���
		string d = lexical_cast<string>(987.1); //�������⣿����
		cout << d << endl;
	}
	catch (const std::exception& e)
	{
		//cout << "ת��ʧ�ܣ�����" << endl;
		cout << e.what() << endl;
	}
}
int main()
{
	//��ͳC��C++���
	int a = atoi("123");
	cout << a << endl;
	
	char b[64] = { 0 };
	itoa(456,b,10);
	cout << b << endl;

	char c[64] = { 0 };
	gcvt(1.23456,3,c);

	cout << c << endl;
	cout << "/////////////////////////////" << endl;
	//boost���
	TestLexicalCast();

	return 0;
}