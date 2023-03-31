#pragma once
#include <string>
#include <iostream>

//functie de afisare tipul de abonament adica virtual intre abonament si abonament_premium

class Abonament
{
	std::string nume;
	float pret;
	int perioada;
public:
	Abonament(const std::string&, const float, const int);
	Abonament(const std::string&&, const float, const int);
	Abonament(const Abonament&);
	Abonament();
	Abonament& operator=(const Abonament&);
};


class Abonament_premium : public Abonament
{
	int reducere;
public:
	Abonament_premium(const int, const std::string&, const float, const int);
	Abonament_premium(const int, const std::string&&, const float, const int);
	Abonament_premium(const int, const Abonament&);
	Abonament_premium(const Abonament_premium&);
	Abonament_premium();
};
