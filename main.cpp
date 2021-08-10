#include <iostream>
#include <math.h>

using namespace std; 

int menu(){
	int opcion; 
	
	system ("cls");
	
	cout<<"****************************************\n";
	cout<<"*                MENU                  *\n";
	cout<<"*  1. Area del Rectangulo              *\n";
	cout<<"*  2. Area del Cuadrado                *\n";
	cout<<"*  3. Area del Circulo                 *\n";
	cout<<"*  4. Salir                            *\n";
	cout<<"****************************************\n";
	cout<<"\n";
	cout<<"  Seleccione la opcion: ";
	cin>>opcion;
	
	return opcion;
}
class Formulas{
	public: 
		void areaRectangulo (){
			system ("cls");
			int base, altura, area; 
			cout<<"\n";
			cout<<"***********   Area del Rectangulo  ***********"<<endl;
			cout<<"\n";
			cout<<"Ingrese la base: ";
			cin>>base;
			cout<<"Ingrese la altura: ";
			cin>>altura;
			area= base*altura;
			cout<<"\n"; 
			cout<<"El area es: "<<area<<endl;
			cout<<"\n";
		system ("pause");
		}
			
		void areaCuadrado(){
		system ("cls");
			int lado, area;
			cout<<"\n";
			cout<<"***********   Area del Cuadrado ***********"<<endl;
			cout<<"\n";
			cout<<"Ingrese el lado: ";
			cin>>lado;
			area=lado * lado;
			cout<<"\n";
			cout<<"El area es: "<<area<<endl;
			cout<<"\n";
		system ("pause");
		}
			
		//int areaCuadrado(int lado){
		//	return lado * lado; 
		//}
		void areaCirculo(){
		system ("cls");
			double radio, area; 
			cout<<"\n";
			cout<<"***********   Area del Circulo  ***********"<<endl;
			cout<<"\n";
			cout<<"Ingrese el radio: ";
			cin>>radio;
			cout<<"\n";
			area= M_PI * pow(radio,2);
			cout<<"El area es: "<<area<<endl;
			cout<<"\n";
		system ("pause");
		}	
};

int main(int argc, char** argv) {
	int opt;
	Formulas f;
	
	while (opt!=4){
		opt = menu();
		
		switch(opt){
			
			case 1: 
				f.areaRectangulo();
				break;
			case 2: 
				f.areaCuadrado();
				break;
			case 3:  
				f.areaCirculo();
				break;
			case 4: 
			
				break;
			default: 
				cout<<"Opcion no valida"<<endl;
				cout<<"\n";
				system ("pause");
		}
		
	}
	
	return 0;
}
