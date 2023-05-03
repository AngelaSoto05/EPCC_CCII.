
//METODOS CONSTRUCTORES Y MODIFICADORES (GETTERS Y SETTERS)
#include <iostream>
#include <string>

using namespace std;

class Personaje {
private://atributos 
	string nombre;
	float tamano;
	string especie;
	string tipo;
	string genero;
	
public://metodos es el constructo que nos sirve para crear nombre ,,
	Personaje(string nombre,float tamano,string especie,string tipo, string genero ){
		this->nombre = nombre;// nos referimos a l atributo nombre
		this->tamano = tamano;// el atributo es igual al nombre que nos entregaron mas antes en la linea 16
		this->especie = especie;
		this->tipo = tipo;
		this->genero = genero;
		
	}
	
	string getNombre() {//retornar el atributo que yo quiero 
		return nombre;
	}
	
	float getTamano() {
		return tamano;
	}
	
	string getEspecie() {
		return especie;
	}
	
	string getTipo() {
		return tipo;
	}
	
	string getGenero() {
		return genero;
	}
	void setNombre(string n) {
		this->nombre = nombre;
	}
	
	void setTamano(float t) {
		this->tamano = tamano;
	}
	
	void setEspecie(string e) {
		this->especie = especie;
	}
	
	void setTipo(string ti) {
		this->tipo = tipo;
	}
	
	void setGenero(string g) {
		this->genero = genero;
	}
	
	
	void print (){// imprimimos un objeto 
		cout << "Nombre: " << nombre << endl;
		cout << "Tamano: " << tamano << endl;
		cout << "Especie: " << especie << endl;
		cout << "Tipo: " << tipo << endl;
		cout << "Género: " << genero << endl;
	}
};

int main() {
	Personaje *p= new Personaje("Alvaro",1.70,"Humano","Conservador" ,"Masculino");
	p->print();
	
	return 0;
}
