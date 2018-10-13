#include <iostream>
#include "Command.hpp"
#include <boost/algorithm/string.hpp>
#include "Command_Manager.hpp"

int main(){
   std::string input;
   std::getline(std::cin, input);
   YuComs::Command_Manager cm;
   cm.commands.push_back(YuComs::Command("help", "Shows help info.",
   {YuComs::Option()}, [](){
      std::cout << "IT WORKS" << std::endl;
   }));
   cm.run(input);
}