#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
	std::vector<char> vc;
	
	for(auto it = people.begin(); it != people.end(); it++) {
		it->birthday();
		vc.push_back(it->isMonster() ? 'n' : 'y');
	}
  return vc;
}
