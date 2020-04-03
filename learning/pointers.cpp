#include <iostream>

int main(){

    int arr1[5];
    int arr2[5];
    int arr3[5];
    int * p = arr1;     // `arr1` points to the location of the first element of the array
    int * q = arr2;
    int * r = arr3;

    std::cout << "assigning elements:" << std::endl;
    for (int i = 0; i < 5; i++){
        std::cout << "\tIteration " << "i";

        // method 1 -- lousy
        p = &arr1[i];
        *p = (i + 1) * 100;
        std::cout << ", p = " << p;

        // method 2 -- much better; q will still store the location of the first element of the array
        *(q + i) = (i + 1) * 10;
        std::cout << ", q = " << q;

        // method 3 -- r will store the location after the last element of the array
        *r = i + 1;
        r++;
        std::cout << ", r = " << r << std::endl;
    }
    std::cout << "\n";


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

    std::cout << "arr3 = ";
    for (int i = 0; i < 5; i++){
        std::cout << arr3[i] << " ";
    }
    std::cout << "\n";

    return 0;
}
