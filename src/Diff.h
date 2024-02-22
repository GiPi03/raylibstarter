#include "iostream"
#include "vector"
#include "string"
#include "list"
#include <cstdlib>
#include "raylib.h"
#include "config.h"
#include "map"




namespace TowerDefense
{
	std::string  ant;
	bool question = false;
	class Difficulties
	{
	public:
		Difficulties();

	protected:
		/*int	getGameDifficulty();
		void setGameDifficulty(int difficulty);*/

	private:
		int difficulty(int);
		int multiplier(int b);
		enum DifficultyType { Easy, Medium, Hard };

		void enemyAttack();
		void enemyHealth();
		void enemySpeed();
		void enemyDamage();
	};


}