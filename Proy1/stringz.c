#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define ESTOY "-estoy "
#define QUIEN "-quien"
#define ESCRIBIR "-escribir "



int main (){
	char *p= "-escribir manuel";
	int len=strlen(p);
	printf("%i\n",len);
	char *c= "-";
	if (strncmp(p,c,1)==0)
	{
		if (strncmp(p,ESTOY,7)==0)
		{
			printf("estoy\n");
			char *estado=malloc(len-6);
			strncpy(estado,p+7, len-6) ;
			printf("%s\n",estado);
			//LLamo a la funcion cambiar estado con parametro estado
		}
		else if (strncmp(p,QUIEN,6)==0)
		{
			printf("quien\n");

		}
		else if (strncmp(p,ESCRIBIR,10)==0)
		{
			printf("escribir\n");
			char *nombre=malloc(len-10);
			strncpy(nombre,p+10, len-10) ;
			printf("%s\n",nombre);
			//LLamo a crear conversacion o lo que sea y el argumento es nombre
		}
		else
		{
			printf("ninguna de las anteriores\n");
		}
	}
	int o =strncmp(p,c,1);
	printf("%i\n", o);
	return (0);
}