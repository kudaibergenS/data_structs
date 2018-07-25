cmake_minimum_required(VERSION 3.10)
project(data_structs)

set(CMAKE_CXX_STANDARD 11)

add_executable(data_structs main.cpp tree/BinaryTree.cpp tree/BinaryTree.h linked_list/LinkedList.cpp linked_list/LinkedList.h stack/Stack.cpp stack/Stack.h)