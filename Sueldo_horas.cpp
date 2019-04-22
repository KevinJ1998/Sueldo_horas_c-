#include<iostream>
using namespace std;
int main(){
    int hordia,horatotal=0,numdias=1;
    float sueldo;
    string nombre;
    cout<<"Ingrese el nombre del empleado: ";
    cin>>nombre;
    cout<<"Ingrese el sueldo de "<<nombre<<": ";
    cin>>sueldo;
    
    while (numdias<=5){
        cout<<"Ingrese el # de horas trabajadas el dia "<<numdias<<": ";
        cin>>hordia;
        numdias++;
        horatotal=hordia+horatotal;
    }
    cout<<"Horas trabajadas en la semana: "<<horatotal<<endl;
    cout<<"Sueldo pagado a "<<nombre<<" en la semana: "<<(sueldo*horatotal);
    

    return 0;
}