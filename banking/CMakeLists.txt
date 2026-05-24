cmake_minimum_required(VERSION 3.10)
project(banking)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Библиотека banking
add_library(banking Account.cpp Transaction.cpp)

# Тест
find_package(GTest REQUIRED)
add_executable(test_banking test.cpp)
target_link_libraries(test_banking banking GTest::GTest GTest::Main)
enable_testing()
add_test(NAME BankingTest COMMAND test_banking)
