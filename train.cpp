#include "train.h"
#include <iostream>

using namespace std;

Train::Train() : m_Vitesse(300), m_Wagon(0){
	m_Wagon = new Wagon(90);
}

// Constructeur de copie
Train::Train(Train const& autreTrain) : m_Vitesse(autreTrain.m_Vitesse), m_Wagon(autreTrain.m_Wagon){}

Train::Train(int vitesse, int poidsWagon) : m_Vitesse(vitesse), m_Wagon(0){
	m_Wagon = new Wagon(poidsWagon);
}

Train::~Train(){
	delete m_Wagon;
}

void Train::afficheStats() const{
	cout << "Vitesse : " << getVitesse() << " km/h. Poids du wagon : " << getPoidsWagon() << " tonnes." << endl;
}

int Train::getVitesse() const {
	return m_Vitesse;
}

int Train::getPoidsWagon() const {
	return m_Wagon->getPoids();
}

void Train::setVitesse(int vitesse){
	m_Vitesse = vitesse;
}

Wagon* Train::getWagon(){
	return m_Wagon;
}

// bool Train::transmettreWagon(Train *train){

// 	train->setWagon(m_Wagon);
	

// }

bool Train::setWagon(Wagon *wagon){
	//delete m_Wagon;
	m_Wagon=wagon;

	//cout << endl << endl << "m_Wagon.poids = " << m_Wagon->getPoids() << endl;
	return true;
}

bool Train::echangerWagon(Train *train){
	Wagon *ptrEchangeWagon;

	ptrEchangeWagon = this->m_Wagon;
	//cout << "echanger Wagon de poids " << ptrEchangeWagon->getPoids() << endl;
	
	m_Wagon = train->getWagon();
	//cout << "avec Wagon de poids " << m_Wagon->getPoids() << endl;

	// Le problème est là :
	train->setWagon(ptrEchangeWagon);

	return true;
}
