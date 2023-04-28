#include "HouseBuilder.h"
#include "HouseType.cpp"
#include <iostream>

using namespace std;

class HouseBuilder {
	HouseType houseType;

protected:
	string builderName;

	House house = new House();

public:
	void setHouseType(HouseType houseType) {
		this->houseType = houseType;
		house->setHouseType(houseType);
	}

	virtual HouseBuilder addWalls();
	virtual HouseBuilder addRoof();
	virtual HouseBuilder addWindows();

	virtual House build() {
		cout << "Build the house!";
		return house;
	}
};
