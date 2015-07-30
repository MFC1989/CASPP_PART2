
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
		if (i % 8 == 0)
			//putchar();
			printf("--");
	}
	putchar('\n');
}


//算数移位返回1，否则0
int int_shifts_are_logical()
{
	int x = -0xff;
	x >>= 8;

	x >>= ((sizeof(int) - 1) * 8);
	x &= 0xff;

	if (x==0xff)
	{
		return 1;
	}
	return 0;
}

int main()
{

	int_shifts_are_logical();
	return 0;

}
