#include <iostream>
#include <string>
#include <stdio.h>
#include "implementaciones.cpp"

using namespace std;
    LISTA *l;
int main()
{
    men();
    return 0;
}
void elijo_opcion( int op)
{
    switch( op )
    {
        case creo_lista:
        l = crear_lista( l );
        break;
        case inserto_al_principio:
        l = insertar_al_principio( l );
        break;
        case inserto_al_final:
        l = insertar_al_final( l );
        break;
        case inserto_en_posicion:
        l = insertar_en_posicion( l );
        break;
        case elimino_primero:
        l = eliminar_primero( l );
        break;
        case elimino_ultimo:
        l = eliminar_ultimo( l );
        break;
        case elimino_valor:
        l = eliminar_valor( l );
        break;
        case busco_valor:
        buscar_valor( l );
        break;
        case remplazo_valor:
         l = remplazar_valor( l );
        break;
        case borro_lista:
        l = borrar_lista( l );
        break;
        case muestro_lista:
        mostrar_lista( l );
        break;
        case cant_nodos:
        cantidad_nodos( l );
        break;
        case inserto_antes_de:
        l = insertar_antes_de(l);
        break;
        case inserto_despues_de:
        l = insertar_despues_de(l);
        break;
        case fin:
        cout << "Chaito!..."<<endl;
        return;
         break;
        default:
        cout <<"####### ---- You made an illegal choice ---- #######"<<endl;
        men();

    }
    men();
}
