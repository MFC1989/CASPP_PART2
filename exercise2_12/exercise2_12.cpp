#include <iostream>
#include <cmath>
using namespace std;


//X�������Ч�ֽڣ�����λȫ��0
void funcA(unsigned long long  & n)
{
	unsigned long long tmp = n;

	//��1���ҵ������Ч�ֽ�
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

	
	//�ҵ���λ��Ч�ֽ�
	if (avail%8!=0)
	{
		avail = (avail>>3) + 1;		//�˴�ע�⣺Ҫ�����ţ���Ϊ��������ȼ��Ĺ�ϵ���������ž�������λ��
	}
	
	
	unsigned long long mask = 0;
	//��������
	for (int i = avail <<3; i >0; i--)    //��avail=2����Ҫ����16λȫΪ1�����롣
	{
		mask <<= 1;
		mask |= 1;
	}

	//��������������㣬������ֽ�Ϊ�����ڶ����ֽڣ����0XFF�������㣬�ﵽ�������ʮ��λ��Ŀ��
	n &= mask;

}



int main()
{
	unsigned long long  num = 1024*1024+1024;
	funcA(num);
	return 0;
}