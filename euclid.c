#include<stdio.h>
int main()
{
	
	int x,y,r,temp;
	
	printf("�ΰ��� ������ �Է��ϼ���:");
	scanf("%d%d",&x,&y);
	printf("%d�� %d��",x,y); 
	if(y>x)
	{
		temp = x;
		x=y;
		y=temp;
	}
	while(y != 0)
	{
		r=x%y;
		x= y;
		y=r;
	}
	printf("�ִ� ������� %d�Դϴ�",x);
	
	
	
}
