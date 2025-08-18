#!/usr/bin/env bash
# Script tạo thư mục bài mới: ./new_problem.sh 13 c   hoặc  ./new_problem.sh 14 cpp
set -e
if [ $# -lt 2 ]; then
  echo "Usage: $0 <so_bai> <c|cpp>" >&2
  exit 1
fi
NUM=$1
LANG=$2
NAME="Bai${NUM}"
DIR="${NAME}"
if [ -d "$DIR" ]; then
  echo "Thu muc $DIR da ton tai" >&2
  exit 1
fi
mkdir -p "$DIR"
if [ "$LANG" = "c" ]; then
  cat >"$DIR/main.c" <<'EOF'
#include <stdio.h>
int main() {
    // TODO: code here
    return 0;
}
EOF
  cat >"$DIR/CMakeLists.txt" <<EOF
cmake_minimum_required(VERSION 3.10)
project(${NAME} C)
set(CMAKE_C_STANDARD 11)
add_executable(${NAME} main.c)
EOF
elif [ "$LANG" = "cpp" ]; then
  cat >"$DIR/main.cpp" <<'EOF'
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // TODO: code here
    return 0;
}
EOF
  cat >"$DIR/CMakeLists.txt" <<EOF
cmake_minimum_required(VERSION 3.10)
project(${NAME} CXX)
set(CMAKE_CXX_STANDARD 20)
add_executable(${NAME} main.cpp)
EOF
else
  echo "Ngon ngu chi ho tro: c | cpp" >&2
  exit 1
fi
# Note file ghi chú
if [ ! -f "$DIR/Contest.md" ]; then
  echo "# ${NAME}" >"$DIR/Contest.md"
fi
echo "Da tao ${DIR}"
