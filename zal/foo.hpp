#pragma once

#include "Human.hpp"

#include <list>
#include <vector>
using namespace std;

std::vector< char > foo(std::list< Human >& people)
{
    vector<char>zwierze;

    for(auto it =people.rbegin(); it != people.rend(); it++)
    {
      it -> birthday();

      if(it -> isMonster()==true)
      {
        zwierze.emplace_back('n');
      }
      else
      {
        zwierze.emplace_back('y');
      }
    }
    return {zwierze};
}
