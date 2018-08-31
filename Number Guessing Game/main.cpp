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
			int index = 0; index < 100; index++;
			int rand();
		}
		if (input < 100)
		{
			int random_integer;
			std::cout << "Is your number less than 42" << std::endl;
		}
		if (guess > 100)
		{

		}
	}
	 




	system("pause");
}
