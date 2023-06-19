#include <iostream>  
 
#define int long long  
  
signed main() {  
    int shift;  
    while (std::cin >> shift) {  
        if (shift > 31) {  
            std::cout << "Value of more than 31" << std::endl;  
        } else {  
            std::cout << (1LL << shift) << std::endl;  
        }  
    }  
    return 0;  
}  