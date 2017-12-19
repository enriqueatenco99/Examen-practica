









#include <iostream>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)

 {
 	string nombre="",grupo="",licenciatura="",fecha="",opcion="";
 	 
 	 int pregunta1,pregunta2,pregunta3,pregunta4,pregunta5, suma,num;
 	 
    cout<<"ingresa tu nombre"<< endl;
    cin>> nombre;
    cout<<"ingresa tu grupo"<<endl;
    cin>> grupo;
    cout<<"ingresa tu licenciatura"<< endl;
    cin>> licenciatura;
    cout<<"ingresa la fecha"<<endl;
    cin>> fecha;
    cout<<"Bienvenido al examen " << nombre<< " eres del grupo "  << grupo << " eres del grupo " << licenciatura << " perteneces a la licenciatura " << fecha << " fecha 15 de diciembre del 2017 " << endl;
    

    	cout<<"pregunta 1 ?"<< endl;
	cout<<"QUE ES C++?\n"<<endl;cout<<"1)un programa\n"<<endl;cout<<"2)un juego\n"<<endl;cout<<"3)una variable"<<endl;cout<<"indica tu respuesta"<<endl;
 	cin>>pregunta1;
    
    
	if (pregunta1==1){
	
pregunta1+1;
	}
	else{
	}pregunta1=0;
 
 		cout<<"pregunta 2"<<endl;
 	cout<<"2.-para que sirven las comillas?\n"<<endl;cout<<" 1.-ingresar texto\n"<<endl;cout<<"2.- ingresar variables\n"<<endl;cout<<"3.-cerrrar\n"<<endl;
 	cin>>pregunta2;
 	if(pregunta2==1){
	 
	 pregunta2+1;
	 }
	 else{
	 }pregunta2=0;
 	
 	
 	cout<<"pregunta 3"<<endl;
 	
 	cout<<"3.-para que sirve c++?\n"<<endl;cout<<"1.-jugar\n"<<endl;cout<<"2.-programar\n"<<endl;cout<<"3.-calcular"<<endl;
 	cin>>pregunta3;
 	if(pregunta3==1){
 		pregunta3+1;
 	}
 	else{
	 }pregunta3=0;
 	
 	cout<<"PREGUNTA 4"<<endl;
 	cout<<"4.-que utilidad tiene el punto y coma en c++?\n"<<endl;cout<<"1.-organizar\n"<<endl;cout<<"2.-cerrrar el programa c++\n"<<endl;cout<<"3.-ñcerrar una linea de codigo\n"<<endl;
 	cin>>pregunta4;
 	
 	if(pregunta4==1){
 		pregunta4+1;
	 }
	 else{
	 }pregunta4=0;
 	

 	 cout<<"PREGUNTA 5"<<endl;
    cout<<"5.-para que se utiliza la sentecia for?\n"<<endl;cout<<"1.-compilar\n"<<endl;cout<<"2.-ejecutar\n"<<endl;cout<<"3.-repeticion\n"<<endl;
 	
 	cin>>pregunta5;
 	if(pregunta5==1){
	 
	 pregunta5+1;
	 }
	 else{
	 }pregunta5=0;
 	
}
