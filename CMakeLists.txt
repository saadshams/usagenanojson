cmake_minimum_required(VERSION 3.26)
project(usagenanojson C)

set(CMAKE_C_STANDARD 11)

add_executable(usagenanojson main.c)

if (DEFINED ENV{VCPKG_ROOT} AND NOT DEFINED VCPKG_ROOT)
    set(VCPKG_ROOT $ENV{VCPKG_ROOT})
endif()