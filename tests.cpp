#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"

#include "MyVector.h"

TEST_CASE("pushing back") {
  auto vec = MyVector<std::string>();
  for (int i = 0; i < 10; i++) {
    vec.push_back("hie" + std::to_string(i * 50));
    CHECK_EQ(vec[i], "hie" + std::to_string(i * 50));
  }
}