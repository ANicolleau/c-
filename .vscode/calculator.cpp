#include <iostream>

using namespace std;

int addition(int firstNumber, int secondNumber){
    cout << "Addition" << endl;
    return firstNumber + secondNumber
}

int subtraction(int firstNumber, int secondNumber){
    cout << "Soustraction" << endl;
    return firstNumber - secondNumber
}

int multiplication(int firstNumber, int secondNumber){
    cout << "Multiplication" << endl;
    return firstNumber * secondNumber
}

int division(int firstNumber , int secondNumber){
    cout << "Division"
    return firstNumber / secondNumber
}

int isOdd(int number){
    bool is_odd = false
    if(number%2 ==1){
        is_odd = true
    }
    return is_odd
}

int fibonacci(int firstNumber, int secondNumber){
    cout << "Suite de Fibonacci." << endl
    bool continu = true
    do
    {
        cout << "Veuillez entrer les nombres à ajouter : " << endl
        int thirdNumber = firstNumber + secondNumber;
        &firstNumber = secondNumber;
        &secondNumber =  thirdNumber;
        cout << "Nombre 1 = "<< firstNumber << "Nombre 2" << secondNumber << endl
        cout << "Voulez vous continuer ? true pour continuer, false pour arrêter : ";
        cin << continu; 
    } while (continu == true);
    
}

int main(int argc, char *argv[]) {
	addition(2, 5)
}