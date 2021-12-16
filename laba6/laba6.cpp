#include <iostream>
#include <string>
using namespace std;
class Wheel {
private:
	string material;
	double rad;
	int qnt;
public:
	Wheel() {
		material = "wood";
		rad = 30;
		qnt = 15;
	}
	Wheel(string mat, double r, int q) {
		material = mat;
		rad = r;
		qnt = q;
	}
	Wheel(string mat, double r) {
		material = mat;
		rad = r;
		qnt = 15;
	}
	Wheel(string mat, int q) {
		material = mat;
		rad = 30;
		qnt = q;
	}
	Wheel( double r, int q) {
		material = "wood";
		rad = r;
		qnt = q;
	}
	Wheel(double r) {
		material = "wood";
		rad = r;
		qnt = 15;
	}
	Wheel(int q) {
		material = "wood";
		rad = 30;
		qnt = q;
	}
	Wheel(string mat) {
		material = mat;
		rad = 30;
		qnt = 15;
	}
	string get_material() {
		return material;
	}
	double get_rad() {
		return rad;
	}
	int get_qnt() {
		return qnt;
	}
	void set_material(string mat) {
		material = mat;
	}
	void set_rad(double r) {
		rad = r;
	}
	void set_qnt(int q) {
		qnt = q;
	}
	friend ostream& operator<< (ostream& out, Wheel& w)
	{
		out << "Material: " << w.get_material() << '\n' << "Radius: " << w.get_rad() << '\n' << "Kolichestvo spits: " << w.get_qnt();
		return out;
	}
};
int main() {
	Wheel a[100];
	string mat; double r; int qn;
	int kol;
	cin >> kol;
	for (int i = 0; i < kol; i++) {
		cin >> mat >> r >> qn;
		Wheel wheel1(mat, r, qn);
		a[i] = wheel1;
	}
	double max_rad = a[0].get_rad();
	for (int i = 1; i < kol; i++) {
		if (a[i].get_rad() > max_rad) {
			max_rad = a[i].get_rad();
		}
	}
	cout << max_rad;
	return 0;
}