import os
import random

def clear():
    os.system("clear" or 'cls')
# clear = lambda: os system("clear")

print("""\n<<<<<<<<<<<<<<< WELCOME TO SCISSORS PAPER ROCK GAME >>>>>>>>>>>>>>>
\n\n         ••••••••••• DEVELOPED BY AMAN PRASAD ••••••••••••         
""")

def again():
       x = input("Would you like to play again? (y/n): ")
       if x == "y" or x == "Y":
           clear()
           SPR()
       elif x == "n" or "N":
           clear()
           print("Thank you for playing \U0001F618")
       else:
           print("Invalid input!  Please enter(y/n)..")
           again()
           
def SPR():
    n = 1
    comp_score = 0
    user_score = 0
    while n <= 3:
        comp_choice = random.choice(lst)
        print(f"\nROUND: {n}\n")
        user_choice = input("Press s for scissors, p for paper or r for rock: ")
        
        if user_choice == comp_choice:
            print("\nIt's a draw for this round..\n")
            n += 1
            print(f"\nYour score: {user_score}             Computer score: {comp_score}")
            print("-----------------------------------------------------------------")
        elif comp_choice == "s"  and user_choice == "p":
            print("\nHehe! His scissors cut your paper, 1 point to computer..\n")
            n += 1
            comp_score += 1
            print(f"Your score: {user_score}             Computer score: {comp_score}")
            print("-----------------------------------------------------------------")
        elif comp_choice == "p" and user_choice == "r":
            print("\nOops! His paper threw away your stone, 1 point to computer..\n")
            n += 1
            comp_score += 1
            print(f"Your score: {user_score}             Computer score: {comp_score}")
            print("-----------------------------------------------------------------")
        elif comp_choice == "r" and user_choice == "s":
            print("\nOops! His stone broke your scissors, 1 point to computer..\n")
            n += 1
            comp_score += 1
            print(f"Your score: {user_score}             Computer score: {comp_score}")
            print("-----------------------------------------------------------------")
        elif comp_choice == "s" and user_choice == "r":
            print("\nGreat! your stone broke his scissors, 1 point for you..\n")
            n += 1
            user_score += 1
            print(f"Your score: {user_score}             Computer score: {comp_score}")
            print("-----------------------------------------------------------------")
        elif comp_choice == "p" and user_choice == "s":
            print("\nCool! Your scissors cut his paper, 1 point for you..\n")
            n += 1
            user_score += 1
            print(f"Your score: {user_score}             Computer score: {comp_score}")
            print("-----------------------------------------------------------------")
        elif comp_choice == "r" and user_choice == "p":
            print("\nNice! Your paper threw away his stone, 1 point for you..\n")
            n += 1
            user_score += 1
            print(f"Your score: {user_score}             Computer score: {comp_score}")
            print("-----------------------------------------------------------------")
    print("\n            °°°°°°°°°°     GAME OVER     °°°°°°°°°°\n")
    if comp_score == user_score:
        print("It's a draw !!\n")
    elif comp_score > user_score:
        print("Computer won the match.. Better luck next time..\n")
    elif comp_score < user_score:
        print("Congratulations! You won this game..\n")
    again()        
       
lst = ["s", "p", "r"]    
SPR()