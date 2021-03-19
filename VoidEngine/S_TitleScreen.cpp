#include "S_TitleScreen.hpp"

S_TitleScreen::S_TitleScreen(WorkingDirectory& workingDirectory, SceneCollection& sceneCollection, Window& window)
	: workingDirectoryRef(workingDirectory), sceneCollectionRef(sceneCollection), windowRef(window)
{
}

void S_TitleScreen::onCreate()
{
	//Create O_TitleImage

}

void S_TitleScreen::onDestroy()
{
}

void S_TitleScreen::onActivate()
{
}

void S_TitleScreen::onDeactivate()
{
}

void S_TitleScreen::handleInput()
{
}

void S_TitleScreen::update(float deltaTime)
{
	objectCollection.update(deltaTime);
}

void S_TitleScreen::draw(Window& window)
{
	objectCollection.draw(window);
}
