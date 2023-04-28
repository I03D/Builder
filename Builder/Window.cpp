#include "Window.h"
#include <iostream>

using namespace std;

class Window {
public:
	string name;
	string material;

	Window(string material) {
		this->name = "Window made out of " + material;
	}

	void setName(string name) {
		this->name = name;
	}

	string ToString() {
		return this->name;
	}
};