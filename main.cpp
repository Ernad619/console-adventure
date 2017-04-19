#include <iostream>
#include <stdlib.h>
#include <string>

struct character
{
	int name;
};


int main()
{
	character player;
	std::cout << "Hello \n Before we begin I would like to say a few things \n";
	std::cout << "My name is Ernad and I made this game for my friends to play \n if you are not my friend don't worry I will be glad to meet you just contact me on discord Edo619 \n";
	std::cout << "You might even end up in this game xD , srsly tell me if you want, and these fu... guys* that I put in without a permission I really don't care xD \n And also this will be a great chance to meet us all through this game ... I hope you enjoy \n";
	std::cout << "please press enter to continue";
	std::cin.ignore();
	system("cls");
	std::cout << "Okay... Soo now you need to select one of several playable characters \n PS if you are one of them , select yourself xD \n";
	std::cout << " 1)Edo619 \n 2)Itsme \n 3)Ialeidioma \n 4)JohnJustJohn \n 5)Indenpendent Mercenary \n 6)Pax> \n";
	characterselect:
	std::cout << "please enter a number: ";
	std::cin >> player.name;
	system("cls");
///////////////////////CHARACTER SPECIFIC//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	if(player.name == 1)
	{
		std::cout << "You begin your adventure on your ship, you put your viking helmet on and get on the deck\n";
		std::cout << "press enter";
		std::cin.ignore();
		std::cout << "\n   /\\           /\\ \n  / /  _______  \\ \\ \n | |  /       \\  | | \n | |__|       |__| | \n  \\___| O__O  |___/ \n      | / _\\  | \n      |_______|";
		std::cin.ignore();
	}
	else if(player.name == 2)
	{
		std::cout << "You begin your adventure in the upside-down world, you turn on your hacking computer and begin\n";
		std::cout << "press enter";
		std::cin.ignore();
		std::cout << "\n _____________________";
		std::cout << "\n|                     |";
		std::cout << "\n|_____________________|";
		std::cout << "\n|         \\|/         |";
		std::cout << "\n|         -O-         |";
		std::cout << "\n|         /|\\         |";
		std::cout << "\n|_____________________|";
		std::cout << "\n|       itsme         |";
		std::cout << "\n|_____________________|";
		std::cin.ignore();
	
	}
	else if(player.name == 3)
	{
		std::cout << "You begin your adventure in your moonbase, you get your skiing gear and get in your rocket\n";
		std::cout << "press enter";
		std::cin.ignore();
std::cout << "\n      |";
std::cout << "\n     / \\";
std::cout << "\n    /   \\";
std::cout << "\n   /     \\";
std::cout << "\n  /       \\";
std::cout << "\n  ---------";
std::cout << "\n  |	  |";
std::cout << "\n  |   O   |";
std::cout << "\n  |	  |";
std::cout << "\n  |	  |";
std::cout << "\n  |	  |";
std::cout << "\n  | iale  |";
std::cout << "\n  |	  |";
std::cout << "\n  |	  |";
std::cout << "\n /|       |\\";
std::cout << "\n/_|_______|_\\";
std::cout << "\n  / /  \\ \\";
std::cout << "\n  \\ \\  / /";
std::cout << "\n   \\ \\/ /";
std::cout << "\n    \\  /";
std::cout << "\n     \\/";
		std::cin.ignore();
	}
	else if(player.name == 4)
	{
		std::cout << "You begin your adventure paying for your electricity (300e to be specific), you check your 6pack feel pretty good, turn off your minecraft server and you get going\n";
		std::cout << "press enter";
		std::cin.ignore();
std::cout << "\n    ____________";
std::cout << "\n   /           /|";
std::cout << "\n  /   6pack   / |";
std::cout << "\n /___________/  |";
std::cout << "\n |           |  |";
std::cout << "\n |           |mc|";
std::cout << "\n |  john     |  /";
std::cout << "\n |           | /";
std::cout << "\n |___________|/";
		std::cin.ignore();
	}
	else if(player.name == 5)
	{
		std::cout << "You begin your adventure watching some movies (anime and godzillah to be specific), you finish that, pack your laptop and you get going\n";
		std::cout << "press enter";
		std::cin.ignore();
std::cout << "\n     / /";
std::cout << "\n    / / ";   
std::cout << "\n    \\/";
std::cout << "\n ___|_____";
std::cout << "\n/      \\  \\";
std::cout << "\n|      |  |";
std::cout << "\n|      |  |";
std::cout << "\n|  lil |cy|";
std::cout << "\n|      |  |";
std::cout << "\n\\______/__/ btw these are supposed to be dog tags xD";
		std::cin.ignore();
	}
	else if(player.name == 6)
	{
		std::cout << "You begin your adventure in your hut in the woods, you take your white wolf and you get going\n";
		std::cout << "press enter";
		std::cin.ignore();
std::cout << "\n                                 ,ood8888booo,";
std::cout << "\n                              ,od8           8bo,";
std::cout << "\n                           ,od                   bo,";
std::cout << "\n                         ,d8                       8b,";
std::cout << "\n                        ,o                           o,    ,a8b";
std::cout << "\n                       ,8                             8,,od8  8";
std::cout << "\n                       8'                             d8'     8b";
std::cout << "\n                       8                           d8'ba     aP'";
std::cout << "\n                       Y,                       o8'         aP'";
std::cout << "\n                        Y8,                      YaaaP'    ba";
std::cout << "\n                         Y8o                   Y8'         88";
std::cout << "\n                          `Y8               ,8'           `P";
std::cout << "\n                            Y8o        ,d8P'              ba";
std::cout << "\n                       ooood8888888P''''                  P'";
std::cout << "\n                    ,od                                  8";
std::cout << "\n                 ,dP     o88o                           o'";
std::cout << "\n                ,dP          8                          8";
std::cout << "\n               ,d'   oo       8                       ,8";
std::cout << "\n               $    d$'8      8           Y    Y  o   8";
std::cout << "\n              d    d  d8    od  ""boooooooob   d"" 8   8";
std::cout << "\n              $    8  d   ood' ,   8        b  8   '8  b";
std::cout << "\n              $   $  8  8     d  d8        `b  d    '8  b";
std::cout << "\n               $  $ 8   b    Y  d8          8 ,P     '8  b";
std::cout << "\n               `$$  Yb  b     8b 8b         8 8,      '8  o,";
std::cout << "\n                    `Y  b      8o  $$o      d  b        b   $o";
std::cout << "\n                     8    $     8$,,$       $   $o       $o$$";
std::cout << "\n                      $o$$P                  $$o$                  SCROLL UP!!!!!";
std::cout << "\n";
std::cout << "\n btw I was too lazy to make an ASCII ART for you so I got this from the net xD";
		std::cin.ignore();
	}
	else
	{
		std::cout << "come on man.... you didn't select a proper number -.-'\n";
		goto characterselect;
	}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

}
