#include <iostream>
#include <Windows.h>
#include <string>
#include <iomanip>
#include <vector>

class CoffeeMachine
{
public:
	CoffeeMachine() :name("Coffee Maker"), article("A000AA"), type("Drip"), price(5000), power(1500), maxVolume(0.5) {}
	CoffeeMachine
	(
		std::string name, 
		std::string article, 
		std::string type, 
		int price, 
		int power, 
		float maxVolume
	) :name(name), article(article), type(type), price(price), power(power), maxVolume(maxVolume) {}

	~CoffeeMachine();

	void Print()const;

	void setName(std::string name);
	void setArticle(std::string article);
	void setType(std::string type);
	void setPrice(int price);
	void setPower(int power);
	void setMaxVolume(float maxVolume);

	auto getName()const -> std::string;
	auto getArticle()const-> std::string;
	auto getType()const-> std::string;
	auto getPrice()const -> int;
	auto getPower()const -> int;
	auto getMaxVolume()const -> float;

private:
	std::string name;
	std::string article;
	std::string type;

	int price;
	int power;

	float maxVolume;
};

CoffeeMachine::~CoffeeMachine()
{
}

void CoffeeMachine::Print()const
{
	std::cout
		<< std::setw(20) << std::left << "Name: " << std::right << this->name << '\n'
		<< std::setw(20) << std::left << "Article: " << std::right << this->article << '\n'
		<< std::setw(20) << std::left << "Type: " << std::right << this->type << '\n'
		<< std::setw(20) << std::left << "Price: " << std::right << this->price << '\n'
		<< std::setw(20) << std::left << "Power: " << std::right << this->power << '\n'
		<< std::setw(20) << std::left << "Max volume: " << std::right << this->maxVolume << '\n';
}

void CoffeeMachine::setName(std::string name)
{
	this->name = name;
}
void CoffeeMachine::setArticle(std::string article)
{
	this->article = article;
}
void CoffeeMachine::setType(std::string type)
{
	this->type = type;
}
void CoffeeMachine::setPrice(int price)
{
	this->price = price;
}
void CoffeeMachine::setPower(int power)
{
	this->power = power;
}
void CoffeeMachine::setMaxVolume(float maxVolume)
{
	this->maxVolume = maxVolume;
}

auto CoffeeMachine::getName() const -> std::string
{
	return this->name;
}
auto CoffeeMachine::getArticle() const -> std::string
{
	return this->article;
}
auto CoffeeMachine::getType() const -> std::string
{
	return this->type;
}
auto CoffeeMachine::getPrice() const -> int
{
	return this->price;
}
auto CoffeeMachine::getPower() const -> int
{
	return this->power;
}
auto CoffeeMachine::getMaxVolume() const -> float
{
	return this->maxVolume;
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	CoffeeMachine machine;

	std::vector<CoffeeMachine> collection;
	collection.push_back(machine);

	machine.setName("Nurbeck");
	machine.setArticle("B111BB");
	machine.setType("French Press");
	machine.setPrice(3700);
	machine.setPower(1700);
	machine.setMaxVolume(0.6);

	collection.push_back(machine);
	collection.push_back({ "Aristotel", "C333C", "Cold Brew", 4099, 1200, 0.4 });

	std::string name;
	std::string type;
	int price;
	int power;
	float maxVolume;

	std::cout << "В коллекции есть " << collection.size() << " кофемашин.\nДобавьте еще одну:\n";

	std::cout << "Name: ";
	std::cin >> name;
	std::cout << "Type: ";
	std::cin >> type;
	std::cout << "Price: ";
	std::cin >> price;
	std::cout << "Power: ";
	std::cin >> power;
	std::cout << "Max Volume: ";
	std::cin >> maxVolume;

	collection.push_back({ name, "D444DD", type, price, power, maxVolume });

	std::cout << "\n\nCollection: \n";

	for (int i = 0; i < collection.size(); i++)
	{
		std::cout << i + 1 << ":\n";
		collection[i].Print();
		std::cout << "\n\n";
	}

	return 0;
}


