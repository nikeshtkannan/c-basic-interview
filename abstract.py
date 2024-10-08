from abc import ABC, abstractmethod

class Shape(ABC):  # Abstract class
    @abstractmethod
    def area(self):  # Abstract method
        pass

class Rectangle(Shape):
    def __init__(self, width, height):
        self.width = width
        self.height = height

    def area(self):  # Implementing the abstract method
        return self.width * self.height

# Using the Rectangle class
rect = Rectangle(4, 5)
print(f'Area: {rect.area()}')  # Output: Area: 20
#nothing bruh

