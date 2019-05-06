from cs50 import get_int

def main():
    while True:
        i = get_int("Positive value: ")
        if i > 0:
            break
    print(i)

if __name__ == "__main__":
    main()