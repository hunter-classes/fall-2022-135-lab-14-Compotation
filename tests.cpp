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

TEST_CASE("empty") {
  auto vec1 = MyVector<char>();
  CHECK(vec1.empty());
}

TEST_CASE("pop back n") {
  auto vec1 = MyVector<char>();
  vec1.push_back(2);
  vec1.push_back(2);
  vec1.pop_back(2);
  CHECK_EQ(vec1.size(), 0);
}

TEST_CASE("pop back 1") {
  auto vec1 = MyVector<char>();
  vec1.push_back(2);
  vec1.pop_back();
  CHECK(vec1.empty());
}

TEST_CASE("clear") {
  auto vec1 = MyVector<char>();
  vec1.push_back(5);
  vec1.clear();
  CHECK(vec1.empty());

  auto vec2 = MyVector<int>();
  for (int i = 0; i < 25; i++) {
    vec2.push_back(i);
  }
  vec2.clear();
  CHECK(vec2.empty());
}