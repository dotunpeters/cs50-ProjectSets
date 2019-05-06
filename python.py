def main():
    @decor
    def hello():
        print ("Hello, World!")

def decor(func):
    print("==========")
    func()
    print("==========")

def recur():
    value = int(input("Find factorial of: "))
    result = factorial(value)
    print(f"answer = {result}")

def factorial(x):
    try:
        if x == 1:
            return 1
        else:
            return x * factorial(x-1)
    except TypeError:
        print("Invalid")

if __name__ == "__main__":
    recur()
