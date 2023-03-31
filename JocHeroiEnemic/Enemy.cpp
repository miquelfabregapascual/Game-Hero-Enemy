#include "Enemy.h"

Enemy::Enemy() {

}
Enemy::~Enemy() {

}
void Enemy::init(std::string textureName, sf::Vector2f position, float speed) {
	m_sprite.setScale(0.35, 0.35);
	m_position = position;
	m_speed = speed;
	// Load a Texture
	m_texture.loadFromFile(textureName.c_str());
	// Create Sprite and Attach a Texture
	m_sprite.setTexture(m_texture);
	m_sprite.setPosition(m_position);
	m_sprite.setOrigin(m_texture.getSize().x / 2,
	m_texture.getSize().y / 2);
}

void Enemy::update(float dt) {
	m_position.x -= m_speed * dt;
	m_sprite.setPosition(m_position);
}

sf::Sprite Enemy::getSprite() { return m_sprite; }