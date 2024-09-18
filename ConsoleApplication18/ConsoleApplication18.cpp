#include <iostream>

using namespace std;

int main() {
   
    int size;
    cout << "size mass -> ";
    cin >> size;

    
    int* array1 = new int[size];
    cout << "El mass -> ";
    for (int i = 0; i < size; ++i) {
        cin >> array1[i];
    }

   
    cout << "mass 1 -> ";
    for (int i = 0; i < size; ++i) {
        cout << array1[i] << endl;
    }
   

    
    int* array2 = new int[size + 1];

  
    for (int i = 0; i < size; ++i) {
        array2[i] = array1[i];
    }

   
    array2[size] = 100;

    
    cout << "mass 2 -> ";
    for (int i = 0; i < size + 1; ++i) {
        cout << array2[i] << endl;
    }
   

   
    delete[] array1;

    
    delete[] array2;

    return 0;
}
