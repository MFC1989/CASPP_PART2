#include <iostream>
using namespace std;

template <class T>
void PrintfBinary(T a)
{
	int i;
	for (i = sizeof(a) * 8 - 1; i >= 0; --i)
	{
		if ((a >> i) & 1)
			putchar('1');
		else
			putchar('0');
		if (i%8!=0)
			putchar(' ');
	}
	putchar('\n');
}


//�κ������Ϊ1
int funcA(int x)
{
	x|=(~x);
	return x;
}

//�κ������Ϊ0
int funcB(int x)
{
	x &= (~x);
	return x;
}

//x�������Ч�ֽ��е�λ������1
int funcC(int x)
{

	
	return x;
}






int main()
{

	int t = funcA(-1 );
	funcC(284);
	//int sfval = (sizeof(int) - 1) << 3;
	int x = -1024;
	x >>= 4;
	return 0;

}
