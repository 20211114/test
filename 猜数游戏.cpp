#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int count=0;
	int num=0;
	int randomNum;
	srand(time(NULL));
	randomNum=rand() %100+1;
	printf("������һ��1-100�����֣�\n");
	while(1)
	{
		scanf("%d",&num);
		count++;
		if(num>randomNum)
			printf("����������ִ���\n");
		else if(num<randomNum)
		    printf("�����������С��\n");
		else  break;
	}
	printf("��ϲ�㣬����%d���ҵ��˴�",count);
	system("pause");
	return 0;
}
