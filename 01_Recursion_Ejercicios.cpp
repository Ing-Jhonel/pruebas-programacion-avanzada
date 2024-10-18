#include <iostream>
using namespace std;

double potencia(double a, int b){

    if(b==0){
        return 1;
    } else {
        return a*potencia(a, b-1);
    }
}


int main(){

    char opcion;
    do{
        cout << "Indique el ejercicio de recusividad a realizar: " << endl
            << "A) Potencia de un numero" << endl
            << "B) Buscar elemento de un arreglo" << endl
            << "C) Maximo o mayor elemento de un arreglo" << endl
            << "D) Espejo de un numero" << endl
            << "E) Hanoi" << endl
            << "F) Factorial" << endl;
            << "G) Suma primeros numeros" << endl
            << "H) Combinatoria" << endl
            << "I) Suma elementos array" << endl
            << "J) Multiplicacion" << endl
            << "K) Salir" << endl << endl
            << "= "; cin >> opcion;

            system("cls");
            switch(opcion){
                case 'A':
                double base;
                int exponente;
                cout << "Indique la base: ";
                cin >> base;
                cout << "Indique el exponente: ";
                cin >> exponente;
                cout << "El resultado de " << base << " elevado a la " << exponente << " es: " << potencia(base, exponente) << endl;
                break;
                case 'B':
                double arr[]={1,2,3,4,5,6};
                int n=sizeof(arr)/sizeof(arr[0]);
                cout << "Indique el elemento a buscar: ";
                break;
                case 'C':
                break;
                case 'D':
                break;
                case 'E':
                break;
                case 'F':
                break;
                case 'G':
                break;
                case 'H':
                break;
                case 'I':
                break;
                case 'J':
                break;
                case 'K':
                cout << "Saliendo de programa..." << endl;
                break;
                default:
                break;
            }
    } while(opcion != 'F');
    return 0;
}

