#include "../include/Array.hpp"
#include <iostream>
#include <string>

struct Person {
	std::string name;
	int age;

	Person() : name("Unknown"), age(0) {}
	Person(std::string n, int a) : name(n), age(a) {}
};

std::ostream& operator<<(std::ostream& os, const Person& p) {
	return os << p.name << " (" << p.age << ")";
}

int main() {
	try {
		// Empty array
		Array<int> emptyArray;
		std::cout << "Empty array size: " << emptyArray.size() << std::endl;

		// int
		Array<int> intArray(5);
		for (unsigned int i = 0; i < intArray.size(); ++i)
			intArray[i] = i * 10;

		std::cout << "intArray contents: ";
		for (unsigned int i = 0; i < intArray.size(); ++i)
			std::cout << intArray[i] << " ";
		std::cout << std::endl;

		// Const access
		const Array<int> constIntArray = intArray;
		std::cout << "constIntArray[2]: " << constIntArray[2] << std::endl;

		// Complex type
		Array<Person> people(3);
		people[0] = Person("Alice", 30);
		people[1] = Person("Bob", 25);
		people[2] = Person("Charlie", 40);

		std::cout << "people array:\n";
		for (unsigned int i = 0; i < people.size(); ++i)
			std::cout << "- " << people[i] << std::endl;

		//Out of bounds access
		std::cout << "Trying to access index 10 in intArray..." << std::endl;
		std::cout << intArray[10] << std::endl; //should throw

	} catch (const std::exception& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	return 0;
}
