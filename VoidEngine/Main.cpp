#include "Game.hpp"

int main() 
{
	Game game{};

	while (game.isRunning()) 
	{
		game.handleInput();
		game.update();
		game.draw();

		game.calculateDeltaTime();
	}

	return 1;
}