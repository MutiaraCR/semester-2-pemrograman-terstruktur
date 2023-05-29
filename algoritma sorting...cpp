#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>
using namespace std;

// Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Selection Sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
}

// Merge Sort
void merge(int arr[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int* L = new int[n1];
    int* R = new int[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    i = 0;
    j = 0;
    k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    delete[] L;
    delete[] R;
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

// Quick Sort
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    const int sizes[] = { 100, 1000, 10000, 100000, 1000000 };

    for (int size : sizes) {
        int* arr = new int[size];

        // Generate random array
        srand(time(nullptr));
        for (int i = 0; i < size; i++) {
            arr[i] = rand() % 1000 + 1;
        }

        // Bubble Sort
        auto start = chrono::high_resolution_clock::now();
        bubbleSort(arr, size);
        auto end = chrono::high_resolution_clock::now();
        chrono::duration<double, milli> duration = end - start;
        cout << "Bubble Sort - Size " << size << " - Execution Time: " << duration.count() << " ms" << endl;

        // Selection Sort
        start = chrono::high_resolution_clock::now();
        selectionSort(arr, size);
        end = chrono::high_resolution_clock::now();
        duration = end - start;
        cout << "Selection Sort - Size " << size << " - Execution Time: " << duration.count() << " ms" << endl;

        // Merge Sort
        start = chrono::high_resolution_clock::now();
        mergeSort(arr, 0, size - 1);
        end = chrono::high_resolution_clock::now();
        duration = end - start;
        cout << "Merge Sort - Size " << size << " - Execution Time: " << duration.count() << " ms" << endl;

        // Quick Sort
        start = chrono::high_resolution_clock::now();
        quickSort(arr, 0, size - 1);
        end = chrono::high_resolution_clock::now();
        duration = end - start;
        cout << "Quick Sort - Size " << size << " - Execution Time: " << duration.count() << " ms" << endl;

        delete[] arr;

        cout << endl;
    }

    return 0;
}

