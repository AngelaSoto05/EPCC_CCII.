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
	
public://metodos 
	string getNombre() {
		return nombre;
	}
	
	int getTamano() {
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
		nombre = n;
	}
	
	void setTamano(float t) {
		tamano = t;
	}
	
	void setEspecie(string e) {
		especie = e;
	}
	
	void setTipo(string ti) {
		tipo = ti;
	}
	
	void setGenero(string g) {
		genero = g;
	}
	
	
	
	void print() {
		cout << "Nombre: " << nombre << endl;
		cout << "Tamano: " << tamano << endl;
		cout << "Especie: " << especie << endl;
		cout << "Tipo: " << tipo << endl;
		cout << "Género: " << genero << endl;
	}
};

int main() {
	Personaje *p= new Personaje( );
	p->setNombre("Alvaro");
	p->setTamano(1.70);
	p->setEspecie("Humano");
	p->setTipo("Conservador");
	p->setGenero("Masculino");
	p->print();
	
	return 0;
}
