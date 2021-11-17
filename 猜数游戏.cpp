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
	printf("请输入一个1-100的数字：\n");
	while(1)
	{
		scanf("%d",&num);
		count++;
		if(num>randomNum)
			printf("您输入的数字大了\n");
		else if(num<randomNum)
		    printf("您输入的数字小了\n");
		else  break;
	}
	printf("恭喜你，用了%d次找到了答案",count);
	system("pause");
	return 0;
}
