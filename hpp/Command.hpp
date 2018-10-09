#pragma once
#include <string>
#include <vector>
#include "Option.hpp"

namespace YuComs{
   struct Command{
      Command(std::string command, std::string description, std::vector<Option> options,
       void (*run)());

      std::string command;
      std::string description;
      std::vector<Option> options;
      void (*run)();
   };
}