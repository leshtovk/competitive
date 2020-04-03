#include <iostream>

int main(){

    int arr1[5];
    int arr2[5];
    int * p = arr1;     // `arr1` points to the location of the first element of the array
    int * q = arr2;

    std::cout << "assigning elements:" << std::endl;
    for (int i = 0; i < 5; i++){
        // method 1 -- lousy
        p = &arr1[i];
        *p = (i + 1) * 100;

        // method 2 -- much better; q will still store the location of the first element
        *(q + i) = (i + 1) * 10;
    }


    std::cout << "arr1 = ";
    for (int i = 0; i < 5; i++){
        std::cout << arr1[i] << " ";
    }
    std::cout << "\n";

    std::cout << "arr2 = ";
    for (int i = 0; i < 5; i++){
        std::cout << arr2[i] << " ";
    }
    std::cout << "\n";

    return 0;
}
