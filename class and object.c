#include <stdio.h>

struct Rectangle {
    int length;
    int width;
};

// Function to calculate area
int area(struct Rectangle rect) {
    return rect.length * rect.width;
}

int sum(struct Rectangle rect2){
    return rect2.length+rect2.width;
}

int main() {
    struct Rectangle rect1; // Create an object of Rectangle
    rect1.length = 10;
    rect1.width = 5;

    printf("Area: %d\n", area(rect1)); // Accessing the method
    printf("sum:%d",sum(rect1));
    return 0;
}
