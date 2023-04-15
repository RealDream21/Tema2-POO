#pragma once
#include <string>
#include <iostream>
#include <memory>

//functie de afisare tipul de abonament adica virtual intre abonament si abonament_premium

class Abonament
{
protected:
	static int nr_abonamente;
	std::string nume;
	float pret;
	int perioada;
public:
	Abonament(const std::string&nume, const float pret, const int perioada);
	Abonament(const std::string&&nume, const float pret, const int perioada);
	Abonament(const Abonament&abonament);
	Abonament();
	virtual ~Abonament();
	Abonament& operator=(const Abonament&abonament);
	friend std::ostream& operator<<(std::ostream&os, const Abonament&abonament);
	friend std::ostream& operator<<(std::ostream&os, Abonament* abonament_ptr);
	friend std::istream& operator>>(std::istream&is, Abonament& abonament);
	friend std::istream& operator>>(std::istream&is, Abonament* abonament_ptr);
	//friend std::istream& operator>>(std::istream&is, std::shared_ptr<Abonament>&);
	virtual void showInfo()const;
	virtual void setInfo();
	virtual int getReducere();
	static void cateAbonamente();
};

class Abonament_premium : public Abonament
{
	static int nr_abonamente_premium;
	int reducere;
public:
	Abonament_premium(const int reducere, const std::string&nume, const float pret, const int perioada);
	Abonament_premium(const int reducere, const std::string&&nume, const float pret, const int perioada);
	Abonament_premium(const int reducere, const Abonament&abonament);
	Abonament_premium(const Abonament_premium&abonament_premium);
	Abonament_premium(const Abonament&abonament);
	Abonament_premium();
	~Abonament_premium();
	Abonament_premium& operator=(const Abonament_premium& abonament_premium);
	friend std::ostream& operator<<(std::ostream&os, const Abonament_premium& abonament_premium);
	friend std::ostream& operator<<(std::ostream&os, const Abonament_premium* abonament_premium_ptr);
	friend std::istream& operator>>(std::istream& is, Abonament_premium& abonament_premium);
	friend std::istream& operator>>(std::istream& is, Abonament_premium* abonament_premium_ptr);
	void showInfo()const override;
	void setInfo()override;
	int getReducere()override;
	static void cateAbonamente();
};