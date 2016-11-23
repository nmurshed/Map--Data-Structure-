# A Simple Map Functionality : ECE650 Assignment 3

###Group Members : Anson Jacob(20595866), Niyaz Murshed(20641996), Minita Dabhi(20498102)###

This project aims to develop a simple map utility to find shortest path beween
two places. The shortest path is found by using Dijkstra's algorithm.

The map is implemented in __roadmap.c__ and is provided with a header file
__roadmap.h__.

Functionalities Supported
------------------------
The roadmap supports adding: 
- Vertex
- Edge
- Add an Edge Event
- Name a Road between edges
- Lookup for suggestions for Vertex Name in the Map
- Find the shortest distance between two vertex
- Store the map into a file
- Retreive the map from a file previously saved using Store
- Print the Graph Info

A sample file is also provided named __main.c__ which showcases the usage of the
different APIs

For testing purposes, two sample maps are created in __sample1.c__ and 
__sample2.c__. Scripts are created to run them: 
./run-sample1.sh and 
./run-sample2.sh

Documentation
-------------
Run __doxygen Doxyfile__

Compile
-------
Run __make__

Run
---
./runmap

Learning
-------
The project aided the group to explore, and learn:
- Dynamic Data Structures in C
- Dijkstra's algorithm using directed weighted graph
- Levenshtein distance
- Development in a \*nix Machine (Ubuntu/Mac)
- API in C and use of header file
- Vim Editor
- Makefile
- Bash scripts
- Git
- Doxygen
- Markdown

This document was generated using Markdown and Doxygen.
