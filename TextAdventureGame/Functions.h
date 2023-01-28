#pragma once
#include <iostream>
#include <string>

using namespace std;
void  battleStart(string enemyName, int numOfEnemies, int enemyHealth, int player1health, 
	int player2health, int battleChoiceP1, int battleChoiceP2, int eDamage, int overallEHealth, 
	int p1Damage , int p2Damage, int p1Mana ,int p2Mana,string p1Name,string p2Name)
{
	while (enemyHealth < 0)
	{
		bool bP1TurnEnd=false;
		bool bP2TurnEnd = true;
		int magicBattleChoiceP1, MagicBattleChoiceP2;
		bool eTurn = false;
		
		// using battle choices 
		if (bP2TurnEnd = true) {
			cout << "What will the first party member do?" << "\n" << "1) Physical Attack, 2) Magic Attack, 3) Guard, 4)Negotiate ";
			cin >> battleChoiceP1;
			switch (battleChoiceP1)
			{
				// physical Attack
			case 1:
				cout << p1Name << " " << "uses a sword attack";
				cout << p1Name << " " << "dealt " << " " << p1Damage;
				overallEHealth = enemyHealth - p1Damage;

				break;

				// magic attack
			case 2:
				int magicChoiceAttackType;
				cout << p1Name << "used a magic attack, which one would " << " " << p1Name << " " << "like to use?";
				// add a list of possible attacks
				cin >> magicBattleChoiceP1;
				switch (magicBattleChoiceP1)
				{
				case 1:
					cout << p1Name << "used" << " " << "placeholder attack #1";
					// ANY damage 
					break
				}

			}
			bP2TurnEnd = false;
			bP1TurnEnd = true;
		}


		if (bP1TurnEnd = true) 
		{
		
		}
	}

}
void classSelect(char classOption1, char classOption2) {}