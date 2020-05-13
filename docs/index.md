# PowerUp Manager

#### I'm [Victor Bosch](https://www.linkedin.com/in/victor-b-a596a2138/) student of the [Bachelor’s Degree in Video Games by UPC at CITM](https://www.citm.upc.edu/cat/estudis/graus-videojocs/). This content is generated for the second year’s subject Project 2, under supervision of lecturer [Marc Garrigó](https://www.linkedin.com/in/mgarrigo).

##### This website is going to try to make you understand how power up's work in videogames and how to implement them into your own projects or future videogames.

### Introduction

First of all before implementing our power up manager, I'll do a brief introduction about power up's, what they are, types of them, the distictions between them and good/bad examples that we can find in videogames.

![Mushroom](https://github.com/victorbr2/Power-up-Manager/blob/master/docs/web%20picts/seta.jpg)

_`Mario Mushroom`_

### Power Up's

Any regular player, should have an idea of what are power up's, we can find a generic description about power up's and it's defined as an object that empowers the character giving him extra abilities for a period of time. This definition can be applied by most of the videogames, but we could maybe change a bit this description, why? I'll explain it on the next point, types of power up's.

#### Types of power up's

Like the definition I've quoted before, regular videogame players should know the types of power up's that can be found in videogames, but I find it useful to remind them, maybe could be some you didn't think of.

We can distinguish the different power up's according to the ability they give.

- Offensive/Defensive power up's

They provide a boost of attack or defense to the character.

![Shield](https://github.com/victorbr2/Power-up-Manager/blob/master/docs/web%20picts/BasicShield.png)

_`Shield Power Up`_

- Evasive/Access power up's

They provide a boost of the movement of the character or access to new areas.

![Speed](https://github.com/victorbr2/Power-up-Manager/blob/master/docs/web%20picts/speed.png)

_`Speed Boost`_

- Health/Ammo supplies

Give the character a health/ammo boost (Max health/ammo up) or supplying him with life/ammo, Ammo can be applied as any type of resource, like health, could be mana.

![COD Zombies Ammo Power Up](https://github.com/victorbr2/Power-up-Manager/blob/master/docs/web%20picts/Ammo.jpg)

_`COD Zombies Ammo Power Up`_

![Health](https://github.com/victorbr2/Power-up-Manager/blob/master/docs/web%20picts/life1.png)

_`Health Boost`_

- Coin power up's

Provide the "money" resouce of the game.

![Coin](https://github.com/victorbr2/Power-up-Manager/blob/master/docs/web%20picts/Coin.jpg)

_`Mario Coins`_

These are the basic power up's in any videogame, but power up's can be whatever the designer can think of.

Now I'm retaking the comment I did on the previous point, why can we change the definition of power up? or I think it could be changed?, well, as I said the Devs or Designers, are the ones that make the decisions about what power up's they are going to deploy into their videogame, this makes that at any time a power up could change and not be a strictly object that appears on the videogame "world", a power up can be off the videogame and only the player knows about its existence. League of Legends has this type of implementation, I've commented, their power up manager bases on summoners spells, there are no in game objects that give your character a boost, only the player knows how and when to use them.

For more info check the links at the bottom of the page.

#### Examples

Now that we have explained how power up's are, I'll make a distinction of some videogames that use power up's in a right way and the ones that do it in a wrong way.

![Boosts](https://github.com/victorbr2/Power-up-Manager/blob/master/docs/web%20picts/powersb.jpg)

_`Boosts`_

##### Bad

Gradius III 

In this game developers thought that the increase or decrease was a great idea to implement into a spaceship videogame, but there was a problem due to the over decreased movement speed that one power up gave the player. 

![Gradius III](https://github.com/victorbr2/Power-up-Manager/blob/master/docs/web%20picts/Gradius_3.png)

_`Gradius III`_

Mega Man 3

After the first boss, mega man gets an armor "upgrade" that don't increase his stats in a positive way, and made the gameplay harder than it should be.

![Mega Man](https://github.com/victorbr2/Power-up-Manager/blob/master/docs/web%20picts/mm3%20tops%20spin%20adquired.jpg)

_`Mega Man`_

##### Good

Mario

Mario, we all know Mario, it's amount of power up's and the implamentation of them is well timed and give the player a balanced boost that matches the situation.

![Mario](https://github.com/victorbr2/Power-up-Manager/blob/master/docs/web%20picts/Mario.jpg)

_`Mario`_


## Power up Manager implementation

Now that we know how power up's are, we can start to work in our project.
We have a basic canvas that shows us the in game player, the goal is to get a power up to the scene and after getting it see the changes it makes to the player, the type of power up we'll implement will be a speed boost.

The project starts with both modules created, PowerUp_Manager.cpp/.h we will create the class PowerUp to set it as the main class and use it to create the sub class of the different power up's we want to make.

#### TODO 1

#### TODO 2


#### TODO 3


#### TODO 4



### Sources

[Wikipedia](https://en.wikipedia.org/wiki/Power-up)

[Worst Power Up's](https://www.thegamer.com/power-ups-retro-games-worst/)

[Top 10 power Up's](http://www.blockfort.com/other-lists/powerups/)

[Power Up System in Unity](https://www.raywenderlich.com/191-how-to-make-a-power-up-system-in-unity)















