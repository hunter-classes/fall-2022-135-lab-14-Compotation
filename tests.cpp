#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"

#include "MyVector.h"

TEST_CASE("pushing back") {
  auto vec = MyVector<std::string>();
  for (int i = 0; i < 50; i++) {
    std::string element = "hie" + std::to_string(i * 50);
    vec.push_back(element);
    CHECK_EQ(vec[i], element);
  }
}

TEST_CASE("size") {
  auto vec1 = MyVector<int>();
  CHECK_EQ(vec1.size(), 0);
  vec1.push_back(15);
  vec1.push_back(15);
  CHECK_EQ(vec1.size(), 2);

  for (int i = 0; i < 25; i++) {
    vec1.push_back(i);
  }
  CHECK_EQ(vec1.size(), 27);
}

TEST_CASE("capacity") {
  auto vec1 = MyVector<char>();
  CHECK_EQ(vec1.capacity(), 10);
  for (int i = 0; i < 11; i++) {
    vec1.push_back(static_cast<char>(i));
  }
  CHECK_EQ(vec1.capacity(), 20);
}