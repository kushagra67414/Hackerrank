#include <iostream> 
using namespace std; 
  
#define max 100 

 
void innerPattern(int n) { 
      
int size = 2 * n - 1; 
int front = 0; 
int back = size - 1; 
int a[max][max]; 
while (n != 0)  
{ 
    for (int i = front; i <= back; i++) { 
    for (int j = front; j <= back; j++) { 
        if (i == front || i == back || 
            j == front || j == back) 
        a[i][j] = n; 
    } 
    } 
    ++front; 
    --back; 
    --n; 
} 

for (int i = 0; i < size; i++) { 
    for (int j = 0; j < size; j++) { 
    cout << a[i][j]; 
    } 
    cout << endl; 
} 
}

int main() 
{ 
int n = 4;  
    innerPattern(n); 
      
return 0; 
} 
