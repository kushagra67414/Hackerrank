#include<iostream> 
#include<algorithm> 
#include<vector> 
using namespace std; 
  
int main() 
{ 
   
      
    // Reversing directly from beginning to end 
    cout << "\nReverse full array:\n"; 
      
    int a[] = {4, 5, 6, 7}; 
    std::reverse(std::begin(a), std::end(a)); 
  
    // Print the array 
    std::cout << a[0] << a[1] << a[2] << a[3] << '\n'; 
    return 0; 
}  
