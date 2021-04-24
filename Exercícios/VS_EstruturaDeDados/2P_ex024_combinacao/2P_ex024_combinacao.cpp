#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string.h>
#include <locale>

using namespace std;


int Fatorial(int);
int Combinar(int, int);

int main() {

	int N, K;

	setlocale(LC_ALL, "Portuguese");

	cout << "________________________________________\n";
	cout << "              COMBINAÇÕES               \n";
	cout << "________________________________________\n\n";

	cout << "Informe N: ";
	cin >> N;
	cout << "Informe K: ";
	cin >> K;

	/*cout << "\nFatorial de N: " << Fatorial(N) << "\n";
	cout << "Fatorial de K: " << Fatorial(K) << "\n";*/

	cout << "\nA combinação de " << N << " e " << K << " é: " << Combinar(N, K);

	cout << "\n\n";

	system("pause");

	return EXIT_SUCCESS;
}

int Fatorial(int N) {

	int F = 1;

	if(N > 1) { F = N * Fatorial(N - 1); }

	return F;
}

int Combinar(int N, int K) {

	return Fatorial(N) / Fatorial(K)*Fatorial(N - K);
}