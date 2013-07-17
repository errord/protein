/*
 * Protein -- C++ Base Tool Kit Library
 * Copyright 2013 error.d@gmail.com
 *
 */

#ifndef _PROTEIN_TYPES_H_
#define _PROTEIN_TYPES_H_

namespace protein {

#include <sstream>

/* specialize int */
template<>
class typeto<int> {
public:
  typeto(int i) { value = i; }
  typeto(std::string& i) {
    std::stringstream ss(i);
    ss >> value;
  }
  ~typeto();
  int value;
};

/* specialize float */
template<>
class typeto<float> {
public:
  typeto(float f) { value = f; }
  typeto(std::string& f) {
    std::stringstream ss(f);
    ss >> value;
  }
  ~typeto();
  float value;
};

/* specialize double */
template<>
class typeto<double> {
public:
  typeto(double d) { value = d; }
  typeto(std::string& d) {
    std::stringstream ss(d);
    ss >> value;
  }
  ~typeto();
  double value;
};

}

#endif /* _PROTEIN_TYPES_H_ */

