#pragma once
#include <iostream>

class Greeter {
public:
	Greeter(std::string name);
	void greet();
private:
	std::string _name;
};