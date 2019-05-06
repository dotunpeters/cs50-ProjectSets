class Slot:
    def __init__(self, name, id):
        self.name = name
        self.id = id

    def changeName(self, name):
        self.name = name

    def changeID(self, id):
        self.id = id

    def print(self):
        print(f"name = {self.name}. id = {self.id}")