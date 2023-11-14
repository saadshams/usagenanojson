cmake_minimum_required(VERSION 3.26)
project(usagenanojson C)

set(CMAKE_C_STANDARD 11)

# find_package(nanojson CONFIG REQUIRED)

add_executable(usagenanojson main.c)

# target_link_libraries(usagenanojson PRIVATE nanojson::nanojson)
