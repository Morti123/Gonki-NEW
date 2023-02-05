#pragma once
#include <SFML/Graphics.hpp>
#include "settings.h"

struct Roadobj {
	sf::Texture texture;
	sf::Sprite sprite;
};

void roadObjInit(Roadobj& obj, sf::Vector2f pos, std::string fileName) {
	obj.texture.loadFromFile(fileName);
	obj.sprite.setTexture(obj.texture);
	obj.sprite.setPosition(pos);
}
void roadObjUpdate(Roadobj& obj, sf::Vector2f pos, std::string fileName) {
	obj.sprite.move(0, SpriteSpeedY);
	roadObjUpdate(obj.sprite);
}
void RoadObjDraw(sf::RenderWindow& window, Roadobj& obj){
	window.draw(obj.sprite);
}