#ifndef DEF_WAGON
#define DEF_WAGON

class Wagon{
	public:
		Wagon();
		Wagon(Wagon const& autreWagon); // Constructeur de copie
		~Wagon(); // Destructeur, inutile car pas d'allocation dynamique
		Wagon(int);
		int getPoids() const;
		void setPoids(int);
	
	private:
		int m_Poids; // en tonnes
};

#endif