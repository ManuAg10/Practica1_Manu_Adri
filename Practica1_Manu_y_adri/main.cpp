#include<iostream>
#include<ctime>
#include<iomanip>

using namespace std;
int main()
{
    string listcolor[6] = {"Amarillo","Rojo","Blanco","Negro","Azul","Gris"};
    string listmodelo[4] = {"Ibiza","Arona","Ateca","Toledo"};
    string listestado[5] = {"FI","FF","CI","CI","CA"};
    string listletras[27] = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
    string listnumeros[10] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
    srand(time(NULL));
    struct Coche
    {

        struct Bastidor
        {
            string inicio;
            string letra;
            string fin;
        } bastidor;

        string matricula;
        string grado;
        string modelo;
        string color;
        string estado;
        string bastidorcompleto;



    } coche;
    coche.color = listcolor[rand()%6];
    coche.modelo = listmodelo[rand()%4];
    coche.estado = listestado[rand()%5];
    coche.bastidor.inicio = listnumeros[rand()%10] + listnumeros[rand()%10];
    coche.bastidor.letra = listletras[rand()%27];
    coche.bastidor.fin = listnumeros[rand()%10] + listnumeros[rand()%10] + listnumeros[rand()%10] + listnumeros[rand()%10];
    coche.bastidorcompleto = coche.bastidor.inicio + coche.bastidor.letra + coche.bastidor.fin;



    //cout<<coche.bastidor.inicio<<coche.bastidor.letra<<coche.bastidor.fin<<endl;
    cout<<coche.bastidorcompleto<<endl;


    return 0;
}
