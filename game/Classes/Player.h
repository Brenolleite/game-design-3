#include "cocos2d.h"

class Player
{
 public:
  cocos2d::SpriteBatchNode* createPlayer(float vel);
  cocos2d::Sprite* getSprite();
  float getVelocity();
  cocos2d::Point getPosition();
  void setPosition(float x, float y);  
  void setVelocity();
 private:
  float Velocity;
  cocos2d::Sprite* Sprite;
};