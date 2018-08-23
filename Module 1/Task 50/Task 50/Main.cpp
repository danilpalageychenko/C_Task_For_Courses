/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*
50. Разработать программу, которая выполняет приближенное вычисление определенного интеграла методом Симпсона. 
Суть метода Симпсона заключается в следующем: подынтегральная функция заменяется отрезками парабол, 
а затем вычисляется сумма площадей полученных криволинейных трапеций. В общем случае:
(от a)Integral(до b)f(x)dx (Примерно равно) h/3[f(a)+4f(a+h)+2f(a+2h)+...+4f(b-h)+f(b)]
*/

#include "iostream"
#include "math.h"
using namespace std;


void main()
{
	setlocale(LC_ALL, "");
	
	float a, b;

	cout << "Введите пределы интегрирования (от до, через пробел):";
	cin >> a >> b;

	float h;//шаг интегрирования
	int n;//количество шагов

	for (int i = 4; i < 1000; i += 4)
	{
		if (i > ((b - a) / 0.177))
		{
			n = i;
			break;
		}
	}
	h = (b - a) / n;
	n++;
	cout << "h=" << h << endl;
	float *x = new float[n];
	x[0] = a;

	for (int i = 1; i < n; i++)
	{
		x[i] = x[i - 1] + h;
	}



	float *y = new float[n];
	for (int i = 0; i < n; i++)
		y[i] = (cos(x[i])) / (pow(x[i],2) + 1); // собственно функция

	float answer = 0;
	float even = 0;
	float odd = 0;
	for (int i = 1; i < n-1; i++)
	{
		if (i % 2 == 0)
			even += y[i];
		else
			odd += y[i];
	}

	answer = (h / 3)*((y[0] + y[n - 1] + 4 * odd) + (2 * even));


	for (int i = 0; i < n; i++)
		cout << y[i] << endl;

	cout << "answer =" << answer << endl;
	system("pause");
}