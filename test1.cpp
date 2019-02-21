#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main(int argc, char const *argv[])
{

	float x = 10.5;
	float y = 11.8;
	float z = 3.3;

	cout << "Hola Mundo\n";
	cout << "Este es mi primer programa en c++\n";
	system("PAUSE");
	cout << "Ahora pondre operaciones de arimetica y una clase .h\n";
	system("PAUSE");

	if (x + y + z)
	{
		cout << "La suma es:\n" <<x+y+z << "\n";
	}
	else{
		printf("Ha habido un error en la operación");
	}
	system("PAUSE");

	return 0;
}