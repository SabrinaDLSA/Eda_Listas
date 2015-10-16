#include "header.h"
// Example program
#include <iostream>
#include <string>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
using namespace std;

void men(){
    int op;
    cout << "###########################"<<endl;
    cout << "#########  Menu  ##########"<<endl;
    cout << "###########################"<<endl;
    cout << " 1- Crear lista"<<endl;
    cout << " 2- Insertar al principio de la lista"<<endl;
    cout << " 3- Insertar al final de la lista"<<endl;
    cout << " 4- Insertar en determinada posicion de la lista"<<endl;
    cout << " 5- Eliminar primer nodo de la lista"<<endl;
    cout << " 6- Eliminar ultimo nodo de la lista"<<endl;
    cout << " 7- Eliminar Valor en la lista"<<endl;
    cout << " 8- Buscar nodo por valor"<<endl;
    cout << " 9- Remplazar valor"<<endl;
    cout << "10- Borrar lista"<<endl;
    cout << "11- Mostrar lista"<<endl;
    cout << "12- Mostrar cantidad de nodos"<<endl;
    cout << "13- Insertar despues de"<<endl;
    cout << "14- Insertar Antes de"<<endl;
    cout << "15- Fin"<<endl;
    cout << " Qué opción desea ingresar?: "<<endl;
    cin >> op;
    elijo_opcion(op);
}

LISTA *insertar_antes_de(LISTA *l){
    char op;
    if( es_vacia( l ) == false ){
            int nro, valor;
            LISTA *comienzo = l;
            cout <<"Antes de que valor desea ingresar su nodo?"<<endl;
            cin >>valor;
            LISTA *reco, *anterior, *siguiente;
            reco = anterior = siguiente = comienzo;
            if( comienzo == NULL){

                cout << "Qué dato desea ingresar? - Su lista se encuentra vacía"<<endl;
                cin >> nro;
                LISTA *nodo = new LISTA;
                nodo->siguiente = NULL;
                nodo->nro = nro;
                comienzo = nodo;
                return comienzo;
            }
            else{
                    while( reco->siguiente != NULL  && reco->nro != valor )
                            {
                                anterior = reco;
                                reco = reco->siguiente;
                            }
                if( reco->siguiente == NULL )
                {
                    cout << "Qué dato desea ingresar antes de" << valor << " en la lista?"<<endl;
                    cin >> nro;
                    LISTA *nodo = new LISTA;
                    nodo->nro = nro;
                    nodo->siguiente = reco->siguiente;
                    reco->siguiente = nodo;
                    return comienzo;
                }
                cout << "Qué dato desea ingresar Antes de" << valor << " en la lista?"<<endl;
                cin >> nro;
                LISTA *nodo = new LISTA;
                nodo->nro = nro;
                nodo->siguiente = anterior->siguiente;
                anterior->siguiente = nodo;
                return comienzo;
                }
    }
    else
    {

    cout << "Su lista no se encuentra creada o está vacía"<<endl;
        cout << "Desea crearla y agregar un nuevo valor? S - N"<<endl;
            cin >> op;
            if( op == 'S' || op == 's')
            {
               l = insertar_al_principio( l );
            }
            else
            {

                return l;
            }
    }
    return l;
}
LISTA *insertar_despues_de( LISTA *l ){
    char op;
    if( es_vacia( l ) == false){
        int nro, valor;
        cout << "Despues de que valor desea ingresar su nodo? "<<endl;
        cin >> valor;
        LISTA *comienzo;
        comienzo = l;
        LISTA *reco, *anterior, *siguiente;
        reco = anterior = siguiente = comienzo;
        if( comienzo == NULL){

            cout << "Qué dato desea ingresar?"<<endl;
            cin >> nro;
            LISTA *nodo = new LISTA;
            nodo->siguiente = NULL;
            nodo->nro = nro;
            comienzo = nodo;
            return comienzo;
        }
        else{
                while( reco->siguiente != NULL  && reco->nro != valor )
                        {
                            reco = reco->siguiente;
                        }
            cout << "Qué dato desea ingresar despues de" << valor << " en la lista?"<<endl;
            cin >> nro;
            LISTA *nodo = new LISTA;
            nodo->nro = nro;
            nodo->siguiente = reco->siguiente;
            reco->siguiente = nodo;

            return comienzo;
        }
    }
    else
    {

    cout << "Su lista no se encuentra creada o está vacía"<<endl;
        cout << "Desea crearla y agregar un nuevo valor? S - N"<<endl;
            cin >> op;
            if( op == 'S' || op == 's')
            {
               l = insertar_al_principio( l );
            }
            else
            {

                return l;
            }
    }
    return l;
}

LISTA *crear_lista( LISTA *l ){
    cout << "Lista creada! "<<endl;
    return NULL;
}
bool es_vacia( LISTA *l ){
    if( l == NULL )
    {
         return true;
    }
    else
    {
        return false;
    }
}

LISTA *insertar_al_principio( LISTA *l ){
    int nro;
    LISTA *comienzo = l;
    if( comienzo == NULL )
    {
        l = crear_lista( l );
        cout << "Qué dato desea ingresar? - Su lista se ha creado y se encuentra vacía"<<endl;
        cin >> nro;
        LISTA *nodo = new LISTA;
        nodo->siguiente = NULL;
        nodo->nro = nro;
        comienzo = nodo;
        return comienzo;
    }
    else
    {
        cout << "Qué dato desea ingresar?"<<endl;
        cin >> nro;
        LISTA *nodo = new LISTA;
        nodo->siguiente = comienzo;
        nodo->nro = nro;
        comienzo = nodo;
    }
    return comienzo;
}


LISTA *insertar_al_final( LISTA *l){
    int nro;
    LISTA *comienzo = l;
    LISTA *reco;
    reco = comienzo;
    if( comienzo == NULL )
    {
        l = crear_lista( l );
        cout << "Qué dato desea ingresar al final de la lista? - Su lista se encuentra vacía"<<endl;
        cin >> nro;

        LISTA *nodo = new LISTA;
        nodo->siguiente = NULL;
        nodo->nro = nro;
        comienzo = nodo;
        return comienzo;
    }
    else
    {
        while( reco->siguiente != NULL )
        {
            reco = reco->siguiente;
        }
        cout << "Qué dato desea ingresar al final de la lista?"<<endl;
        cin >> nro;
        LISTA *nodo = new LISTA;
        reco->siguiente= nodo;
        nodo->siguiente = NULL;
        nodo->nro = nro;
        return comienzo;
    }
    return comienzo;
}


LISTA *insertar_en_posicion( LISTA *l ){
    if( es_vacia( l ) == false ){

            int valor;
            cout <<" En que posicion desea agreagar el nuevo nodo "<<endl;
            cin >> valor;
            int nro, contador;
            contador = 1;
            LISTA *comienzo = l;
            LISTA *anterior = comienzo;
            LISTA *recorrido = comienzo;
            while( recorrido != NULL)
                {
                    recorrido = recorrido->siguiente;
                    contador++;
                }
            if( valor == (contador +1))
            {
                    cout << "Qué dato desea ingresar?"<<endl;
                    cin >> nro;
                    LISTA *nodo = new LISTA;
                    nodo->siguiente = NULL;
                    nodo->nro = nro;
                    comienzo = nodo;
                    return comienzo;
            }
            else
            {
                recorrido = comienzo;
                if( valor > contador)
                {
                    cout << "Error no existe esa posición en la lista"<<endl;
                    return comienzo;
                }
                else{
                    contador =1;
                        while( recorrido->siguiente != NULL  && contador != valor )
                                {
                                    anterior = recorrido;
                                    recorrido = recorrido->siguiente;
                                    contador ++;
                                }
                        cout << "Qué dato desea ingresar en la posición " << valor << " en la lista?"<<endl;
                        cin >> nro;
                        LISTA *nodo = new LISTA;
                        nodo->nro = nro;
                        nodo->siguiente = anterior->siguiente;
                        anterior->siguiente = nodo;
                        return comienzo;
                }
            }
            return comienzo;
    }
    else
    {
        l = error( l );
    }
    return l;
}


int cantidad_nodos( LISTA *l ){
    if( l == NULL)
    {
        cout << " Su lista no se encuentra creada o esta vacía"<<endl;
        cout << " Total de nodos 0"<<endl;
        return 0;
    }
    LISTA *reco;
    reco = l;
    int cont = 0;
    while( reco != NULL)
    {
        reco = reco->siguiente;
        cont ++;
    }
    cout <<"Total de nodos: "<<cont<<endl;
    return cont;
}


void mostrar_lista( LISTA *l ){
    LISTA *reco;
        reco = l;
    int cont = 1;
    if( es_vacia( l ) == true)
    {
            cout<< "Lista vacía"<<endl;
    }
    else
    {
        while(  reco != NULL )
        {
            cout <<"Nodo: "<<cont<< " - "<< reco->nro <<endl;
            reco = reco->siguiente;
            cont ++;
        }

    }
}


LISTA *remplazar_valor ( LISTA *l ){
     if( es_vacia( l ) == false ){
        LISTA *reco;
        reco = l;
        int valor, remplazo;
        cout<< "Que valor desea reemplazar?"<<endl;
        cin >> valor;
        while( reco != NULL)
        {
          if( reco->nro == valor)
          {
            cout << "Hemos encontrado el valor a reemplazar, ¿Por que valor lo desea reemplazar?"<<endl;
            cin >> remplazo;
            reco->nro = remplazo;
            return l;
          }
          reco = reco->siguiente;
        }
        cout <<"Su valor no ha sido encontrado"<<endl;
        return l;
    }
    else
    {
        l = error( l );
    }
    return l;
}
LISTA *error( LISTA *l )
{
    char op;
    LISTA *comienzo;
    comienzo = l;
        cout << "Su lista no se encuentra creada o está vacía"<<endl;
        cout << "Desea crearla y agregar un nuevo valor? S - N"<<endl;
            cin >> op;
            if( op == 'S' || op == 's')
            {
               comienzo = insertar_al_principio( comienzo );
               return comienzo;
            }
    return l;
}

LISTA *borrar_lista( LISTA *l ){

    if(!es_vacia( l )){
      LISTA *anterior;
      anterior = l;
      while( l != NULL )
      {
        anterior = l;
        l = l->siguiente;
        delete( anterior );
      }
    delete ( l );
    return NULL;
    }
    else
    {
        cout << "Error su lista se encuentra vacía"<<endl;
        return l;
    }
}

LISTA *eliminar_primero( LISTA *l ){
    if( es_vacia( l ) == false ){
    lista *reco;
    reco = l;
        l = l->siguiente;
        delete( reco );
    return l;
    }
    else
    {
        l = error( l );
        return l;
    }

}
LISTA *eliminar_ultimo( LISTA *l ){

        if(!es_vacia( l ))
        {
            LISTA *reco, *anterior;
            reco = l;
            anterior = l;
            while( reco->siguiente != NULL )
            {
                anterior = reco;
                reco = reco->siguiente;
            }

            anterior->siguiente = NULL;
            delete( reco );
        }
        else
        {
            cout<<"Su lista se encuentra vacía"<<endl;
            return l;
        }

return l;
}


LISTA *eliminar_valor( LISTA *l ){

    if( !es_vacia( l ))
    {
        int valor;
        LISTA *reco, *anterior;
        reco = l;
        anterior = l;
            cout<<"Que valor dese encontrar para eliminar?"<<endl;
            cin >> valor;
            while( reco->siguiente != NULL )
            {
                if( reco->nro == valor)
                {
                    cout<<"Su valor se ha encontrado y se va a eliminar"<<endl;
                    anterior->siguiente = reco->siguiente;
                    delete(reco);
                    return l;
                }
                anterior = reco;
                reco = reco->siguiente;
            }
        if( reco->siguiente == NULL)
        {
            cout<<"Su valor no fue encontrado, ingreselo de nuevo"<<endl;
            l = eliminar_valor( l );

        }
    }
    else
    {

        cout<< "Error su lista se encuentra vacía"<<endl;
        return l;
    }

    return l;
}
bool buscar_valor( LISTA *l ){
    if( es_vacia( l ) == false)
    {
        int valor, cont;
        cont = 1;
        LISTA *reco;
        reco = l;
        cout << "Que valor desea buscar?"<<endl;
        cin >> valor;
        while( reco != NULL)
        {
            if( reco->nro == valor)
            {
                cout << "Valor encontrado en el nodo: "<<cont <<endl;
                return true;
            }
            cont ++;
            reco = reco->siguiente;
        }
        cout << " Su valor no fue encontrado"<<endl;
        return false;
    }
    else
    {
        cout << "No se puede buscar valor, Lista vacía"<<endl;
        return false;
    }
    return false;
}
