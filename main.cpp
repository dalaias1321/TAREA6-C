#include <iostream>

using namespace std;


class Operaciones {
	public:
	    int n1, n2;
	    
	    void oparearectangulo(){
	    	cout<<" Ingrese la base: ";
	    	cin>>n1;
	    	cout<<" Ingrese la altura: ";
	    	cin>>n2;
	    	
	    	cout<<"El area del rectangulo es: "<<(n1 * n2)<<endl;
		}
};

int main (int argc, char** argv) {
    Operaciones op;
    op.oparearectangulo();
    

return 0;
}


 class Operaciones2 { 
   public:
   	
	int n1, n2;
	
    void opareacuadrado(){
    cout<<"Ingrese lado a"<<endl;
	cin>>n1;
	cout<<"Ingrese lado b"<<endl;
	cin>>n2;
	
	cout<<"El area del cuadrado es: "<<(n1 * n2)<<endl;	
    	
	}
	
};

int main(int argc, char** argv) {
	Operaciones op;
	op.oparearectangulo();

return 0;
}



