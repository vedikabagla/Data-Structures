#include <stdio.h>
void main() {
    for(float i=0;i<10; i=i+1)
        printf("The number is %f \n", i);

    printf("The loop is working here.\n");

    for(float i=0;i<1; i=i+0.1)
        printf("The number is %f \n", i);

    printf("The loop is working here.\n");

    for(float i=0;i<0.1; i=i+0.01)
        printf("The number is %f \n", i);

    printf("The loop is working here.\n");

     for(float i=0;i<0.01; i=i+0.001)
        printf("The number is %f \n", i);

    printf("The loop is working here.\n");

    for(float i=0;i<0.001; i=i+0.0001)
        printf("The number is %f \n", i);

    printf("The loop is working here.\n");

    for(float i=0;i<0.0001; i=i+0.00001)
        printf("The number is %f \n", i);

    printf("The loop is working here.\n");

    for(float i=0;i<0.00001; i=i+0.000001)
        printf("The number is %f \n", i);

    printf("The loop is working here.\n");

    for(float i=0;i<0.000001; i=i+0.0000001)
        printf("The number is %f \n", i);

    printf("The loop is NOT working here.\n");
        
    }
