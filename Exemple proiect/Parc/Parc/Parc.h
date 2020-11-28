#include "Carusel.h"

namespace ParcDistractii {
	class Parc
	{
	public:
		Carusel** carusele;
		int numarCarusele;
		Parc();
		void adaugaCarusel(Carusel* c);
		friend ostream& operator << (ostream& os, const Parc& p);
	};
}
