#include "Roof.h"
#include <iostream>

using namespace std;

class Roof {
public:
	string name;
	string material;

	Roof(string material) {
		this->name = "Roof made out of " + material;
	}

	void setName(string name) {
		this->name = name;
	}

	string ToString() {
		return this->name;
	}
};