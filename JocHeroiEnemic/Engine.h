#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <vector>
#include "Hero.h"
#include "Enemy.h"
#include "bala.h"

class Engine {
private:
	//creem la variables per crear la finestra de joc
	sf::Vector2f viewSize;
	sf::VideoMode vm;
	sf::RenderWindow window;
	//variable per emmagatzemar el fons
	//cel
	sf::Texture skyTexture;
	sf::Sprite skySprite;
	//paisatge
	sf::Texture bgTexture;
	sf::Sprite bgSprite;
	// Text
	sf::Font headingFont;
	sf::Font scoreFont;
	sf::Text headingText;
	sf::Text tutorialText;
	sf::Text scoreText;
	// Audio
	sf::Music bgMusic;
	//variable dels personatges
	Hero Miquel;
	std::vector<Enemy*> patates;
	bala rocket;
	//temps entre frame
	float currentTime;
	float prevTime = 0.0f;
	//variables del joc.
	int score = 0;
	bool gameover = true;
	void reset();
	//void spawnEnemy();
	void spawnEnemy();
	void init();
	void updateInput();
	void update(float dt);
	void draw();
	void disparar();
	
public:
	// This is the constructor, called whenever a 'Game' object is created.
	// Use this to setup stuff you have to set once.
	// This should only be used for things that can't fail, to always have a defined state.
	Engine();
	// This is the destructor, called whenever a 'Game' object is destroyed.
	~Engine();
	// Load and run the game
	int run();
};