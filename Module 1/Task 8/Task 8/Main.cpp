/******************************************************************************************
*    BBBBB   Y     Y           GGGGGGG       A            A       RRRRRR        A         *
*    B    B   Y   Y            G            A A          A A      R     R      A A        *
*    B BBB     Y Y             G           A   A        A   A     RRRRRR      A   A       *
*    B    B     Y              G   GGG    AAAAAAA      AAAAAAA    R R        AAAAAAA      *
*    B     B    Y              G     G   A       A    A       A   R   R     A       A     *
*    BBBBBB     Y              GGGGGGG  A         A  A         A  R     R  A         A    *
*******************************************************************************************/

/*����������� ��������� ����������  �������� � ��� �������� �:
	{sin^2(x), ��� x>0
 y= {
	{1-2sin^2(x),� �������� ������
*/

#include "iostream"
#include "math.h"

using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	float x, y;
	cout << "������� x=";
	cin >> x;


	if (x > 0)
		y = pow(sin(x), 2);
	else
		y = 1 - 2 * pow(sin(x), 2);

	cout << "y = " << y << endl;


	system("pause");
}