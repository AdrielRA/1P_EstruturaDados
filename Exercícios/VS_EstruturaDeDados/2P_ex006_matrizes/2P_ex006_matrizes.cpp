#include <iostream>
#include <locale.h>
#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

void main() {

	setlocale(LC_ALL, "Portuguese");


	int mat[3][2];
	int i, j;

	int M[3][2];
	M[0][0] = 28;
	M[0][1] = 10;
	M[1][0] = 18;
	M[1][1] = 26;
	M[2][0] = 7;
	M[2][1] = 9;

	printf("Valor: %d", M[2][1]);

	/*for (i = 0; i < 3; i++) {
	for (j = 0; j < 2; j++) {
	mat[i][j] = i + j;
	}
	}

	for (i = 0; i < 3; i++) {
	cout << "[ ";
	for (j = 0; j < 2; j++) {
	cout << mat[i][j] << " ";
	}
	cout << "]\n";
	}*/


	printf("\n\n");
	system("pause");


}