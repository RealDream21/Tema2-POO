#include "clienti.h"

void Clienti::appendClient(std::unique_ptr<Abonat>& ptr_abonat)
{
	lista.push_back(ptr_abonat);
}

std::unique_ptr<Abonat>& Clienti::removeLastClient()
{
	std::shared_ptr<Abonat>& to_return = lista.back();
	//try aici
	lista.pop_back();
	return to_return;
}

std::unique_ptr<Abonat>& Clienti::operator[](int i)
{
	if (i < lista.size()) {
		//merge cu try aici
		std::cout << "Nu exista abonatul nr " << i << std::endl;
		return lista[0];
	}
	else {
		return lista[i];
	}
}