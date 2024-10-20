//***************************************************************************//
//*                                                                         *//
//*  Copyright (c) 2024 Clifford Thompson                                   *//
//*                                                                         *//
//*  All code in this file is released under Creative Commons Attribution   *//
//*  (CC-BY) license : https://creativecommons.org/licenses/by/4.0/.        *//
//*                                                                         *//
//***************************************************************************//

#ifndef _BASE_CLASS_
#define _BASE_CLASS_

class BaseClass
{
public:
  BaseClass(void);
  ~BaseClass(void);

  int virtFunc(void);

private:

  virtual int do_virtFunc(void); // Could be pure virtual as well

};

#endif // _BASE_CLASS_
