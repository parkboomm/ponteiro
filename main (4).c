/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int mat1_62;
   int mat2_62;
   
   if(mat1_62 > mat2_62)
   {
        printf("O ponteiro maior é: %d", &mat1_62);
   }
   else{
       printf("O ponteiro maior é: %d", &mat2_62);
   }
   
   return 0;
}