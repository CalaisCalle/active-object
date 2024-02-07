add_library(Active Active.cpp)

target_include_directories(Active
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include)
