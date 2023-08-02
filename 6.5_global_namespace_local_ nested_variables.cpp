#include <iostream>

int apple{ 50 };


namespace appletester {


	int apple = 400'000;
}


int main() {

	std::cout << "Hello! I am now going to test outer blockage. \n\n -------------------------------------------------------- \n\n";

	int apple{};
	std::cout << "Please enter the amount of apples you have! \n";

	std::cin >> apple;

	std::cout << "You have " << apple << " apples. This variable is defined in the outer block. \n";

	{
		int apple{}; // redefinition of outerblock variable

		std::cout << "Now input the amount of apples you wish you had. \n";
		std::cin >> apple;
		std::cout << "Awesome! You have " << apple << " apples. This variable is defined inside a nested block. \n\n";
		std::cout << "----------------------------------------------------------------------------\n";
	}

	std::cout << apple << " This should print the original amount of apples you had\n";// Should print out original apple amount

	std::cout << "\n----------------------------------------------------------------------------\n";


	{
		apple = 40;
	}

	std::cout << "You have now been given " << apple << " apples, This apple should print 40 to the outer block since i did not define anything inside the nested block! \n";

	std::cout << "The amount of apples listed here are a global variable, This should output 50 \nAs i am calling the global scope variable apple.";

	std::cout << "\n----------------------------------------------------------------------------\n";

	std::cout << ::apple;

	std::cout << "\n\n----------------------------------------------------------------------------\n";

	std::cout << "\nYou now have " << appletester::apple << " apples. This is called from my namespace (appletester)! \n\n";

	std::cout << "\n\n ============================================================================== \n\n";
	std::cout << "\n You may now exit the program using the x in the top right! Goodbye random github viewer! ";

	while (true) {
		std::getchar(); // used to keep program from instantly exitting since its only a program used to test
		// global variables, nested variables, and local variables printing abilities.

	}
}
