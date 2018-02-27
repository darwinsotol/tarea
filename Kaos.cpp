#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
	float peso, precio, costo; //Se crearon las tres variables numericas a utilizar
	char nombre[35], cedula[13];
	cout << "Digite su nombre: ";
	cin.getline(nombre, 35); //Se recibe un nombre del usuario y se da suficiente espacio de linea para un nombre completo
	
	cout << "Digite su numero de cedula (sin guiones): ";
	cin.getline(cedula,13); //Se recibe el numero de cedula como un arreglo de caracteres ya que no se va a utilizar de forma numerica
	
	cout << "Digite el peso (en libras) y precio (en dolares) de su articulo separados por espacio: ";
	cin >> peso >> precio;
	
	if(peso<50){
		if(precio>75) {
		costo = 0;
		}
		else if(precio > 50 && precio <= 75){
		costo = 5;
		}
		else if(precio > 25 && precio <= 50){
		costo = 10;
		}
		else if(precio >= 0 && precio <= 25){
		costo = 15;
		}
	}
	else{
		float a;
		a = pow(1.01,-9.21*peso);
		costo = 25*(1-a);
	}
	
	cout << setprecision(2) << fixed;
	cout << setw(40) << nombre << " " << setw(18) << cedula << " " << setw(8) << peso << " " << setw(8) << precio << " " << setw(7) << costo << " " << endl;

	return 0;
}
