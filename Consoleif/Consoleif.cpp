#include <iostream>
using namespace std;

int main()
{
	int nBilanganA;
	int nBilanganB;
	string status;

	srand(time(0));

	nBilanganA = rand() % 10;
	nBilanganB = rand() % 10;

	if (nBilanganA == nBilanganB) {
		status = "Sama Besar";
	}
	else if (nBilanganA > nBilanganB) {
		status = "Bilangan A lebih besar dari bilangan B";

	}
	else {
		status = "Bilangan A lebih kecil dari bilangan B";
	}
	cout << "Bilangan A adalah " << nBilanganA << endl;
	cout << "Bilangan B adalah " << nBilanganB << endl;
	cout << "Statusnya adalah " << status << endl;

}

