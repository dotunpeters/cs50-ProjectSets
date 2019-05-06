def main():
    print("for list press 1")
    print("for tuple press 2")
    print("for dictionary press 3")
    value = input()
    print(value)
    if (value == "1"):
        listq()
    elif (value == "2"):
        tupleq()
    elif value == "3":
        dic()

def listq():
    list = []
    list.append(5)
    list.append(4)
    list.insert(2,6)
    list[len(list):] = [4,8,9]
    for i in list:
        print(f"{i}, ", end="")
    print()

def dic():
    dictionary = { "Dotun": 28, "sola": 29, "solly": 30, 10:10 }
    dictionary[5] = 15
    for i,j in dictionary.items():
        print(f"{i}, {j}. ")

def tupleq():
    #a tuple is immutable. think of it as a list of constant values
    pizza = [ ("Dotun", 28), ("sola",29), ("solly", 30), (10,10),]
    for i,j in pizza:
        print(f"{i}, {j}")

if __name__ == "__main__":
    main()