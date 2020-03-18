#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//    char str[] = "hello bit";
//    printf("%d %d\n", sizeof(str), strlen(str));
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int x;
//	int count = 0;
//	scanf("%d", &x);
//	for (int i = 1; i < 20; i++)
//	{
//		for (int j = 1; j < 33; j++)
//		{
//			for (int k = 0; k < 276; k += 3)
//			{
//				if ((i + j + k == 100) && (i * 5 + j * 3 + k / 3 == 100))
//				{
//					count++;
//					printf("%d %d %d", i, j, k);
//					if (count < x)
//					{
//						printf("\n");
//					}
//					else
//						return 0;
//				}
//			}
//
//		}
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int x;
//	scanf("%d", &x);
//	while (x--)
//	{
//		int y = 0;
//		int sum1 = 0;
//		int sum2 = 0;
//		scanf("%d", &y);
//		for(int i = 3;i>0;i--)
//		{
//			
//			sum1 += y %10;
//			y = y / 10;
//		}
//		for (int i = 3; i > 0; i--)
//		{
//			sum2 += y %10;
//			y = y / 10;
//		}
//		if (sum1 == sum2)
//			printf("You are lucky!\n");
//		else
//			printf("Wish you good luck.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//#include <math.h>
//#include <stdlib.h>
//int b[1005];
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int x, y, z;
//    char a[5];
//    int sum = 0, s = 0;
//    memset(b, -1, sizeof(b));
//    while (n--)
//    {
//        while (1)
//        {
//            scanf("%d %s %d:%d", &x, &a, &y, &z);
//            if (x == 0)
//            {
//                memset(b, -1, sizeof(b));
//                if (s != 0)
//                   printf("%d %0.0f\n", s, (double)sum / s);
//                else
//                    printf("0 0\n");
//                sum = s = 0;
//                break;
//            }
//            else {
//                if (a[0] == 'S')
//                {
//                    b[x] = y * 60 + z;
//                }
//                else if (a[0] == 'E' && b[x] != -1) {
//                    s++;
//                    sum += y * 60 + z - b[x];
//                    b[x] = -1;
//                }
//            }
//        }
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,(3,4),5 };
//    printf("%d\n", sizeof(arr));
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int x;
//	int count = 0;
//	while (1)
//	{
//		scanf("%d", &x);
//		count++;
//		if (x==250)
//			break;
//	}
//	printf("%d", count);
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//
//{
//
//    int a, i;
//
//    i = 0;
//
//    while (1)
//
//    {
//
//        scanf("%d", &a);
//
//        if (a == 250)	break;
//
//        i++;
//
//    }
//
//    printf("%d\n", i + 1);
//
//    return 0;
//
//}

//#include<stdio.h>
//int main()
//{
//	int x;
//	char y;
//	int count = 0;
//	while (1)
//	{
//		scanf("%d%c", &x,&y);
//		count++;
//		if (y = '\0')
//			break;
//	}
//	printf("%d", count);
//}
//#include<stdio.h>
//
//int main()
//{
//	int m, n;
//	int sum = 0;
//	int he = 0;
//	scanf("%d %d", &m, &n);
//	for (int i = 0; i < n; i++)
//	{
//		sum = sum * 10 + m;
//		he += sum;
//	}
//	printf("s = %d", he);
//}

//#include"math.h"
//int main()
//{
//    int n, s, i, a;
//    int sum = 0;
//    s = a;
//    scanf("%d %d", &a, &n);
//    for (i = 1; i <= n; i++)
//    {
//        sum = sum + a;
//        s = s + a * pow(10, i);
//        sum = sum + s;
//
//    }
//    printf("sum=%d\n", sum);
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	int x = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		x *= i;
//		sum += x;
//	}
//	printf("%d", sum);
//	return 0;
//}