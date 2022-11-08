#include "iostream"
#include "cmath"

using namespace std;


int main(){
    
    //    Problem 1.
    
    /*int i = 0;
     
     while (i <= 10) {
     cout << i << " ";
     i++;
     }
     
     //    Problem 2.
     
     int i = 0;
     int sum = 0;
     
     while (i <= 10) {
     cout << i << " " << endl;
     sum += i;
     
     i++;
     }
     
     cout << "\nThe sum is " << endl;
     
     //    Problem 3.
     
     int i = 0;
     
     while (i <= 100) {
     
     if(i%5!=0) {
     cout << i << " " << endl;
     }
     i++;
     }
     
     //    Problem 4.
     
     int number, divisor;
     bool isprime = true;
     
     cout << "Enter the number to check for prime or composite: ";
     cin >> number;
     
     if(number < 1){
     cout << "Needs to be greater than 1" << endl;
     } else if (number == 1){
     cout << "1 is neither Prime nor Composite" << endl;
     } else {
     for (divisor = 2; divisor <= (number/2); divisor++){
     if((number % divisor) == 0 ){
     isprime = false;
     break;
     }
     } if (isprime){
     cout << number << " is a Prime number" << endl;
     } else {
     cout << number << " is a Composite number" << endl;
     }
     
     }
     
     
     //    Problem 5.
     
     int num;
     int product;
     int sum = 0;
     
     cout << "Enter some number: ";
     cin >> num;
     
     for(int i = 1; i <= num; i++){
     product = i * i;
     cout << i << "*" << i << "=" << product << endl;
     sum += product;
     }
     
     cout << "The sum of " << num << " series is " << sum << endl;
     
     //    Problem 6.
     
     int num = 1;
     int max = -1;
     
     
     while (num != 0) {
     cout << "Enter some number(0 is stop): ";
     cin >> num;
     
     if (num > max) {
     max = num;
     }
     }
     cout << "MAX number is " << max << endl;
     
     //    Problem 7.
     
     int num1 = 0, num2 = 0;
     char operation = '0';
     char limit = 'q';
     
     while (operation != limit)
     {
     
     cout << "Operation Menu: 1.(+) 2.(-) 3.(*) 4.(/) or press q to leave: ";
     cin >> operation;
     
     if((operation <= '0') || ((operation > '5') && (operation != limit))){
     cout << "Choose the option only from the menu!" << endl;
     continue;
     }
     
     //        cout << "Choose any two numbers to calculate them: ";
     //        cin >> num1 >> num2;
     
     if(operation != limit)
     {
     cout << "Choose any two numbers to calculate them: ";
     cin >> num1 >> num2;
     
     switch (operation)
     {
     case '1':
     cout << num1 + num2 << endl;
     break;
     case '2':
     cout << num1 - num2 << endl;
     break;
     case '3':
     cout << num1 * num2 << endl;
     break;
     case '4':
     cout << num1 / num2 << endl;
     break;
     
     default:
     cout << "Choose the option only from the menu!" << endl;
     break;
     }
     }
     else
     {
     cout << "We always happy to work with you🤝" << endl;
     }
     
     }
    
    //Pattern 8.

    int pattern = 0;
    
    cout << "Enter patter: ";
    cin >> pattern;
        
        for(int i = 0; i < pattern; i++)
        {
            for(int j = 0; j < pattern; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    
    //Problem 9.
    
    int pattern = 0;
    
    cout << "Enter patter: ";
    cin >> pattern;
        
        for(int i = 0; i < pattern; i++)
        {
            for(int j = 0; j <= i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    
    //Problem 10.
    
    float num;
    float sum = 0;
    
    
    cout << "Enter number: ";
    cin >> num;
    
    for(int i = 1; i <= num; i++){
        sum += pow(i, -1);
    }
    cout << "The sum is " << sum << endl;*/
    

}
