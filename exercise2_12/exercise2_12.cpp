#include <iostream>
#include <cmath>
using namespace std;


//X的最低有效字节，其他位全置0
void funcA(unsigned long long  & n)
{
	unsigned long long tmp = n;

	//（1）找到最低有效字节
	unsigned long long avail = 0;
	bool isFind = false;

	avail = 1;

	if ((tmp & 1) != 1)
	{
		while (!isFind)
		{
			if ((tmp & 1) != 1)
			{
				tmp >>= 1;
				avail++;
			}
			else
			{
				isFind = true;
			}

		}
	}

	
	//找到低位有效字节
	if (avail%8!=0)
	{
		avail = (avail>>3) + 1;		//此处注意：要加括号，因为运算符优先级的关系，不加括号就左移四位了
	}
	
	
	unsigned long long mask = 0;
	//生成掩码
	for (int i = avail <<3; i >0; i--)    //如avail=2，则要生成16位全为1的掩码。
	{
		mask <<= 1;
		mask |= 1;
	}

	//与掩码进行与运算，如最低字节为倒数第二个字节，则和0XFF做与运算，达到保存最后十六位的目的
	n &= mask;

}



int main()
{
	unsigned long long  num = 1024*1024+1024;
	funcA(num);
	return 0;
}