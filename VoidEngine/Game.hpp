#ifndef Game_hpp
#define Game_hpp

#include "SceneCollection.hpp"

#include <SFML/Graphics.hpp>

/// <summary>
/// The Game class encompasses the main game loop of input->update->render.
/// </summary>
class Game
{
public:
	Game();

	void init();

	void handleInput();
	void update();
	void render();

	bool isRunning();

private:

	SceneCollection sceneCollection;
};

#endif // !Game_hpp
