#pragma once
#include "Command.hpp"
#include <vector>

namespace YuComs{
   class Command_Manager{
      public:
      std::vector<Command> commands;

      std::string unknown_command_message = "Unknown command.";

      void run(std::string input);
   };
}