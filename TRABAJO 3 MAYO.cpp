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
	Personaje personajes[3];
	
	personajes[0].setNombre("Alvaro");
	personajes[0].setTamano(1.70);
	personajes[0].setEspecie("Humano");
	personajes[0].setTipo("Conservador");
	personajes[0].setGenero("Masculino");
	
	personajes[1].setNombre("German");
	personajes[1].setTamano(1.80);
	personajes[1].setEspecie("Humano");
	personajes[1].setTipo("Extrovertido");
	personajes[1].setGenero("Masculino");
	
	personajes[2].setNombre("Angela");
	personajes[2].setTamano(1.60);
	personajes[2].setEspecie("Humano");
	personajes[2].setTipo("Introvertida");
	personajes[2].setGenero("Femenino");
	
	for (int i = 0; i < 3; i++) {
		cout << "Hola, soy " << personajes[i].getNombre() << endl;
		personajes[i].print();
		cout << endl;
	}
	
	return 0;
}
