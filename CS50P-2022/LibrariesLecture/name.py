import sys

if len(sys.argv) < 2:
    print("Few Args")
else:
    for name in sys.argv[1:]:
        print("hello my name is, ", name)
