#include "Greeter.h"

Greeter::Greeter(std::string name) {
	_name = name;
}

void Greeter::greet() {
	std::cout << "Здравствуйте, " << _name << "!" << std::endl;
}