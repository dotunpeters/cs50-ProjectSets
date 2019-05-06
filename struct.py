from cs50 import get_string
from cs50 import get_int
from student import Student

def main():
    students = []
    n = get_int("How many input: ")
    for i in range (n):
        name = get_string("Student's name: ")
        dorm = get_string("Student's dorm: ")
        name = name.capitalize()
        dorm = dorm.capitalize()
        s = Student(name, dorm)
        students.append(s)
    for student in students:
        print(f"{student.name} is in {student.dorm}")

    """
    for student in students:
        if isupper():
            print(f"{student.name}")
        elif islower():
            print(student.name)
        else:
            break
    """


if __name__ == "__main__":
    main()