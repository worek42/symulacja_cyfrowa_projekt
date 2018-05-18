#include "DonationPoint.h"

int main()
{
	std::cout << "Wybierz tryb petli 1 - krokowa, 2 - ciaglym\n(podanie innej liczby skonczy sie wyborem petli ciaglej)\nKrok jest co cale przejscie petli.\nPetle koncza sie, gdy zostanie osiagnieta liczba wszystkich zamowien rowna 10^N" << std::endl;
	bool type;
	int i;
	std::cin >> i;

	if (i == 1)
		type = true;
	else
		type = false;

	DonationPoint test(type);
	test.start();
	system("pause");
	return 0;
}