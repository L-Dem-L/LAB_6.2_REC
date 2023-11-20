#include <iostream>

void fillArrayRecursive(int arr[], int size, int index) {
    if (index < size) {
        std::cin >> arr[index];
        fillArrayRecursive(arr, size, index + 1);
    }
}

void fillArray(int arr[], int size) {
    fillArrayRecursive(arr, size, 0);
}

void printArrayRecursive(const int arr[], int size, int index) {
    if (index < size) {
        std::cout << arr[index] << " ";
        printArrayRecursive(arr, size, index + 1);
    }
    else {
        std::cout << std::endl;
    }
}

void printArray(const int arr[], int size) {
    std::cout << "Array: ";
    printArrayRecursive(arr, size, 0);
}

int sumOddIndexedElementsRecursive(const int arr[], int size, int index) {
    if (index >= size) {
        return 0;
    }
    return arr[index] + sumOddIndexedElementsRecursive(arr, size, index + 2);
}

int main() {
    int size;

    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    if (size <= 0) {
        std::cerr << "Invalid array size\n";
        return 1;
    }

    int* arr = new int[size];

    fillArray(arr, size);
    printArray(arr, size);

    int result = sumOddIndexedElementsRecursive(arr, size, 1);
    std::cout << "Sum of elements with odd indices (recursive): " << result << std::endl;

    delete[] arr;

    return 0;
}
