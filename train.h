#ifndef DEF_TRAIN
#define DEF_TRAIN

#include "wagon.h"

class Train{
	public:
		Train();
		Train(Train const& autreTrain); // Constructeur de copie
		~Train(); // Destructeur, inutile car pas d'allocation dynamique
		Train(int,int); // vitesse, poidsWagon
		void afficheStats() const;
		int getVitesse() const;
		int getPoidsWagon() const;
		void setVitesse(int);
		Wagon* getWagon();

		// bool transmettreWagon(*Train);
		bool setWagon(Wagon*);
		bool echangerWagon(Train *);
	
	private:
		int m_Vitesse;
		Wagon *m_Wagon;

};

#endif