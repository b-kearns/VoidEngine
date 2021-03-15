#ifndef Game_hpp
#define Game_hpp

#include "SceneCollection.hpp"
#include "Window.hpp"

#include <SFML/Graphics.hpp>

/// <summary>
/// The Game class encompasses the main game loop of input->update->draw
/// </summary>
class Game
{
public:
	Game();

	void init();

	void handleInput();
	void update();
	void draw();

	bool isRunning() const;

	void calculateDeltaTime();

private:
	sf::Clock clock;
	float deltaTime;

	Window window;

	SceneCollection sceneCollection;
};

#endif // !Game_hpp
