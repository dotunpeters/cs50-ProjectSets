def main():
    #prompt user for height value
    while True:
        height = int(input("Enter number of height: "))
        if height < 23:
            if height > 0:
                break

    #half pyramid iteration
    for i in range(height):
        a = (height - i)-1
        print(" " * a , end="")
        b = i+1
        print("#" * b , end="")
        print("  ", end="")
        print("#" * b , end="")
        print()


if __name__ == "__main__":
    main()