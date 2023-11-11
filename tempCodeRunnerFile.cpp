#include <iostream>
#include <random>
#include <limits>

void ignoreLine()
{
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int userInput()
{
	while (true)
	{	int a{};
        std::cin >> a;
	 
		
	// Check for failed extraction
	
	  if (!std::cin) // if the previous extraction failed
	{

		// let's handle the failure
		std::cin.clear(); // put us back in 'normal' operation mode
		ignoreLine();     // and remove the bad input
		std::cout << "Oops, that input is invalid.  Please try again.\n";
		continue;
	}
	  	if (a <= 0 || a > 100)
		{
			std::cout << "Oops, that input is invalid.  Please try again.\n";
			ignoreLine();
			continue;
		}
	  
	
		ignoreLine(); // remove any extraneous input
		return a;
	
}
}
int main()
{
	std::random_device rd;
	std::seed_seq ss{ rd(), rd(), rd(), rd(), rd(), rd(), rd(), rd() }; 
	std::mt19937 mt{ ss }; 
	std::uniform_int_distribution<> num100{ 1, 100 }; 

	while (true)
	{
		std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is.\n";
		int b{ num100(mt) };
		std::cout << "(For code testing) Correct number is :"<< b<< '\n';
		int k=7;
		for (int i:k)
		{

			std::cout << "Guess #" << i << ": ";
			int a{ userInput() };
			if (b == a)
			{
				std::cout << "Correct! You win!\n";
				break;
			}
			else if (i == 7)
			{
				std::cout << "Sorry, you lose. The correct number was " << b << '\n';
				continue;
			}
			else if (a < b)
			{
				std::cout << "Your guess is too low.\n";
				continue;
			}
			else if (a > b)
			{
				std::cout << "Your guess is too high.\n";
				continue;
			}
			
		}
		repeat:
		std::cout << "Would you like to play again (y/n)? ";
		char c{};
		std::cin >> c;
		if (c == 'n')
	     	break;
		else if (c == 'y')
			continue;
		else
			goto repeat;
	}
	std::cout << "Thank you for playing.";
	return 0;
}