<h1 align=center>
	<b>Push_swap</b>
</h1>

<p align=center>
This project will make you sort data on a stack, with a limited set of instructions, using
the lowest possible number of actions. To succeed you’ll have to manipulate various
types of algorithms and choose the most appropriate solution (out of many) for an
optimized data sorting.
</p>

<div align=center>
</div>

### Mandatory
* You have 2 stacks named a and b.

* At the beginning:
	- The stack a contains a random amount of negative and/or positive numbers which cannot be duplicated.
	- The stack b is empty.

* The goal is to sort in ascending order numbers into stack a. To do so you have the following operations at your disposal:

#### Push_swap instruction :

| Instruction | Description|
|:-:|-|
| **sa** | swap a - swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements). |
| **sb** | swap b - swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements). |
| **ss** | sa and sb at the same time. |
| **pa** | push a - take the first element at the top of b and put it at the top of a. Do nothing if b is empty. |
| **pb** | push b - take the first element at the top of a and put it at the top of b. Do nothing if a is empty. |
| **ra** | rotate a - shift up all elements of stack a by 1. The first element becomes the last one. |
| **rb** | rotate b - shift up all elements of stack b by 1. The first element becomes the last one.
| **rr** | ra and rb at the same time. |
| **rra** | reverse rotate a - shift down all elements of stack a by 1. The last element becomes the first one. |
| **rrb** | reverse rotate b - shift down all elements of stack b by 1. The last element becomes the first one. |
| **rrr** | rra and rrb at the same time. |

### Bonus

* Write a program named checker, which will get as an argument the stack a formatted as a list of integers.

* The first argument should be at the top of the stack (be careful about the order). If no argument is given checker stops and displays nothing.

* checker will then wait and read instructions on the standard input, each instruction will be followed by ’\n’. Once all the instructions have been read, checker will execute them on the stack received as an argument.

* If after executing those instructions, stack a is actually sorted and b is empty, then checker must display "OK" followed by a ’\n’ on the standard output. In every other case, checker must display "KO" followed by a ’\n’ on the standard output.

* In case of error, you must display Error followed by a ’\n’ on the standard error.
Errors include for example: some arguments are not integers, some arguments are bigger than an integer, there are duplicates, an instruction don’t exist and/or is incorrectly formatted.
