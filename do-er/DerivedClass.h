//***************************************************************************//
//*                                                                         *//
//*  Copyright (c) 2024 Clifford Thompson                                   *//
//*                                                                         *//
//*  All code in this file is released under Creative Commons Attribution   *//
//*  (CC-BY) license : https://creativecommons.org/licenses/by/4.0/.        *//
//*                                                                         *//
//***************************************************************************//

#ifndef _DERIVED_CLASS_
#define _DERIVED_CLASS_

#include "BaseClass.h"

class DerivedClass: public BaseClass
{
public:
  DerivedClass(void);
  ~DerivedClass(void);

private:
  int do_virtFunc(void) override;

};

#endif // _DERIVED_CLASS_
