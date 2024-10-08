class Dog:
    def __init__(self, name, age):  # Constructor method
        self.name = name  # Attribute
        self.age = age    # Attribute

    def bark(self):  # Method
        return f"{self.name} says Woof!"

# Create an object
my_dog = Dog("Buddy", 3)
print(my_dog.bark())  # Output: Buddy says Woof!
