#include <iostream>
using namespace std;

void imprimirArreglo(double a[], int n){
	
	for(int i=0; i<n; i++){
		cout << a[i] << " ";
	}
}
int main(){
	
	int tamanio;
	cout << "Indique la cantidad de indices del arreglo: ";
	cin >> tamanio;
	double arregloOriginal[tamanio];
	
	cout << endl << endl << "Ingrese el valor de cada indice: " << endl << endl;
	for(int i=0; i<tamanio; i++){
		cout << i << ". indice: ";
		cin >> arregloOriginal[i];
	}
	
	cout << endl << endl << "\t";
	imprimirArreglo(arregloOriginal, tamanio);
	cout << endl << endl;
	
	char opcion;
	do{
		cout << "Elige el tipo de metodo de ordenacion" << endl << endl;
		cout << "1. Metodos directos (n^2)" << endl;
		cout << "2. Metodos logaritmicos (n x log n)" << endl;
		cout << "3. Salir" << endl << endl;
		cin >> opcion;
		
		system("cls");
		switch(opcion){
			case '1':
				do{
					cout << endl << "Elige un metodo directo" << endl << endl;
					cout << "A) Ordenacion por intercambio directo" << endl;
					cout << "B) Ordenacion por seleccion directa" << endl;
					cout << "C) Ordenacion por insercion directa" << endl; 
					cout << "D) Salir." << endl << endl;
					cin >> opcion; 
					
					system("cls");
					switch(opcion){
						case 'A':
							do{
								cout << "Elige que tipo de intercambio directo" << endl << endl;
								cout << "a) Intercambio directo por la derecha" << endl;
								cout << "b) Intercambio directo por la izquierda" << endl;
								cout << "c) Intercambio directo con senial" << endl;
								cout << "d) Intercambio directo bidireccional" << endl;
								cout << "e) Salir" << endl << endl;
								cin >> opcion;
								
								system("cls");
								switch(opcion){
									case 'a':
										break;
									case 'b':
										break;
									case 'c':
										break;
									case 'd':
										break;
									case 'e':
										cout << endl << "Volviendo al menu anterior..." << endl << endl;
										break;
									default:
										break;
								}
							} while(opcion!='e');
							break;
						case 'B':
							break;
						case 'C':
							break;
						case 'D':
							cout << endl << "Volviendo al menu anterior..." << endl << endl;
							break;
						default:
							break;
					}
				} while(opcion != 'D');
				break;
			case '2':
				do{
					cout << endl << "Elige un metodo logaritmico" << endl << endl;
					cout << "a) Metodo de Shell" << endl;
					cout << "b) Metodo rapido" << endl;
					cout << "c) Salir" << endl << endl;
					cin >> opcion;
					
					system("cls");
					switch(opcion){
						case 'a':
							break;
						case 'b':
							break;
						case 'c':
							cout << endl << "Volviendo al menu anterior..." << endl << endl;
							break;
						default:
							break;
					}
				} while(opcion != 'c');
				break;
			case '3':
				cout << endl << "Gracias por su uso!" << endl;
				break;
			default:
				cout << endl << "No valido." << endl;
				break;
		}
	} while(opcion != '3');
	cout << endl << "Saliendo del programa..." << endl;
	return 0;
}
