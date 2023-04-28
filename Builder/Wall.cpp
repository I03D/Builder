#include "Wall.h"
#include <iostream>

using namespace std;

class Wall {
public:
	string name;
	string material;
	
	Wall(string material) {
		this->name = "Wall made out of " + material;
	}

	void setName(string name) {
		this->name = name;
	}

	string ToString() {
		return this->name;
	}
};