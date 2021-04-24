#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <locale>

using namespace std;

typedef struct
{
	float a1;
	float a2;
} ninho1;

typedef struct
{
	float b1;
	ninho1 b2;
} ninho2;

ninho2 n;

int main() {

	setlocale(LC_ALL, "Portuguese");

	cout << "Informe a1: ";
	cin >> n.b2.a1;
	cout << "Informe a2: ";
	cin >> n.b2.a2;
	cout << "Informe b1: ";
	cin >> n.b1;

	cout << "\nn{b1, b2{a1, a2}} = n{" << n.b1 << ", b2{"<< n.b2.a1 <<", "<< n.b2.a2 <<"}}";

	cout << "\n\n";
	system("pause");
	return EXIT_SUCCESS;
}