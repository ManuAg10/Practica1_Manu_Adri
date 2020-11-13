#ifndef COCHE_H_INCLUDED
#define COCHE_H_INCLUDED
#include <iostream>

using namespace std;



class Nodo
    {
    private:
        int valor;
        Nodo *siguiente;
        friend class Pila;
        friend class Cola;
    public:
        Nodo(int v, Nodo *sig = NULL)
        {
            valor = v;
            siguiente = sig;
        }
    };
    typedef Nodo *pNodo;

    class Pila
    {
    private:
        pNodo cima;
    public:
        Pila() : cima(NULL) {} //Constructor de la Pila
        ~Pila();
        void apilar(int v);
        int desapilar();
    };
    class Cola
    {
    public:
        Cola() : frente(NULL), final(NULL) {}
        ~Cola();
        void encolar(int v);
        int desencolar();
    private:
        pNodo frente, final;
    };

#endif // COCHE_H_INCLUDED
