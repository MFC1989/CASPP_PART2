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
	cout << "n=" << n <<"-----";
	cout << n % 16 << endl;;
}

int main()
{
	int x = 18;
	
	d2h(x);
	return 0;
}