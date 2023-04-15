#include "clienti.h"

void Clienti::appendClient(std::unique_ptr<Abonat>& ptr_abonat)
{
	lista.push_back(std::move(ptr_abonat));
	return;
}

std::unique_ptr<Abonat>& Clienti::removeLastClient()
{
	std::unique_ptr<Abonat> last = std::move(lista.back());
	lista.pop_back();
	return last;
}

std::unique_ptr<Abonat>& Clienti::operator[](int i)
{
	if (i >= lista.size())
		throw std::out_of_range("Elementul nu exista in lista\n");
	else
		return lista[i];
}


void Clienti::print()
{
	for (int i = 0; i < lista.size(); i++)
	{
		lista[i]->showInfo();
		std::cout << std::endl;
	}
}