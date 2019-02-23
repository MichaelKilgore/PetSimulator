#include "Animation.h"

Animation::Animation(int posX, int posY, int imgWidth, int imgHeight, std::string fileName, int frameAdjust)
{
	iFrame_ = 0;
	time_ = 0.0f;
	
	texture_.loadFromFile(fileName);

	for (int i = 0; i < numFrames_ - frameAdjust; ++i)
	{
		frames_[i] = { posX + i * imgWidth, posY, imgWidth, imgHeight };
	}
}

void Animation::ApplyToSprite(sf::Sprite & sprite) const
{
	sprite.setTexture(texture_);
	sprite.setTextureRect(frames_[iFrame_]);
}

void Animation::Update(float dT, int frameAdjust)
{
	time_ += dT;

	while (time_ >= holdTime_)
	{
		time_ -= holdTime_;
		Advance(frameAdjust);
	}
}

void Animation::SetAnimationFrames(int frameAdjust)
{
	frames_[numFrames_ - frameAdjust];
}

void Animation::Advance(int frameAdjust)
{
	if (++iFrame_ >= numFrames_ - frameAdjust)
	{
		iFrame_ = 0;
	}
}

