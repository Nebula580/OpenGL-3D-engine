#include "Game.h"

int main()
{
	Game game("Argo Studios 3D",
		1920, 1080,
		4, 4,
		false);

	//MAIN LOOP
	while (!game.getWindowShouldClose())
	{
		//UPDATE INPUT ---
		game.update();
		game.render();	
	}

	return 0;
}