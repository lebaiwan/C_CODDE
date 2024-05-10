#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>





//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//
//	scanf("%d %d", &num1, &num2);
//
//	int sum = num1 + num2;
//
//	printf("%d\n", sum);
//	
//	return 0;
//}


int main()
{
	int input = 0;
	printf("李百万看见你在吃巧克力！\n");
	printf("要给李百万吃吗(同意请按1，不同意按其它)？");
	scanf("%d", &input);

	if (input == 1)
	{
		printf("李百万死了！\n");
	}

	else
	{
		printf("李百万很生气！\n");
	}

	return 0;
}