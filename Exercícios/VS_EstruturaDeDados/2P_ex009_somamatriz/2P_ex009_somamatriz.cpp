#include <iostream>
#include <locale.h>
#include <string>
#include <iomanip> // utilizada para alinhar valores da matriz a direira ou a esquerda

using namespace std;

int main(void) {

	setlocale(LC_ALL, "Portuguese");

	int a[100][100], b[100][100], C[100][100], l, c, i, j;

	/*cout << "Informe núm. de linhas das matrizes: ";*/
	cin >> l;
	//while (l <0 || l > 100) {
	//	cout << "Número de linhas inválido!";
	//	/*cout << "Informe núm. de linhas das matrizes: ";*/
	//	cin >> l;
	//}

	/*cout << "Informe núm. de colunas das matrizes: ";*/
	cin >> c;
	//while (c <0 || c > 100) {
	//	cout << "Número de colunas inválido!";
	//	/*cout << "Informe núm. de colunas das matrizes: ";*/
	//	cin >> c;
	//}

	for (i = 0; i < l; i++) {
		for (j = 0; j < c; j++) {
			/*cout << "A[" << i << "][" << j << "]: ";*/
			cin >> a[i][j];
		}
	}

	for (i = 0; i < l; i++) {
		for (j = 0; j < c; j++) {
			/*cout << "B[" << i << "][" << j << "]: ";*/
			cin >> b[i][j];
		}
	}

	system("cls");

	cout << "\nMatriz resultante de A + B:\n\n";
	for (i = 0; i < l; i++) {
		cout << "[ ";
		for (j = 0; j < c; j++) {
			C[i][j] = a[i][j] + b[i][j];
			cout << setw(3) << C[i][j] << " ";
		}
		cout << "]\n";
	}
	
	/*cout << "\n\n";
	system("pause");*/

	return EXIT_SUCCESS;
}