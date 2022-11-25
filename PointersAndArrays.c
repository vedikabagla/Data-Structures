//Pointers in C



#include <stdio.h>

int main(){

//Example: Address of memory location can be accessed using "&"
    int testvariable1;
    char testarray[10];
    printf("Address of testvariable1 is: %x \n ", &testvariable1);
    printf("Address of testarray is: %x \n ", &testarray);


//Example: Using a pointer to access a value
    int value= 10;
    printf("The value is: %d \n", value);
    printf("The address of the value is: %x \n", &value);
    int *pointer;  // written in the form of type*variableName
    pointer=&value; //assigning the address of value to pointer
    printf("The address of the value in pointer is: %x \n", pointer);
    printf("The value at the address of the pointer is: %d \n", *pointer);

    return 0;

}
