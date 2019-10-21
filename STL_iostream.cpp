include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
        std::cout << std::setw(0)<< std::left << std::showbase << std::nouppercase;
        cout<<std::hex<< (long long) A <<"\n";

        std::cout << std::dec << std::right << std::setw(15) << std::setfill('_') << std::showpos << fixed << setprecision(2); // formatting
        cout << B << endl; 

        std::cout << std::scientific << std::uppercase<< std::noshowpos <<std::setprecision(9) << C<<"\n";
	}
	return 0;

}
