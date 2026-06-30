# push_swap

Sorting algorithm project from 42 school. Takes a list of integers and outputs the shortest sequence of stack operations needed to sort them.

## Compiling

```sh
make
```

Uses `cc -Wall -Wextra -Werror`. Clean with `make fclean`, rebuild with `make re`.

## Usage

```sh
./push_swap 5 3 4 1 2
```

Prints operations (sa, pb, ra, rra, etc.) one per line. No output if already sorted. Prints "Error" to stderr and exits with 1 if any argument is invalid (non-numeric, duplicate, out of int range).

## How it works

First it maps each number to an index (its rank among all numbers). This normalizes the data to 0..n-1 so the sort works on the index instead of the raw value.

- **Size <= 5**: hardcoded small sort. sort_2 swaps if needed, sort_3 handles all 6 permutations with at most 2 ops, sort_4 and sort_5 peel off the smallest element then sort the rest.
- **Size > 5**: radix sort (LSD bitwise). For each bit position (LSB to MSB), elements with a 1-bit get rotated in A, elements with a 0-bit get pushed to B. After one pass, everything goes back to A. Repeat for the next bit.

## Operations

| Op | What it does |
|---|---|
| sa / sb / ss | swap first two elements |
| pa / pb | push top element to other stack |
| ra / rb / rr | rotate up (first becomes last) |
| rra / rrb / rrr | rotate down (last becomes first) |

## Notes

- Uses a linked list internally. Stack A starts with all numbers, stack B is the temp buffer.
- The atoi implementation doesn't check for long overflow. Numbers that overflow long during parsing have undefined behavior (usually wraps to something out of int range and gets caught).

Made for 42 Amman, dikhalil.
