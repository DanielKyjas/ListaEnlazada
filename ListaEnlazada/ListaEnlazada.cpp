//staEnlazada.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

class Nodo
{
public:
    int numeroNodo;
    Nodo* siguiente; 
};
Nodo* nuevoNodo(int NumeroNodo, Nodo* siguiente)
{
    Nodo* nodo = new Nodo;
    nodo->numeroNodo = NumeroNodo;
    nodo->siguiente = siguiente;

    return nodo; 
}

/*Nodo* listas()
{
    bool masnodo;
    while(masnodo){
        std::cout << "Quieres agregar otro nodo? ";
        std::cin >> masnodo;
        if (masnodo == true)
        {
            Nodo* nodo = new Nodo;
        }
    }
    //Lista ingenua1
    /*Nodo* primero = nuevoNodo(1);
    Nodo* segundo = nuevoNodo(2);
    Nodo* tercero = nuevoNodo(3);

    Nodo* head = primero;
    primero->siguiente = segundo;
    segundo->siguiente = tercero; happy happy
    
    //Lista ingenua 2
     Nodo* head = nuevoNodo(1, nuevoNodo(2, nuevoNodo(3, nullptr)));
    return head;
}*/

void imprimirLista(Nodo* primernodo)
{
    Nodo* apunta = primernodo;
    while (apunta)
    {
        std::cout << "[ " << apunta->numeroNodo << " ]-> ";
        apunta = apunta->siguiente;
    }
    std::cout << "[NULL] ";
}
class Nodo
{
public:
    int numeroNodo;
    Nodo* siguiente;
};
class Lista
{
    Nodo* PrimerNodo;
    bool listavacia()
    {
        return PrimerNodo == NULL;
    };
public:
    Lista()
    {
        PrimerNodo = NULL; 
    }

    ~Lista() 
    {
        if (!listavacia())
        {
            Nodo* NodoActual = PrimerNodo;
            Nodo* Ntemporal; 
            while (NodoActual != NULL)
            {
                Ntemporal = NodoActual;
                NodoActual = NodoActual->siguiente;
                delete Ntemporal;
            }
        }
        std::cout << "lista destruida\n";
    };

    void mostrar(Nodo* primernodo)
    {
        if (!listavacia()) {
            std::cout << "Esta lista esta vacia\n";
        }
        Nodo* apunta = primernodo;
        while (apunta)
        {
            std::cout << "[ " << apunta->numeroNodo << " ]-> ";
            apunta = apunta->siguiente;
        }
        std::cout << "[NULL] ";
    }

    void instertarInicio(int dato)
    {
        Nodo* Nuevonodo = new Nodo();
        Nuevonodo->numeroNodo = dato;
        if (listavacia())
        {
            Nuevonodo->siguiente = NULL;
        }
        else
        {
            Nuevonodo->siguiente = PrimerNodo;
        }
        PrimerNodo = Nuevonodo;
    }

    void InsertarFinal(int dato)
    {
        Nodo* Nuevonodo = new Nodo();
        Nuevonodo->numeroNodo = dato;
        if (listavacia())
        {
            Nuevonodo->siguiente = NULL;
        }
        else
        {
           
                Nodo* NodoActual = PrimerNodo;
                while (NodoActual->siguiente != NULL)
                {
                    NodoActual = NodoActual->siguiente;
                }
                NodoActual->siguiente = Nuevonodo;
        }
    }

};
int main()
{
     mostrar()
}
