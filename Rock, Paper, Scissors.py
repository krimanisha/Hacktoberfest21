print("Rock..Paper..Scissors..")
print("Type rock or paper or scissors")
player1 = input("player 1, Your move: ")
player2 = input("player 2, Your move: ")
if player1 == player2:
 print("It's a draw!")
elif player1 == "rock":
 if player2 == "scissors":
  print("player1 wins!")
 elif player2 == "paper":
  print("player2 wins!")
elif player1 == "paper":
 if player2 == "rock":
  print("player1 wins!")
 elif player2 == "scissors":
  print("player2 wins!")
elif player1 == "scissors":
 if player2 == "paper":
  print("player1 wins!")
 elif player2 == "rock":
  print("player2 wins!") 
else:
 print("Check spelling")