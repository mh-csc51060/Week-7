#include <iostream>
#include <string>
using namespace std;


template<typename T>
int binarySearch(const T list[], T key, int listSize){
    int low = 0;
    int high = listSize - 1;
    while (high >= low) {
        int mid = (low+high) / 2;
        if (key < list[mid])
            high = mid - 1;
        else if (key == list[mid])
            return mid;
        else 
            low = mid + 1;
    }
    return -low - 1;
}


int main()
{
    int arr1[] = {1, 2, 3, 4, 5};

    double arr2[] = {1.1, 2.8, 3.8, 4.5, 5.2};

    string arr3[] = {"five", "one", "two", "three", "ten"};

    string a = "two";
    
    cout << "The number 3 is in element " << binarySearch(arr1, 3, 5) << " in the int array arr1" << endl;

    cout << "The number 1.1 is in element " << binarySearch(arr2, 1.1, 5) << " in the double array arr2"  << endl;

    cout << "The word two is in element " << binarySearch(arr3, a, 5) << " in the string array arr3" << endl;

    return 0;
}
