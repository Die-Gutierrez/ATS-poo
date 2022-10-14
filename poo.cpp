#include <iostream>

using namespace std;

class Persona
{
	// Declaramos atributos para la clase.
	private:
		// Los atributos o caracteristicas, normalmente se designan mediante un 't_dato'+ variables.
		int dni;
		string name;
	// Declaramos metodos para la clase
	public: 
		//Declaramos nuestro constructor.
		//Se declara como funcion, y tiene los parametros de los 'atributos'.
		Persona(int, string); 
		//Los metodos se declaran como funciones.
		void caminar(); 
		void correr();
		void comer();
};
//Constructor que nos sirve para inicializar los atributos.
Persona::Persona(int _dni, string _name)
{
	dni = _dni;
	name = _name;
}
void Persona::caminar()
{
	cout<<"Soy "<<name<<" y estoy caminando"<<endl;
}
void Persona::correr()
{
	cout<<"Soy "<<name<<" y estoy corriendo"<<endl;
}
void Persona::comer()
{
	cout<<"Soy "<<name<<" y estoy comiendo, mi dni es: "<<dni<<endl;
}
int main()
{
	Persona p1 = Persona(20, "Diego");
	Persona p2(21, "Alonso");

	p1.caminar();
	p1.correr();
	p1.comer();
	p2.caminar();
	p2.correr();
	p2.comer();
	
	return 0;
}
