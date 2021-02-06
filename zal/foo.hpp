#pragma once

#include "Human.hpp"

#include <list>
#include <vector>
#include <iterator>

std::vector< char > foo(std::list< Human >& people)
{
	std::vector<char> vc;
	std::list<Human>::reverse_iterator rit;
	
	for(rit = people.rbegin(); rit != people.rend(); rit++) {
		rit->birthday();
		vc.push_back(rit->isMonster() ? 'n' : 'y');
	}
  return vc;
}
