#ifndef Game_hpp
#define Game_hpp

#include "SceneCollection.hpp"
#include "ResourceAllocator.hpp"
#include "Window.hpp"
#include "WorkingDirectory.hpp"

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
	WorkingDirectory workingDirectory;

	sf::Clock clock;
	float deltaTime;

	Window window;

	SceneCollection sceneCollection;

	ResourceAllocator<sf::Texture> textureAllocator;
};

#endif // !Game_hpp
