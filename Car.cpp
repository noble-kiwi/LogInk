#include "Car.h"

//Реализация класса автомобиля
Car::Car() {
	m_Speed = 400;

	m_Texture.loadFromFile("Image/Car.png");
	m_Sprite.setTexture(m_Texture);

	m_Position.x = 300;
	m_Position.y = 300;
}

Sprite Car::getSprite() {
	return m_Sprite;
};

void Car::moveUp() {
	m_UpPressed = true;
};
void Car::moveDown() {
	m_DownPressed = true;
};

void Car::stopUp() {
	m_UpPressed = false;
};
void Car::stopDown() {
	m_DownPressed = false;
};

void Car::update(float elapsedTime)
{
	if (m_UpPressed)
	{
		m_Position.y += m_Speed * elapsedTime;
	}

	if (m_DownPressed)
	{
		m_Position.y -= m_Speed * elapsedTime;
	}

	// Теперь сдвигаем спрайт на новую позицию
	m_Sprite.setPosition(m_Position);

}