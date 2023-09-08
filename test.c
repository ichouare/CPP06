// #include <iostream>
// #include <string>
// #include <iomanip>
#include <stdio.h>

int main()
{
   int x = 0;
void *ptrVoid = &x; // OK 
int *ptrX = ptrVoid; // Error
int array[] = { 1, 2, 3 }; 
void *ptrArray = array; // OK 
double *ptrDouble = ptrArray; // Error
// printf("%d", ptrArray[0]);
printf("%d", array[1]);
}