#include <stdio.h>  
#include <stdlib.h> //used for malloc
int main(){
    int *pointer;
    int i;
    int size;
    printf("What is the size of memory to be allocated: ");
    scanf (" %d", &size); //puts the inputted number value in at the address of size
    pointer = malloc (size * sizeof(int));  //malloc function used to allocate memory
    if (pointer!=NULL)  //i.e. as long as pointer is pointing towards some address in memory
    {  
        // Inputting numbers to store by the user  
        printf (" Input numbers: ");        
        for ( i = 0; i < size; i=i+1)  {  
            scanf (" %d", pointer + i); // starts storing numbers in malloc block, starting from the beginning address  
        }         
        printf (" The numbers are stored in memory: \n ");         
        for ( i = 0; i < size; i++)  {  
            printf (" \n The number is: %d", *(pointer + i)); // here *(pointer + i) is same as pointer[i]  
        }  
        printf (" \n Memory is created using the malloc() function ");  
        return 0;  
    }  
    else  //i.e. if malloc was unsuccessful
    printf (" Memory not allocated ");  
    free (pointer);
    return 0;  
}  

