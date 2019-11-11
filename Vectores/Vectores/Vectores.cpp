#include <string>
#include <iostream>
using namespace std;

int main()
{
	float vector1[3];
	float vector2[3];
	float vectorsuma[3];
		int i;
		for (i = 0; i < 3; i++)
		{
			cout << "Introduce el valor " << i << " del primero vector" << endl;
			cin >> vector1[i];
		}
	for(i=0; i<3; i++)
	{
		cout << "Introduce el valor " << i << " del segundo vector" << endl;
		cin >> vector2[i];
	}
	for (i = 0; i < 3; i++)
	{
		vectorsuma[i] = vector1[i] + vector2[i];
	}
	cout << "El vector suma es: ";
	for (i = 0; i < 3; i++)
	{
		cout << vectorsuma[i] << "  ";
	}
}
