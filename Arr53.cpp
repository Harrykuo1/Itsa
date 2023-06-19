#include <iostream>
#include <algorithm>

int cmp(const void* a, const void* b){
    const int* ptrA = static_cast<const int*>(a);
    const int* ptrB = static_cast<const int*>(b);
    return (*ptrA > *ptrB) - (*ptrA < *ptrB);
}

int main(){
    int n;
    int arr[100000];
    std::cin >> n;
    for(int i = 0; i < n; i++){
        std::cin >> arr[i];
    }
    std::qsort(arr, n, sizeof(int), cmp);
    for(int i = 0; i < n; i++){
        std::cout << arr[i] << std::endl;
    }
    return 0;
}
