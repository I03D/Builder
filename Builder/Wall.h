#include <iostream>

using namespace std;

class Wall {
public:
	string name;
	string material;

	Wall(string material);

	void setName(string name);

	string ToString();
};
