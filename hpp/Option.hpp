#pragma once
#include "Type.hpp"

namespace YuComs{
   struct Option{
      std::string long_form;
      std::string short_form;
      Type type;
   };
}