#include <iostream>
using namespace std;

class bangunDatar {

	//akses modifier
	private:
		float panjang, Lebar;
	public:
		float Luas;

		void input() { //methode input persegi panjang

			cout << "Masukan Panjangnya = ";
			cin >> panjang;
			cout << "Maukan Lebarnya = ";
			cin >> Lebar;
		}

		float hitungluas (){
			return panjang * Lebar;
		}
		void display() {
			cout << "Panjangnya = " << panjang << endl;
			cout << "Lebarnya = " << Lebar << endl;
			cout << "Luasnya = " << hitungluas() << endl;
		}
	 

};

int main() {
	bangunDatar pp; // deklarasi objek pp dari class bangunDatar
	pp.input();
	pp.display();

	return 0;
}
