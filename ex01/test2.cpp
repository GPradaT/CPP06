#include <iostream>

class MyClass {
public:
    int value;

    // Constructor
    MyClass(int v = 0) : value(v) {}

    // Operador de asignación sobrecargado con retorno void
    void operator=(const MyClass &other) {
        if (this != &other) { // Autoasignación
            this->value = other.value;
        }
    }
};

int main() {
    MyClass a(10);
    MyClass b(20);

    b = a; // Usando el operador de asignación sobrecargado

    std::cout << "Valor de b después de asignar a: " << b.value << std::endl;

    return 0;
}
