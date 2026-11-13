#include <cmath>
#include <iostream>

int main() {
    double a = 0, b = 0, result = 0;
    int op = 0;
    std::cout << "First number: ";
    if (!(std::cin >> a)) { std::cerr << "Invalid input\n"; return 2; }
    std::cout << "Operation (1:+ 2:- 3:* 4:/ 5:pow): ";
    if (!(std::cin >> op)) { std::cerr << "Invalid input\n"; return 2; }
    std::cout << "Second number: ";
    if (!(std::cin >> b)) { std::cerr << "Invalid input\n"; return 2; }

    switch (op) {
    case 1: {
        result = a + b;
        break;
    }

    // Subtraction module
    case 2: {
        result = a - b;
        break;
    }

    // Multiplication module
    case 3: {
        result = a * b;
        break;
    }

    // Division module
    case 4: {
        if (b == 0) { std::cerr << "Division by zero\n"; return 2; } result = a / b;
        break;
    }

    case 5: { result = std::pow(a, b); break; }
    default:
        std::cerr << "Unknown operation\n";
        return 2;
    }
    if (!std::isfinite(result)) { std::cerr << "Non-finite result\n"; return 2; }
    std::cout << "Result = " << result << '\n';
    return 0;
}


