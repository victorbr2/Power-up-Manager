#ifndef _POWERUP_MANAGER_
#define _POWERUP_MANAGER_

#include "p2Point.h"
#include "j1Module.h"
#include "Animation.h"
#include "j1App.h"

struct SDL_Texture;
struct Collider;

enum powerUp_status
{
	POWERUP_IDLE,
};

class P_Manager : public j1Module
{


public:
	P_Manager();
	~P_Manager();

	bool Start();
	bool Update(float dt) override;
	bool CleanUp() override;

public:
	bool input = true;
	SDL_Texture* power_text = nullptr;
	fPoint position;
	Collider* colPowerUp = nullptr;
	int health = 1;
	Animation* current_animation = &idle;
	Animation idle;
	powerUp_status status = POWERUP_IDLE;
	SDL_Rect r;
};
/*
class PowerUp : public P_Manager
{
	PowerUp();
	~PowerUp();




public:

};
*/
#endif //_POWERUP_MANAGER_
