

//FUNCTIONS THAT CONTROL THE POSITION OF THE PADDLES


//FUNCTION THAT UPDATES THE PADDLE POSITION
void playerPaddleUpdate()
{
  // GETTING THE BUTTON PRESSED
  char button = customKeypad.getKey();
  if (button == 'A')
  {
    paddlePos1--;
  }
  else if (button == 'B')
  {
    paddlePos1++;
  }
  else if (button == 'C')
  {
    paddlePos2++;
  }
  else if (button == 'D')
  {
    paddlePos2--;
  }


  //DEFINING THE PADDLE POSITIONS ACCORDING TO THE BUTTON PRESSED
  if (paddlePos1 > 14)
  {
    paddlePos1 = 14;
  }
  if (paddlePos1 < 1)
  {
    paddlePos1 = 1;
  }

  //SETTING THE MAXIMUM AND MINIMUM POSITIONS OF THE PADDLES
  if (paddlePos2 > 14)
  {
    paddlePos2 = 14;
  }
  if (paddlePos2 < 1)
  {
    paddlePos2 = 1;
  }

  lcd.setCursor(14, 0);
  lcd.print(" ");
  lcd.setCursor(14, 1);
  lcd.print(" ");

  lcd.setCursor(1, 0);
  lcd.print(" ");
  lcd.setCursor(1, 1);
  lcd.print(" ");

  displayPaddle2();
  displayPaddle1();
}

void displayPaddle1()
{
  if (paddlePos1 == 1)
  {
    lcd.createChar(0, paddle11);
    lcd.setCursor(1, 0);
    lcd.write(byte(0));
  }
  else if (paddlePos1 == 2)
  {
    lcd.createChar(0, paddle12);
    lcd.setCursor(1, 0);
    lcd.write(byte(0));
  }
  else if (paddlePos1 == 3)
  {
    lcd.createChar(0, paddle13);
    lcd.setCursor(1, 0);
    lcd.write(byte(0));
  }
  else if (paddlePos1 == 4)
  {
    lcd.createChar(0, paddle14);
    lcd.setCursor(1, 0);
    lcd.write(byte(0));
  }
  else if (paddlePos1 == 5)
  {
    lcd.createChar(0, paddle15);
    lcd.setCursor(1, 0);
    lcd.write(byte(0));
  }
  else if (paddlePos1 == 6)
  {
    lcd.createChar(0, paddle16);
    lcd.setCursor(1, 0);
    lcd.write(byte(0));
  }
  else if (paddlePos1 == 7)
  {
    lcd.createChar(0, paddle17a);
    lcd.setCursor(1, 0);
    lcd.write(byte(0));
    lcd.createChar(1, paddle17b);
    lcd.setCursor(1, 1);
    lcd.write(1);
  }
  else if (paddlePos1 == 8)
  {
    lcd.createChar(0, paddle18a);
    lcd.setCursor(1, 0);
    lcd.write(byte(0));
    lcd.createChar(1, paddle18b);
    lcd.setCursor(1, 1);
    lcd.write(1);
  }
  else if (paddlePos1 == 9)
  {
    lcd.createChar(0, paddle11);
    lcd.setCursor(1, 1);
    lcd.write(byte(0));
  }
  else if (paddlePos1 == 10)
  {
    lcd.createChar(0, paddle12);
    lcd.setCursor(1, 1);
    lcd.write(byte(0));
  }
  else if (paddlePos1 == 11)
  {
    lcd.createChar(0, paddle13);
    lcd.setCursor(1, 1);
    lcd.write(byte(0));
  }
  else if (paddlePos1 == 12)
  {
    lcd.createChar(0, paddle14);
    lcd.setCursor(1, 1);
    lcd.write(byte(0));
  }
  else if (paddlePos1 == 13)
  {
    lcd.createChar(0, paddle15);
    lcd.setCursor(1, 1);
    lcd.write(byte(0));
  }
  else if (paddlePos1 == 14)
  {
    lcd.createChar(0, paddle16);
    lcd.setCursor(1, 1);
    lcd.write(byte(0));
  }
}

void displayPaddle2()
{
  if (paddlePos2 == 1)
  {
    lcd.createChar(2, paddle21);
    lcd.setCursor(14, 0);
    lcd.write(2);
  }
  else if (paddlePos2 == 2)
  {
    lcd.createChar(2, paddle22);
    lcd.setCursor(14, 0);
    lcd.write(2);
  }
  else if (paddlePos2 == 3)
  {
    lcd.createChar(2, paddle23);
    lcd.setCursor(14, 0);
    lcd.write(2);
  }
  else if (paddlePos2 == 4)
  {
    lcd.createChar(2, paddle24);
    lcd.setCursor(14, 0);
    lcd.write(2);
  }
  else if (paddlePos2 == 5)
  {
    lcd.createChar(2, paddle25);
    lcd.setCursor(14, 0);
    lcd.write(2);
  }
  else if (paddlePos2 == 6)
  {
    lcd.createChar(2, paddle26);
    lcd.setCursor(14, 0);
    lcd.write(2);
  }
  else if (paddlePos2 == 7)
  {
    lcd.createChar(2, paddle27a);
    lcd.setCursor(14, 0);
    lcd.write(2);
    lcd.createChar(3, paddle27b);
    lcd.setCursor(14, 1);
    lcd.write(3);
  }
  else if (paddlePos2 == 8)
  {
    lcd.createChar(2, paddle28a);
    lcd.setCursor(14, 0);
    lcd.write(2);
    lcd.createChar(3, paddle28b);
    lcd.setCursor(14, 1);
    lcd.write(3);
  }
  else if (paddlePos2 == 9)
  {
    lcd.createChar(2, paddle21);
    lcd.setCursor(14, 1);
    lcd.write(2);
  }
  else if (paddlePos2 == 10)
  {
    lcd.createChar(2, paddle22);
    lcd.setCursor(14, 1);
    lcd.write(2);
  }
  else if (paddlePos2 == 11)
  {
    lcd.createChar(2, paddle23);
    lcd.setCursor(14, 1);
    lcd.write(2);
  }
  else if (paddlePos2 == 12)
  {
    lcd.createChar(2, paddle24);
    lcd.setCursor(14, 1);
    lcd.write(2);
  }
  else if (paddlePos2 == 13)
  {
    lcd.createChar(2, paddle25);
    lcd.setCursor(14, 1);
    lcd.write(2);
  }
  else if (paddlePos2 == 14)
  {
    lcd.createChar(2, paddle26);
    lcd.setCursor(14, 1);
    lcd.write(2);
  }
}

/*====================================================================*/



//FUNCTIONS THAT UPDATE THE BALL POSITION


void ballPosUpdate()
{
  //calculating angle with respect to Y axis
  theta = clacTheta(yDir, xDir);
  //finding new X and Y co-ordinates of the ball
  int newX = sin(theta) * totalspeed + (float)ballPos[0];
  int newY = cos(theta) * totalspeed + (float)ballPos[1];


  // to make sure that ball doesnt cross the boundary of the game
  newX = constrain(newX, 10, 69);
  newY = constrain(newY, 0, 15);

  // Update the total speed between the ball and it's last deflection (bounce) point within the game
  totalspeed = totalspeed + speed;

  /* to check whether the ball has hit a top/bottom boundary and make the
    necessary changes in X or Y direction
  */

  checkBottomTopCollision(newX, newY);
  checkleftPaddleCollision(newX, newY);
  checkRightPaddleCollision(newX, newY);

  //Condition to Check if any player won the game
  if (pointsP2 == 5 || pointsP1 == 5)
  {
    if (pointsP1 > pointsP2)
    {
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Player2 Wins!");
      delay(1500);
    }
    else
    {
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Player1 Wins!");
      delay(1500);
    }

    reset();
  }

  delay(5);

  //Update the ball position on the game board
  if (gameStarted == true) {
    drawBall(newX, newY);
  }
}

//FUNCTION THAT CALCULATES THE ANGLE W.R.T Y AXIS
float clacTheta(int yDir, int xDir)
{
  if (yDir == 1 && xDir == -1)
  {
    theta = 90 - angle;
  }
  else if (yDir == -1 && xDir == -1)
  {
    theta = 90 + angle;
  }
  else if (yDir == -1 && xDir == 1)
  {
    theta = 270 - angle;
  }
  else
  {
    theta = 270 + angle;
  }


  // Convert degrees to radians
  theta = theta * PI / 180.0;
  return theta;
}

//FUNCTION THAT CHECKS IF THE BALL HAS COLLIDED WITH TOP OR BOTTOM
void checkBottomTopCollision(int newX, int newY)
{
  if (newY == 0)      // Hit the Bottom
  {
    // tone(buzzer, 3000, 10);
    yDir = 1;
    totalspeed = speed;
    ballPos[0] = newX;
    ballPos[1] = newY + 1;
  }
  else if (newY == 15)  // Hit the Top
  {
    //tone(buzzer, 3000, 10);
    yDir = -1;
    totalspeed = speed;
    ballPos[0] = newX;
    ballPos[1] = newY - 1;
  }
}

//FUNCTION THAT CHECKS IF THE BALL HAS COLLIDED WITH LEFT PADDLE
void checkleftPaddleCollision(int newX, int newY)
{
  if (newX == 10)      // Hit the Wall
  {
    if ((newY == 0) && (paddlePos1 == 14 || paddlePos1 == 13)) {
      BallHitsPaddle1(newX, newY);
    }
    else if ((newY == 1) && (paddlePos1 == 14 || paddlePos1 == 13)) {
      BallHitsPaddle1(newX, newY);
    }
    else if ((newY == 2) && (paddlePos1 == 14 || paddlePos1 == 13 || paddlePos1 == 12)) {
      BallHitsPaddle1(newX, newY);
    }
    else if ((newY == 3) && (paddlePos1 == 13 || paddlePos1 == 12 || paddlePos1 == 11)) {
      BallHitsPaddle1(newX, newY);
    }
    else if ((newY == 4) && (paddlePos1 == 12 || paddlePos1 == 11 || paddlePos1 == 10)) {
      BallHitsPaddle1(newX, newY);
    }
    else if ((newY == 5) && (paddlePos1 == 11 || paddlePos1 == 10 || paddlePos1 == 9)) {
      BallHitsPaddle1(newX, newY);
    }
    else if ((newY == 6) && (paddlePos1 == 11 || paddlePos1 == 10 || paddlePos1 == 9 || paddlePos1 == 8)) {
      BallHitsPaddle1(newX, newY);
    }
    else if ((newY == 7) && (paddlePos1 == 10 || paddlePos1 == 9 || paddlePos1 == 8 || paddlePos1 == 7)) {
      BallHitsPaddle1(newX, newY);
    }
    else if ((newY == 8) && (paddlePos1 == 9 || paddlePos1 == 8 || paddlePos1 == 7 || paddlePos1 == 6)) {
      BallHitsPaddle1(newX, newY);
    }
    else if ((newY == 9) && (paddlePos1 == 8 || paddlePos1 == 7 || paddlePos1 == 6 || paddlePos1 == 5)) {
      BallHitsPaddle1(newX, newY);
    }
    else if ((newY == 10) && (paddlePos1 == 6 || paddlePos1 == 5 || paddlePos1 == 4)) {
      BallHitsPaddle1(newX, newY);
    }
    else if ((newY == 11) && (paddlePos1 == 5 || paddlePos1 == 4 || paddlePos1 == 3)) {
      BallHitsPaddle1(newX, newY);
    }
    else if ((newY == 12) && (paddlePos1 == 4 || paddlePos1 == 3 || paddlePos1 == 2)) {
      BallHitsPaddle1(newX, newY);
    }
    else if ((newY == 13) && (paddlePos1 == 3 || paddlePos1 == 2 || paddlePos1 == 1)) {
      BallHitsPaddle1(newX, newY);
    }
    else if ((newY == 14) && (paddlePos1 == 2 || paddlePos1 == 1)) {
      BallHitsPaddle1(newX, newY);
    }
    else if ((newY == 15) && (paddlePos1 == 2 || paddlePos1 == 1)) {
      BallHitsPaddle1(newX, newY);
    }
    else {
      pointsP1++;
      //Reset the ball's position and control variables for the next point

      ballPos[0] = 39;
      ballPos[1] = 7;

      paddlePos1 = 6;
      paddlePos2 = 9;
      totalspeed = speed;
      delay(90);
      drawGameboard();
      delay(90);
      // Determine a new game angle for this point
      findInitAngle();
    }
  }
}

//FUNCTION THAT MAKES NECESSARY UPDATES IN THE DIRECTION OF THE BALL
void BallHitsPaddle1(int X, int Y)
{

  xDir = -1;
  totalspeed = speed;
  ballPos[0] = X + 1;
  ballPos[1] = Y;
}

//FUNCTION THAT CHECKS IF THE BALL HAS COLLIDED WITH RIGHT PADDLE
void checkRightPaddleCollision(int newX, int newY)
{
  if (newX == 69)
  {
    if ((newY == 0) && (paddlePos2 == 14)) {
      BallHitsPaddle2(newX, newY);
    }
    else if ((newY == 1) && (paddlePos2 == 14 || paddlePos2 == 13)) {
      BallHitsPaddle2(newX, newY);
    }
    else if ((newY == 2) && (paddlePos2 == 14 || paddlePos2 == 13 || paddlePos2 == 12)) {
      BallHitsPaddle2(newX, newY);
    }
    else if ((newY == 3) && (paddlePos2 == 13 || paddlePos2 == 12 || paddlePos2 == 11)) {
      BallHitsPaddle2(newX, newY);
    }
    else if ((newY == 4) && (paddlePos2 == 12 || paddlePos2 == 11 || paddlePos2 == 10)) {
      BallHitsPaddle2(newX, newY);
    }
    else if ((newY == 5) && (paddlePos2 == 11 || paddlePos2 == 10 || paddlePos2 == 9)) {
      BallHitsPaddle2(newX, newY);
    }
    else if ((newY == 6) && (paddlePos2 == 11 || paddlePos2 == 10 || paddlePos2 == 9 || paddlePos2 == 8)) {
      BallHitsPaddle2(newX, newY);
    }
    else if ((newY == 7) && (paddlePos2 == 10 || paddlePos2 == 9 || paddlePos2 == 8 || paddlePos2 == 7)) {
      BallHitsPaddle2(newX, newY);
    }
    else if ((newY == 8) && (paddlePos2 == 9 || paddlePos2 == 8 || paddlePos2 == 7 || paddlePos2 == 6)) {
      BallHitsPaddle2(newX, newY);
    }
    else if ((newY == 9) && (paddlePos2 == 8 || paddlePos2 == 7 || paddlePos2 == 6 || paddlePos2 == 5)) {
      BallHitsPaddle2(newX, newY);
    }
    else if ((newY == 10) && (paddlePos2 == 6 || paddlePos2 == 5 || paddlePos2 == 4)) {
      BallHitsPaddle2(newX, newY);
    }
    else if ((newY == 11) && (paddlePos2 == 5 || paddlePos2 == 4 || paddlePos2 == 3)) {
      BallHitsPaddle2(newX, newY);
    }
    else if ((newY == 12) && (paddlePos2 == 4 || paddlePos2 == 3 || paddlePos2 == 2)) {
      BallHitsPaddle2(newX, newY);
    }
    else if ((newY == 13) && (paddlePos2 == 3 || paddlePos2 == 2 || paddlePos2 == 1)) {
      BallHitsPaddle2(newX, newY);
    }
    else if ((newY == 14) && (paddlePos2 == 2 || paddlePos2 == 1)) {
      BallHitsPaddle2(newX, newY);
    }
    else if ((newY == 15) && (paddlePos2 == 2 || paddlePos2 == 1)) {
      BallHitsPaddle2(newX, newY);
    }
    else {
      pointsP2++;
      delay(5);
      ballPos[0] = 39;
      ballPos[1] = 7;
      paddlePos1 = 6;
      paddlePos2 = 9;
      totalspeed = speed;
      delay(90);
      drawGameboard();
      // Determine a new game angle for this point
      delay(90);
      findInitAngle();
    }
  }
}

//FUNCTION THAT MAKES NECESSARY UPDATES IN THE DIRECTION OF THE BALL
void BallHitsPaddle2(int X, int Y)
{

  xDir = 1;
  totalspeed = speed;
  ballPos[0] = X - 1;
  ballPos[1] = Y;
}

//FUNCTION THAT REFRESHES THE POSITION OF THE BALL
void drawBall(int X, int Y)
{
  int LCDcol;
  int LCDrow;
  // Determine which row of the LCD the ball's character is on
  if (Y <= 7) {
    LCDrow = 1;
  }
  else {
    LCDrow = 0;
  }

  //Determine which column of the LCD the ball's character is on
  if (X <= 4) {
    LCDcol = 0;
  }
  else if (X <= 9) {
    LCDcol = 1;
  }
  else if (X <= 14) {
    LCDcol = 2;
  }
  else if (X <= 19) {
    LCDcol = 3;
  }
  else if (X <= 24) {
    LCDcol = 4;
  }
  else if (X <= 29) {
    LCDcol = 5;
  }
  else if (X <= 34) {
    LCDcol = 6;
  }
  else if (X <= 39) {
    LCDcol = 7;
  }
  else if (X <= 44) {
    LCDcol = 8;
  }
  else if (X <= 49) {
    LCDcol = 9;
  }
  else if (X <= 54) {
    LCDcol = 10;
  }
  else if (X <= 59) {
    LCDcol = 11;
  }
  else if (X <= 64) {
    LCDcol = 12;
  }
  else if (X <= 69) {
    LCDcol = 13;
  }
  else if (X <= 74) {
    LCDcol = 14;
  }
  else {
    LCDcol = 15;
  }

  // Clear the LCD of the previous ball (but not the Wall and the player's paddle)
  lcd.setCursor(1, 0);
  // 14 empty characters printed inbetween the Wall and the player's paddle
  lcd.print("              ");
  lcd.setCursor(1, 1);
  lcd.print("              ");
  delay(5);
  // Determine the ball's position (single pixel) within a single LCD character (i.e. within the 8x5 pixels that make up a single LCD character)
  int dx = X - 5 * LCDcol;    // Column position within the LCD character
  int dy;

  // Row position within the LCD character
  if (Y == 0 || Y == 8) {
    dy = 0;
  }
  else if (Y == 1 || Y == 9) {
    dy = 1;
  }
  else if (Y == 2 || Y == 10) {
    dy = 2;
  }
  else if (Y == 3 || Y == 11) {
    dy = 3;
  }
  else if (Y == 4 || Y == 12) {
    dy = 4;
  }
  else if (Y == 5 || Y == 13) {
    dy = 5;
  }
  else if (Y == 6 || Y == 14) {
    dy = 6;
  }
  else if (Y == 7 || Y == 15) {
    dy = 7;
  }

  // Row position within the LCD character
  if (Y == 0 || Y == 8) {
    dy = 0;
  }
  else if (Y == 1 || Y == 9) {
    dy = 1;
  }
  else if (Y == 2 || Y == 10) {
    dy = 2;
  }
  else if (Y == 3 || Y == 11) {
    dy = 3;
  }
  else if (Y == 4 || Y == 12) {
    dy = 4;
  }
  else if (Y == 5 || Y == 13) {
    dy = 5;
  }
  else if (Y == 6 || Y == 14) {
    dy = 6;
  }
  else if (Y == 7 || Y == 15) {
    dy = 7;
  }

  // Select the correct custom character, of the 40 possible, and display it (in it's correct LCD column, row position)
  // Alternate assigning the custom characters to LCD custom character bytes 1,2,3,4,5
  if (dx == 0 && dy == 0) {
    lcd.createChar(4, ball70);
    lcd.setCursor(LCDcol, LCDrow);
    lcd.write(4);
  }
  else if (dx == 1 && dy == 0) {
    lcd.createChar(4, ball71);
    lcd.setCursor(LCDcol, LCDrow);
    lcd.write(4);
  }
  else if (dx == 2 && dy == 0) {
    lcd.createChar(4, ball72);
    lcd.setCursor(LCDcol, LCDrow);
    lcd.write(4);
  }
  else if (dx == 3 && dy == 0) {
    lcd.createChar(4, ball73);
    lcd.setCursor(LCDcol, LCDrow);
    lcd.write(4);
  }
  else if (dx == 4 && dy == 0) {
    lcd.createChar(4, ball74);
    lcd.setCursor(LCDcol, LCDrow);
    lcd.write(4);
  }

  else if (dx == 0 && dy == 1) {
    lcd.createChar(4, ball60);
    lcd.setCursor(LCDcol, LCDrow);
    lcd.write(4);
  }
  else if (dx == 1 && dy == 1) {
    lcd.createChar(4, ball61);
    lcd.setCursor(LCDcol, LCDrow);
    lcd.write(4);
  }
  else if (dx == 2 && dy == 1) {
    lcd.createChar(4, ball62);
    lcd.setCursor(LCDcol, LCDrow);
    lcd.write(4);
  }
  else if (dx == 3 && dy == 1) {
    lcd.createChar(4, ball63);
    lcd.setCursor(LCDcol, LCDrow);
    lcd.write(4);
  }
  else if (dx == 4 && dy == 1) {
    lcd.createChar(4, ball64);
    lcd.setCursor(LCDcol, LCDrow);
    lcd.write(4);
  }

  else if (dx == 0 && dy == 2) {
    lcd.createChar(4, ball50);
    lcd.setCursor(LCDcol, LCDrow);
    lcd.write(4);
  }
  else if (dx == 1 && dy == 2) {
    lcd.createChar(4, ball51);
    lcd.setCursor(LCDcol, LCDrow);
    lcd.write(4);
  }
  else if (dx == 2 && dy == 2) {
    lcd.createChar(4, ball52);
    lcd.setCursor(LCDcol, LCDrow);
    lcd.write(4);
  }
  else if (dx == 3 && dy == 2) {
    lcd.createChar(4, ball53);
    lcd.setCursor(LCDcol, LCDrow);
    lcd.write(4);
  }
  else if (dx == 4 && dy == 2) {
    lcd.createChar(4, ball54);
    lcd.setCursor(LCDcol, LCDrow);
    lcd.write(4);
  }

  else if (dx == 0 && dy == 3) {
    lcd.createChar(4, ball40);
    lcd.setCursor(LCDcol, LCDrow);
    lcd.write(4);
  }
  else if (dx == 1 && dy == 3) {
    lcd.createChar(4, ball41);
    lcd.setCursor(LCDcol, LCDrow);
    lcd.write(4);
  }
  else if (dx == 2 && dy == 3) {
    lcd.createChar(4, ball42);
    lcd.setCursor(LCDcol, LCDrow);
    lcd.write(4);
  }
  else if (dx == 3 && dy == 3) {
    lcd.createChar(4, ball43);
    lcd.setCursor(LCDcol, LCDrow);
    lcd.write(4);
  }
  else if (dx == 4 && dy == 3) {
    lcd.createChar(4, ball44);
    lcd.setCursor(LCDcol, LCDrow);
    lcd.write(4);
  }

  else if (dx == 0 && dy == 4) {
    lcd.createChar(4, ball30);
    lcd.setCursor(LCDcol, LCDrow);
    lcd.write(4);
  }
  else if (dx == 1 && dy == 4) {
    lcd.createChar(4, ball31);
    lcd.setCursor(LCDcol, LCDrow);
    lcd.write(4);
  }
  else if (dx == 2 && dy == 4) {
    lcd.createChar(4, ball32);
    lcd.setCursor(LCDcol, LCDrow);
    lcd.write(4);
  }
  else if (dx == 3 && dy == 4) {
    lcd.createChar(4, ball33);
    lcd.setCursor(LCDcol, LCDrow);
    lcd.write(4);
  }
  else if (dx == 4 && dy == 4) {
    lcd.createChar(4, ball34);
    lcd.setCursor(LCDcol, LCDrow);
    lcd.write(4);
  }

  else if (dx == 0 && dy == 5) {
    lcd.createChar(4, ball20);
    lcd.setCursor(LCDcol, LCDrow);
    lcd.write(4);
  }
  else if (dx == 1 && dy == 5) {
    lcd.createChar(4, ball21);
    lcd.setCursor(LCDcol, LCDrow);
    lcd.write(4);
  }
  else if (dx == 2 && dy == 5) {
    lcd.createChar(4, ball22);
    lcd.setCursor(LCDcol, LCDrow);
    lcd.write(4);
  }
  else if (dx == 3 && dy == 5) {
    lcd.createChar(4, ball23);
    lcd.setCursor(LCDcol, LCDrow);
    lcd.write(4);
  }
  else if (dx == 4 && dy == 5) {
    lcd.createChar(4, ball24);
    lcd.setCursor(LCDcol, LCDrow);
    lcd.write(4);
  }

  else if (dx == 0 && dy == 6) {
    lcd.createChar(4, ball10);
    lcd.setCursor(LCDcol, LCDrow);
    lcd.write(4);
  }
  else if (dx == 1 && dy == 6) {
    lcd.createChar(4, ball11);
    lcd.setCursor(LCDcol, LCDrow);
    lcd.write(4);
  }
  else if (dx == 2 && dy == 6) {
    lcd.createChar(4, ball12);
    lcd.setCursor(LCDcol, LCDrow);
    lcd.write(4);
  }
  else if (dx == 3 && dy == 6) {
    lcd.createChar(4, ball13);
    lcd.setCursor(LCDcol, LCDrow);
    lcd.write(4);
  }
  else if (dx == 4 && dy == 6) {
    lcd.createChar(4, ball14);
    lcd.setCursor(LCDcol, LCDrow);
    lcd.write(4);
  }

  else if (dx == 0 && dy == 7) {
    lcd.createChar(4, ball00);
    lcd.setCursor(LCDcol, LCDrow);
    lcd.write(4);
  }
  else if (dx == 1 && dy == 7) {
    lcd.createChar(4, ball01);
    lcd.setCursor(LCDcol, LCDrow);
    lcd.write(4);
  }
  else if (dx == 2 && dy == 7) {
    lcd.createChar(4, ball02);
    lcd.setCursor(LCDcol, LCDrow);
    lcd.write(4);
  }
  else if (dx == 3 && dy == 7) {
    lcd.createChar(4, ball03);
    lcd.setCursor(LCDcol, LCDrow);
    lcd.write(4);
  }
  else if (dx == 4 && dy == 7) {
    lcd.createChar(4, ball04);
    lcd.setCursor(LCDcol, LCDrow);
    lcd.write(4);
  }
  delay(5);
}

//RESET THE GAME TO ORIGINAL PARAMETERS
void reset()
{
  pointsP2 = 0;
  pointsP1 = 0;
  setup();
}


/*====================================================================*/


//INITIALIZATION FUNCTIONS

void findInitAngle()
{
  // randomly get a 1 or -1 for the up/down and left/right directions and the ball's angle of travel from the X axis
  yDir = 0;
  xDir = 0;
  while (yDir == 0) {
    yDir = random(-1, 2);
  }
  while (xDir == 0) {
    xDir = random(-1, 2);
  }
  // Randomly grab a game angle between Min and Max values

  angle = random(MinAngle, MaxAngle + 1);
}

//  DISPLAYS THE INITIAL SCREEN
void drawGameboard()
{
  lcd.clear();

  //write the scores
  lcd.setCursor(0, 0);
  lcd.print(pointsP2);
  lcd.setCursor(15, 0);
  lcd.print(pointsP1);

  // Draw the pong paddles
  lcd.createChar(0, paddle16);
  lcd.setCursor(1, 0);
  lcd.write(byte(0));

  lcd.createChar(4, ball04);
  lcd.setCursor(7, 1);
  lcd.write(4);
  delay(250);

  lcd.createChar(7, paddle21);
  lcd.setCursor(14, 1);
  lcd.write(7);

  // Draw the ball in it's default starting position
}

// DISPLAYS THE STARTUP SCREEN
void startupScreen()
{
  lcd.clear();
  lcd.setCursor(0, 0);           //intro
  lcd.print("   PING PONG");
  lcd.setCursor(0, 1);
  lcd.print("      Game  ");
  delay(1500);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("       By  ");
  lcd.setCursor(0, 1);
  lcd.print("     Hitesh ");
  delay(1500);
  lcd.clear();
  while (gameStarted == false)
  {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Player1 Ready?");
    lcd.setCursor(0, 1);
    lcd.print("press the Up key");
    checkP1();
    delay(10);
    lcd.clear();
    delay(300);
    lcd.setCursor(0, 0);
    lcd.print("Player2 Ready?");
    lcd.setCursor(0, 1);
    lcd.print("press the Up key");
    checkP2();
    lcd.clear();
    gameStarted = true;
  }


  lcd.setCursor(0, 0);
  lcd.print("Game starts in:");
  delay(1000);
  lcd.clear();
  lcd.setCursor(7, 0);
  for (int i = 3; i > 0; i--)
  {
    lcd.setCursor(7, 0);
    lcd.print(i);
    delay(1000);
    lcd.clear();
  }
}

void checkP1()
{
  while (1) {
    char button = customKeypad.getKey();
    if (button == 'A' || button == 'B') {
      return;
    }
  }
}

void checkP2()
{
  while (1) {
    char button = customKeypad.getKey();
    if (button == 'C' || button == 'D') {
      return;
    }
  }
}





