# Push Swap

This repository contains the solution for the **Push Swap** project, part of the 42 curriculum. The goal of this project is to sort a stack of integers with the least number of operations using a limited set of predefined instructions.

## Table of Contents

- [Overview](#overview)
- [Instructions](#instructions)
- [Installation](#installation)
- [Usage](#usage)
- [Sorting Algorithm](#sorting-algorithm)
- [Project Goals](#project-goals)
- [Contributing](#contributing)
- [License](#license)

## Overview

The **Push Swap** project consists of two parts:

1. **push_swap**: This is the program that takes a list of integers as arguments and sorts them using a limited set of operations, printing the steps required for sorting.
2. **checker**: This program checks if the list of integers is sorted correctly by a sequence of operations.

The sorting algorithm needs to be efficient and use the least number of moves, making it a challenge to find the optimal solution.

## Instructions

You are allowed to use only the following operations to sort the stack:

- `sa`: Swap the first two elements at the top of stack **a**.
- `sb`: Swap the first two elements at the top of stack **b**.
- `ss`: Swap the first two elements of both stacks **a** and **b** simultaneously.
- `pa`: Push the first element at the top of stack **b** onto stack **a**.
- `pb`: Push the first element at the top of stack **a** onto stack **b**.
- `ra`: Rotate stack **a** upwards (first element becomes the last).
- `rb`: Rotate stack **b** upwards (first element becomes the last).
- `rr`: Rotate both stacks **a** and **b** upwards simultaneously.
- `rra`: Reverse rotate stack **a** (last element becomes the first).
- `rrb`: Reverse rotate stack **b** (last element becomes the first).
- `rrr`: Reverse rotate both stacks **a** and **b** simultaneously.

## Installation

1. Clone this repository:

   ```bash
   git clone https://github.com/aitomarabdeljalil/42-push_swap.git
   cd 42-push_swap
   ```

2. Compile the program using the provided `Makefile`:

   ```bash
   make
   ```

   This will generate two executables:
   - `push_swap`
   - `checker`

## Usage

### push_swap

To run the `push_swap` program, provide a list of integers as arguments:

```bash
./push_swap 2 1 3 6 5 8
```

This will output a sequence of moves to sort the integers:

```bash
pb
ra
pb
ss
pa
...
```

You can check the number of moves produced by piping the output to `wc -l`:

```bash
./push_swap 2 1 3 6 5 8 | wc -l
```

### checker

The `checker` program is used to validate if a sequence of operations correctly sorts the input list. You can provide the same list of integers and input a series of operations:

```bash
./checker 2 1 3 6 5 8
```

Then manually type or input the sequence of operations:

```bash
pb
ra
pb
ss
pa
```

If the list is sorted correctly, `checker` will return `OK`. If not, it will return `KO`.

Alternatively, you can use `push_swap` with `checker` in a pipeline to check the result:

```bash
./push_swap 2 1 3 6 5 8 | ./checker 2 1 3 6 5 8
```

## Sorting Algorithm

The project requires efficient sorting, especially for larger lists. While there is no restriction on the algorithm, the challenge lies in using as few operations as possible. Strategies often used include:

- **Insertion Sort** for small stacks (3-5 elements).
- **Quick Sort**-based partitioning for larger stacks.
- **Radix Sort** for larger stacks to ensure an optimal solution.

Optimizing the sorting method based on stack size and efficiently utilizing the available operations is key to achieving a high score in the project.

## Project Goals

The main goals of the **Push Swap** project are:

- **Understanding Sorting Algorithms**: Implement efficient algorithms for sorting integers.
- **Optimization**: Minimize the number of operations to sort the stack.
- **Algorithmic Complexity**: Gain insights into algorithm complexity, performance, and trade-offs.
- **Stack Operations**: Understand how to manipulate data structures such as stacks and queues using simple operations.

## Contributing

If you'd like to contribute to this project, feel free to open an issue or submit a pull request. Contributions, suggestions, and feedback are always welcome!

### How to Contribute

1. Fork the repository.
2. Create a new branch (`git checkout -b feature/new-feature`).
3. Commit your changes (`git commit -m 'Add some new feature'`).
4. Push to the branch (`git push origin feature/new-feature`).
5. Open a pull request.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
