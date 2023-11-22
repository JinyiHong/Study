cmake_minimum_required(VERSION 3.5)

project(3-LongestSubstringWithoutRepeatingCharacters LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(3-LongestSubstringWithoutRepeatingCharacters main.cpp)

install(TARGETS 3-LongestSubstringWithoutRepeatingCharacters
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
