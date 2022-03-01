#include<iostream>
#include <fstream>
#include<string>

using namespace std;

int main() {
	int a, b;
	string thanhghi;
	ifstream xuatfilesumavsb;
	xuatfilesumavsb.open("BT1.txt", ios::app);
	if (xuatfilesumavsb.is_open()) {
		cout << "lich su ban da tinh toan tren phan mem chung toi" << endl;
		while (xuatfilesumavsb.eof() == false) {
			getline(xuatfilesumavsb, thanhghi);
			cout << thanhghi << endl;
		}
		xuatfilesumavsb.close();
	}
	else {
		cout << "file lich su hien dang bi loi!" << endl;
	}
	return 0;
}