#include "Diff.h"


namespace TowerDefense
{
	int Difficulties::multiplier(int b)
	{
		/*switch (Difficulties::DifficultyType{})
		{
		case ant = "Easy":
			return 1;
			question = true;
			break;
		case Medium:
			return 2;
			question = true;
			break;
		case Hard:
			return 3;
			question = true;
			break;
		}
		return a;*/
		// Define a map to associate strings with actions
		std::map<std::string, std::string> actions;
		actions["Easy"] = b = 1;
		actions ["easy"] = b = 1;
		actions["Medium"] = b = 2;
		actions["medium"] = b = 2;
		actions["Hard"] = b = 3;
		actions["hard"] = b = 3;


		// Check if the user input exists in the map
		if (actions.find(ant) != actions.end()) {
			std::cout << "The Difficulty is: " << actions[ant] << std::endl;
		}
		else {
			std::cout << "Invalid command." << std::endl;
		}
		return b;
	}

	void Difficulties::enemyAttack()
	{
		5 * multiplier();
	}
	void Difficulties::enemyHealth()
	{
		10 * multiplier();
	}
	void Difficulties::enemySpeed()
	{
		1 * multiplier();
	}
	void Difficulties::enemyDamage()
	{
		5 * multiplier();
	}

	Difficulties::Difficulties()
	{
		void enemyAttack();
		void enemyHealth();
		void enemySpeed();
		void enemyDamage();
	}

}