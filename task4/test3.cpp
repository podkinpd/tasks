#include "Group.hpp"

#include <iostream>

int main() {

	Student s1("Name1", "Surname1", 4.7);
	Student s2("Name2", "Surname2", 6.8);

	Group g;
	g.AddStudent(s1);
	g.AddStudent(s2);

	std::cout << g.GetAvgScore() << std::endl;




	return 0;
};
