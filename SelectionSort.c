#include <stdio.h>  
  
void SelectionSort(int arr[], int n)  
{  
    int i;
    int j;
    int minElement;  
      
    for (i = 0; i < n-1; i++)    // moving the boundary of unsorted subarray  
    {  
        minElement = i; //the smallest element in the unsorted array  
          
        for (j = i+1; j < n; j++)  
        if (arr[j] < arr[minElement])  
            minElement = j;  
// Swapping the smallest element with the first one  
    int temp = arr[minElement];  
    arr[minElement] = arr[i];  
    arr[i] = temp;  
    }  
}  
  
void printArray(int a[], int n) /* function to print the array */  
{  
    int i;  
    for (i = 0; i < n; i++)  
        printf("%d ", a[i]);  
}  
  
int main()  
{  
    int a[] = { 12, 31, 25, 8, 32, 17 };  
    int n = sizeof(a) / sizeof(a[0]);  //n is the size of the array
    printf("Before sorting array elements are - \n");  
    printArray(a, n);  
    SelectionSort(a, n);  
    printf("\nAfter sorting array elements are - \n");    
    printArray(a, n);  
    return 0;  
}    