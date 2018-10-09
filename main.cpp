#include <iostream>
#include "Command.hpp"

int main(){
   YuComs::Command command("help", "Shows help info.", {YuComs::Option()}, [](){});
}