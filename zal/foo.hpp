#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
	std::vector<char> vc;
	
	for(auto& h : people) {
		h.birthday();
		if(h.isMonster()) {
			vc.push_back('n');
		} else {
			vc.push_back('y');
		}
	}



  return vc;
}
