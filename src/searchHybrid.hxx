#pragma once
#include "_main.hxx"




template <class J, class T>
int searchHybrid(const J& x, const T& v, int B) {
  return x.size()<=B? findEqIndex(x, v) : lowerBoundEqIndex(x, v);
}


template <class J, class T>
int searchHybridNaive(const J& x, const T& v, int B) {
  int i = 0, I = x.size();
  while (I-i>B) {
    int m = (i+I)/2;
    if (x[m]<v) i = m+1;
    else I = m;
  }
  for (; i<I; i++)
    if (x[i]==v) return i;
  return -1;
}
