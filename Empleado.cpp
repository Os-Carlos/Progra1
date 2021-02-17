#include "Persona.cpp"
#include <iostream>

using namespace std;

class Empleado : Persona{
	//atributos
	private :	string puesto;
				int codigo;
				float sueldo;
					
	//constructor
	public :
		Empleado(){
		}
		Empleado(string nom, string ape, string dir, int tel, int cod, string pue, float sue) : Persona(nom,ape,dir,tel){
			codigo=cod;
			puesto=pue;
			sueldo=sue;
		}
	
	//metodos
	void mostrar(){
		cout<<"________________________________"<<endl;
		cout<<codigo<<", "<<nombres<<", "<<apellidos<<", "<<puesto<<", "<<sueldo<<endl;
	}
};
