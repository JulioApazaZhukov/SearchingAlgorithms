#include <iostream>

using std::cout;
using std::endl;

void printArray(int array[], int size){
    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

void linearSearch(int array[], int size, int key){
    int validation = 0;
    for (int i = 0; i < size; i++){
        if (array[i] == key){
            cout << i+1 << " ";
            validation = 1;
        }
    }
    if (validation != 1){
        cout << "Not found" << endl;
    } else cout << endl;
}

int main(){
    int array[]={9, 1, 8, 2, 7, 3, 4, 6, 5, 2};
    int arraySize = sizeof(array)/sizeof(array[0]);
    int key;
    std::cin >> key;

    printArray(array, arraySize);
    linearSearch(array, arraySize, key);

    system("pause");
    return 0;
}