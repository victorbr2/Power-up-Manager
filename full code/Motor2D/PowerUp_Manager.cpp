#include "j1Input.h"
#include "p2Log.h"
#include "j1Textures.h"
#include "j1Render.h"
#include "Player.h"
#include "ModuleCollision.h"
#include "PowerUp_Manager.h"
#include "SDL_image/include/SDL_image.h"

P_Manager::P_Manager()
{
	name.create("PowerUp");
	position.x = 180;
	position.y = 100;

	idle.PushBack({ 0, 0, 22, 21 });

}
P_Manager::~P_Manager()
{}

bool P_Manager::Start() 
{
	LOG("Loading assets");
	App->collision->Enable();
	power_text = App->tex->Load("textures/powerUp.png");
	colPowerUp = App->collision->AddCollider({ 180, 100, 22, 21 }, COLLIDER_PWUP);
		
	return true;
}


bool P_Manager::CleanUp() 
{

	LOG("Unloading powerUp");
	if (!IsEnabled()) {
		App->collision->Disable();
		SDL_DestroyTexture(power_text);
	}

	return true;
}


bool P_Manager::Update(float dt) 
{

	switch (status)
	{
	case POWERUP_IDLE:
		current_animation = &idle;
		position.y = 180;

		colPowerUp->type = COLLIDER_PWUP;

		break;


	}

	r = current_animation->GetCurrentFrame();

	App->render->Blit(power_text, position.x, position.y - r.h, &r, 1, SDL_FLIP_HORIZONTAL);


	r.x = position.x;
	r.y = position.y;

	return UPDATE_CONTINUE;
}

