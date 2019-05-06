# matematical python samples
from cs50 import get_int, get_string
def main():
    area = 0
    lenght = 0
    width = 0
    lenght = get_int("input lenght:")
    width = get_int("input width: ")
    area = lenght * width
    print (f"area is {area}.")
    name = get_string("Whats your name?: ")
    name = name.isalpha()
    print (f"name is {name}.")
    print()
    list = [x for x in range(area)]
    print(f"lenght of list is {len(list)} | {abs(2.323/16)}")
    print()

    tuple = [
        ("Buhari", 2015),
        ("Jonathan", 2009),
        ("Yaradua", 2007),
        ("Obasanjo", 1999),
        ]

    input = get_int("How many input?:")
    for i in range(input):
        x = get_string("prez name: ")
        y = get_int("Year in office: ")
        z = x,y
        print(z)
        tuple.append(z)

    for prez, year in tuple:
        #print("{0} took office in {1}." .format(prez, year))
        print(tuple)
        print(f"in {year}, {prez} took office.")
        print()
        search()

def search():
    search = get_string("name to search for: ")
    for prez, year in tuple:
        if search == prez:
            print(f"in {year}, {prez} took office.")
            break
        elif not search == prez:
            break

if not search == prez:
    print("Not found!")
    search()

if __name__ == "__main__":
    main()
