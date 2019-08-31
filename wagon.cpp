#include "wagon.h"

Wagon::Wagon() : m_Poids(85){}

// Constructeur de copie
Wagon::Wagon(Wagon const& autreWagon) : m_Poids(autreWagon.m_Poids){}

Wagon::Wagon(int poids) : m_Poids(poids){}

Wagon::~Wagon(){}

int Wagon::getPoids() const {
	return m_Poids;
}

void Wagon::setPoids(int poids){
	m_Poids = poids;
}