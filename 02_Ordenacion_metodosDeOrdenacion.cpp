#include <iostream>
#include <windows.h>
#define color SetConsoleTextAttribute
using namespace std;

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

void imprimirArreglo(double a[], int n, int k){
	
	int i=0;
	color(hConsole, 10);	
	for(; i<n-k; i++){ // imprime los primeros n-k elementos (verde)
		cout << a[i] << " ";
	}
	
	color(hConsole, 4);
	for(; i<n; i++){ // imprime lo que falta por imprimir del arreglo (rojo)
		cout << a[i] << " ";
	}
	
	color(hConsole, 7);
}

void imprimir(double a[], int n){
	
	for(int i=0; i<n; i++){ 
		cout << a[i] << " ";
	}
}
void change(double b[], double a[],int n){
	
	for(int i=0; i<n; i++){
		b[i] = a[i];
	}
}

void intercambioDirectoDerecha(double a[], int n){
	
	int j;
	for(int i=0; i<n-1; i++){
		cout << endl << "Izquierda a derecha (" << 0 << " --> " << n-i-1 << ")" << endl << endl; 
		for(j=0; j<n-i-1; j++){
			imprimirArreglo(a, n, i); cout << endl;
			if(a[j]>a[j+1]){
				double aux = a[j];
				a[j] = a[j+1];
				a[j+1] = aux;
			}
		}
		imprimirArreglo(a, n, i); cout << endl << endl;
	}
}

void intercambioDirectoIzquierda(double a[], int n){
	
	int j=0;
	for(int i=0; i<n-1; i++){
		cout << endl << "Derecha a Izquierda (" << n-i-i << " --> " << 0 << ")" << endl << endl;
		for(j=n-1; j>i; j--){
			imprimirArreglo(a, n, i); cout << endl;
			if(a[j]<a[j-1]){
				double aux = a[j];
				a[j] = a[j-1];
				a[j-1] = aux;
			}
		}
		imprimirArreglo(a, n, i); cout << endl << " sdsd"<< endl;
	}
}

void intercambioDirectoSenial(double a[], int n){
    bool intercambio;
    
    int j;
    imprimirArreglo(a, n, 0); cout << endl;
    for(int i=0; i<n-1; i++){
    	cout << endl << "Izquierda a derecha (" << 0 << " --> " << n-i-1 << ")"<< endl << endl;
        intercambio = false;
        for(j=0; j<n-i; j++){
            if(a[j] > a[j+1]){
                int aux = a[j];
                a[j] = a[j+1];
                a[j+1] = aux;
                intercambio = true;
                imprimirArreglo(a, n, 0); cout << endl;
            }
        }
        if(!intercambio){
        	break;	
		}
    }
    imprimirArreglo(a, n, 0); cout << endl;
}

void intercambioDirectoBidireccional(double a[], int n) { //va de izquierda a drecha mientras ordena y se devuelve pero se resta -1 al fin, y luego -1 al inicio y asi, hasta llegar al medio, hbiendo ordenado todo
    int inicio = 0;
    int fin = n-1;
    bool intercambio;
     
	// el do-while ayuda a que se haga el mismo bucle cada iteracion
    do {
        intercambio = false;
		cout << endl << "Derecha a izquierda (" << inicio << " --> " << fin << ")" << endl << endl;
        for (int i=inicio; i<fin; i++) {
            if (a[i] > a[i+1]) {
                int aux = a[i];
                a[i] = a[i+1];
                a[i+1] = aux;
                intercambio = true;
                imprimirArreglo(a, n, 0); cout << endl;
            }
        }
        fin--;

        if (!intercambio) break;

        intercambio = false;
		cout << endl << "Izquierda a derecha (" << inicio << " <-- " << fin << ")" << endl << endl;
        for (int i=fin; i>inicio; i--){
            if (a[i]<a[i-1]) {
                int aux = a[i];
                a[i] = a[i-1];
                a[i-1] = aux;
                intercambio = true;
                imprimirArreglo(a, n, 0); cout << endl;
            }
        }
        inicio++;

    } while (inicio <= fin);
}

int main(){
	
	int tamanio;
	cout << "Indique la cantidad de indices del arreglo: ";
	cin >> tamanio;
	double arregloOriginal[tamanio];
	double arregloCopia[tamanio];
	cout << endl << endl << "Ingrese el valor de cada indice: " << endl << endl;
	for(int i=0; i<tamanio; i++){
		cout << i << ". indice: ";
		cin >> arregloOriginal[i];
		arregloCopia[i] = arregloOriginal[i];
	}
	
	cout << endl << endl << "\t";
	imprimir(arregloOriginal, tamanio);
	cout << endl << endl;
	
	char opcion;
	do{
		cout << "Elige el tipo de metodo de ordenacion" << endl << endl;
		cout << "1. Metodos directos (n^2)" << endl;
		cout << "2. Metodos logaritmicos (n x log n)" << endl;
		cout << "3. Salir" << endl << endl;
		cin >> opcion;
		
		switch(opcion){
			case '1':
				do{
					system("cls");
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
								system("cls");	
								cout << "Elige que tipo de intercambio directo" << endl << endl;
								cout << "a) Intercambio directo por la derecha" << endl;
								cout << "b) Intercambio directo por la izquierda" << endl;
								cout << "c) Intercambio directo con senial" << endl;
								cout << "d) Intercambio directo bidireccional" << endl;
								cout << "e) Salir" << endl << endl;
								cin >> opcion;
								
								system("cls");
								cout << "Antes" << endl << endl << "\t";
								imprimir(arregloOriginal, tamanio);
								cout << endl << endl << "Proceso" << endl << endl;
								switch(opcion){
									case 'a':
										intercambioDirectoDerecha(arregloCopia, tamanio);
										break;
									case 'b':
										intercambioDirectoIzquierda(arregloCopia, tamanio);
										break;
									case 'c':
										intercambioDirectoSenial(arregloCopia, tamanio);
										break;
									case 'd':
										intercambioDirectoBidireccional(arregloCopia, tamanio);
										break;
									case 'e':
										cout << endl << "Volviendo al menu anterior..." << endl << endl;
										break;
									default:
										cout << endl << "No valido." << endl << endl;
										break;
								}
								cout << endl << endl << "Despues" << endl << endl << "\t";
								imprimir(arregloCopia, tamanio);
								cout << endl << endl;
								change(arregloCopia, arregloOriginal,tamanio);
								system("pause");
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
							cout << endl << "No valido." << endl << endl;
							break;
					}
				} while(opcion != 'D');
				break;
			case '2':
				do{
					system("cls");
					cout << endl << "Elige un metodo logaritmico" << endl << endl;
					cout << "a) Metodo de Shell" << endl;
					cout << "b) Metodo rapido" << endl;
					cout << "c) Salir" << endl << endl;
					cin >> opcion;
					
					
					switch(opcion){
						case 'a':
							break;
						case 'b':
							break;
						case 'c':
							cout << endl << "Volviendo al menu anterior..." << endl << endl;
							break;
						default:
							cout << endl << "No valido." << endl << endl;
							break;
					}
				} while(opcion != 'c');
				break;
			case '3':
				cout << endl << "Gracias por su uso!" << endl;
				break;
			default:
				cout << endl << "No valido." << endl << endl;
				break;
		}
	} while(opcion != '3');
	cout << endl << "Saliendo del programa..." << endl;
	return 0;
}
