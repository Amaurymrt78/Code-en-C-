#include <iostream>
#include <string>
int main() {
}

class RacingCar
{

private:

	float Speed;

	int RacingCarInstance{ 1 };

	int Wheels{ 4 };
	std::string Model{ "MX 5" };

public:
	std::string Brand{ "Mazda" };
	RacingCar()
	{

	}
	RacingCar(const std::string& brand, const std::string& model, const int& wheels)
		: Brand(brand), Model(model), Wheels(wheels) {}
	RacingCar(const std::string& brand, const std::string& model)
		: Brand(brand), Model(model) {}

	~RacingCar()
	{


	}

	void StartEngin() {
		std::cout << Brand << " " << Model << "s engine is roaring to life\n";
	}

	void Accelerate(int speed) {
		std::cout << Brand << " " << Model << " accelerates to " << speed << "mph\n";

	}
	void Breake(int wheels) {
		std::cout << Brand << " " << Model << "Brakes to" << wheels << "Brakes end";
	}



	const std::string& h = getBrand() const {
		return Brand;
	}
	void setBrand(const std::string& brand) {
		Brand = brand;
	}

	int getWheels() const
	{

	}

private:
	int Horsepower;
	double TopSpeed;

protected:
	std::string Chassis;

};

class Vehicle
{
public:
	std::string Model;

	virtual void StartEngin()
	{
		std::cout << "Engine Started!" << std::endl;
	}

	void DisplayInfo() const {
		std::cout << "Vehicle Info:" << std::endl;
	}

private:
	int Wheels;
protected:
	std::string Engine;

};

class Truck : Vehicle
{
public:
	void StartEngin() override
	{


	}
private:

};