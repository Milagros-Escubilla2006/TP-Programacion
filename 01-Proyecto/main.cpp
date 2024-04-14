#include <iostream> // Incluye la biblioteca que permite realizar operaciones de entrada/salida.
#include <string>
#include <cmath> // Para usar sqrt()
// Utiliza el espacio de nombres estándar para evitar escribir 'std::' antes de las operaciones de I/O.
using namespace std;
int main (){
    int opcionSeleccionada = 0;
    float base,altura,area,perimetro,metros,centimetros,pesos, cotizacion, dolares,ladoTriangulo, areaTriangulo, perimetroTriangulo,segundos,distancia,sonido;
    double radio, areaCircunferencia, perimetroCircunferencia;
    string nombre, apellido,direccion,localidad,provincia,pais,telefono;
    int edad = 0;
    const double Pi = 3.14; 
    const double velosidadSonido = 343.0; 
    cout << "1. Calcular el área y el perímetro de un rectángulo:" << endl;
    cout << "2. Convertir cm a metros:" << endl;
    cout << "3. Convertir Pesos Argentinos a Reales Brasileros:" << endl;
    cout << "4. Calcular el área y el perímetro de un triángulo equilátero:" << endl;
    cout << "5. Calcular el área y el perímetro de una circunferencia:" << endl;
    cout << "6.Calcular la distancia a la que se encuentra una tormenta:" << endl;
    cout << "7.Imprimir datos personales:" << endl;
    cout << "8.Salr" << endl;
    cin >> opcionSeleccionada;


    switch (opcionSeleccionada)
    {
        case 1:    
            // Pide al usuario que ingrese la longitud y el ancho del rectángulo.
            cout << "Ingrese la base del rectangulo: ";
            cin >> base; // Lee el valor proporcionado por el usuario para el largo.
            cout << "Ingrese la altura del rectangulo: ";
            cin >> altura; // Lee el valor proporcionado por el usuario para el ancho.

            // Calcula el área del rectángulo (largo * ancho).
            area = base * altura;
            // Calcula el perímetro del rectángulo (2 * (largo + ancho)).
            perimetro = 2 * (base + altura);
            // Imprime el área y el perímetro del rectángulo.
            cout << "El area del rectángulo es: " << area << endl;
            cout << "El perimetro del rectángulo es: " << perimetro << endl;
        break;
        case 2:
            cout << "introduce la longitud en centimetros:";
            cin>> centimetros;
            
            metros = centimetros/100;

            cout <<"metros equivalen a:" << metros << endl;
        break;  
        case 3:         
            //solicitar al usuario la cantidad de pesos y la cotizacion
            cout<< "ingrese la cantidad de pesos argentinos:";
            cin>> pesos;
            cout<< "ingrese la cotizacion del dolar estadouniense:";
            cin>> cotizacion;
            //convertir pesos a dolares
            dolares = pesos/ cotizacion;
            //mostrar el resultado
            cout<<pesos<< "pesos argentinos evaluan a:" <<dolares<< "dolares estadouniense." << endl;
        break;         
        case 4:
            cout << "Ingresa la longitud del lado del triángulo equilátero: ";
            cin >> ladoTriangulo;

            // Calcular el perímetro
            perimetroTriangulo = 3 * ladoTriangulo;

            // Calcular el área
            areaTriangulo = (sqrt(3) / 4) * ladoTriangulo * ladoTriangulo;

            // Mostrar resultados
            cout << "El perímetro del triángulo equilátero es: " << perimetroTriangulo << endl;
            cout << "El área del triángulo equilátero es: " << areaTriangulo << endl;
        break;
        case 5:
            cout << "Por favor, ingresa el radio de la circunferencia: ";
            cin >> radio;

            areaCircunferencia = Pi * radio * radio; // Área = π * r^2
            perimetroCircunferencia = 2 * Pi * radio; // Perímetro = 2 * π * r

            cout << "El área de la circunferencia es: " << areaCircunferencia << endl;
            cout << "El perímetro de la circunferencia es: " << perimetroCircunferencia << endl;
        break;
        case 6:

            cout<< "Ingrese los segundos transcurridos entre el rempalago y el trueno: ";
            cin>> segundos;
            if (segundos < 0){
                cout<< "el tiempo no puede ser negativo";
                return 0;
            }
            // calcular la distancia
            distancia = velosidadSonido * segundos;
            cout << "la distancia a la que se encuentra la tormenta es de: " << distancia << "metros." << endl;
        break;
        case 7:
               // Solicitud de datos al usuario
            cout << "Por favor, ingresa tu nombre: ";
            cin >> nombre;

            cout << "Por favor, ingresa tu apellido: ";
            cin >> apellido;

            cout << "Por favor, ingresa tu dirección (sin espacios): ";
            cin >> direccion;

            cout << "Por favor, ingresa tu localidad (sin espacios): ";
            cin >> localidad;

            cout << "Por favor, ingresa tu provincia (sin espacios): ";
            cin >> provincia;

            cout << "Por favor, ingresa tu país (sin espacios): ";
            cin >> pais;

            cout << "Por favor, ingresa tu teléfono (sin espacios): ";
            cin >> telefono;

            cout << "Por favor, ingresa tu edad: ";
            cin >> edad;

            // Mostrar los datos recogidos
            cout << "\nLos datos ingresados son:" << endl;
            cout << "Nombre: " << nombre << endl;
            cout << "Apellido: " << apellido << endl;
            cout << "Dirección: " << direccion << endl;
            cout << "Localidad: " << localidad << endl;
            cout << "Provincia: " << provincia << endl;
            cout << "País: " << pais << endl;
            cout << "Teléfono: " << telefono << endl;
            cout << "Edad: " << edad << endl;
        break;
        default:
            cout << "Saliendo... ";
            return 0;
        break;
    }
    
    return 0;
}