#include <iostream>

using namespace std;

struct sinhVien {
    int msv;
    string hoten;
    string lop;
    float diem; // Change the diem field to a numerical type (e.g., float)
};

void nhap_1_sv(sinhVien &sv) {
    cout << "Ho ten: ";
    getline(cin >> ws, sv.hoten); // Use ws to skip whitespace before getline
    cout << "Msv: ";
    cin >> sv.msv;
    cin.ignore(); // Ignore the newline character left in the input buffer
    cout << "Lop: ";
    getline(cin, sv.lop);
    cout << "Diem: ";
    cin >> sv.diem;
}

void nhap_list_sv(sinhVien sv[], int &n) {
    for (int i = 0; i < n; i++) {
        nhap_1_sv(sv[i]);
    }
}

int main() {
    sinhVien sv[100];
    int n = 3; // You can change the number of students to input here
    nhap_list_sv(sv, n);

    return 0;
}

