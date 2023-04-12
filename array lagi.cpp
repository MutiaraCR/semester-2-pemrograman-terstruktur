#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    
    /* vector<vector<int>> untuk menyimpan 
	semua array yang dimasukkan. */
    vector<vector<int>> a(n);
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        /*  "a[i].resize(k);" digunakan untuk 
		mengalokasikan ruang memori yang cukup 
		untuk menyimpan k elemen pada vektor ke-i. */
        a[i].resize(k);
        for (int j = 0; j < k; j++) {
            cin >> a[i][j];
        }
    }
    
    for (int i = 0; i < q; i++) {
        int x, y;
        cin >> x >> y;
        cout << a[x][y] << endl;
    }
    
    return 0;
}

