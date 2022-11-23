#include <stdio.h>    
     
int main()    
{    
    //Initialize array     
    float arr[] = {1.5, 2.4, 3.56, 4.1, 5.22};     
        
    //Calculate length of array arr    
    int length = sizeof(arr)/sizeof(arr[0]);    
        
    printf("Original array: \n");    
    for (int i = 0; i < length; i++) 
    {     
        printf("%.2f ", arr[i]);     
    }      
        
    printf("\n");    
        
    printf("Array in reverse order: \n");    
    //Loop through the array in reverse order    
    for (int i = length-1; i >= 0; i--) {     
        printf("%.2f ", arr[i]);     
    }     
    return 0;    
}  