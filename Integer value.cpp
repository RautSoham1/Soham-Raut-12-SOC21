#include <stdio.h> 
 
int main() { 
    int num; 
    int *ptr; 
 
    printf("Enter an integer value: "); 
    scanf("%d", &num); 
 
    ptr = &num;   // ptr now holds the address of num 
 
    printf("\n--- Using the variable directly ---\n"); 
    printf("Value of num   = %d\n", num); 
    printf("Address of num = %p\n", (void*)&num); 
 
    printf("\n--- Using the pointer ---\n"); 
    printf("Value via ptr (*ptr) = %d\n", *ptr); 
    printf("Address stored in ptr = %p\n", (void*)ptr); 
 
    return 0; 
}
