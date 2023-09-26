#include <iostream>
#include "Inventory.h"
#include "InputKey.h"

using namespace std;

int main() {
	Inventory invetory;
	InputKey inputkey;
	//invetory.Renderer();
	
	for (int i = 0; i < 8; i++) {
		invetory.AddItem();
	}
	invetory.Renderer();
	
	while (true) {
		inputkey.Move();
	}
	
	return 0;
}
