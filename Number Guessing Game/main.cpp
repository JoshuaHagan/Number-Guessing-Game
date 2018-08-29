#include <cstdlib>
#include <iostream>

int main()
{
	int guess;
	char input = 0;
	int lessThan = 1;
	int greaterThan = 2;
	int equals = 3;
	guess = rand() % 100 + 1;
	std::cout << "Think of a number\n";
	while(input != guess)
	{
		std::cout << "Enter a number\n";
		std::cin >> input;
		std::cout << "Is this your number " << guess << std::endl;
		if (guess == input)
		{ 
			std::cout << 
		}
		

	}
	 




	system("pause");
}
