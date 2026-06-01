#include <iostream>
#include <string>
#include "Lab5_sect1.hpp"

// zu Task1

void Task1(){

    int x = 10;
    int y = 20;
    std::cout << x << "y = " << y << '\n';
    swapValue(x, y);
    std::cout << x << "y = " << y << '\n';
    double pi = 3.14;
    double q = 9.9;
    std::cout << "pi = " << pi << ", q = " << q << '\n';
    swapValue(pi, q);
    std::cout << "pi = " << pi << ", q = " << q << '\n';
    std::string s1 = "alpha", s2 = "beta";
    swapValue(s1, s2);
    std::cout << "s1 = " << s1 << ", s2 = " << s2 << '\n';
}
// anstatt drei Funktionen, müssen wir hier nur eine generische Funktion schreiben, die automatisch passende Versionen erstellt


// zu Task 2

void Task2(){

    int iArray[] = {12, 15, 18, 21};
    double dArray[] = {1.2, 1.5, 1.8, 2.1};
    char cArray[] = {'A', 'B', 'C'};
    printFrame(iArray); 
    printFrame(dArray); 
    printFrame(cArray); 
}


// zu Task 3

void Task3(){

    int iArr[] = {8, 2, 19, 74};
    double dArr[] = {8.4, 2.3, 19.2, 74.1};
    std::cout << returnValue(iArr, 4) << '\n';  
    std::cout << returnValue(dArr, 4) << '\n';  
}


// zu Task 4

void Task4(){

    printTwoValues("Channel", std::string("motor_temp"), "Priority", 2);
    printTwoValues("Voltage", 12, "Status", std::string("OK"));
}

// main 

int main(){
  
    Task1();
    Task2();
    Task3();
    Task4();
    return 0;
}