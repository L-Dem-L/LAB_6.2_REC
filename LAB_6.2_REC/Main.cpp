#include <iostream>

void fillArray(int arr[], int size) {
    std::cout << "Enter " << size << " elements for the array:\n";
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
}

void printArray(const int arr[], int size) {
    std::cout << "Array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
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
