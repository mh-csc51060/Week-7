#include <iostream>
#include <string>
using namespace std;

template<typename T>
int linerSearch(const T list[], T key, int arraySize){
    for (int i = 0; i < arraySize; i++){
        if (key == list[i]) { 
            return i;
        }
    }
    return -1;
}


int main()
{
    int arr1[] = {1, 2, 3, 4, 5};

    double arr2[] = {1.1, 2.8, 3.8, 4.5, 5.2};

    string arr3[] = {"five", "one", "two", "three", "ten"};

    string a = "two";
    
    cout << "The number 3 is in element " << linerSearch(arr1, 3, 5) << " in the int array arr1" << endl;

    cout << "The number 1.1 is in element " << linerSearch(arr2, 1.1, 5) << " in the double array arr2"  << endl;

    cout << "The word two is in element " << linerSearch(arr3, a, 5) << " in the string array arr3" << endl;
    
    return 0;
}