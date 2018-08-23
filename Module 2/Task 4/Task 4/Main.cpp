/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*–азработать класс дл€ представлени€ комплексных чисел с возможностью задани€ 
вещественной и мнимой частей как числами типов double, так и целыми числами.
ќбеспечить выполнение операций сложени€, вычитани€ и умножени€ компђлексных чисел.*/

#include "iostream"
#include <string>
#include "Complects.h"
using namespace std;


int main()
{
	setlocale(LC_CTYPE, "");

	Complects obj1(1, 5);
	Complects obj2(0.3, 1.6);

	Complects sumObj = obj1+obj2;
	sumObj.print();

	Complects minusObj = obj1-obj2;
	minusObj.print();

	Complects multiObj = obj1*obj2;
	multiObj.print();

	system("pause");
	return 0;
}