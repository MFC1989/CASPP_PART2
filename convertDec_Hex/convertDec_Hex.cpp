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
	cout << "n=" << n <<"-----";
	cout << n % 16 << endl;;
}

int main()
{
	int x = 18;
	
	d2h(x);
	return 0;
}