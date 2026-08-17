# Assignment 7: Multi-Paradigm Problem Solving

This assignment demonstrated how the same problem can be solved using three different programming paradigms. I created a program that calculates the mean, median, and mode of a list of integers using C, OCaml, and Python. Although all three programs produced the same results, the implementation process was different in each language.

The C implementation used the procedural programming approach. I separated the program into functions for calculating the mean, median, and mode. I also implemented the sorting and counting logic directly instead of relying on built-in statistical functions. C required more attention to lower-level details. For example, memory was allocated when creating a copy of the array for the median calculation and then released using free(). The procedural approach was easy to follow because the program executes a clear sequence of steps, but it required more code than the other implementations.

The OCaml implementation demonstrated functional programming. Instead of changing variables repeatedly, the program used immutable lists and functional operations such as List.fold_left, List.filter, and List.map. Recursion was also used when counting how many times each number occurred. OCaml was the most challenging language for me because the functional approach is different from the programming style I normally use. However, it demonstrated how a problem can be divided into small functions where each function receives input and produces a result without depending heavily on mutable state.

The Python implementation used an object-oriented programming approach. I created a StatisticsCalculator class that stores the list of numbers. The class contains separate methods for calculating the mean, median, and mode. This approach made the program organized and easy to understand because the data and the operations performed on that data were grouped together inside one class. Python also required less code because of its built-in list, dictionary, sorting, and mathematical operations.

Overall, this assignment showed that the same problem can be solved successfully with different programming paradigms. C emphasized procedures and memory management, OCaml emphasized functions and immutable data, and Python emphasized classes, objects, and encapsulation. Of the three approaches, I found Python the easiest to implement, while OCaml required the largest adjustment in how I approached the problem. Working with all three languages helped me better understand how programming paradigms influence program structure and problem-solving techniques.

GitHub Repository:
https://github.com/AnnaLevinskaia/Assignment-7-Multi-Paradigm-Problem-Solving/tree/main
