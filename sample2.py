from cs50 import get_int, get_string
from slot import Slot

def main():
    x = get_string("Your name: ")
    y = get_int("Your ID: ")
    details = Slot(x,y)
    details.print()
    details.changeName(get_string("change name: "))
    details.changeID(get_int("change id: "))
    details.print()


if __name__ == "__main__":
    main()