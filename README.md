# Gotta Catch’em All

<!-- ABOUT THE PROJECT -->
## About The Project

College C project to implement a header function
char pokemon(int n, int m, char a[][100], char you, int energy). This function receives:
- two positive integers n and m, both not greater than 100;
- a two-dimensional array a[][], of dimensions n × m, of characters, which represents the
forest;
- the character you, a lowercase letter of the alphabet that represents how it is identified
in a[][] the position where you are;
- the number of energy points you have left.
Assume that each character a[i][j] in a valid position - that is, each character a[i][j] that
satisfies 0 ≤ i < n and 0 ≤ j < m - can fall into only one of the possibilities listed below
below:
- #, indicating the presence of a forest tree at that position (in this case, the
position is impassable and contains no Pokémon);
- a digit x (0 ≤ x ≤ 9), indicating that in that position there is a Pokémon that
consumes x energy points to be caught;
- a lowercase letter of the alphabet, indicating that in that position there is a trainer, represented by that letter, and that two trainers cannot occupy the same
position in the forest;
- a blank space, indicating that there is nothing in that position.
Also assume that all the parameters passed to the function are valid. In particular, assume that exactly one of the characters is equal to the you character and that there is still
at least one Pokémon to be caught. However, it is not guaranteed that in any of the invalid positions the array a[][] contains the character '\0' (i.e. the lines of the array a[][] should not be treated as strings).
be treated as strings).
The pokemon() function must return one of the following characters:
- N (uppercase), indicating that you are deciding to move one position in a northerly direction (i.e. if you are at a[i][j], you now want to go to a[i - 1][j]);
- S (capitalized), indicating that you are deciding to move to a position in a southerly direction (i.e. if you are at a[i][j], you now want to go to a[i + 1][j]);
3
- E (capitalized), indicating that you are deciding to move to a position in an easterly direction (i.e. if you are at a[i][j], you now want to go to a[i][j + 1]);
- W (capitalized), indicating that you are deciding to move to a position in a westerly direction (i.e. if you are at a[i][j], you now want to go to a[i][j - 1]);
- X (capitalized), indicating that you are deciding to remain in your current position.
If the pokemon() function returns a movement that is not considered permissible, you will
remain in your current position. In particular,
- you are not allowed to decide to move to a position outside the domains
of the forest;
- you are not allowed to decide to move to a position where there is a
tree;
- you are not allowed to decide to move to a position where there is a
Pokémon for which you do not have enough energy points;
- you are not allowed to leave the position you are in if you have
zero energy points;
- you are not allowed to decide to move to a position that another trainer also wants to move to.
another trainer, in which case none of the trainers will end up leaving the position.
of the place.

More informaton is available in the file: `trab-fp1-zatesko-2019-2.pdf`

<p align="right">(<a href="#readme-top">back to top</a>)</p>


<!-- GETTING STARTED -->
## Getting Started

A labyrinth generator was implemented for tests, as one was not avaliable outside the teacher private code. For the implementation of the pokemon() function, it can be assumed that the libraries stdio.h, stdlib.h, string.h, time.h, math.h, and only these, are included.

### Running

1. Compile with command 
```sh
.\gcc.exe -Wall -O2 -ansi -Wno-unused-result -lm -std=c99 trabalho.c -o trabalho
````
2. Run the output
 ```sh
 ./trabalho
 ```

3. Enter values for position x, y and energy

<p align="right">(<a href="#readme-top">back to top</a>)</p>
