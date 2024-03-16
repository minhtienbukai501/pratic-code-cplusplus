#include<iostream>
#include<string>
using namespace std;

// c/c++ -> OOP -> CTDL-GT --> DATABASE-> DESIGN
struct SinhVien{
	int MaSV;
	string tenSV;
	float DiemA, DiemB, DiemC;
};


struct danhSachSinhVien {
	SinhVien sv[1000]; // mảng sinh vien
	int n; // số lượng sinh viên
};


void nhapSinhVien(SinhVien &sv, danhSachSinhVien ds) {
	bool checkTrung;
	do
	{
		checkTrung = false;
		cout << "\nNhap ma sinh vien: ";
		cin >> sv.MaSV;
		for (int i = 0; i < ds.n; i++) {
			if (ds.sv[i].MaSV == sv.MaSV) {
				checkTrung = true;
				break;
			}
		}

		if (checkTrung == true) {
			cout << "\nMa Sinh Vien Da Ton Tai!";
		}

	} while (checkTrung == true);
	

	rewind(stdin);
	cout << "\nNhap ten sinh vien: ";
	getline(cin, sv.tenSV);

	cout << "\nNhap Diem A: ";
	cin >> sv.DiemA;

	cout << "\nNhap Diem B: ";
	cin >> sv.DiemB;

	cout << "\nNhap Diem C: ";
	cin >> sv.DiemC;
}


void xuatSinhVien(SinhVien sv) {
	cout << "\nMa Sinh Vien: " << sv.MaSV;
	cout << "\nTen Sinh Vien: " << sv.tenSV;
	cout << "\nDiem A: " << sv.DiemA;
	cout << "\nDiem B: " << sv.DiemB;
	cout << "\nDiem C: " << sv.DiemC;
}


void nhapDanhSachSinhVien(danhSachSinhVien &dsSV) {
	cout << "\nNhap so luong sinh vien: ";
	cin >> dsSV.n;
	cout << "\n\tNHAP THONG TIN SINH VIEN\n";
	for (int i = 0; i < dsSV.n; i++) {
		cout << "\n\t------nhap sinh vien thu " << i + 1 << "------\n";
		nhapSinhVien(dsSV.sv[i], dsSV);
	}
}


void xuatDanhSachSinhVien(danhSachSinhVien& dsSV) {
	
	cout << "\n\tTHONG TIN SINH VIEN\n";
	for (int i = 0; i < dsSV.n; i++) {
		cout << "\n\t------sinh vien thu " << i + 1 << "------\n";
		xuatSinhVien(dsSV.sv[i]);
	}
}

void themSinhVien(danhSachSinhVien& dsSV, SinhVien svCanThem) {
	dsSV.n++;
	dsSV.sv[dsSV.n - 1] = svCanThem;
}


float tinhTongDiem(SinhVien sv) {
	return sv.DiemA + sv.DiemB + sv.DiemC;
}

void HoanVi(SinhVien& a, SinhVien& b) {
	SinhVien temp = a;
	a = b;
	b = temp;
}

void sapXep(danhSachSinhVien &ds) {
	for (int i = 0; i < ds.n - 1; i++) {
		for (int j = i + 1; j < ds.n; j++) {
			if (tinhTongDiem(ds.sv[i]) > tinhTongDiem(ds.sv[j])){
				HoanVi(ds.sv[i], ds.sv[j]);
			}
		}
	}
}

int main() {
	for (int i = 0; i < 10; i++) {
		
		for (int j = i + 1; j < 10; j++) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}