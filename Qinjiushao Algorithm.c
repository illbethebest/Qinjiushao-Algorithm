/*
程序说明：秦九韶算法，快速计算一元n次多项式的值。
*/

#include "stdafx.h"

double Qinjiushao_Algorithm(unsigned int Degree_Of_Polynomial, double Coefficients_Of_Polynomial[], double x);

int main()
{
	printf("**************************************************************************************\n");
	printf("                秦九韶算法：快速计算一元n次多项式的值\n");
	printf("**************************************************************************************\n");

	unsigned int Degree_Of_Polynomial;	//存放多项式的次数。
	printf("请输入多项式的次数：");
	scanf_s("%d", &Degree_Of_Polynomial);	//输入多项式的次数。

	double Coefficients_Of_Polynomial[100];	//存放多项式的系数。
	printf("请从低次到高次输入多项式的系数：\n");
	for (int i = 0; i<=Degree_Of_Polynomial; i++)
	{
		scanf_s("%lf", &Coefficients_Of_Polynomial[i]);   //输入多项式的系数。
	}

	double x;	//存放输入值。
	printf("输入值为：");
	scanf_s("%lf", &x);	//传入输入值。

	double Result_Of_Polynomial;	//存放多项式的值。
	Result_Of_Polynomial = Qinjiushao_Algorithm(Degree_Of_Polynomial, Coefficients_Of_Polynomial, x);
	printf("当输入为：%f 时，多项式的值为：%f", x, Result_Of_Polynomial);	//输出多项式的值。

    return 0;
}

/*
函数说明：秦九韶算法，计算传入多项式的值。
*/
double Qinjiushao_Algorithm(unsigned int Degree_Of_Polynomial, double Coefficients_Of_Polynomial[], double x)
{
	double Result_Of_Polynomial = 0.0;	//存放多项式的值。
	for (int j = Degree_Of_Polynomial; j>=0; j--)
	{
		Result_Of_Polynomial = (x * Result_Of_Polynomial) + Coefficients_Of_Polynomial[j];	//计算多项式的值。
	}
	return Result_Of_Polynomial;
}