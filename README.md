# PingPong-On-Arduino
This is A simple PingPong game implemented on Arduino and 16 x 2 LCD.I am using pushbuttons for controlling the paddles.
# About the project:
This project uses Arduino UNO and a 16x2 LCD to implement ping pong game. It is a two player game and its aim is to score 5 points. 

Whichever side does so first wins the game. The code uses mathematics of linear algebra level and physics of motion in two dimensions to calculate the speed and direction of the ball on the game board.

The game board is mapped on to an LCD and each paddle is controlled by two push buttons. The project can easily be understood in two parts i.e. hardware and code.

# Features of the Project:

•	The ball can be set to move with different speeds.

•	Each round starts with a different angle of the ball so that the game isn’t predictable.

•	The game has a fun user interface that is easy to understand.

•	One can become comfortable at using Arduino and LCD after making this project.

# Hardware Description:

•	The hardware majorly consists of an Arduino Uno, LCD and 4 pushbuttons. Other secondary components are wires, breadboard(s), resistors and potentiometer.

•	The hardware components are connected according to the circuit diagram given in CIRCUIT_DIAGRAM folder.

•	Instead of connecting push buttons separately, the buttons were arranged in the form of a 2x2 keypad and the library keypad.h was used to interface the buttons with the LCD.


# Code Description:

The code is divided into 3 parts:
i) Setup: This file contains the definition of all the custom characters to be displayed on the LCD. All the global variables necessary for the code to run are also defined in this file.
ii) Main Loop: This file consists of the main game loop (void main) where function calls are made. The function calls are necessary for updating the positions of paddles and the ball.
iii) Functions: This file consists of many functions that are required for the game to work smoothly. Each function is included with comments to make the code easy to read and understand. The functions along with their description are as follows:


# Functions that control the positions of the paddles

1.	void playerPaddleUpdate (): This functions finds the next location of the paddles to be displayed on the LCD.
2.	void displayPaddle1(): This function displays the left paddle.
3.	void displayPaddle2(): This function displays the Right paddle.

# Functions that control Ball Motion

4.	void ballPosUpdate (): This function finds the next position of the ball to be displayed on the LCD.
5.	float clacTheta (int yDir, int xDir): This function takes as input, the x and y direction of the of the ball and calculates the clockwise angle with respect to the y axis.
6.	void checkBottomTopCollision (int newX, int newY): This function checks that whether the ball has collided with top or bottom of the LCD.
7.	void checkleftPaddleCollision (int newX, int newY): This function checks that whether the ball has collided with the left paddle.
8.	void BallHitsPaddle1(int X, int Y):  This function makes the necessary updates if the ball collides with the left paddle.
9.	void checkRightPaddleCollision (int newX, int newY): This function checks that whether the ball has collided with the right paddle.
10.	void BallHitsPaddle2(int X, int Y): This function makes the necessary updates if the ball collides with the left paddle.
11.	void drawBall (int X, int Y): This function displays the ball on the next position given by the function ball position update. 
12.	void reset (): This function resets the game parameters to their initial value.

# Functions that Initialize the game

13.	void findInitAngle (): This function finds the initial angle with which ball should start to move.
14.	void drawGameboard ():  This function takes care of displaying the initial game board on the LCD.
15.	void startupScreen ():  This function displays the startup intro screen on the LCD.
16.	void checkP1(): This function checks if the player one has pressed any button.
17.	void checkP2(): This function checks if the player two has pressed any button.

I implemented the project on hardware and found that the game works well. I have made a video to demonstrate the performance of the code on hardware and also, uploaded it on YouTube
# The link of the video is provided as follows: https://youtu.be/PlMMMhBuwwo


