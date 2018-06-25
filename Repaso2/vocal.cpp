#include <stdio.h>
#include <stdlib.h>

int main(){

	char vocal;

	printf("Escribe una letra: ");
	scanf("%c", &vocal);

	if((vocal == 'a') || (vocal == 'e') || (vocal == 'i') || (vocal == 'o') || (vocal == 'u'))
	printf("Es vocal.\n");
	else printf("No es vocal.\n");


  return EXIT_SUCCESS;
}
