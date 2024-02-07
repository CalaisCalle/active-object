add_subdirectory(Active)
add_subdirectory(Example)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} Example)
