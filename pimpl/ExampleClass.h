//***************************************************************************//
//*                                                                         *//
//*  Copyright (c) 2024 Clifford Thompson                                   *//
//*                                                                         *//
//*  All code in this file is released under Creative Commons Attribution   *//
//*  (CC-BY) license : https://creativecommons.org/licenses/by/4.0/.        *//
//*                                                                         *//
//***************************************************************************//

#ifndef _EXAMPLE_CLASS_
#define _EXAMPLE_CLASS_

class ExampleClass
{
public:
  ExampleClass(void);
  ~ExampleClass(void);
private:

  struct StaticImpl;
  struct ClassImpl;

  static StaticImpl* const m_staticImpl;
  ClassImpl* const m_classImpl;
};

#endif // _EXAMPLE_CLASS_
