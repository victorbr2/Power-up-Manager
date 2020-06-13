I’m Rubén Sardón and was the team lead for Juicy Code’s Square Up. As part of my
responsibilities I was in charge of scheduling and documenting meetings, organizing tasks
and managing teamwork using Discord, Hacknplan and Google Drive’s tools. All of us took
part in deciding and designing the game and its features and together with my rol’s duties I
mainly worked programming the engines back-end systems:

Work log:

* Added C++ Libraries: SDL2 (window management and rendering), SDL_Mixer
(audio), SDL_TTF (fonts), PhysFS (file system), pugixml (.xlm parser), and mmgr
(memory leaks).

* Built rendering pipeline to draw sprites using layers, gradually update Fog of War
texture for Minimap and apply camera frustum culling to the scene.

* Set window resolution and fullscreen controls. Rendering viewport adapts to window
size or can preserve a target aspect ratio.

* Set an event system that allows sending events to any given listener. Data is held
using CVars, variables that adapt to the given data type.

* Added time management for fps control and scene playing and pausing. Spare time
between frames pulls queued events and updates pathfinding.

* Setup file system using PhysFS to read and load all assets: map, textures, fonts,
and audio samples from a compressed folder.

* Built an importer for each resource type and serialized module configuration for each
member to use the engine with their own preferred settings.

* Built gameobject hierarchy and component handling. Also added sprite, animation
and transform components using the event system to spread calculations throughout
different frames and.

* Added scene serialization to save and load the scene to an xml.

* Built UI components:

    * Canvas: adapts to the window’s aspect ratio and sets target area to draw
              children UI components.

    * Image: adapts to viewport using pivots, normal coordinates.
    
    * Text: handles surface rendering on changing text.
    
    * Minimap: draws map and updates fog of war texture displayed.
    
* Added audio source components that receive transform events to measure the
spatial effect for each individual audio channel.

* Set up audio volume controls and a fade effect that triggers when pausing and
resuming the scene.




I'm Adria Avila and I was in charge of team management. I registered team members assistance to meetings and a Gantt diagram with the tasks to do and it's approximate finish date and updating it as work increased. Apart from that, I also suggested to increase or reduce the amount of work depending on last  team's work log. Related to the game, I developed back-end features of the game but not entirely about the engine itself. 
 
Work log:  
 
* Did units and buildings behaviors based on core functions and variables for all of them and a modified heritage for units. 
 
* All units special features like movement, attack, chase... using colliders for detection and pathfinding for movement.  
 
* Created all game units with distinctives values for each one, only needed to inherit from behaviour class and set unit key values. 
 
* Pathfinding module using A* to make paths. It works with lasts frames milliseconds for performance optimization. It stores not finished paths for later iterations. 
 
* Fog of war module which stores and update tiles visibility with units vision range. 
 
* Quadtree for collision detection optimization. 
 
* Collision system that creates colliders and iterates colliders for update and deletion. It has multiple collision layers to help reduce and/or avoid collisions. There are rigid and trigger colliders with rectangular shape. 
 
* Basic particle system that instaciates particles, calls particles updates and checks for deletes. Particles are limited to 3 types and always moving towards setted destination on creation. 
 
* Basic dialog system with multiple dialog steps and input reading. 
 
* Did all the IA for enemies and movement of all units. It works with colliders for detection and for not unit overlapping on movement, giving it a more ordered look. 
 
* Selection of all selectable units works with rectangles setted in behaviour. It is working son solo selection and group selection, it controls if movement is for  one selected unit or the group. 
 
* Added earthquake feature that happens in a random range of seconds (2-3 min each). 

 What I participated in: 
 
* Worked on animations out of the animation module, animating manually, game logo for example. 
 
* Worked on minor optimizations for minimap. 
 
* Some HUD additions, like information panels for units. 
 
* Adjusting offsets of multiple sprites. 
 
* Some render functions for special uses. 
 
* Minor changes to some scene management features. 
 
* Helped taking decision and posibles features and changes to help balancing the game.












