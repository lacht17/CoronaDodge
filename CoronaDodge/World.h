#pragma once
#include "TextureManager.h"
#include "EntityManager.h"
#include "Player.h"

constexpr float ArenaWidth	= 800.0f;
constexpr float ArenaHeight	= 600.0f;
class World
{
	// play area
	sf::RectangleShape arena;
	//entity manager
	EntityManager entities;
	Player player;
	sf::RenderWindow* pWnd;
	float spawnVal = 0;
	int covCount = 0;

public:
	World();
	void setWindow(sf::RenderWindow* pWnd);
	void init();
	void draw();
	void update(sf::Time dt);
	void updateEntities();
	void spawnEntity(sf::Time dt);
	void updatePlayerPos(sf::Vector2f deltaPos);

private:
	void initPlayer();
};

