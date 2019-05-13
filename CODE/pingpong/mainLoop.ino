

  void loop() {
    
    while(gameStarted==false)
    {
      //INTRO SCREEN
      startupScreen();  
    }

    //INITIAL GAMEBOARD
    drawGameboard();
    delay(1000);

    while(gameStarted==true)    
    {
    playerPaddleUpdate();// Update the player's paddle position     
    delay(40);            
    ballPosUpdate();// Update the ball's position                   
  }
 }




