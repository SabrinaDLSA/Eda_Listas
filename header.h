#ifndef LAYOUT_H_INCLUDED
#define LAYOUT_H_INCLUDED
typedef struct lista{

    int nro;
    struct lista *siguiente;
}LISTA;
LISTA *crear_lista( LISTA *l );
bool es_vacia(LISTA *l );
LISTA *insertar_al_principio( LISTA *l);
LISTA *insertar_al_final( LISTA *l);
LISTA *insertar_en_posicion( LISTA *l);
int cantidad_nodos( LISTA *l );
void mostrar_lista( LISTA *l );
LISTA *remplazar_valor ( LISTA *l);
LISTA *borrar_lista( LISTA *l );
LISTA *eliminar_primero( LISTA *l );
LISTA *eliminar_ultimo( LISTA *l );
LISTA *eliminar_valor( LISTA *l);
LISTA *insertar_despues_de( LISTA *l );
LISTA *insertar_antes_de( LISTA *l );
bool buscar_valor( LISTA l);
void men();
LISTA *error( LISTA *l );
void elijo_opcion( int opcion );
enum Opciones { creo_lista = 1, inserto_al_principio, inserto_al_final, inserto_en_posicion,
elimino_primero, elimino_ultimo, elimino_valor, busco_valor, remplazo_valor, borro_lista,
muestro_lista, cant_nodos, inserto_despues_de, inserto_antes_de, fin};
typedef enum Opciones Menu;

#endif // LAYOUT_H_INCLUDED
