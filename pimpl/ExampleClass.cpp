//***************************************************************************//
//*                                                                         *//
//*  Copyright (c) 2024 Clifford Thompson                                   *//
//*                                                                         *//
//*  All code in this file is released under Creative Commons Attribution   *//
//*  (CC-BY) license : https://creativecommons.org/licenses/by/4.0/.        *//
//*                                                                         *//
//***************************************************************************//

#include "ExampleClass.h"

struct ExampleClass::ClassImpl
{
  int m_myInt = 0;
};

struct ExampleClass::StaticImpl
{
  int m_myInt = 0;
};

auto* const ExampleClass::m_staticImpl = new ExampleClass::StaticImpl();

ExampleClass::ExampleClass(void):
    m_classImpl(new ExampleClass::ClassImpl())
{

}

ExampleClass::~ExampleClass(void)
{
  delete m_classImpl;
}
