#include "Command_Manager.hpp"
#include <boost/algorithm/string.hpp>
#include "Command.hpp"
#include <iostream>

namespace YuComs{
   void Command_Manager::run(std::string input){
      // Divide the input into individual arguments
      std::vector<std::string> args;
      boost::split(args, input, boost::is_any_of(" "));

      Command* command = nullptr;
      for (auto i = commands.begin(); i != commands.end(); ++i){
         if (i->command == args[0])
            {
               command = &(*i);
               break;
            }
      }

      if(!command){
         std::cout << unknown_command_message << std::endl;
         return;
      }

      command->run();
   }
}