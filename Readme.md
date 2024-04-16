---------------------
Conway's Game Of Life
---------------------

Welcome to the game of life. This game has been designed to simulate cellular automaton within our universe where
certain rules dicate whether new life is born or if cells die.

To run the game, navigate to the build file and simply run the GameOfLife executable. This is done on linux via the command
input "./GameOfLife". 

If the game has not been compliled yet please proceed to complile the game using cmake. To do this please navigate to the build file
and enter the following series of commands to complile the game:

cmake ..
cmake --build .

You should then be able to proceed to run the program using the aformentioned method on linux. If you would like to complile the program
without the use of the build file you may do so simply by executing the command "make" on the root of the game. - This method is not recomended.


Once you have launched the game you will be greeted by a welcome message proceeded by the main menu:

1. New Game
2. Load Game
3. Quit

Please enter a single digit numerical input to navigate the menu. 

The first option, new game will allow you to start a fresh new universe and allow you to set the universe parameters such as the width and height of the universe.
You will also be presented with the option to pick the number of evolutions you would like to see.

Once the game parameters have been chosen the game will run and you will be presented with a gui displaying the game.

At the end of the game, it will automatically save the universe under a file name "Universe.txt"

The second option on the menu will allow you to load a save, this will load the Universe.txt save file stored in the build file of the program directory. 
You will then be asked how many evolutions you would like to see, after which it will proceed to run the game. 

If you would like to run a custom game you may edit the Universe.txt to a grid you see fit, just ensure the grid is a perfect rectangle or square before execution.

Finally the last option will quit the game and close the gui window. 

Thanks for playing Game Of Life!


By Safwan Chowdhury - ed18src@leeds.ac.uk