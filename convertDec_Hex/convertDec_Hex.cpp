#include <iostream>
#include <typeinfo>
using namespace std;

//ʮ����ת16����
void d2h(unsigned int n)
{
	//cout << typeid(n).name() << endl;					//�ɿ�����������ָ�룩������		
	if (n<=0)
	{
		return ;
	}

	d2h(n>>4);
	cout << n % 16 << endl;;
}


//ʮ������תʮ����
void h2d(unsigned int n)
{
	if (n <= 0)
	{
		return;
	}

	cout << n % 10;
	h2d(n / 10);
}

int main()
{
	int x = 0xC;
	h2d(x);
	return 0;
}