#include<stdio.h>
int main()
{
	int i=1, hap=0, num;
	
	printf("�����Է�:");
	scanf("%d",&num);
	
	while(i <= num)
	{
		hap += i;
		i++;
	}
	printf("1����%d������ ��=%d�Դϴ�.",num,hap);
}
