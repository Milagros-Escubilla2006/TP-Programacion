#include <iostream> // Incluye la biblioteca que permite realizar operaciones de entrada/salida.
#include <string>
#include <cmath> // Para usar sqrt()
// Utiliza el espacio de nombres estándar para evitar escribir 'std::' antes de las operaciones de I/O.
using namespace std;
#include <cctype>  // Para usar la función tolower()
using namespace std;

int main() {
	
    char c;
    int opcion; 
    int anio; 
    float numero1, numero2; 
    int numeroParaDias; 
    int anioDeNacimiento, edad,anioActual, numero_1, numero_2, numero_3;


    cout<<"1-verificar si  un caracter es vocal o consonante"<< endl;
    cout<<"2- verificar si un año es bisiesto"<< endl;
    cout<<"3- verificar si es suma, resta, multiplicacion, division"<< endl;
    cout<<"4- verificar si es numeroparadias"<< endl;
    cout<<"5- verificar si es mayor de edad o menor"<< endl;
    cout<<"6- verificar si cual de los tres numeros es mayor"<< endl;

    cout<<"Seleccione una opcion: ";
    cin>>opcion;
    switch (opcion)
    {
        case 1:
            // Pedir al usuario que ingrese un carácter
            cout << "Ingrese un caracter: ";
            cin >> c;

            // Convertir el caracter a minúscula para simplificar la comprobación
            c = tolower(c);

            // Verificar si el caracter es una letra y si es una vocal o consonante
            if (isalpha(c)) {  // Comprobar si el caracter es alfabético
                if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                    cout << c << " es una vocal." << endl;
                } else {
                    cout << c << " es una consonante." << endl;
                }
            } else {
                cout << c << " no es una letra del alfabeto." << endl;
            }
            break;
        case 2:
            // Pedir al usuario que ingrese un año
            cout << "Ingrese un año para verificar si es bisiesto o no: ";
            cin >> anio;

            // Verificar si el año es bisiesto
            if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
                cout << anio << " es un año bisiesto." << endl;
            } else {
                cout << anio << " no es un año bisiesto." << endl;
            }
        break;
        case 3:
            char operacion;
            //solicitar al usuiario ingresar dos numeros

            cout<< "ingrese el primer numero:";
            cin>> numero1;

            cout<<"ingrese el segundo numero:";
            cin>> numero2;

            //solicitar al usuario seleccionar una operacion

            cout<< "solicite la operacion a realizar (+ para sumar,* para multiplicar, - para restar, / para divicion):";
            cin>> operacion;

             // realizar la operacion seleccionada e imprimir resultados

            switch (operacion){
            case '+':
            cout<< "el resultado de la suma es:" <<numero1 + numero2<< endl ;
                
                break;
            case '*':
            cout<< " el resultado de la multiplicacion es:"<< numero1 * numero2<< endl;

              break;

              case '-':
            cout<< "el resultado de la resta es:" <<numero1 - numero2<< endl;

             break;

             case '/':
             if (numero2 !=0){
                cout<< "el resultado de la division es:"<< numero1 / numero2<< endl;
             } else{
                cout<< "error: No se puede dividir por cero."<< endl;
             }
            break;

            default:
                cout<< "operacion no validad."<< endl;
            }
            break;
         case 4:
            cout<< "ingrese un numero del 1 al 7:";
            cin>> numeroParaDias;

            switch (numeroParaDias) {
            case 1:
            cout<< "lunes"<< endl;

                break;
            case 2:
            cout<< "martes"<< endl;

                break;

                case 3:
                cout<< "miercoles"<< endl;

                break;

                case 4:
                cout<< "jueves"<< endl;
                break;

                case 5:
                cout<<"viernes"<< endl;

                break;

                case 6: 
                cout<<"sabado"<< endl;

                break;

                case 7:
                cout<<"domingo"<< endl;

                break;

                default:
                cout<< "numero no valido. Porfavor ingrese un numero del 1 al 7:"<< endl;

                break;
            }
            break;

         case 5:
              //solicitar al usuario que agrege su año de nacimiento
            
             anioActual = 2024;
             cout << "ingrese su año de nacimiento";
             cin>> anioDeNacimiento; 
 
             edad= anioActual - anioDeNacimiento;
             if (edad >=18){
              cout<< "la persona es mayor de edad"<< endl;} else{
             cout<< "la persona es menor de edad"<< endl;
             }
            break;
         case 6:
             //Dile al usuario que ingrese tres números enteros 
              cout << "Ingrese el primer numero: ";
             cin >> numero1;

             cout << "Ingrese el segundo numero: ";
             cin >> numero2;

              cout << "Ingrese el tercer numero: ";
              cin >> numero_3;

              // Declarar cuál es el número mayor 
             int mayor = numero1;
              if (numero2 > mayor) {
                mayor = numero2;
             }
             if (numero_3 > mayor) {
              mayor = numero_3;
             }

             // Imprimir los resultados
             cout << "El mayor de los tres números es el: " << mayor << endl;
             break;
    }
}
