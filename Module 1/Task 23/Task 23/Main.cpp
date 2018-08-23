/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*
23. –азработать программу, котора€ вычисл€ет сумму 
бесконечного р€да  (от i=1)E(до бесконечности)*1/i^2 с заданной точностью Ёпсилон= 10^-4 . 
—читать, что требуема€ точность достигнута, если вычислена сумма нескольких первых слагаемых и 
очередное слагаемое оказалось по модулю меньше, чем Ёпсилон.
*/

#include "iostream"

using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	float i=1;
	float s = 0;
	do
	{
		s += 1 / (i*i);
		cout << s << "\t" << 1 / (i*i) << endl;
		i++;
	} while ((1/ (i*i))>abs(pow(10,-4)));

	cout << endl << "s=" << s << endl;
	system("pause");
}