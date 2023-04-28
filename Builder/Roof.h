#include <iostream>

using namespace std;

class Roof {
public:
	string name;
	string material;

	Roof(string material);

	void setName(string name);

	string ToString();
};
