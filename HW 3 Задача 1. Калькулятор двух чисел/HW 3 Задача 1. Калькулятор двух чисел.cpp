﻿// HW 3 Задача 1. Калькулятор двух чисел.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Calculator {
public:
    double num1;
    double num2;

    double add() {
        return num1 + num2;
    }

    double multiply() {
        return num1 * num2;
    }

    double subtract_1_2() {
        return num1 - num2;
    }

    double subtract_2_1() {
        return num2 - num1;
    }

    double divide_1_2() {
        return num1 / num2;
    }

    double divide_2_1() {
        return num2 / num1;
    }

    bool set_num1(double num1) {
        if (!(num1 == 0)) {
            this->num1 = num1;
            return  true;
        }
        else {
            return  false;
        }
    }

    bool set_num2(double num2) {
        if (!(num2 == 0)) {
            this->num2 = num2;
            return  true;
        }
        else {
            return  false;
        }
    }

};

int main()
{

    setlocale(LC_ALL, "ru");

    Calculator calculator;
    do {

        double num1 = 0;
        double num2 = 0;

        while(calculator.set_num1(num1) == false){
            std::cout << "Введите num1: ";
            std::cin >> num1;
            if (calculator.set_num1(num1) == false) {
                std::cout << "Неверный ввод!" << std::endl;
            }
        }
        
        while (calculator.set_num2(num2) == false) {
            std::cout << "Введите num2: ";
            std::cin >> num2;
            if (calculator.set_num2(num2) == false) {
                std::cout << "Неверный ввод!" << std::endl;
            }
        }

        std::cout << "num1 + num2 = " << calculator.add() <<  std::endl;
        std::cout << "num1 - num2 = " << calculator.subtract_1_2() << std::endl;
        std::cout << "num2 - num1 = " << calculator.subtract_2_1() << std::endl;
        std::cout << "num1 * num2 = " << calculator.multiply() << std::endl;
        std::cout << "num1 / num2 = " << calculator.divide_1_2() << std::endl;
        std::cout << "num2 / num1 = " << calculator.divide_2_1() << std::endl;
        
    } while(true);
}
