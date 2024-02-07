add_library(Example Example.cpp)

target_include_directories(Example
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include)

target_link_libraries(Example PUBLIC Active)