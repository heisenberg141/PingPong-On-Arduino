/*
  DEFINING THE CUSTOM CHARACTERS FOR PADDLES AND BALL
*/
//   BALL'S POSSIBLE POSITIONS

//Row 1, All columns

byte ball00[8] = {
  0b10000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};

byte ball01[8] = {
  0b01000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};

byte ball02[8] = {
  0b00100,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};

byte ball03[8] = {
  0b00010,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};

byte ball04[8] = {
  0b00001,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};

//Row 2, All columns
byte ball10[8] = {
  0b00000,
  0b10000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};

byte ball11[8] = {
  0b00000,
  0b01000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};

byte ball12[8] = {
  0b00000,
  0b00100,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};

byte ball13[8] = {
  0b00000,
  0b00010,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};

byte ball14[8] = {
  0b00000,
  0b00001,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};

//Row 3, All columns
byte ball20[8] = {
  0b00000,
  0b00000,
  0b10000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};

byte ball21[8] = {
  0b00000,
  0b00000,
  0b01000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};

byte ball22[8] = {
  0b00000,
  0b00000,
  0b00100,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};

byte ball23[8] = {
  0b00000,
  0b00000,
  0b00010,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};

byte ball24[8] = {
  0b00000,
  0b00000,
  0b00001,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};

//Row 4, All columns
byte ball30[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b10000,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};

byte ball31[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b01000,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};

byte ball32[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00100,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};

byte ball33[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00010,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};

byte ball34[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00001,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};

//Row 5, All columns
byte ball40[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b10000,
  0b00000,
  0b00000,
  0b00000
};

byte ball41[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b01000,
  0b00000,
  0b00000,
  0b00000
};

byte ball42[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00100,
  0b00000,
  0b00000,
  0b00000
};

byte ball43[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00010,
  0b00000,
  0b00000,
  0b00000
};

byte ball44[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00001,
  0b00000,
  0b00000,
  0b00000
};

//Row 6, All columns
byte ball50[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b10000,
  0b00000,
  0b00000
};

byte ball51[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b01000,
  0b00000,
  0b00000
};

byte ball52[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00100,
  0b00000,
  0b00000
};

byte ball53[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00010,
  0b00000,
  0b00000
};

byte ball54[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00001,
  0b00000,
  0b00000
};

//Row 7, All columns
byte ball60[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b10000,
  0b00000
};

byte ball61[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b01000,
  0b00000
};

byte ball62[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00100,
  0b00000
};

byte ball63[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00010,
  0b00000
};

byte ball64[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00001,
  0b00000
};

//Row 8, All columns
byte ball70[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b10000
};

byte ball71[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b01000
};

byte ball72[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00100
};

byte ball73[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00010
};

byte ball74[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00001
};


// PADDLES




//  PADDLE1

byte paddle11[8] = {
  0b00001,
  0b00001,
  0b00001,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};
byte paddle12[8] = {
  0b00000,
  0b00001,
  0b00001,
  0b00001,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};
byte paddle13[8] = {
  0b00000,
  0b00000,
  0b00001,
  0b00001,
  0b00001,
  0b00000,
  0b00000,
  0b00000
}; byte paddle14[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00001,
  0b00001,
  0b00001,
  0b00000,
  0b00000
}; byte paddle15[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00001,
  0b00001,
  0b00001,
  0b00000
}; byte paddle16[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00001,
  0b00001,
  0b00001
}; byte paddle17a[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00001,
  0b00001
};
byte paddle17b[8] = {
  0b00001,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};
byte paddle18a[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00001
};
byte paddle18b[8] = {
  0b00001,
  0b00001,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};




//  PADDLE2




byte paddle21[8] = {
  0b10000,
  0b10000,
  0b10000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};

byte paddle22[8] = {
  0b00000,
  0b10000,
  0b10000,
  0b10000,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};

byte paddle23[8] = {
  0b00000,
  0b00000,
  0b10000,
  0b10000,
  0b10000,
  0b00000,
  0b00000,
  0b00000
};

byte paddle24[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b10000,
  0b10000,
  0b10000,
  0b00000,
  0b00000
};

byte paddle25[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b10000,
  0b10000,
  0b10000,
  0b00000
};

byte paddle26[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b10000,
  0b10000,
  0b10000
};

byte paddle27a[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b10000,
  0b10000
};

byte paddle27b[8] = {
  0b10000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};

byte paddle28a[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b10000
};

byte paddle28b[8] = {
  0b10000,
  0b10000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};







//including necessary Libraries


#include <LiquidCrystal.h>
#include <Keypad.h>

// LCD setup
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// For simplicity and easy readability, Imade the buttons in the form of a 2x2 matrix keypad.


//Keypad rows and Columns initialization
const byte ROWS = 2; //two rows
const byte COLS = 2; //two columns

char hexaKeys[ROWS][COLS] = {
  {'A', 'D'},
  {'B', 'C'}
};

//Keypad pin definition
byte rowPins[ROWS] = {10, 9}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {8, 7}; //connect to the column pinouts of the keypad
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS);

//Initial global variables
boolean gameStarted;
int yDir;                         // Up/Down State of the Ball
int xDir;                        // Left/Right State of the Ball
int paddlePos1;                 // Position of the player 1 paddle
int paddlePos2;                // Position of the player 2 paddle
int ballPos[2];               // X, Y coordinates of the ball
int pointsP1;                // player 1 points
int pointsP2;               // player 2 points
int angle;                 // Angle at which the ball is travelling wrt the horizontal (X) axis
float theta;              // Clockwise angle at which ball is travelling wrt the Vertical (Y) axis
float speed;             // speed of the ball
float totalspeed;


int MinAngle = 10;                // Min trajectory angle for the ball
int MaxAngle = 50;               // Max trajectory angle for the ball
float initialspeed = 1.0;       // Initial speed value that is used at the start of a game (pick a bigger number for the ball to travel faster at the start)

void setup() {


  gameStarted = false;

  paddlePos1 = 6; //Initial PaddlePosiotions
  paddlePos2 = 9;


  lcd.begin(16, 2);//Initializing the type of LCD



  // To calculate an initial trajectory angle for the ball
  ballPos[0] = 39;
  ballPos[1] = 7;
  findInitAngle();

  speed = initialspeed;//speed of the ball
  totalspeed = speed;
}




