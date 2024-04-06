//
// Created by ...
//
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ostream>
#include <ctime>
#include <iomanip>
#include <vector>
using namespace std;
int my_mult ( int a_1 , int b_1) {
    return a_1*b_1 ;
}
float my_formula ( float a_2 , float b_2, float c_2 ) {
    return ( b_2- a_2)/ c_2 ;
}
void fun ( float a_3) {
    cout << " circumference: " << 2*3.14*a_3 << endl;
    cout << " area: " << pow(a_3,2)*3.14 << endl ;
}
void fun ( float a_4, float b_4) {
    cout << "a perimeter: " << 2*(a_4+b_4)<< endl;
    cout << " an area of rectangle: " <<a_4 * b_4 << endl ;
}
void swap_int ( int a_5, int b_5) {
    a_5 = a_5 ^ b_5 ;
    b_5 = a_5 ^ b_5 ;
    a_5 = a_5 ^ b_5 ;
}
int factorial ( int a_6 , int fact) {
    for ( int i ; i= 0 ; i ++) {
        fact *=i ;
    }
}
int gcd(int num1, int num2) {
    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    return num1;
}
int find_max ( float num8_1, float num8_2 , float num8_3 ) {
    return (num8_1 > num8_2) ? ((num8_1 > num8_3) ? num8_1 : num8_3) : ((num8_2 >
                                                                         num8_3) ? num8_2 : num8_3);
}
int find_min ( float num8_1, float num8_2 , float num8_3 ) {
    return ( num8_2> num8_3)? ((num8_1>num8_3)? num8_3:num8_1): ((num8_2>num8_1)?
                                                                 num8_1: num8_2);
}
int Factorial(int num = 1) {
    int result = 1;
    for (int i = 2; i <= num; ++i) {
        result *= i;
    }
    return result;
}
double sum(double num1, double num2) {
    return num1 + num2;
}
double subtract(double num1, double num2) {
    return num1 - num2;
}
double product(double num1, double num2) {
    return num1 * num2;
}
double division(double num1, double num2) {
    if (num2 != 0)
        return num1 / num2;
    else {
        cout << "Error! Division by zero is not allowed." << endl;
        return 0.0; // Return 0 if division by zero is attempted
    }
}
int getTriangularNumber(int num10) {
    return (num10 * (num10 + 1)) / 2;
}
void displayEven(int number11) {
    cout << "Even digits in " << number11 << ": ";
    while (number11 > 0) {
        int digit = number11 % 10;
        if (digit % 2 == 0) {
            cout << digit << " ";
        }
        number11 /= 10;
    }
    cout << endl;
}
int cubeOfDigits(int number_12) {
    int sum = 0;
    while (number_12 > 0) {
        int digit = number_12 % 10;
        sum += digit * digit * digit;
        number_12 /= 10;
    }
    return sum;
}
void isArmstrong(int sum, int number_12) {
    if (sum == number_12) {
        cout << number_12 << " is an Armstrong integer." << endl;
    } else {
        cout << number_12 << " is not an Armstrong integer." << endl;
    }
}
int numberOfDaysInFebruary(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 29;
    } else {
        return 28;
    }
}
double futureInvestmentValue(double investmentAmount, double monthlyInterestRate, int
years) {
    return investmentAmount * pow(1 + monthlyInterestRate, years * 12);
}
void printASCII(char ch1, char ch2, int numberPerLine) {
    int count = 0;
    for (char ch = ch1; ch <= ch2; ++ch) {
        cout << static_cast<int>(ch) << " ";
        ++count;
        if (count % numberPerLine == 0) {
            cout << endl;
        }
    }
    if (count % numberPerLine != 0) {
        cout << endl;
    }
}
void printMatrix(int n) {
    srand(time(0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << rand() % 1001 << " "; // Generate a random number in the range 0 to 1000
        }
        cout << endl;
    }
}
bool isPalindrome(int number) {
    int originalNumber = number;
    int reversedNumber = 0;
    while (number > 0) {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }
    return originalNumber == reversedNumber;
}
// Function to display the first 50 even palindrome numbers
void displayEvenPalindromes() {
    int count = 0;
    for (int num = 2; count < 50; num += 2) {
        if (isPalindrome(num)) {
            cout << setw(6) << num << " ";
            count++;
            if (count % 5 == 0) {
                cout << endl;
            }
        }
    }
}
double seriesA(int n) {
    double result = 0.0;
    for (int i = 1; i <= n; ++i) {
        result += 1.0 / i;
    }
    return result;
}
double seriesB(int n) {
    double result = 0.0;
    for (int i = 0; i <= n; ++i) {
        result += pow(2, i);
    }
    return result;
}
double seriesC(int n) {
    double result = 0.0;
    for (int i = 1; i <= n; ++i) {
        result += 1.0 / pow(3, i);
    }
    return result;
}
double seriesD(int n) {
    double result = 0.0;
    for (int i = 0; i <= n; ++i) {
        result += (2 * i + 1) / pow(3.14, i);
    }
    return result;
}
void displaySortedNumbers(double a, double b, double c) {
    if (a > b) {
        swap(a, b);
    }
    if (a > c) {
        swap(a, c);
    }
    if (b > c) {
        swap(b, c);
    }
    cout << "Numbers in increasing order: " << a << ", " << b << ", " << c << endl;
}
string convertMillis(long millis) {
    long seconds = millis / 1000;
    long hours = seconds / 3600;
    long remainingSeconds = seconds % 3600;
    long minutes = remainingSeconds / 60;
    long remainingSecondsAfterMinutes = remainingSeconds % 60;
    return to_string(hours) + ":" + to_string(minutes) + ":" +
           to_string(remainingSecondsAfterMinutes);
}
void displayCurrentDateTime() {
    // Get the current time
    time_t now = time(0);
    tm* current_time = localtime(&now);
    // Extract date and time components
    int year = 1900 + current_time->tm_year;
    int month = 1 + current_time->tm_mon;
    int day = current_time->tm_mday;
    int hour = current_time->tm_hour;
    int minute = current_time->tm_min;
    int second = current_time->tm_sec;
    // Display the current date and time
    cout << "Current date and time is ";
    cout << month << "/" << day << "/" << year << " ";
    cout << hour << ":" << minute << ":" << second << endl;
}
double area(int n, double side) {
    double pi = 3.14159265358979323846;
    return (n * pow(side, 2)) / (4 * tan(pi / n));
}
int rollDice() {
    return rand() % 6 + 1;
}
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}
// Function to reverse a number
int reverse(int n) {
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}
bool isPrime_1(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}
int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main() {
    cout << "PROBLEM 1\n";
    int x , y ;
    cin >> x>> y ;
    cout << my_mult ( x,y) << endl;
    cout << "PROBLEM 2\n";
    float v1 , v2, t ;
    cin >> v1>> v2 >> t ;
    cout << my_formula ( v1, v2, t) << endl;
    cout << "PROBLEM 3\n";
    float r ;
    cin >> r ;
    fun(r );
    cout << "PROBLEM 4\n";
    float a ,b ;
    cin >> a >> b;
    fun ( a ,b) ;
    cout << "PROBLEM 5\n";
    int num1, num2 ;
    cin >> num1 ;
    cin >> num2 ;
    cout << " Before swapping: " << endl;
    cout << " num1: " << num1 << " num2: " << num2 << endl;
    swap_int ( num1, num2) ;
    cout << " After swapping: " << endl;
    cout << " num1: "<< num2 << " num2: " << num1 << endl ;
    cout << "PROBLEM 6\n";
    int number6;
    cout << "Enter a number: ";
    cin >> number6;
    int fact = Factorial(number6);
    cout << "Factorial of " << number6 << " is: " << fact << endl;
    cout << "PROBLEM 7\n";
    int number1, number2;
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;
    int result = gcd(number1, number2);
    cout << "GCD of " << number1 << " and " << number2 << " is: " << result << endl;
    cout << "PROBLEM 8\n";
    float num1_8, num2_8,num3_8 ;
    cout << " Enter three numbers: ";
    cin >> num1_8>> num2_8>> num3_8 ;
    cout << "The maximum number is: " <<find_max(num1_8,num2_8,num3_8);
    cout << " The minimum number is: "<<find_min( num1_8,num2_8,num3_8);
    cout << endl;
    cout << "PROBLEM 9\n";
    double num1_9, num2_9;
    cout << "Enter the first number: ";
    cin >> num1_9;
    cout << "Enter the second number: ";
    cin >> num2_9;
    cout << "Sum: " << sum(num1_9, num2_9) << endl;
    cout << "Subtraction: " << subtract(num1_9, num2_9) << endl;
    cout << "Product: " << product(num1_9, num2_9) << endl;
    cout << "Division: " << division(num1_9, num2_9) << endl;
    cout <<"PROBLEM 10\n";
    const int numbers_per_line = 5;
    const int total_numbers = 75;
    cout << "First 75 triangular numbers with 5 numbers on each line:" << endl;
    for (int i = 1; i <= total_numbers; ++i) {
        int triangular_number = getTriangularNumber(i);
        cout << triangular_number << " ";
        if (i % numbers_per_line == 0)
            cout << endl;
    }
    cout << "PROBLEM 11\n";
    int num11_1;
    cout << "Enter an integer: ";
    cin >> num11_1;
    displayEven(num11_1);
    cout << "PROBLEM 12\n";
    int num12_2;
    cout << "Enter an integer: ";
    cin >> num12_2;
    int sum = cubeOfDigits(num12_2);
    isArmstrong(sum, num12_2);
    cout << "PROBLEM 13\n";
    cout << "Number of days in February for years 1985 to 1983:" << endl;
    for (int year = 1985; year >= 1983; --year) {
        cout << "Year " << year << ": " << numberOfDaysInFebruary(year) << " days"
             << endl;
    }
    cout << "PROBLEM 14\n";
    double investmentAmount, annualInterestRate;
    int years;
    cout << "Enter investment amount: ";
    cin >> investmentAmount;
    cout << "Enter annual interest rate (%): ";
    cin >> annualInterestRate;
    double monthlyInterestRate = annualInterestRate / 100 / 12;
    cout << "Years\tFuture Value" << endl;
    for (int i = 1; i <= 30; ++i) {
        double futureValue = futureInvestmentValue(investmentAmount,
                                                   monthlyInterestRate, i);
        cout << i << "\t$" << fixed << setprecision(2) << futureValue << endl;
    }
    cout << "PROBLEM 15\n";
    cout << "ASCII values of characters from 'a' to 'm' with 6 characters per line:    " << endl;
    printASCII('a', 'm', 6);
    cout << "PROBLEM 16\n";
    int n;
    cout << "Enter the size of the matrix (n): ";
    cin >> n;
    cout << "Matrix of size " << n << "x" << n << " with elements in the range 0 to 1000:" << endl;
    printMatrix(n);
    cout << "PROBLEM 17\n";
    cout << "First 50 even palindrome numbers:" << endl;
    displayEvenPalindromes();
    cout << "PROBLEM 18\n";
    int n_17 = 10; // For example, calculating series up to the 10th term
    cout << "Series A sum up to " << n_17 << " terms: " << seriesA(n) << endl;
    cout << "Series B sum up to " << n_17 << " terms: " << seriesB(n) << endl;
    cout << "Series C sum up to " << n_17 << " terms: " << seriesC(n) << endl;
    cout << "Series D sum up to " << n_17 << " terms: " << seriesD(n) << endl;
    cout << "PROBLEM 19\n";
    double num19_1, num19_2, num19_3;
    cout << "Enter three numbers: ";
    cin >> num19_1 >> num19_2 >> num19_3;
    displaySortedNumbers(num19_1, num19_2, num19_3);
    cout << "PROBLEM 20\n";
    long milliseconds;
    cout << "Enter milliseconds: ";
    cin >> milliseconds;
    string time = convertMillis(milliseconds);
    cout << "Converted time: " << time << endl;
    cout << "PROBLEM 21\n";
    displayCurrentDateTime();
    cout << "PROBLEM 22\n";
    int n22;
    double side;
    cout << "Enter the number of sides of the regular polygon: ";
    cin >> n22;
    cout << "Enter the length of a side of the regular polygon: ";
    cin >> side;
    double polygonArea = area(n22, side);
    cout << "The area of the regular polygon is: " << polygonArea << endl;
    cout << "PROBLEM 23\n";
    srand(0);
    int point;
    bool gameEnd = false;
    while (!gameEnd) {
        int dice1 = rollDice();
        int dice2 = rollDice();
        int sum = dice1 + dice2;
        cout << "You rolled " << dice1 << " + " << dice2 << " = " << sum;
        if (sum == 7 || sum == 11) {
            cout << " You win!" << endl;
            gameEnd = true;
        } else if (sum == 2 || sum == 3 || sum == 12) {
            cout << " You lose!" << endl;
            gameEnd = true;
        } else {
            if (point == 0) {
                cout << " point is " << sum << endl;
                point = sum;
            } else {
                if (sum == point) {
                    cout << " You win!" << endl;
                    gameEnd = true;
                } else if (sum == 7) {
                    cout << " You lose!" << endl;
                    gameEnd = true;
                }
            }
        }
    }
    cout << "PROBLEM 24\n";
    vector<int> emirps;
    int count = 0;
    int num = 13; // Starting from 13 as 2, 3, 5, 7 are not emirps
    while (count < 100) {
        if (isPrime(num)) {
            int reversed = reverse(num);
            if (num != reversed && isPrime(reversed)) {
                emirps.push_back(num);
                count++;
            }
        }
        num++;
    }
    for (int i = 0; i < emirps.size(); ++i) {
        cout << emirps[i] << " ";
        if ((i + 1) % 10 == 0)
            cout << endl;
    }
    cout << "PROBLEM 25\n";
    vector<int> additivePrimes;
    int count1 = 0;
    int num25 = 2;
    while (count1 < 25) {
        if (isPrime(num25)) {
            int digitSum = sumOfDigits(num25);
            if (isPrime_1(digitSum)) {
                additivePrimes.push_back(num25);
                count1++;
            }
        }
        num25++;
    }
    cout << "Prime Number\tSum of digits" << endl;
    for (int i = 0; i < additivePrimes.size(); ++i) {
        cout << additivePrimes[i] << "\t\t" << sumOfDigits(additivePrimes[i]) <<
             endl;
    }
    return 0;
}


