#include "Greeter.h"

Greeter::Greeter(std::string name) {
	_name = name;
}

void Greeter::greet() {
	std::cout << "������������, " << _name << "!" << std::endl;
}