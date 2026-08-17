# Assignment 7: Multi-Paradigm Problem Solving

## Overview

This project implements a basic statistics calculator in three programming languages using three different programming paradigms.

The program calculates:
- Mean
- Median
- Mode

## Languages and Paradigms

- C - Procedural Programming
- OCaml - Functional Programming
- Python - Object-Oriented Programming

## Test Data

The following list is used in all three implementations:

`1, 2, 2, 3, 3, 4, 5, 6`

Expected results:
- Mean: 3.25
- Median: 3.00
- Modes: 2 and 3

## C

Compile:
```bash
cd c
gcc statistics.c -o statistics
./statistics
```

## OCaml

Compile:
```bash
cd ocaml
ocamlc -o statistics statistics.ml
./statistics
```

## Python

Run:
```bash
cd python
python3 statistics.py
```

## Paradigms

### Procedural Programming
The C implementation uses separate functions for calculating the mean, median, and mode.

### Functional Programming
The OCaml implementation uses immutable lists, recursion, `List.fold_left`, `List.filter`, and `List.map`.

### Object-Oriented Programming
The Python implementation uses a `StatisticsCalculator` class with methods for each calculation.
