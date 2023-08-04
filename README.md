# Tic Tac Toe

This is a simple implementation of the classic game Tic Tac Toe in C. The game allows two players to take turns and place their marks ('X' or 'O') on a 3x3 grid until a player wins or the game ends in a draw.

## How to Play

1. Clone the repository to your local machine.
2. Compile the code using a C compiler, for example:
   ```
   gcc tic_tac_toe.c -o tic_tac_toe
   ```
3. Run the compiled executable:
   ```
   ./tic_tac_toe
   ```
4. Follow the on-screen instructions to play the game.
5. Players will take turns choosing a cell to place their mark ('X' or 'O') by entering the corresponding number.

## Rules

1. Player 1 will use 'X' and Player 2 will use 'O'.
2. The game ends when one player successfully places their mark in a row, column, or diagonal, or when all cells are filled (a draw).

## Board Layout

The board is displayed as follows:

```
   TIC TAC TOE

   Player 1 takes X and Player 2 takes O

   1   |  2   |  3
-------------------
   4   |  5   |  6
-------------------
   7   |  8   |  9
```

Each number represents a cell on the grid, and players will enter the corresponding number to place their marks.

## Winning Condition

The game checks for a winner after each turn. The first player to form a row, column, or diagonal of their mark will be declared the winner.

## Draw

If all the cells are filled, and there is no winner, the game will end in a draw.

Enjoy playing Tic Tac Toe! Feel free to modify the code and improve the game as you like. If you encounter any issues or have any suggestions, please let us know. 
Happy gaming!
