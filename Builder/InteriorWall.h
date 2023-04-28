#include <iostream>
#include "Wall.h"

using namespace std;

class InteriorWall : Wall {
public:
	InteriorWall(string material) : base(material);
};
