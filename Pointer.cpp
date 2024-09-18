#include <iostream>

using namespace std;

void increasePrice(double& price) {
    price *= 1.2;
}

int main() {
    
    // Un puntero es una variable que almacena la direccion de memoria de otra variable
    int number = 10;

    // * indica que la variable pointer almacenara una direccion de memoria
    int* pointer = &number;
    
    cout << "Direccion de memoria puntero: " << pointer << endl;

    // El operador de & de referencia, nos permite obtener la direccion de memoria
    cout << "Direccion de variable: " << &number << endl;

    cout << "Este es el valor del puntero: " << *pointer << endl;
    
    // Se permite realizar nuevas asignaciones una vez de referenciado al puntero
    *pointer = 20;

    cout << "Este es el nueo valor del number: " << number << endl;

    // Ejercicio
    int x = 10;
    int y = 20;

    // Se crea un puntero que almacena la direccion de memoria de x   
    int* ptr = &x;
    
    cout << "Direccion de memoria de x: " << ptr << endl;
    cout << "Valor de la direccion de memoria de x: " << *ptr << endl;

    // Se multiplica por 2 el valor de x
    *ptr *= 2;
    
    // Se asigna la direccion de memoria de y al puntero
    ptr = &y;
    
    // Se multiplica por 3 el valor de y
    *ptr *= 3;


    cout << *ptr << endl;


    // Punteros constantes y constantes
    
    // Mismo tipo de dato
    // Si se declara un puntero constante, no se puede modificar la direccion de memoria
    //const int x = 10;
    //int* ptr2 = &x;
    

    // 1. Los datos son constantes pero el puntero puede ser modificado

    const int x2 = 10;
    const int* ptr2 = &x2;

    cout << "Memory Addres Constant Pointer: " << ptr2 << endl;
    
    
    int y2 = 100;

    ptr = &y2;

    cout << "New Memory Addres Constant Pointer: " << ptr << endl;
    
    double price = 100;

    increasePrice(price);
    cout << "Price: " << price << endl;

    return 0;
    
}