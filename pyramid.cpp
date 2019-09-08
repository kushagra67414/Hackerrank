#include <stdio.h> 
  
// Function to print pyramid pattern 
void printPattern(int n) 
{ 
    int t; 
  
    // outer loop to print rows 
    for (int i = 1; i <= n; i++) { 
  
        // inner loop to print spaces 
        for (int j = i; j < n; j++) 
            printf("\t"); 
  
        // calculate initial value 
        t = i; 
  
        // inner loop to print pattern 
        for (int k = 1; k <= i; k++) { 
            printf("%d\t\t", t); 
            t = t + n - k; 
        } 
        printf("\n"); 
    } 
} 
  
// Driver code 
int main() 
{ 
    int n = 6; 
    printPattern(n); 
    return 0; 
} 
