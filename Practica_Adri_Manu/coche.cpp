#include<iostream>
#include<ctime>
#include<iomanip>
#include "coche.h"

using namespace std;

//********COLAS************
//Destructor
Cola::~Cola()
{
    while(frente) desencolar();
}
//Añadir elemento en la cola
void Cola::encolar(int v)
{
    pNodo nuevo;
    nuevo = new Nodo(v); // Se crea un nodo nuevo
    // Si cola no vacía, se añade el nuevo a continuación de ultimo
    if(final) final->siguiente = nuevo;
    //El último elemento de la cola es el nuevo nodo
    final= nuevo;
    // Si frente es NULL, la cola está vacía y el nuevo nodo pasa a ser el primero
    if(!frente) frente = nuevo;
}
int Cola::desencolar()
{
    pNodo nodo; //Var aux para manipular nodo
    int v; //Var aux para retorno del valor
    // Nodo apunta al primer elemento de la pila
    nodo = frente;
    if(!nodo) return 0; // Si no hay nodos en la pila se devuelve 0
    //Se asigna a frente la dirección del segundo nodo
    frente = nodo->siguiente;
    //Se guarda el valor de retorno
    v = nodo->valor;
    delete nodo; // Se borra el nodo
    // Si cola vacía, ultimo debe ser NULL también
    if(!frente) final = NULL;
    return v;
}

//********PILAS************
//Destructor de la Pila
Pila::~Pila()
{
    while(cima) desapilar();
}
//Meter elemento en la Pila
void Pila::apilar(int v)
{
    pNodo nuevo; //Var aux para manipular el nuevo nodo
//Se crea un nodo nuevo
    nuevo = new Nodo(v, cima);
//El comienzo de la pila es el nuevo nodo
    cima = nuevo;
}
int Pila::desapilar()
{
    pNodo nodo; //Var aux para manipular el nodo
    int v; //Var aux para el retorno del valor del nodo
    if(!cima) return 0; // Si no hay nodos en la pila se devuelve 0
// Nodo apunta al primer elemento de la pila
    nodo = cima;
//Se asigna a pila toda la pila menos el primer elemento
    cima= nodo->siguiente;
//Se guarda el retorno del valor del nodo
    v = nodo->valor;
//Se borra el nodo
    delete nodo;
    return v;
}







int Coche()
{
    string listcolor[6] = {"Amarillo","Rojo","Blanco","Negro","Azul","Gris"};
    string listmodelo[4] = {"Ibiza","Arona","Ateca","Toledo"};
    string listestado[5] = {"FI","FF","CI","CI","CA"};
    string listletras[27] = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
    string listnumeros[10] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
    srand(time(NULL));

    struct Coche
    {
        string matricula;
        string grado;
        string modelo;
        string color;
        string estado;
        string bastidor;



    } coche;



    coche.color = listcolor[rand()%6];
    coche.modelo = listmodelo[rand()%4];
    coche.estado = listestado[rand()%5];
    coche.bastidor = listnumeros[rand()%10] + listnumeros[rand()%10]+ listletras[rand()%27]+ listnumeros[rand()%10] + listnumeros[rand()%10] + listnumeros[rand()%10] + listnumeros[rand()%10];



    return 0;
}



