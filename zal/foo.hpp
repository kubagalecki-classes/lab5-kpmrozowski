#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
	std::vector<char> vc;
	
	for(Human* h : people) {
		h->birthday();
		vc.push_back(h->isMonster() ? 'n' : 'y');
	}
  return vc;
}
