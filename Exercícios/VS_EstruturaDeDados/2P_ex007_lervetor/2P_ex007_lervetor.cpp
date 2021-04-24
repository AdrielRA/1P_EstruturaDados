#include <iostream>
#include <locale.h>
#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

void main() {

	setlocale(LC_ALL, "Portuguese");


	int vet[10];
	int i, j, aux, num;

	cout << "=============================================\n\n";
	cout << "Contagem Crecente:\n\n| ";
	for (i = 0; i <= 10; i++) {
		cout << i << " | ";
	}

	cout << "\n\n=============================================\n\n";

	cout << "Contagem Regressiva:\n\n| ";
	for (i = 10; i >= 0; i--) {
		cout << i << " | ";
	}

	cout << "\n\n=============================================\n\n";


	for (i = 0; i < 10; i++) {
		cout << "X[" << i << "]: ";
		cin >> num;
		j = i - 1;
		while (j >= 0 && num < vet[j]) {
			vet[i] = vet[j];
			j--;
		}
		j++;
		vet[j] = num;

	}

	cout << "\nValores Ordenados:\n\n| ";
	for (i = 0; i < 10; i++) {
		cout << vet[i] << " | ";
	}



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