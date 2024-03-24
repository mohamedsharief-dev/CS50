while True:
    try:
        x = int(input("What's x ?; "))
    except ValueError:
        print("You Entered a Non Integer :(")
    else:
        break

print(f"x is {x}")
