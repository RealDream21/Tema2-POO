#pragma once
#include "abonament.h"
#include "persoana.h"
#include <vector>


class Clienti
{
	std::vector<std::shared_ptr<Abonat>> lista;
public:
	Clienti() = default;
	void appendClient(std::shared_ptr<Abonat>& ptr_abonat);
	std::shared_ptr<Abonat>& removeLastClient();
	std::shared_ptr<Abonat>& operator[](int index);
};

