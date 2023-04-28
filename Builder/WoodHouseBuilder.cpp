#include "WoodHouseBuilder.h"
#include "HouseBuilder.h"
#include "HouseType.cpp"
#include "Wall.h"
#include "InteriorWall.h"
#include <iostream>

using namespace std;

class WoodHouseBuilder : HouseBuilder {
	int numWalls = 6; //4 exterior walls, 2 interior
	int numWindows = 10;

	string windowMaterial = "Tempered glass";
	string wallMaterial = "Wood, 4x6";
	string interiorWallMaterial = "Wood, 2x4";
	string roofMaterial = "Metal";

public:
	WoodHouseBuilder() {
		this->builderName = "Wood House Builder";
		setHouseType(WOOD);
	}

	HouseBuilder addWalls() {
		// add exterior walls

		for (int i = 0; i < 4; i++) {
			cout << "Nailing wood for wall made out of " + wallMaterial);
			house.addWall(new Wall(wallMaterial));
		}

		// add interior walls
		for (int i = 0; i < numWalls - 4; i++) {
			cout << "Nailing wood for interior wall made out of " + interiorWallMaterial);
			house.addWall(new InteriorWall(interiorWallMaterial));
		}
	}
};
