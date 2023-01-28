// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Functions.h"
using namespace std;
int main()
{
	//  player vars
	string p1Name;
	int p1Level = 1;
	int p1Experience = 0;
	int p2level = 1;
	int p2Experience = 0;
	int partySize[2];
	int pHealth = 100;
	int p2Health = 100;
	int overallHealth = pHealth + p2Health;
	int currentHealthP1, currentHealthP2;
	string p2Name;
	//Battle Vars
	int atkDamageP1=20;
	int atkDamageP2 = 20;
	int atkDamageSlime = 10;
	int damageSlime = 6;
	// inventory items
	bool bHasMap;

	// battle choice vars
	int choice;
	int battleChoice;
	bool bAttackEnemy;
	string enemyType;
	int troopSize;
	int enemyHealth = 100;
	string itemName[5];
	int inventoryID[5];
	// save game related variable.
	string location = "Lakeman's Pier";
	// start of main game
	enemyType = "Slime";
	cout << "Enter a name for party member 1\n";
	cin >> p1Name;
	cout << "Enter a name for party member 2\n";
	cin >> p2Name;
	//std::cout << p1Name << "\n" << p2Name<<"\n";
	// Story explaination
	cout << "Story:" << p1Name << "and " << p2Name << " are off on an adventure to find Davey Jones's tresure. They will come across many different climates, trials and tribulations." << "\n"
		<<"Your goal is to get "<<" "<<p1Name <<" "<<"and"<<" "<<p2Name <<" " <<"to the treasure."<<"\n";
	cout << "Chapter 1:" << "\n" << "The start of a new adventure";
	cout << "\n" << "Location: Lakeman's Pier" << "\n" << "June 23,1746" <<"\n" <<"Time:5:46 PM"<<"\n";
	cout << p1Name << " " << "is out fishing when a bottle is floating near the dock where " <<" "<< p1Name <<" "<< "is sitting." << "\n";
	cout << "Does" << " " << p1Name << " ignore the bottle? or investigate the bottle." << "\n";
	cout << "Please enter 1 or 2 and use only numbers" << "\n";
	cin >> choice;
	switch (choice)
	{
	case 1:
		cout << p1Name << " " << " notices something sticking out of the bottle as it floats closer and closer to the pier." << " " << " When the bottle gets closer to" << p1Name <<
			"grabs the bottle and examines it.";
		cout << p1Name << " " << "continues to inspect the bottle and has found a map inside of it. The map has been added to inventory.";
			bHasMap = true;
			
		break;
	}
	return 0;
}


