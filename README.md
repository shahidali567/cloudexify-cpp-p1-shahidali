# Number Guessing Game (C++)

## CloudExify C++ Internship – Project 1

A simple console-based Number Guessing Game developed in C++. The player selects a difficulty level, guesses a randomly generated number, and the program keeps track of the best score using file handling.

---

## Developer Information

**Name:** Shahid Ali

**Registration Number:** Your Registration Number

---

## Features

-  Three difficulty levels:
  - Easy (1–500)
  - Medium (1–100)
  - Hard (1–200)
-  Random number generation using `rand()` and `srand()`
-  Input validation
-  Best score saved using file handling (`bestscore.txt`)
-  Replay option after each game
-  Displays the number of attempts
-  Modular code using separate functions

---

## Technologies Used

- C++
- File Handling (`fstream`)
- Standard Library
- Console Application

---

## Project Structure

```
Number-Guessing-Game/
│── main.cpp
│── bestscore.txt
│── README.md
└── screenshots/
    ├── gameplay1.png
    └── gameplay2.png
```

---

## How to Run

### Using g++

1. Clone the repository

```bash
git clone (https://github.com/shahidali567/cloudexify-cpp-p1-shahidali)
```

2. Open the project folder

```bash
cd Number-Guessing-Game
```

3. Compile the program

```bash
g++ main.cpp -o game
```

4. Run the executable

**Windows**

```bash
game.exe
```

**Linux/macOS**

```bash
./game
```

---

## Program Workflow

1. Start the program.
2. Select a difficulty level.
3. Enter your guesses.
4. The program provides hints whether the secret number is higher or lower.
5. Guess the correct number.
6. Your best score is automatically saved.
7. Choose whether to play again.

---

## Screenshots

### Main Menu

![Main Menu](screenshots/gameplay1.png)

### Winning the Game

![Gameplay](screenshots/gameplay2.png)

---

## Concepts Used

- Functions
- Loops
- Conditional Statements
- Switch Case
- Random Number Generation
- File Handling
- User Input Validation

---

## Author

**Shahid Ali**

BS Software Engineering

COMSATS University Islamabad, Wah Campus

CloudExify C++ Internship
