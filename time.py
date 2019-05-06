from time import sleep
def main():
    i = 2
    while True:
        print(i)
        i = i**2
        sleep(1)

if __name__ == "__main__":
    main()