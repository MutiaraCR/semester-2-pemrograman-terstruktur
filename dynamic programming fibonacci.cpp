//fibonacci dengan dynamic programming
/*
#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int fibonacciDP(int n) {
    int fib[n + 1];
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= n; i++)
        fib[i] = fib[i - 1] + fib[i - 2];

    return fib[n];
}

int main() {
    int n = 100;  // Bilangan Fibonacci yang ingin dicari

    auto start = high_resolution_clock::now();
    int result = fibonacciDP(n);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);

    cout << "Bilangan Fibonacci ke-" << n << ": " << result << endl;
    cout << "Waktu eksekusi (Dynamic Programming): " << duration.count() << " milidetik" << endl;

    return 0;
}*/

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
    int n = 100;  // Bilangan Fibonacci yang ingin dicari

    auto start = high_resolution_clock::now();
    int result = fibonacciRecursive(n);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);

    cout << "Bilangan Fibonacci ke-" << n << ": " << result << endl;
    cout << "Waktu eksekusi (Rekursif): " << duration.count() << " milidetik" << endl;

    return 0;
}

