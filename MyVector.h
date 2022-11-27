#pragma once

#include <cstdio>

template<typename T>
class MyVector {
private:
  T *arr;
  size_t numItems;
  size_t maxSize;

public:
  MyVector();

  void push_back(T item);

  T &operator[](size_t i);

  size_t size();
};

#include "MyVector.tcc"

