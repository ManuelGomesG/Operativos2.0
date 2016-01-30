
typedef struct Lista{
    char *nombre;
    char *estado;
    struct Identificador_Chat *chat;
    int fd_read;
    int fd_write;
	int data;
	struct Lista *next;
}lista;

typedef struct Lista_Chat{
    char *nombre;
    struct Lista_chat *next;

}lista_chat;

typedef struct Identificador
{
	struct Lista *inicio;
	struct Lista *fin;
	int tam;
}identificador;

typedef struct Identificador_Chat
{
	struct Lista_Chat *inicio;
	struct Lista_Chat *fin;
	int tam;
}identificador_chat;

void CrearLista(identificador *);
void Agregar(identificador * , int );
void Imprimir(identificador *);
void Eliminar(identificador *, int);
