#include <iostream>
#include <string>
//0 false
// 1>= true
/*
Con inicialización:
int arreglo = [1,2,3,4,5];
Sin inicializacion
int arreglo[100];
*/

using namespace std;

bool is_primo(int x) {
	if (x <= 1) {
		return false;
	}
	for (int i = 2; i * i <= x; i++) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;
}

float promedio(int *x , int tam) {
	float total = 0;
	for (int i = 0; i <= tam - 1; i++) {
		total = total + x[i];
	}
	float res = total / tam-1 ;
	return res + 1;
}

int main()
{
	string opcion;
	cout << "Bienvenido!\n\nPorfavor selecciona una opcion\n" << endl;
	cout << "1)Es primo?" << endl;
	cout << "2)Promedio \n" << endl;
	cout << "Opcion: "; getline(cin, opcion);
	if (opcion == "1") {
		int numeroAEvaluar;
		cout << "Ingrese el numero a evaluar: "; cin >> numeroAEvaluar;
		bool res = is_primo(numeroAEvaluar);
		if (res == 1) {	
			cout << "El número evaluado es : Verdadero" << endl;
		}
		else {
			cout << "El número evaluado es : Falso" << endl;
		}
	}
	else if (opcion == "2") {
		int tam;
		int arreglo[100];
		cout << "Ingrese el tamaño de la lista: "; cin >> tam;
		if (tam <= 0) {
			cout << "El tamaño de la lista no puede ser 0 ni negativo!" << endl;
			main();
		}
		else {
			for (int i = 0; i < tam; i++) {
				int valor;
				cout << "Ingrese un valor: "; cin >> valor;
				arreglo[i] = valor;
			}
			float res1 = promedio(arreglo , tam);
			cout << "El promedio es: " << res1 << endl;
		}
	}
} 