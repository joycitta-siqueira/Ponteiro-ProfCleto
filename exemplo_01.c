/*
#include <stdio.h>

void swap_err(int el1, int el2);

int  main() {
        int a=10,
            b=20;
        void swap_err(int, int);

        printf("a=%d, b=%d\n", a, b);
        swap_err(a, b);
        printf("a=%d, b=%d\n", a, b);
        return 0;
    }
   
// funcao (errada) de troca de inteiros    
void swap_err(int el1, int el2) {
        int temp;       
        temp = el1;
        el1 = el2;
        el2 = temp;
    }
    * */
 /*   
A saída obtida seria:
   a= 10, b= 20
   a= 10, b= 20*/


//A fim de se obter o efeito correto, ponteiros devem ser utilizados como argumentos. 
//Assim, os elementos a serem trocados serão acessados por seus endereços, e seus conteúdos serão efetivamente alterados. 
//Nesta nova versão, a função swap é definida como:

#include <stdio.h>

void swap(int *el1, int *el2);

int  main() {
        int a=10,
            b=20;
        void swap(int *, int *);

        printf("a=%d, b=%d\n", a, b);
        swap(&a, &b);
        printf("a=%d, b=%d\n", a, b);
    }
    
// funcao correta de troca de inteiros     

 void swap(int *el1, int *el2) 
 {
        int temp;      

        temp = *el1;
        *el1 = *el2;
        *el2 = temp;
    }

//A saída obtida neste caso seria:
 //  a= 10, b= 20
   //a= 20, b= 10
