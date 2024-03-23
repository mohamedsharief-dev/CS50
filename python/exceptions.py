try:
    x = int(input("What's x ?"))
except ValueError:
    print("You entered a non int")
else:
    print(f"x is {x}")
