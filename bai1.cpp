#include<iostream>
#include <fstream>
#include<string>

using namespace std;

int main() {
	int a, b;
	string thanhghi;
	ofstream nhapfilesumavsb;
	ifstream xuatfilesumavsb;
	nhapfilesumavsb.open("BT1.txt", ios::app);
	xuatfilesumavsb.open("BT1.txt", ios::app);
	if (nhapfilesumavsb.is_open()) {
		cout << "moi ban nhap 2 so muon tinh tong" << endl;
		while (cin >> a && cin >> b) {
			system("cls");
			cout << a << "+" << b << "=" << a + b << endl;
			cout << "moi ban nhap 2 so muon tinh tong" << endl;
			nhapfilesumavsb << a << "+" << b << "=" << a + b << endl;
		}
		nhapfilesumavsb.close();
	}
	else {
		cout << "khong the tinh toan luc nay";
	}
	if (xuatfilesumavsb.is_open()) {
		cout << "lich su ban da tinh toan tren phan mem chung toi" << endl;
		while (xuatfilesumavsb.eof() == false) {
			getline(xuatfilesumavsb,thanhghi);
			cout << thanhghi << endl;
		}
		xuatfilesumavsb.close();
	}
	else {
		cout << "file lich su hien dang bi loi!" << endl;
	}
	return 0;
}