//�ݺ� Ƚ���� �Է� �ް� �Ʒ��� ������ �ݺ��ϸ� �˴ϴ�.
//���ڸ� �ϳ� �Է� �ް� �� ���ڸ� �ݺ� ����� Ƚ���� �Է¹����� �˴ϴ�.
//ex:
//�ݺ� Ƚ�� �Է�:2
//���ڿ� Ƚ�� �Է�: A 3
//AAA
//���ڿ� Ƚ�� �Է�: B 5
//BBBBB
#include<stdio.h>
int main()
{
	int i,j,tot_rep, rep;
	char ch;
	
	printf("�ݺ��� Ƚ�� �Է�:");
	scanf("%d",&tot_rep);
	rewind(stdin);
	
	i=0;
	while(i < tot_rep)
	{
		printf("���ڿ� ȸ�� �Է�:");
		scanf(" %c %d\n",&ch,&rep);
		j = 0;
		while(j < rep)
		{
			printf("%c",ch);
			j++;
		}
		i++;
	}
}
