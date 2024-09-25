#include <iostream>

int main() {
    int a = 0, b = 0;

    std::cout << "\nEnter variable a (integer) \n" << std::endl;
    std::cin >> a;
    int *pa = &a;

    std::cout << "\nVariable a: address = "<< pa <<"\t value = "<< *pa << std::endl;

    std::cout << "\nEnter variable b (integer) \n" << std::endl;
    std::cin >> b;
    int *pb = &b;
    std::cout <<"\nVariable b: address = "<< pb <<"\t value = "<< *pb << "\n" << std::endl;

    for(int x = 0; x <= 15; x++) {
        pa = &a;
        pb = &b;
        a++;
        b = b*2;
        std::cout << "Variable a: address = "<< pa <<"\t value = "<< *pa <<"\t | \t" << "Variable b: address = "<< pb <<"\t value = "<< *pb << std::endl;
    }

}