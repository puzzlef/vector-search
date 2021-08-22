#pragma once
#include "_main.hxx"




template <class J, class T>
int searchBinary(const J& x, const T& v) {
  return lowerBoundEqIndex(x, v);
}


template <class J, class T>
int searchBinaryNaive(const J& x, const T& v) {
  int i = 0, I = x.size();
  while (i<I) {
    int m = (i+I)/2;
    if (x[m]<v) i = m+1;
    else I = m;
  }
  return i<x.size() && x[i]==v? i:-1;
}
