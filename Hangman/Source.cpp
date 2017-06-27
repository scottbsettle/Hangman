#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Timer.h"
#include <windows.h>


using namespace std;

int main()
{
	char board[20][20]{
		{'_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_'},
		{ '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|' },
		{ '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|' },
		{ '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|' },
		{ '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|' },
		{ '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|' },
		{ '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|' },
		{ '|', ' ', ' ', ' ', ' ', ' ', '|', '-', '-', '-', '-', '-', '-', ' ', ' ', ' ', ' ', ' ', ' ', '|' },
		{ '|', ' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ', ' ', ' ', '|' },
		{ '|', ' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|' },
		{ '|', ' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|' },
		{ '|', ' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|' },
		{ '|', ' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|' },
		{ '|', ' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|' },
		{ '|', ' ', ' ', '-', '-', '-', '-', '-', '-', '-', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|' },
		{ '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|' },
		{ '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|' },
		{ '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|' },
		{ '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|' },
		{ '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-' },
	};
	char default_board[20][20]{
		{'_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_'},
		{ '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|' },
		{ '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|' },
		{ '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|' },
		{ '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|' },
		{ '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|' },
		{ '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|' },
		{ '|', ' ', ' ', ' ', ' ', ' ', '|', '-', '-', '-', '-', '-', '-', ' ', ' ', ' ', ' ', ' ', ' ', '|' },
		{ '|', ' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ', ' ', ' ', '|' },
		{ '|', ' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|' },
		{ '|', ' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|' },
		{ '|', ' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|' },
		{ '|', ' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|' },
		{ '|', ' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|' },
		{ '|', ' ', ' ', '-', '-', '-', '-', '-', '-', '-', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|' },
		{ '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|' },
		{ '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|' },
		{ '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|' },
		{ '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|' },
		{ '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-' },
	};
	while (true)
	{
	start:
		system("cls");
		for (int loop2 = 0; loop2 < 20; loop2++)
		{
			for (int loop3 = 0; loop3 < 20; loop3++)
			{
				board[loop2][loop3] = default_board[loop2][loop3];
			}

		}
		char words[][32]{
			"death",
				"hunger",
				"willow",
				"raven",
				"suicide",
				"hang",
				"key",
				"money",
				"wizard",
				"help",
				"dead",
				"reaper",
				"rope",
				"noose",
				"lion",
				"rape",
				"murder",
				"four",
				"muggles",
				"earth",
				"love",
				"hope",
				"monkey",
				"kitten",
				"deadpool",
				"abruptly",
				"affix",
				"askew",
				"axiom",
				"azure",
				"bagpipes",
				"bandwagon",
				"banjo",
				"bayou",
				"bikini",
				"blitz",
				"bookworm",
				"boxcar",
				"boxful",
				"buckaroo",
				"buffalo",
				"buffoon",
				"cobweb",
				"croquet",
				"daiquiri",
				"disavow",
				"duplex",
				"dwarves",
				"equip",
				"exodus",
				"fishhook",
				"fixable",
				"foxglove",
				"galaxy",
				"galvanize",
				"gazebo",
				"gizmo",
				"glowworm",
				"guffaw",
				"haiku",
				"haphazard",
				"hyphen",
				"icebox",
				"injury",
				"ivory",
				"ivy",
				"jaundice",
				"jawbreaker",
				"jaywalk",
				"jazzy",
				"jigsaw",
				"jiujitsu",
				"jockey",
				"jovial",
				"joyful",
				"juicy",
				"jumbo",
				"kazoo",
				"keyhole",
				"khaki",
				"kilobyte",
				"kiosk",
				"kiwifruit",
				"knapsack",
				"larynx",
				"luxury",
				"marquis",
				"megahertz",
				"microwave",
				"mystify",
				"nightclub",
				"nowadays",
				"numbskull",
				"ovary",
				"oxidize",
				"oxygen",
				"pajama",
				"peekaboo",
				"pixel",
				"pizazz",
				"pneumonia",
				"polka",
				"quartz",
				"quiz",
				"quorum",
				"razzmatazz",
				"rhubarb",
				"rickshaw",
				"schizophrenia",
				"sphinx",
				"spritz",
				"squawk",
				"subway",
				"swivel",
				"topaz",
				"unknown",
				"unworthy",
				"unzip",
				"uptown",
				"vaporize",
				"vixen",
				"vodka",
				"vortex",
				"walkway",
				"waltz",
				"wavy",
				"waxy",
				"wheezy",
				"whiskey",
				"whomever",
				"wimpy",
				"woozy",
				"xylophone",
				"yachtsman",
				"yippee",
				"youthful",
				"zephyr",
				"zigzag",
				"zilch",
				"zodiac",
				"zombie"


		};
		Timmer t;
		unsigned int seed = time(0);
		srand(seed);
		char tried[6];
		int randomword, count2 = 0;
		randomword = rand() % 141 + 1;
		int leagnth = 0;
		int y = 5;
		char letter[1];
		leagnth = strlen(words[randomword]);
		int count = 0;
		
		for (int loop = 0; loop < leagnth; loop++)
		{
			board[16][y] = '_';
			y++;

		}
		
		while (true)
		{
			system("cls");
			
			//board[9][12] = 'O', board[10][12] = '|', board[11][12] = '|', board[10][11] = '/', board[10][13] = 92, board[12][11] = '/', board[12][13] = 92;
			cout << "\t\t\tHang Man\n";
			for (int loop = 0; loop < 20; loop++)
			{
				
				cout << "\t\t\t";
				for (int loop2 = 0; loop2 < 20; loop2++)
				{
					cout << board[loop][loop2];
				}
				cout << endl;
				
			}
			
			if (board[12][13] == 92)
			{
				cout << "Game over!\n";
				cout << words[randomword] << endl;
				std::system("pause");
				goto start;
			}
			if (count == leagnth)
			{
				cout << "You Win! :)\n";
				system("pause");
				goto start;

			}
			cout << "\t\t Attempted letters :";
				for (int loop = 0; loop < count2; loop++)
				{
					
					cout << tried[loop] << ' ';
				}
				cout << endl;
			cout << "Guess a letter! :";
			//t.CallTimer(seconds);
			cin >> letter[0];
			
			
			for (int loop = 0; loop < leagnth; loop++)
			{
				bool letter1 = false, letter2 = false;
				y = 5;
				if (letter[0] == words[randomword][loop] && board[16][y + loop] == '_')
				{

					board[16][y + loop] = letter[0];
					count++;
					for (int loop2 = 0; loop < leagnth; loop++)
					{
						if (letter[0] == words[randomword][loop] && board[16][y + loop] == '_')
						{

							board[16][y + loop] = letter[0];
							count++;
						}
					}
					std::system("cls");
					cout << "\t\t\tHang Man\n";
					for (int loop = 0; loop < 20; loop++)
					{
						cout << "\t\t\t";
						for (int loop2 = 0; loop2 < 20; loop2++)
						{
							cout << board[loop][loop2];
						}
						cout << endl;

					}
					
					break;
				}
				if (loop >= leagnth - 1)
				{

					if (letter[0] != words[randomword][leagnth - 1])
					{
						if (board[9][12] == ' ')
						{
							board[9][12] = 1;
								tried[0] = letter[0];
								count2++;
								;
							break;
						}
						else if (board[10][12] == ' ')
						{
							board[10][12] = '|';
							tried[1] = letter[0];
							count2++;
							break;
						}
						else if (board[11][12] == ' ')
						{

							board[11][12] = '|';
							tried[2] = letter[0];
							count2++;
							break;
						}
						else if (board[10][11] == ' ')
						{
							board[10][11] = '/';
							tried[3] = letter[0];
							count2++;
							break;
						}
						else if (board[10][13] == ' ')
						{
							board[10][13] = 92;
							tried[4] = letter[0];
							count2++;
							break;
						}
						else if (board[12][11] == ' ')
						{
							board[12][11] = '/';
							tried[5] = letter[0];
							count2++;
							break;
						}
						else if (board[12][13] == ' ')
						{
							board[12][13] = 92;
							tried[6] = letter[0];
							count2++;
							break;
						}
					}
					system("cls");
					cout << "\t\t\tHang Man\n";
					for (int loop = 0; loop < 20; loop++)
					{

						cout << "\t\t\t";
						for (int loop2 = 0; loop2 < 20; loop2++)
						{
							cout << board[loop][loop2];
						}
						cout << endl;
						

					}
					
				}
			}
			
		}
	}
	return 0;
}