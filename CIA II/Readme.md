# Problem solving in C++

## Part B

### **Jump to**
<div style="display: flex;">
  <div>

  - [Question 5](#question-5)
  - [Question 10](#question-10)
  - [Question 15](#question-15)

  </div>

  <div>

  - [Question 20](#question-20)
  - [Question 25](#question-25)
  - [Question 30](#question-30)

  </div>
</div>


---
## Question 1
Write a C++ program to create a student examination system that prints the mark sheet of students. Input student name, marks in 6 subjects. The mark should be between 0 and 100.

  - If the average of marks is >= 80 then prints Grade 'A'.
  - If the average of marks is < 80 and >= 60 then prints Grade 'B'.
  - If the average of marks is < 60 and >= 40 then prints Grade 'C'.
  - else prints Grade 'D'.

### Answer
```cpp
#include <iostream>
using namespace std;

int main() {
  string name;
  cout << "Enter Student Name: ";
  cin >> name;

  float marks[6];
  float sum = 0, i = 0;

  cout << "Enter 6 subject marks: ";
  while (i < 6) {
    cin >> marks[i];
    // Check if mark is out of range [0, 100]
    if (0 > marks[i] || marks[i] > 100) {
      cout << "Invalid Input";
      continue;
    }
    sum += marks[i]; // add it to sum
    i++;
  }

  // take average
  float avg = sum / 6;

  // Print the grades
  cout << "Grade: ";
  if (avg >= 80) cout << 'A';
  else if (avg < 80 && avg >= 60) cout << 'B';
  else if (avg < 60 && avg >= 40) cout << 'C';
  else cout << 'D';
}
```
---

## Question 2
In a company an employee is paid as under:
  - If his basic salary is less than Rs. 1500, then HRA = 10% of basic salary and DA = 90% of basic salary.
  - If his salary is either equal to or above Rs. 1500, then HRA = Rs. 500 and DA = 98% of basic salary.
  - If the employee's salary is input through the keyboard write a C++ program to find his gross salary.

Also, Elucidate on the control structure used for the above program.

### Answer
```cpp
#include <iostream>
using namespace std;

int main() {
  float bs, da, hra;

  cout << "Enter Basic Salary: ";
  cin >> bs;

  if (bs < 1500) {
    hra = bs * 10 / 100;
    da = bs * 90 / 100;
  }

  else {
    hra = 500;
    da = bs * 98 / 100;
  }

  float gs = bs + hra + da;

  cout << "Basic Salary Rs. " << bs << endl;
  cout << "HRA Rs. " << hra << endl;
  cout << "DA Rs. " << da << endl;
  cout << "Gross salary Rs. " << gs << endl;
}
```
---

## Question 3
Explain a function in C++ that accepts a string as input and finds the maximum occurring character in the string Input.

### Answer
```cpp
#include <iostream>
using namespace std;

int main() {
  string str;
  cin >> str;

  int freq[26] = { 0 };
  int maxFreq = -1;
  char maxFreqChar;
  int len = str.size();

  for (int i = 0; i < len; i++)
    freq[str[i] - 'a']++;

  for (int i = 0; i < 26; i++) {
    if (maxFreq < freq[i]) {
      maxFreq = freq[i];
      maxFreqChar = (char)(i + 'a');
    }
  }

  // Output
  cout << maxFreqChar;
}
```

---
## Question 4
Write a program to print the following pattern.
```
7 6 5 4 3 2 1
7 6 5 4 3 2
7 6 5 4 3
7 6 5 4
7 6 5
7 6
7
```

### Answer
```cpp
#include <iostream>
using namespace std;

int main() {
  int rows = 7;

  for (int i = rows; i > 0; i--) {
    for (int j = 0; j < i; j++) {
      cout << rows - j << ' ';
    }
    cout << endl;
  }
}
```

---
## Question 5
A teacher wants to compute the average of 5 students in her class. Write a program to help her to find the average. Student marks should be given in decimal format and output value should be in the float with `two decimal places`.

### Answer
```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  float m1, m2, m3, m4, m5;
  cin >> m1 >> m2 >> m3 >> m4 >> m5;

  float sum = m1 + m2 + m3 + m4 + m5;
  float avg = sum / 5;

  cout << fixed << setprecision(2) << avg;
}
```

---
## Question 6
Write a program to print the sum of factors of 3 using `continue` statement. In the same program, analyze the output if `break` is used instead of `continue` statement. Justify the above concept using while do and do while loop

### Answer
```cpp
#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int num;
  cin >> num;

  int result = 0;
  for (int i = 2; i <= sqrt(num); i++) {
    // if 'i' is divisor of 'n'
    if (num % i == 0) {
      // if both divisors are same
      // then add it once else add both
      if (i == (num / i))
        result += i;
      else
        result += (i + num / i);
    }
  }

  // Add 1 and n to result as above loop
  // considers proper divisors greater than 1.
  int sum = result + num + 1;
  cout << sum;
}
```

---
## Question 7
Given an array with 'n' elements, delete an element at a particular position in the array and display the updated array. Assume that the maximum number of elements in the array is 20.

### Answer
```cpp
#include <iostream>
using namespace std;

int main() {
  int n, del_index;
  cin >> n;

  // Get the input array
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cin >> del_index;
  int arr2[n-1];

  // Process the output
  for (int i = 0, j = 0; i < n; i++) {
    if (i != del_index) {
      arr2[j++] = arr[i];
    }
  }

  // Print the modified arr
  for (int i = 0; i < n - 1; i++) {
    cout << arr2[i];
  }
}
```

---
## Question 8
Illustrate the above matrix multiplication in C++ program.

![Alt text](img_07.jpg)

### Answer
```cpp
#include <iostream>
using namespace std;

int main() {
  int n, m, p, q;
  cin >> n >> m >> p >> q;
  
  int matrix1[n][m], matrix2[p][q];

  // Getting matrix 1
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> matrix1[i][j];
    }
  }

  // Getting matrix 2
  for (int i = 0; i < p; i++) {
    for (int j = 0; j < q; j++) {
      cin >> matrix2[i][j];
    }
  }

  // Matrix Multiplication
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < q; j++) {
      int sum = 0;
      for (int k = 0; k < m; k++) {
        sum += matrix1[i][k] * matrix2[k][j];
      }
      cout << sum << ' ';
    }

    cout << endl;
  }
}
```

---
## Question 9
Write a program to change the given string `"good"` to uppercase without using string library functions.

### Answer
```cpp
#include <iostream>
using namespace std;

int main() {
  string str = "good";

  for (int i = 0; i < str.size(); i++) {
    if ('a' <= str[i] && str[i] <= 'z') {
      str[i] = str[i] - 32;
    }
  }

  cout << str;
}
```

---
## Question 10
Write a program to replace a character with a given character in a string.

### Answer
```cpp
#include <iostream>
using namespace std;

int main() {
  string str;
  char target, replacer;

  cin >> str >> target >> replacer;

  for (int i = 0; i < str.size(); i++) {
    if (str[i] == target) {
      str[i] = replacer;
    }
  }

  cout << str;
}
```

---
## Question 11
Write a program to find the maximum difference in an array using pointers.

### Answer
```cpp
#include <iostream>
using namespace std;

int main() {
  
}
```

---
## Question 12
Explain in detail about operator overloading, list its rules and types with examples.

### Answer
`Do it yourself`

---
## Question 13
Write a program to Print Fibonacci Series using recursion. Input number of terms for the series should be less than 20.

### Answer
```cpp
#include <iostream>
using namespace std;

void fibRec(int prev, int curr, int n) {
  if (n == 0) // Base condition
    return;

  cout << prev << ' ';
  fibRec(curr, prev + curr, n - 1);
}

int main() {
  int n;
  cout << "Enter no of series (n): ";
  cin >> n;

  fibRec(0, 1, n);
}
```

---
## Question 14
A person is eligible to vote if his/her age is greater than or equal to 18. Interpret a function to find out if he/she is eligible to vote or not.

### Answer
```cpp
#include <iostream>
using namespace std;

void isEligible(int age) {
  if (age >= 18) 
    cout << "Eligible";
  else
    cout << "Not Eligible";
}

int main() {
  int age;
  cout << "Enter your age: ";
  cin >> age;

  isEligible(age);
}
```

---
## Question 15
Write a C++ program to find the modulus of two numbers using pointers.

### Answer
```cpp
#include <iostream>
using namespace std;

int main() {
  int a, b;

  int *p1 = &a, *p2 = &b;
  cin >> *p1 >> *p2;

  int mod = *p1 % *p2;
  cout << mod;
}
```

---
## Question 16
Write a C++ program to articulate the fact that the string "Malayalam" if read on the reverse yields the same output.

### Answer
```cpp
#include <iostream>
using namespace std;

int main() {
  string str = "Malayalam";
  string rev = "";
  int size = str.size();

  for (int i = 0; i < size; i++) {
    rev = str[i] + rev;
  }

  // NOTE: Since we're reading the reversed string, so ignore the uppercase/lowercase
  cout << rev;
}
```

---
## Question 17
Describe the basic concepts of object oriented programming and bring out the advantages and features of OOPs

### Answer
`Do it yourself`

---
## Question 18
Compare the characteristics of procedure-oriented programming and object oriented programming

### Answer
`Do it yourself`

---
## Question 19
Discuss the importance of inheritance and give its types that are available in C++ with a neat diagram

### Answer
`Do it yourself`

---
## Question 20
Write a C++ program to declare a class 'Account' with data members as acc no, name and balance. Accept data for eight accounts and display details of accounts having balance less than 10,000.

### Answer
```cpp
#include <iostream>
using namespace std;

class Account {
public:
  int acc_no;
  string name;
  double balance;

  Account() {
    cout << "Enter Account No: ";
    cin >> acc_no;
  
    cout << "Enter Your Name: ";
    cin >> name;

    cout << "Enter Your Balance: ";
    cin >> balance;
  }

  void display() {
    cout << "\nAccount Details:\n";
    cout << "Account No: " << acc_no << endl;
    cout << "Name: " << name << endl;
    cout << "Balance: " << balance << endl;
  }
};

int main() {
  Account arr[8]; // Constructor will be called 8 times;

  for (int i = 0; i < 8; i++) {
    if (arr[i].balance < 10'000) {
      arr[i].display();
    }
  }
}
```

---
## Question 21
Explain the concept of polymorphism by an example in C++.

### Answer
`Do it yourself`

---
## Question 22
Write a C++ program to find Area of `square`, `rectangle`, `circle` and `triangle` using Function Overloading.

Similar to [Question 31](#question-31)

### Answer
```cpp
#include <iostream>
#include <math.h>
using namespace std;

// Square
int area(int s) {
  return s * s;
}

// Rectangle
int area(int l, int b) {
  return l * b;
}

// Circle
float area(float r) {
  return M_PI * r * r;
}

// Triangle
int area(int s1, int s2, int s3) {
  int s = (s1 + s2 + s3) / 2;
  return sqrt(s * ((s - s1) * (s - s2) * (s - s3)));
}

int main() {
  int s, l, b, s1, s2, s3;
  float r;

  cout << "Enter size of Square: ";
  cin >> s;
  cout << "Area of Square: " << area(s);

  cout << "Enter length & breadth of Rectangle: ";
  cin >> l >> b;
  cout << "Area of Rectangle: " << area(l, b);

  cout << "Enter the radius of Circle: ";
  cin >> r;
  cout << "Area of Circle: " << area(r);

  cout << "Enter three sides of Triangle: ";
  cin >> s1 >> s2 >> s3;
  cout << "Area of Triangle: " << area(s1, s2, s3);
}
```

---
## Question 23
Create a class named `Input` with two data members - One string and One integer. In the `main` method, create an object for the class. Get the inputs from the user and print them.

### Answer
```cpp
#include <iostream>
using namespace std;

class Input {
private:
  string name;
  int age;

public:
  void read() {
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
  }

  void display() {
    cout << "Your name is " << name << " and you're " << age << " years old.";
  }
};

int main() {
  Input inp;
  inp.read();
  inp.display();
}
```

---
## Question 24
Calculate the volume of the box by implement the class named as `Box` with `length` as its private attribute. Create a constructor and assign the `length` as $0$ with member function to get the value of length as input.

### Answer
```cpp
#include <iostream>
using namespace std;

class Box {
private:
  int length;

public:
  Box() {
    length = 0;
  }

  void read() {
    cout << "Enter the length of the box: ";
    cin >> length;
  }

  void calculateVolume() {
    cout << length * length * length;
  }
};

int main() {
  Box box;
  box.read();
  box.calculateVolume();
}
```

---
## Question 25
Write a C++ program involving working with a single file. Use `ifstream` and `ofstream` classes to write and read the information to and from a file using operators:- `<<` and `>>`. Show how a file can be opened and closed.

### Answer
```cpp
#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ofstream file;
  string line;

  // Opening the file
  file.open("sample.txt");
  cout << "Enter file content:\n";

  // Writing in the file
  while (getline(cin, line)) {
    if (line == "") break;
    file << line << '\n';
  }

  // Closing the file
  file.close();

  ifstream ifile;

  // Opening the file to read
  ifile.open("sample.txt");
  cout << "\nFile content:\n";

  // Reading the file
  while (ifile) {
    getline(ifile, line);
    cout << line << endl;
  }

  // Closing the file
  ifile.close();
}
```

---
## Question 26
Explain the various types of Constructors that are available in C++ with suitable examples.

### Answer
`Do it yourself`

---
## Question 27
Explain Virtual function concept with a program to find the distance between two objects

### Answer
```cpp
// code here
```

---
## Question 28
Write a C++ program to generate user-defined exceptions whenever the user inputs an ODD number.

### Answer
```cpp
#include <iostream>
using namespace std;

class InputIsOddException {};

int main() {
  int num;

  cout << "Enter a number: ";
  cin >> num;

  try {
    if (num % 2 == 1)
      throw InputIsOddException();
  }

  catch (InputIsOddException err) {
    cout << "Input is ODD";
  }
}
```

---
## Question 29
Explain how stack can be implemented by using STL.

### Answer
`Do it yourself`

---
## Question 30
Create a class DateTime with the following member functions.
  - Hours, Minutes, Date, Month, and Year - Integer
  - Define a member function init() - to get the class variables
  - Define a member function display() - to print the class variables.

In the main method, create an object for the class and call the necessary
methods.

### Answer
```cpp
#include <iostream>
using namespace std;

class DateTime {
private:
  int hours, minutes, date, month, year;
  bool isValid;

public:
  void init() {
    cin >> hours >> minutes >> date >> month >> year;

    isValid =
        (0 < hours && hours < 24) &&
        (0 < minutes && minutes < 60) &&
        (0 < date && date <= 31) &&
        (0 < month && month <= 12) &&
        (0 < year && year < 9999);
  }

  void display() {
    if (isValid) {
      cout << "Date:" << date << '-' << month << '-' << year << '\n';
      cout << "Time:" << hours << " hrs " << minutes << " mins\n";
      cout << "Total mins:" << hours * 60 + minutes;
    }

    else {
      cout << "Invalid";
    }
  }
};

int main() {
  DateTime dt;
  dt.init();
  dt.display();
}
```

---
## Question 31
Write a C++ program to find the Area of `square`, `rectangle`, `circle` using Function Overloading.

Similar to [Question 22](#question-22)

### Answer
```cpp
#include <iostream>
#include <math.h>
using namespace std;

// Square
int area(int s) {
  return s * s;
}

// Rectangle
int area(int l, int b) {
  return l * b;
}

// Circle
float area(float r) {
  return M_PI * r * r;
}

int main() {
  int s, l, b;
  float r;

  cout << "Enter size of Square: ";
  cin >> s;
  cout << "Area of Square: " << area(s);

  cout << "Enter length & breadth of Rectangle: ";
  cin >> l >> b;
  cout << "Area of Rectangle: " << area(l, b);

  cout << "Enter the radius of Circle: ";
  cin >> r;
  cout << "Area of Circle: " << area(r);
}
```

---
## Question 32
Write a C++ program to display names, register numbers and grades of $5$ students who have appeared in the examination. Declare a Class with name, register number and grade as data members and `get()` and `display()` as member functions.

Create an array of class objects. Read and display the contents of the array.

### Answer
```cpp
#include <iostream>
using namespace std;

int main() {

}
```

---
## Question 33
Create a class `Parent`. 'Parent' class should have a method `add` which prints the addition of $2$ integers. Create a class `Child1` which should be a child class of `Parent` class. Child class should have a method `sub` which prints subtraction of $2$ integers. Create a class `Child2` which should be a child class of `Child1` class. Child class should have a method `mul` which prints multiplication of $2$ integers.

Create an object for a `Child` class. Call the $3$ methods to `add`, `sub` and `mul` from child class object and display the result.

### Answer
```cpp
#include <iostream>
using namespace std;

class Parent {
public:
  int n1, n2;

  void read() {
    cin >> n1 >> n2;
  }

  void add() {
    cout << n1 + n2 << endl;
  }
};

class Child1 : public Parent {
public:
  void sub() {
    cout << n1 - n2 << endl;
  }
};

class Child2 : public Child1 {
public:
  void mul() {
    cout << n1 * n2 << endl;
  }
};

int main() {
  Child2 child;
  child.read();
  child.add();
  child.sub();
  child.mul();
}
```
