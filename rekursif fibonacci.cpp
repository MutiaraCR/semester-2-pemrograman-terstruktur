//fibonacci dengan rekursif

#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int fibonacciRecursive(int n) {
    if (n <= 1)
        return n;
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

int main() {
    int n = 70;  // Bilangan Fibonacci yang ingin dicari

    auto start = high_resolution_clock::now();
    int result = fibonacciRecursive(n);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);

    cout << "Bilangan Fibonacci ke-" << n << ": " << result << endl;
    cout << "Waktu eksekusi (Rekursif): " << duration.count() << " milidetik" << endl;

    return 0;
}

