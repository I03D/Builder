#include <iostream>
#include "HouseBuilder.h"
#include "WoodHouseBuilder.h"
#include "House.h"

using namespace std;

void Main(string[] args) {
	HouseBuilder woodHouseBuilder = new WoodHouseBuilder();
	House woodHouse = woodHouseBuilder.addwalls().addWindows().addRoof().build();
	cout << woodHouse;
}
