typedef struct Lista{
    char *nombre;
    char *estado;
    struct Identificador_Chat *chat;
    int fd_read;
    int fd_write;
    struct Lista *next;
}lista;

typedef struct Lista_Chat{
    char *nombre;
    struct Lista_Chat *next;

}lista_chat;

typedef struct Identificador{
    struct Lista *inicio;
    struct Lista *fin;
    int tam;
}identificador;

typedef struct Identificador_Chat{
    struct Lista_Chat *inicio;
    struct Lista_Chat *fin;
    int tam;
}identificador_chat;


identificador * CrearListaU(identificador *);
void AgregarUsuario(identificador * , char *);
void ImprimirUsuarios(identificador *);
void EliminarUsuario(identificador *, char *);
identificador_chat * CrearListaChat(identificador_chat *);
void AgregarChat(identificador_chat * , char * );
void ImprimirChat(identificador_chat *);
void EliminarChat(identificador_chat *, char *);
