#include <iostream>
#include <cmath>

using namespace std;
//functions--------------------------------------
// void sayHi(string name, int age){
//     cout << "Hello " << name << " you are " << age << endl;
// }

//switch statement--------------------------------------
// string getDayOfWeek(int dayNum){
//     string dayName;
//     switch(dayNum){
//         case 0:
//         dayName = "Sunday";
//         break;
//         case 1:
//         dayName = "Monday";
//         break;
//         case 2:
//         dayName = "Tuesday";
//         break;
//         case 3:
//         dayName = "Wednesday";
//         break;
//         case 4:
//         dayName = "Thursday";
//         break;
//         case 5:
//         dayName = "Friday";
//         break;
//         case 6:
//         dayName = "Saturday";
//         break;
//         default:
//         dayName = "invalid day number";
//     }

//     return dayName;
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

//exponent function--------------------------------------
// int power(int baseNum, int powNum){
//     int result = 1;
//     for (int i = 0; i < powNum; i++)
//     {
//         result = result * baseNum;
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
// int num1, num2;
// char op;
// cout << "Enter first number: ";
// cin >> num1;
// cout << "Enter operator: ";
// cin >> op;
// cout << "Enter second number: ";
// cin >> num2;
// int result;
// if (op == '+'){
//     result = num1 + num2;
// }else if (op == '-'){
//     result = num1 - num2;
// }else if (op == '*'){
//     result = num1 * num2;
// } else if (op == '/'){
//     result = num1 / num2;
// } else {
//     cout << "Invalid operator";
// }
// cout << "Answer is : " << result;

//switch statement--------------------------------------
// cout << getDayOfWeek(6);
//while statement--------------------------------------
    // int index = 1;
    // while(index <= 5){
    //     cout << index << endl;
    //     index++;
    // }

    // int index = 6;
    // do{
    //     cout << index << endl;
    //     index++;
    // }while(index <= 5);
//guessing game--------------------------------------
    // int secretNum = 7;
    // int guess;
    // int guessCount = 0;
    // int guessLimit = 3;
    // bool outOfGuesses = false;
    // while(secretNum != guess && !outOfGuesses){
    //     if(guessCount < guessLimit){
    //         cout << "Enter guess number: ";
    //         cin >> guess;
    //         guessCount++;
    //     }else{
    //         outOfGuesses = true;
    //     }
        
    // }
    // if(outOfGuesses){
    //     cout << "You Lose";
    // } else {
    // cout << "You win!";
    // }
//for loop--------------------------------------
// int index = 1;
// while (index <= 5)
// {
//     cout << index << endl;
//     index++;
// }
// is equal to 
    // for(int i = 1;i <= 5;i++){
    //     cout << i << endl;
    // }

    // int nums[] = {1,2,5,7,3};
    // for(int i = 0;i < 5;i++){
    //         cout << nums[i] << endl;
    //     }
//exponent function--------------------------------------
    // cout << power(4,4);
//2d and nested for loops--------------------------------------
// int numberGrid[3][2] = {
//     {1,2},
//     {3,4},
//     {5,6}
// };
// for (int i = 0; i < 3; i++)
// {
//     for (int j = 0; j < 2; j++)
//     {
//         cout << numberGrid[i][j] << endl;
//     }
//     cout << endl;
// } 
//pointers-where in RAM it is stored-----------------------
int age = 19;
int *pAge = &age;
double gpa = 2.4;
string name = "Mike";
cout << "Age: " << &age << endl;
cout << "GPA: " << &gpa << endl;
cout << "Name: " << &name << endl;
cout << pAge;


   return 0;
}
