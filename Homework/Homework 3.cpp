#include <iostream>

// Compile-time constant
constexpr double PI{ 3.141592653589793 };

// Constexpr functions (can be evaluated at compile time)
constexpr double areaSquare(double side)
{
    return side * side;
}

constexpr double areaRectangle(double length, double width)
{
    return length * width;
}

constexpr double areaCircle(double radius)
{
    return PI * radius * radius;
}

constexpr double areaCylinder(double radius, double height)
{
    return 2 * PI * radius * height + 2 * areaCircle(radius);
}

int main()
{
    int choice{};

    std::cout << "1. Calculate the area of a square.\n";
    std::cout << "2. Calculate the area of a rectangle.\n";
    std::cout << "3. Calculate the area of a circle.\n";
    std::cout << "4. Calculate the area of a cylinder.\n";
    std::cout << "Please enter your choice (1-4): ";
    std::cin >> choice;

    if (choice == 1)
    {
        double side{};
        std::cout << "Enter side: ";
        std::cin >> side;

        std::cout << "Total area: " << areaSquare(side) << "\n";
    }
    else if (choice == 2)
    {
        double length{}, width{};
        std::cout << "Enter length: ";
        std::cin >> length;
        std::cout << "Enter width: ";
        std::cin >> width;

        std::cout << "Total area: " << areaRectangle(length, width) << "\n";
    }
    else if (choice == 3)
    {
        double radius{};
        std::cout << "Enter radius: ";
        std::cin >> radius;

        std::cout << "Total area: " << areaCircle(radius) << "\n";
    }
    else if (choice == 4)
    {
        double radius{}, height{};
        std::cout << "Enter radius: ";
        std::cin >> radius;
        std::cout << "Enter height: ";
        std::cin >> height;

        std::cout << "Total area: " << areaCylinder(radius, height) << "\n";
    }
    else
    {
        std::cout << "Invalid choice.\n";
    }

    return 0;
}
