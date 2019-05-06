from time import sleep

def main():
    i = int(input("start value: "))
    counter = int(input("how long: "))
    time = int(input("interval duration: "))
    x = 0
    while True:
        print(i)
        i *= 2
        x += 1
        sleep(time)
        if x == counter:
            print("Breaking", end="")
            sleep(2)
            print(".", end="")
            sleep(2)
            print(".", end="")
            sleep(2)
            print(".")
            break
    print("Finished")

if __name__ == "__main__":
    main()