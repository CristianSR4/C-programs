#include <stdio.h>
#include <stdlib.h>

int main(){

int numero=45;
int intentos;

for(intentos=1; intentos<=6; intentos++){
	printf("Elige un numero: ");
	scanf("%i", &numero);

	if(numero<45)
		printf("Se quedo corto.\n");
	else if (numero>45)
		printf("Se paso.\n");
	else if(numero=45){
		printf("Acerto\n");
	return 0;
}


}

  return EXIT_SUCCESS;
}
