// first program in C++
#include <iostream>

#include "train.h"

using namespace std;

int main()
{
	Train train1(400, 100);
	Train train2;
	Train *ptrTrain = &train2;

	cout << "Avant échange : " << endl;
	train1.afficheStats();
	train2.afficheStats();

	train1.echangerWagon(ptrTrain);

	cout << "Après échange : " << endl;
	train1.afficheStats();
	train2.afficheStats();


	delete ptrTrain;
	return 0;
}
