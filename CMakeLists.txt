# Root CMake (tùy chọn gom tất cả project con nếu muốn build tổng)
cmake_minimum_required(VERSION 3.10)
project(ContestC)

# Tu dong them subdirectory neu muon build tat ca (bo sung thu cong cac Bai*)
# file(GLOB CHILD_DIRS RELATIVE ${CMAKE_SOURCE_DIR} Bai*)
# foreach(dir ${CHILD_DIRS})
#   if (IS_DIRECTORY ${CMAKE_SOURCE_DIR}/${dir})
#       add_subdirectory(${dir})
#   endif()
# endforeach()

message(STATUS "ContestC root configured")
