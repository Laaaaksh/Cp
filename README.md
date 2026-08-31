# Cp

A larger, longer-running collection of DSA and competitive-programming practice
in C++ (with one Python file), solved between 2021 and 2025 — around 180
LeetCode/GfG-style questions per the repo's original description, plus separate
Codeforces solutions organized by division (`Codeforces/A/`), a couple of
algorithm templates (`bfs.cpp`, `segment_tree.cpp`), and folders for specific
courses (`LogicMojo/`, `Udemy/`).

This is a personal practice archive, not a curated library: folders mix
solved problems, scratch files, editor project config (`.idea/`, `.vscode/`),
and even a couple of compiled binaries and debug symbols
(`Coding_practice/file`, `file.dSYM/`) that were committed alongside the source.

## Status

Written 2021–2025 while working through DSA practice; not maintained, not
curated as a reference.

## Running a solution

Each `.cpp` file compiles standalone:

```
g++ -O2 -o solution path/to/file.cpp
./solution
```
