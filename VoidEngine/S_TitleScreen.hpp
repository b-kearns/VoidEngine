#ifndef TitleScreen_hpp
#define TitleScreen_hpp

#include "Scene.hpp"
#include "SceneCollection.hpp"
#include "Window.hpp"
#include "ResourceAllocator.hpp"
#include "WorkingDirectory.hpp"

#include <SFML/Graphics.hpp>

class S_TitleScreen : public Scene
{
public:
	S_TitleScreen(WorkingDirectory& workingDirectory, SceneCollection& sceneCollection, Window& window);

	void onCreate() override;
	void onDestroy() override;

	void onActivate() override;
	void onDeactivate() override;

	void handleInput() override;
	void update(float deltaTime) override;
	void draw(Window& window) override;
private:
	SceneCollection& sceneCollectionRef;
	Window& windowRef;
	WorkingDirectory& workingDirectoryRef
};
#endif // !TitleScreen_hpp
