#include <iostream>
using namespace std;

int main(){
    float a = 0,b = 0,c = 0;
    float area_Triangolo, area_Quadrato, area_Rettangolo, area_Trapezio;//Qui vanno definite le variabili

    cin >> a >> b >> c;

    area_Triangolo = (a*b)/2;
    area_Quadrato = a*a;
    area_Rettangolo = a*b;
    area_Trapezio = ((a+b)*c)/2;//Qui va scritto il codice per eseguire i calcoli richiesti

    cout << area_Triangolo << endl;
    cout << area_Quadrato << endl;
    cout << area_Rettangolo << endl;
    cout << area_Trapezio << endl;
    return 0;
}
