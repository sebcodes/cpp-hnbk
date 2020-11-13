#include <iostream>

int main()
{
	//EinMal eins bis 625 (25x25)
	for (size_t i = 1; i <= 25; i++)
	{
		for (size_t y = 1; y <= 25; y++)
		{

			std::cout << i * y << "\t";
		}
		std::cout << std::endl << std::endl;
	}


    (void)getchar();
    return 0;
}
