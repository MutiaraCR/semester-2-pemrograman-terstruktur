#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
        int N;
        cin >> setprecision(4) >> N;
        int *arr = new int[N];
    
    for (int i = 0; i < N; i++) {
            cin >> setprecision (5) >> arr[i];
    }
    for (int i = N+1 ; i >= 0 ; i--) {
            cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}

// 8
// 6676 3216 4063 8373 423 586 8850 6762
