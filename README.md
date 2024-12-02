
# Dapper Dasher (Scarfy's Adventure)

Dapper Dasher is a simple 2D platformer game created using **C++** and **Raylib**. The hero of the game, Scarfy, runs and jumps to avoid obstacles and reach the finish line. This project is my first game development experience and showcases basic game physics, animations, and gameplay mechanics.

---

## Features
- **Character Movement**: Scarfy can run and jump with smooth animations.
- **Physics Simulation**: Includes gravity, free fall, and jump mechanics.
- **Scrolling Background**: A dynamic, layered parallax background for a visually appealing environment.
- **Obstacles**: Nebulae hazards move toward Scarfy, creating challenges.
- **Winning and Losing States**: Reach the finish line to win or collide with an obstacle to lose.

---

## Gameplay
- **Objective**: Help Scarfy avoid hazards and reach the finish line.
- **Controls**:
  - Press **Spacebar** to make Scarfy jump.
- **Winning Condition**: Scarfy reaches the finish line without colliding with any obstacles.
- **Losing Condition**: Collision with a nebula hazard ends the game.

---

## Technical Details
- **Language**: C++
- **Framework**: Raylib (a simple and easy-to-use library for learning game development).
- **Physics**:
  - Gravity is applied to simulate free fall.
  - Jump mechanics use upward velocity to counteract gravity.
- **Animations**:
  - Scarfy and obstacles use sprite sheets with frame updates for smooth animation.
- **Background Scrolling**:
  - Parallax scrolling is implemented for depth and movement.

---

## How to Run
1. Clone this repository to your local machine:
   ```bash
   git clone <repository-url>
   ```
2. Install Raylib (if not already installed). Visit [Raylib's official website](https://www.raylib.com/) for instructions.
3. Build and run the game:
   ```bash
   g++ -o DapperDasher main.cpp -lraylib
   ./DapperDasher
   ```
4. Place the `textures` folder (containing sprite sheets and background images) in the same directory as the executable.

---

## Resources
- **Raylib**: [Raylib Official Website](https://www.raylib.com/)
- **Game Assets**: Custom sprite sheets and background textures.

---

## Future Enhancements
- Add more levels with increasing difficulty.
- Introduce collectible items for scoring.
- Implement sound effects and background music.
- Add a main menu and pause functionality.

---

## Acknowledgments
This project was inspired by Raylib's beginner tutorials and my passion for game development. Special thanks to the developers and community of Raylib for providing an accessible platform to learn game programming.

---

### Contact
For questions, suggestions, or feedback, feel free to reach out:
- **Instagram**: [@gamedevbatra](https://www.instagram.com/gamedevbatra/)
- **LikedIn**: [Mohammed Albattrawi](https://www.linkedin.com/in/mohammedalbatrawi/)

