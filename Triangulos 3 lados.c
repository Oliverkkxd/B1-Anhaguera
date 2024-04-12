/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int l1, l2, l3;
    
    printf("Digite valor do primeiro lado:\n");
     scanf("%i", &l1);
     
    printf("Digite valor do segundo lado:\n");
     scanf("%i", &l2);
     
    printf("Digite valor do terceiro lado:\n");
     scanf("%i", &l3);
     
    if(l1 == l2 && l1== l3 && l2 == l3  ){
        printf("Esse é um Triângulo Equilátero!");
    }
    
    else if(l1 == l2 || l1== l3|| l2 == l3){
        printf("Esse é um Triângulo Isósceles");
    }
    else{
        printf("Esse é um Triângulo Escaleno");
    }
    
    
    
    
}

