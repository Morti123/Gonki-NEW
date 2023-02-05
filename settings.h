#pragma once
#include <SFML/Graphics.hpp>

const float WINDOW_WIDTH = 600;
const float WINDOW_HEIGHT = 1000;
const std::string WINDOW_TITLE = "SFML Lesson2";
const float FPS = 60.f;

const sf::Vector2f TravaStartPos{ 0, 0 };
const std::string Trava_File_Name("trava (3).jpg");

const sf::Vector2f DorogaStartPos{ 150, 0 };
const std::string Doroga_File_Name("Doroga (1).png");

const sf::Vector2f PesokStartPos{ 135,0 };
const std::string Pesok_File_Name("Pesok (2).jpg");

float SpriteSpeedY = 20.f;