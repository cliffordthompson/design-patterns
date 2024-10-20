//***************************************************************************//
//*                                                                         *//
//*  Copyright (c) 2024 Clifford Thompson                                   *//
//*                                                                         *//
//*  All code in this file is released under Creative Commons Attribution   *//
//*  (CC-BY) license : https://creativecommons.org/licenses/by/4.0/.        *//
//*                                                                         *//
//***************************************************************************//

#include "BaseClass.h"

BaseClass::BaseClass(void)
{
  return;
}

BaseClass::~BaseClass(void)
{
  return;
}

int
BaseClass::virtFunc(void)
{
  return this->do_virtFunc();
}

int
BaseClass::do_virtFunc(void)
{
  return 44;
}
