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













