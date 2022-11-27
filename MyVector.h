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

  size_t capacity();

  bool empty();

  void pop_back(size_t n);

  void pop_back();
};

#include "MyVector.tcc"

