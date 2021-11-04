#include<iostream>
using namespace std;

//function decleration
void shop();

// global variables (BAD)
string items[10] = { "flashlight" };
int money;

int main() {
	
	//local variables
	int room = 1;
	string input;
	


	cout << "you wake up to find yourself in a dark and scary basement. Try to escape, go ahead. Good Luck" << endl;

	do { // beginning of game loop
		cout << "iventory; " << endl;
		for (int i = 0; i < 10; i++)
			cout << items[i] << " | ";
		cout << endl;
		switch (room) {
		case 1:
			cout << "you are in a room. You can go North" << endl;
			cin >> input;
			if (input == "n")
				room = 2;

			else
				cout << "Nope not an option. There's a wall there" << endl;

			break;
		case 2:
			cout << "you are in room 2. you can go North, or go back South ." << endl;
			cin >> input;
			if (input == "n")
				room = 3;
			else if (input == "s")
				room = 1;
			else
				cout << "Nope not an option. There's a wall there" << endl;
			if (input.compare("pick up") == 3)
				items[3] = "empty";
			break;
		case 3:
			cout << "you are in room 3. you can go East or West, or go back south" << endl;
			cin >> input;
			if (input == "w")
				room = 4;
			else if (input == "e")
				room = 5;
			else if (input == "s")
				room = 2;
			else
				cout << "Nope not an option. There's a wall there" << endl;
			if (input.compare("pick up") == 0)
				items[0] = "key";
			break;
		case 4:
			cout << "you are in room 4. you can go East." << endl;
			cin >> input;
			if (input == "e")
				room = 3;
			else
				cout << "Nope not an option. There's a wall there" << endl;
			break;
		case 5:
			cout << "you are in room 5. you can go North, or back West" << endl;
			cin >> input;
			if (input == "n")
				room = 6;
			else if (input == "w")
				room = 3;
		case 6:
			cout << "you are in room 6. you can go North or East, or back South" << endl;
			cin >> input;
			if (input == "n")
				room = 7;
			else if (input == "e")
				room = 7;
			else if (input == "s")
				room = 5;
		case 7:
			cout << "you are in room 7. you can only go back West" << endl;
			cin >> input;
			if (input == "w")
				room = 6;
		case 8:
			cout << "you are in room 8. you can go West or back South" << endl;
			cin >> input;
			if (input == "w")
				room = 9;
			else if (input == "s")
				room = 5;
			else
				cout << "Nope not an option. There's a wall there" << endl;
			break;

		}// end switch
	} while (input != "q"); // end game loop

}


//funtion defenitions go here
void shop() {
	string input;
	do {
		cout << "Hello... welcome to my shop" << endl;
		cout << "press 'f' for flashlight, 'b' for bandaid, and 's' for shank." << endl;
		cout << "press 'q' to quit." << endl;
		cin >> input;
		if (input == "p"&&money>=3) {
			money -= 3;
			items[0] = "flashlight";
		}
		else if(input == "b"&&money<=1) {
			money -= 1;
			items[1] = "bandaid";
		}
		else if (input == "s"&&money<=5) {
			money -= 5;
			items[2] = "shank";
		}
			
	} while (input != "q");

