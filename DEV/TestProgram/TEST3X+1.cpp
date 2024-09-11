#include <iostream>

using namespace std;

void collatz(int n) {
    while (n != 1) {
        cout << n << " "; // In giá trị hiện tại của n
        if (n % 2 == 0) {
            n = n / 2; // Nếu n là số chẵn, chia n cho 2
        } else {
            n = 3 * n + 1; // Nếu n là số lẻ, tính n = 3n + 1
        }
    }
    cout << n << endl; // In giá trị cuối cùng là 1
}

int main() {
    int n;
    cout << "Nhap so nguyen duong: ";
    cin >> n;

    if (n > 0) {
        collatz(n); // Gọi hàm collatz
    } else {
        cout << "Vui long nhap so nguyen duong!" << endl;
    }
system("Pause");
    return 0;
}
