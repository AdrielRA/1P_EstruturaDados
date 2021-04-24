#include <iostream>
#include <locale.h>
#include <string>

using namespace std;



int main() {
	int x[100], y[100], i, n;

	system("cls");

	/*cout << "Informe o tamanho do vetor: ";*/
	cin >> n;
	if (n < 0 || n > 100) {
		cout << "Tamanho inválido!";
		return EXIT_FAILURE;
	}

	for (i = 0; i < n; i++) {
		/*cout << "X[" << i+1 << "]: ";*/
		cin >> x[i];
	}

	for (i = 0; i < n; i++) {
		/*cout << "Y[" << i+1 << "]: ";*/
		cin >> y[i];
	}

	cout << "___________________________\n";
	cout << "\nSoma dos Valores de X e Y:\n";
	cout << "___________________________\n| ";
	for (i = 0; i < n; i++) {
		cout << x[i] + y[i] << " | ";
	}
	
	/*cout << "\n\n";
	system("pause");*/

	return EXIT_SUCCESS;
}