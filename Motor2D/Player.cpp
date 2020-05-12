#include "p2Defs.h"
#include "p2Log.h"
#include "j1App.h"
#include "j1Module.h"
#include "j1Input.h"
#include "j1Textures.h"
#include "j1Audio.h"
#include "j1Render.h"
#include "Player.h"
#include "j1Window.h"
#include "j1Map.h"
#include "j1Scene.h"
#include "SDL_image/include/SDL_image.h"


Player::Player()
{
	name.create("player");
	position.x = 32;
	position.y = 200;

	// idle animation
	idle.PushBack({ 2, 8, 21, 34 });
	idle.PushBack({ 23, 8, 21, 34 });
	idle.PushBack({ 44, 8, 21, 34 });
	idle.PushBack({ 65, 8, 21, 34 });
	idle.PushBack({ 86, 7, 21, 35 });
	idle.PushBack({ 107, 7, 21, 35 });
	idle.PushBack({ 128, 7, 21, 35 });
	idle.PushBack({ 149, 7, 21, 35 });
	idle.PushBack({ 170, 8, 21, 34 });
	idle.PushBack({ 191, 9, 21, 33 });
	idle.PushBack({ 212, 9, 21, 33 });
	idle.PushBack({ 233, 9, 21, 33 });
	idle.speed = 0.045f;

	//forward
	forward.PushBack({ 2, 43, 23, 34 });
	forward.PushBack({ 26, 45, 20, 32 });
	forward.PushBack({ 47, 45, 17, 32 });
	forward.PushBack({ 64, 45, 20, 32 });
	forward.PushBack({ 86, 43, 20, 34 });
	forward.PushBack({ 106, 45, 19, 32 });
	forward.PushBack({ 126, 45, 20, 32 });
	forward.PushBack({ 147, 45, 23, 32 });
	forward.speed = 0.01f;

	//backwards
	backward.PushBack({ 191, 46, 19, 36 });
	backward.PushBack({ 217, 45, 20, 36 });

	backward.speed = 0.01f;


}
Player::~Player()
{}

// Load assets
bool Player::Start()
{
	LOG("Loading player");
	
	player_text = App->tex->Load("textures/Character.png");
	health = 1;
	return true;
}

// Unload assets
bool Player::CleanUp()
{
	LOG("Unloading player");
	

	return true;
}





bool Player::Update(float dt) {

	float speed = 0.15f;


	if (input) {

		if (App->input->GetKey(SDL_SCANCODE_LEFT) == KEY_REPEAT){

			status = PLAYER_BACKWARD;
		}
		else if (App->input->GetKey(SDL_SCANCODE_RIGHT) == KEY_REPEAT){
			
			status = PLAYER_FORWARD;
		}
		else {
			status = PLAYER_IDLE;

		}
	}
	switch (status)
	{
	case PLAYER_IDLE:
		current_animation = &idle;
		position.y = 192;

		
		break;

	case PLAYER_BACKWARD:
		if (position.x < 10) { position.x -= 0; }
		else position.x -= speed;
		current_animation = &backward;
		break;

	case PLAYER_FORWARD:
		if (position.x > 405) { position.x -= 0; }
		else position.x += speed;
		current_animation = &forward;
		break;

	}


	// Draw everything --------------------------------------
	r = current_animation->GetCurrentFrame();

	App->render->Blit(player_text, position.x, position.y - r.h, &r, 1, SDL_FLIP_HORIZONTAL);


	r.x = position.x;
	r.y = position.y;


	return UPDATE_CONTINUE;

}

bool Player::Load(pugi::xml_node& data)
{
	position.x = data.child("position").attribute("x").as_int();
	position.y = data.child("position").attribute("y").as_int();

	return true;
}



bool Player::Save(pugi::xml_node& data) const
{
	pugi::xml_node pos = data.append_child("position");

	pos.append_attribute("x") = position.x;
	pos.append_attribute("y") = position.y;

	return true;
}