#include <stdio.h>

//1.while 
//int main(void)
//{
//	int i = 1
//		while ((int i <= 10)
//		{
//			printf("hello World\n", i++);
//			return 0;
//
//		}
//}


//2.
//*
//**
//***
//****
//*****
//*

//int main(void)
//{
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}


//3. 
//SSSS*
//SSS**
//SS***
//S****
//*****
//int main(void) {
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5 - i;j++)
//		{
//			printf("S");
//		}
//		for (int k = 0; k <=i; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//
//	}
//}


//4.ÇÇ¶ó¹Ìµå¸¦ ½×¾Æ¶ó 
//      *
//     ***
//    *****
//   *******
//  **********
//int main(void) {
//	int floor;
//	printf("¸îÃþÀ¸·Î ½×°Ú´À³Ä? ");
//	scanf_s("%d", &floor);
//	for (int i = 0; i < floor ; i++)
//	{
//		for (int j = 0; j < floor-i; j++)
//		{
//			printf("S");
//		}
//		for (int k = 0; k <= 2*i+i; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		
//	}
//	return 0;
//
//
//}