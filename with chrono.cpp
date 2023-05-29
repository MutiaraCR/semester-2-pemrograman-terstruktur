#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    const int n = 1000000;
    int arr[n];

    // Inisialisasi array dengan elemen-elemen acak
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 1000000;
    }

    auto start = high_resolution_clock::now();
    bubbleSort(arr, n);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);

    cout << "Array yang telah diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Waktu eksekusi: " << duration.count() << " milidetik" << endl;

    return 0;
}

