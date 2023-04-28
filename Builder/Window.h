#include <iostream>

using namespace std;

class Window {
public:
	string name;
	string material;

	Window(string material);

	void setName(string name);

	string ToString();
};
