#include <iostream>

using std::cout;
using std::endl;

void printArray(int array[], int size){
    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

int linearSearch(int array[], int size, int key){
    for (int i = 0; i < size; i++){
        if (array[i] == key){
            return i+1;
        }
    }
}

int main(){
    int array[]={9, 1, 8, 2, 7, 3, 4, 6, 5};
    int arraySize = sizeof(array)/sizeof(array[0]);
    int key;
    std::cin >> key;

    printArray(array, arraySize);
    cout << linearSearch(array, arraySize, key) << endl;

    system("pause");
    return 0;
}