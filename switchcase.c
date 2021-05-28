#include<stdio.h>
main()
{
	int a,b;
	char opt;
	printf("enter the arthemetic operators");
	scanf("%c",&opt);
	printf("enter the values of a,b");
	scanf("%d%d",&a,&b);
	switch (opt)
	{
		case'+':
		printf("%d+%d=%d",a,b,a+b);
		break;
		case'-':
		printf("%d-%d=%d",a,b,a-b);
		break;
		case'*':
		printf("%d*%d=%d",a,b,a*b);
		break;
	}
	return 0;
}
