#include <iostream>
#include <typeinfo>
using namespace std;

//十进制转16进制
void d2h(unsigned int n)
{
	//cout << typeid(n).name() << endl;					//可看到变量（或指针）的类型		
	if (n<=0)
	{
		return ;
	}

	d2h(n>>4);
	cout << n % 16 << endl;;
}


//十六进制转十进制
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