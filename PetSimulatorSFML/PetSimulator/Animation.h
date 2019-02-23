#ifndef PETSIMULATOR_ANIMATION
#define PETSIMULATOR_ANIMATION

#include <SFML/Graphics.hpp>

class Animation
{
public:
	enum class AnimationIndex
	{
		WALKING_UP,
		WALKING_DOWN,
		WALKING_LEFT,
		WALKING_RIGHT,
		COUNT
	};

public:
	Animation();
	Animation(int posX, int posY, int imgWidth, int imgHeight, std::string fileName, int frameAdjust);

	void ApplyToSprite(sf::Sprite &sprite) const;
	void Update(float dT, int frameAdjust);
	void SetAnimationFrames(int frameAdjust);

private:
	void Advance(int frameAdjust);

private:
	static constexpr int numFrames_ = 3;
	static constexpr float holdTime_ = 0.1f;
	sf::Texture texture_;
	sf::IntRect frames_[numFrames_];
	int iFrame_;
	float time_;
};

#endif