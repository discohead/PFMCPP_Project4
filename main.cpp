/*
 Project 4 - Part 1 / 9
 video: Chapter 2 Part 7
 Returning Values tasks 

 Create a branch named Part1
 
 1) write 3 UDTs named FloatType, DoubleType, IntType.
 
 2) give each UDT the following member functions:
        add( lhs, rhs );
        subtract( lhs, rhs );
        multiply( lhs, rhs );
        divide( lhs, rhs );
 
 3) make them return the correct primitive type. e.g. if you're implementing the FloatType::add function, your implementation would start like this:
        float FloatType::add( float lhs, float rhs )
 
 4) declare a few instances of each class in main() and call the member functions with the appropriate arguments.
        FloatType ft;
        auto result = ft.add(3.2f, 23.f );
 
 5) print out those results using std::cout:
        std::cout "result of ft.add(): " << result << std::endl;
 
 6) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Send me the the link to your repl.it in a DM on Slack

 Wait for my code review.
 */
#include <iostream>
#include <stdexcept>
struct FloatType
{
    float add(float lsh, float rhs);
    float subtract(float lhs, float rhs);
    float multiply(float lhs, float rhs);
    float divide(float lhs, float rhs);
};

float FloatType::add(float lhs, float rhs)
{
    return lhs + rhs;
}

float FloatType::subtract(float lhs, float rhs)
{
    return lhs - rhs;
}

float FloatType::multiply(float lhs, float rhs)
{
    return lhs * rhs;
}

float FloatType::divide(float lhs, float rhs)
{
    if (rhs == 0.f)
    {
        std::cout << "Warning: Floating point division by zero" << std::endl;
    }
    return lhs / rhs;
}

struct DoubleType
{
    double add(double lhs, double rhs);
    double subtract(double lhs, double rhs);
    double multiply(double lhs, double rhs);
    double divide(double lhs, double rhs);
};

double DoubleType::add(double lhs, double rhs)
{
    return lhs + rhs;
}

double DoubleType::subtract(double lhs, double rhs)
{
    return lhs - rhs;
}

double DoubleType::multiply(double lhs, double rhs)
{
    return lhs * rhs;
}

double DoubleType::divide(double lhs, double rhs)
{
    if (rhs == 0.)
    {
        std::cout << "Warning: Floating point division by zero" << std::endl;
    }
    return lhs / rhs;
}

struct IntType
{
    int add(int lhs, int rhs);
    int subtract(int lhs, int rhs);
    int multiply(int lhs, int rhs);
    int divide(int lhs, int rhs);
};

int IntType::add(int lhs, int rhs)
{
    return lhs + rhs;
}

int IntType::subtract(int lhs, int rhs)
{
    return lhs - rhs;
}

int IntType::multiply(int lhs, int rhs)
{
    return lhs * rhs;
}

int IntType::divide(int lhs, int rhs)
{
    if (rhs == 0) 
    {
        throw std::runtime_error("Error: divide by zero");
    } else
    {
        return lhs / rhs;
    }
}

int main()
{
    FloatType ft;
    auto fsum = ft.add(3.2f, 23.f );
    std::cout << "result of ft.add(): " << fsum << std::endl;
    auto fdiff = ft.subtract(1.24f, 5.43f);
    std::cout << "result of ft.subtract(): " << fdiff << std::endl;
    auto fprod = ft.multiply(5.f, 4.6f);
    std::cout << "result of ft.multiply(): " << fprod << std::endl;
    auto fdiv = ft.divide(25.32f, 0.f);
    std::cout << "result of ft.divide(): " << fdiv << std::endl;

    DoubleType dt;
    auto dsum = dt.add(1.3, 5.2);
    std::cout << "result of dt.add(): " << dsum << std::endl;
    auto ddiff = dt.subtract(345.2, 53.3);
    std::cout << "result of dt.subrtract(): " << ddiff << std::endl;
    auto dprod = dt.multiply(234.24, 34.24);
    std::cout << "result of dt.multiply(): " << dprod << std::endl;
    auto ddiv = dt.divide(2.3, 53.2);
    std::cout << "result of dt.divide(): " << ddiv << std::endl;

    IntType it;
    auto isum = it.add(1, 3);
    std::cout << "result of it.add(): " << isum << std::endl;
    auto idiff = it.subtract(34, 42);
    std::cout << "result of it.subtract(): " << idiff << std::endl;
    auto iprod = it.multiply(56, 3);
    std::cout << "result of it.multiply(): " << iprod << std::endl;
    try
    {
        auto idiv = it.divide(4, 2);
        std::cout << "result of it.divide(): " << idiv << std::endl;
    }
    catch(std::runtime_error& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    

    std::cout << "good to go!" << std::endl;
}
