#include<stdio.h>
int main()
{
	int i,j,n;
	
	printf("�ﰢ�� ���� �Է�:");
	scanf("%d",&n);
	
	for(i=n; i>0; i--)
	{
		for(j=i; j>0; j--)
	    printf(" ");
		for(j=n+1-i; j>0; j--)
		printf("*");
		printf("\n");
	}
	
	return 0;
}
