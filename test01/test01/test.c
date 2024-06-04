#define _CRT_SECURE_NO_WARNINGS

////#include<string.h>
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


//int main()
//{
//
//	char arr1[] = "abcdef";
//	char arr2[] = { 'a','b','c','d','e','f','\0'};
//	/*printf("%s\n", arr1);
//	printf("%s\n", arr2);*/
//
//	int len = strlen("abc");
//	printf("%d\n", len);
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//	
//
//	return 0;
//}


//输出一辆小飞机
//int main()
//{
//	printf("     **\n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *\n");
//	printf("    *  *\n");
//
//	return 0;
//}



//int main()
//{
//	printf("name    age    gender\n");
//	printf("---------------------\n");
//	printf("jack    18     man\n");
//
//	return 0;
//}


//int main()
//{
//	int a = 40;
//	int c = 212;
//	int y = (-8 + 22) * a - 10 + c / 2;
//	printf("%d\n", y);
//
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x);
//
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	
//	int age = 0;
//	scanf("%d", &age);
//
//	if (age <= 10)
//	{
//		printf("这是小孩儿\n");
//		printf("小孩儿不许学习\n");
//	}
//	else if (age > 10 && age <= 18)
//	{
//		printf("这是出生\n");
//		printf("鲨鲨鲨\n");
//	}
//	else if (age > 18 && age <= 35)
//	{
//		printf("这是社畜\n");
//	}
//	else
//		printf("这是老登\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a >= 1 && a <= 100)
//	{
//		if (a % 2 == 1)
//		{
//			printf("有效\n");
//		}
//		else
//		{
//			printf("无效\n");
//		}
//
//	}
//	else
//	{
//		printf("无效\n");
//	}
//
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	if (a >= 1 && a <= 100)
//	{
//
//	}
//	printf("%d", a);
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char ch;
//	scanf("%c", &ch);
//	printf("  %c\n", ch );
//	printf(" %c%c%c\n", ch, ch, ch);
//	printf("%c%c%c%c%c\n", ch, ch, ch, ch, ch);
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 1;
//
//	while (i<=10)
//	{
//		printf("%d\n", i);
//
//		i++;
//		
//	}
//
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int m = 1;  //m指全部的苹果数量
//	int t = 0;  //吃一个苹果的时间
//	int s = 1;  //吃苹果所用的全部时间
//	scanf("%d %d %d", &m, &t, &s);
//
//
//	if (t == 0)
//	{
//		printf("%d", m);
//	}
//
//	else if (s / t >= m)
//	{
//		printf("0");
//	}
//
//	else
//	{
//		int rest = m - (s / t);
//		printf("%d\n", rest);
//	}
//
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	if (num > 4 && num <= 12)
//	{
//		if (num % 2 == 0)
//		{
//			printf("1 1 0 0");
//		}
//		else
//		{
//			printf("0 1 1 0");
//		}
//	}
//
//	else
//	{
//		if (num % 2 == 0)
//		{
//			printf("0 1 1 0");
//		}
//		else
//		{
//			printf("0 0 0 1");
//		}
//	}
//
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int year = 0;
//
//	scanf("%d", &year);
//
//	if (year % 4 == 0 && year % 100 != 0)
//	{
//		printf("1\n");
//	}
//	else if (year % 400 == 0)
//	{
//		printf("1\n");
//	}
//	else
//	{
//		printf("0\n");
//	}
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//
//	if (x == 1)
//	{
//		printf("Today, I ate 1 apple.\n");
//	}
//	else if (x == 0)
//	{
//		printf("Today, I ate 0 apple.\n");
//	}
//	else
//	{
//		printf("Today, I ate ");
//		printf("%d",x);
//		printf(" apples.\n");
//	}
//
//	return 0;
//}


//#include<stdio.h>
//int main() 
//{
//	int n = 1;
//	scanf("%d", &n);
//
//	if ((5 * n) < (3 * n + 11))
//	{
//		printf("Local");
//	}
//	else
//	{
//		printf("Luogu");
//	}
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int y = 1583;
//	int m = 1;
//	scanf("%d %d", &y, &m);
//
//	if (m == 2)
//	{
//		if (y % 4 == 0 && y % 100 != 0)
//		{
//			printf("29\n");
//		}
//		else if (y % 400 == 0)
//		{
//			printf("29\n");
//		}
//		else
//		{
//			printf("28\n");
//		}
//	}
//	else
//	{
//		switch (m)
//		{
//		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
//			printf("31\n");
//			break;
//		default:
//			printf("30\n");
//		}
//	}
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int week = 1;
//	int school = 0;
//	int mom = 0;
//
//	while (week < 8)
//	{
//		printf("%d\n", week);
//
//		scanf("%d %d", &school, &mom);
//
//		week++;
//	}
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	scanf("%4d%2d%2d", &year, &month, &day);
//
//	printf("year=%d\n",year);
//	printf("month=%02d\n", month);
//	printf("day=%02d\n", day);
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int No = 0;
//	float C = 0.0f;
//	float math = 0.0f;
//	float english = 0.0f;
//	scanf("%d;%f,%f,%f",&No,&C,&math,&english);
//	 
//	printf("No%d;%.2f,%.2f,%.2f\n",No,C,math,english);
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int school[7] = { 0 };
//	int mom[7] = { 0 };
//	int sum[7] = { 0 };
//	int max = 0;
//	int i = 0;
//
//	while (i < 7)
//	{
//		scanf("%d %d", &school[i], &mom[i]);
//		sum[i] = school[i] + mom[i];
//
//
//			i++;
//	}
//
//	
//
//	int answer = 0;
//	if (max = sum[0] && sum[0>8])
//	{
//		answer = 1;
//	}
//
//	i = 1;
//		while (i < 7)
//		{
//			if (sum[i] > 8 && sum[i] > max)
//			{
//				max = sum[i];
//
//				answer = i + 1;
//			}
//
//			i++;
//		}
//		printf("%d\n", answer);
//
//
//	return 0;
//}


#include<stdio.h>
int main()
{
	float r = 0.0f;
	float V = 0.0f;

	scanf("%f", &r);

	V = (4 / 3) * 3.1415926 * r * r * r;

	printf("%.3f\n", V);


	return 0;
}