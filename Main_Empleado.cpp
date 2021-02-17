#include "Empleado.cpp"
#include <iostream>

using namespace std;

main(){
	string nombres, apellidos, direccion, puesto;
	int codigo, telefono;
	float sueldo;
	
	cout<<"Ingrese Codigo: ";
	cin>>codigo;
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos: ";
	cin>>apellidos;
	cout<<"Ingrese Direccion: ";
	cin>>direccion;
	cout<<"Ingrese Telefono: ";
	cin>>telefono;
	cout<<"Ingrese Puesto: ";
	cin>>puesto;
	cout<<"Ingrese Sueldo: ";
	cin>>sueldo;
	
	//instanciar un objeto
	Empleado obj = Empleado(nombres, apellidos, direccion, telefono, codigo, puesto, sueldo);
	obj.mostrar();
}
