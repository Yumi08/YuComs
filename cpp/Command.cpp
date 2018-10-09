#include "Command.hpp"

namespace YuComs{
   Command::Command(std::string command, std::string description,
   std::vector<Option> options, void (*run)())
   : command(command), description(description), options(options), run(run)
{}
}