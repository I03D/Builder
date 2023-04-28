#include "HouseType.cpp"
#include <iostream>

using namespace std;

class HouseBuilder {
	HouseType houseType;

protected:
	string builderName;
	House house;

public:
	void setHouseType(HouseType houseType);

	virtual HouseBuilder addWalls();
	virtual HouseBuilder addRoof();
	virtual HouseBuilder addWindows();

	virtual House build();
};
