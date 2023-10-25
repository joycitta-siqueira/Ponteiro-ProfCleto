#include <stdio.h>
#include <stdlib.h>

//void mostra_dados(int var, int *ptr);
//void atualiza(int *ptr2);

int main()
{
	int var = 15;
	int *ptr;
	
	ptr = &var;
	
//	mostra_dados(var, ptr);
	
//	atualiza(&var);
	
//	mostra_dados(var, ptr);


	printf("\n\nFim.");
	while(1);
	return 0;
}
/*
void mostra_dados(int var, int *ptr)
{
	printf("\n\n\n");
	printf("Conteúdo de var = %d\n", var);
	printf("Endereço de var = %p\n", &var);
	printf("Conteúdo apontado por ptr = %d\n", *ptr);
	printf("Endereço apontado por ptr = %p\n", ptr);
	printf("Endereço do ponteiro ptr = %p\n", &ptr);
}

void atualiza(int *ptr2)
{
	*ptr2 = *ptr2 +1;
}
*/
