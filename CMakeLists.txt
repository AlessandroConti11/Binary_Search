cmake_minimum_required(VERSION 3.30)
project(Binary_Search)

set(CMAKE_CXX_STANDARD 20)

add_executable(binary_search main.cpp
        adaptive_binary_search/adaptive_binary_search.cpp
        adaptive_binary_search/adaptive_binary_search.h
        boundless_binary_range_search/boundless_binary_range_search.cpp
        boundless_binary_range_search/boundless_binary_range_search.h
        boundless_binary_search/boundless_binary_search.cpp
        boundless_binary_search/boundless_binary_search.h
        doubletapped_binary_search/doubletapped_binary_search.cpp
        doubletapped_binary_search/doubletapped_binary_search.h
        monobound_binary_search/monobound_binary_search.cpp
        monobound_binary_search/monobound_binary_search.h
        monobound_interpolated_binary_search/monobound_interpolated_binary_search.cpp
        monobound_interpolated_binary_search/monobound_interpolated_binary_search.h
        monobound_quaternary_search/monobound_quaternary_search.cpp
        monobound_quaternary_search/monobound_quaternary_search.h
        standard_binary_search/standard_binary_search.cpp
        standard_binary_search/standard_binary_search.h
        tripletapped_binary_search/tripletapped_binary_search.cpp
        tripletapped_binary_search/tripletapped_binary_search.h)
