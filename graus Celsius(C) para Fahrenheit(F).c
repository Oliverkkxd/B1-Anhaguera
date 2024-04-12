/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float cel, fh;
    
    printf("digite uma temperatudo em graus Celsius:\n");
    scanf("%f", &cel);
    fh = cel * 9 / 5 + 32;
    
    printf("A temperatura é %.1f Fahrenheit(F).", fh);

 
}

