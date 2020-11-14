#include <iostream>
#include <cmath>

using namespace std;
//functions--------------------------------------
// void sayHi(string name, int age){
//     cout << "Hello " << name << " you are " << age << endl;
// }

//return statement--------------------------------------
// double cube(double num){
//     double result = num * num * num;
//     return result;
// }
//more if statement--------------------------------------
    // int getMax(int num1, int num2, int num3){
    //     int result;
    //     if(num1 >= num2 && num1 >= num3){
    //         result = num1;
    //     } else if(num2 >= num1 && num2 >= num3){
    //         result = num2;
    //     }else {
    //         result = num3;
    //     }
    //     return result;
    // }

int main()
{
    // sayHi("Mike", 60);
    // sayHi("Tim", 12);
    // sayHi("Jeff", 34);

    // double answer = cube(5.0);
    // cout << answer;

//if statement--------------------------------------
    // bool isMale = true;
    // bool isTall = false;
    // if(isMale && isTall){
    //     cout << "You are a tall male";
    // } else if (isMale && !isTall){
    //     cout << "You are a short male";
    // } else if(!isMale && isTall){
    //     cout << "You are tall but not male";
    // }else {
    //     cout << "You are not male and not tall";
    // }

//more if statements--------------------------------------
    // cout << getMax(200,200,10);

//better calculator--------------------------------------
int num1, num2;
char op;
cout << "Enter first number: ";
cin >> num1;
cout << "Enter operator: ";
cin >> op;
cout << "Enter second number: ";
cin >> num2;
int result;
if (op == '+'){
    result = num1 + num2;
}else if (op == '-'){
    result = num1 - num2;
}else if (op == '*'){
    result = num1 * num2;
} else if (op == '/'){
    result = num1 / num2;
} else {
    cout << "Invalid operator";
}
cout << "Answer is : " << result;


   return 0;
}
