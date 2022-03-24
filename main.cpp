#include <iostream>
#include <typeinfo>

int main () 
{
	int x;
	std::cout << "Please input a score: ";
	std::cin >> x;
	if ((typeid(x) == typeid(int)) && (x <= 100))
	{
		switch (x) 
		{
			case 90 ... 100:
				std::cout << x << " = Letter Grade A" << std::endl;
				break;
			case 80 ... 89:
				std::cout << x << " = Letter Grade B" << std::endl;
				break;
			case 70 ... 79:
				std::cout << x << " = Letter Grade C" << std::endl;
				break;
			case 60 ... 69:
				std::cout << x << " = Letter Grade D" << std::endl;
				break;
			case 0 ... 59:
				std::cout << x << " = Letter Grade F" << std::endl;
				break;
		}
	} 

	else 
	{
		std::cout << "Please enter a value from 0 - 100" << std::endl;			
	}
	
	return 0;
}