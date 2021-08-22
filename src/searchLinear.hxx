#pragma once
#include "_main.hxx"




template <class J, class T>
int searchLinear(const J& x, const T& v) {
  return findEqIndex(x, v);
}


template <class J, class T>
int searchLinearNaive(const J& x, const T& v) {
  int i = 0, I = x.size();
  for (; i<I; i++)
    if (x[i]==v) return i;
  return -1;
}
