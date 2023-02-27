# Practicals Preparation Questions

## **Friend & Structure**

### 1. Create a structure student with the following members

- `Roll Number`
- `Five subject marks`
- `Average`
- `Grade`

Given the five subject marks, Calculate the **average** and **grade**.

### **GRADE CALCULATION:**

1. if $avg > 70$ the grade will be $1$
2. if _avg 50 to 70_ the grade will be $2$
3. if _avg_ is below $50$ the grade will be $3$

### **NOTE:**

`rn` - Roll Number,
`s` - Subjects,
`avg` - Average

### **Input Format:**

- The first input consists of the `n` value.
- The next `n` inputs are the roll numbers and five marks.

### **Output Format:**

The output prints the _roll number, five marks of the subject, average, and grade_ of the student.

Refer to the sample _input_ and _output_ for the formatting specifications.

### **Sample testcases:**

### Input 1

```
2
101
85 78 89 76 67
102
58 69 47 69 84
```

### Output 1

```
101 85 78 89 76 67 79 1
102 58 69 47 69 84 65 2
```

### Input 2

```
1
122
25 23 31 28 29
```

### Output 2

```
122 25 23 31 28 29 27 3
```

### Input 3

```
3
1
84 85 96 97 80
2
65 72 52 46 55
3
24 26 30 15 30
```

### Output 3

```
1 84 85 96 97 80 88 1
2 65 72 52 46 55 58 2
3 24 26 30 15 30 25 3
```

#### **Answer:**

```cpp
#include <iostream>
using namespace std;

// Create a structure student with the following members
struct Student
{
  int rollNo;
  int marks[5];
  int average;
  int grade;
};

void calcAvg(Student &s)
{
  int total = 0;
  for (int i = 0; i < 5; i++)
    total += s.marks[i];
  s.average = total / 5;
}

void calcGrade(Student &s)
{
  if (s.average > 70)
    s.grade = 1;
  else if (50 <= s.average && s.average <= 70)
    s.grade = 2;
  else if (s.average < 50)
    s.grade = 3;
}

void display(Student &s)
{
  cout << s.rollNo << ' ';

  for (int i = 0; i < 5; i++)
    cout << s.marks[i] << ' ';

  cout << s.average << ' ' << s.grade << endl;
}

int main()
{
  int noOfStudents;
  cin >> noOfStudents;

  struct Student students[noOfStudents];

  for (int i = 0; i < noOfStudents; i++)
  {
    cin >> students[i].rollNo;

    for (int j = 0; j < 5; j++)
    {
      cin >> students[i].marks[j];
    }

    calcAvg(students[i]);
    calcGrade(students[i]);
    display(students[i]);
  }
}
```

---

### 2. In an online grocery shop, customers want to purchase multiple items.

- Create a structure to store the
  - `Item code`
  - `Brand name`
  - `Item Name`
  - `Quantity`
  - `Price` of the product.
- Generate the _Bill number_ and
- Display the purchased _product_, _name_, _amount_ and _quantity_, and the _total bill amount_.

### **Function Specification:**

1. Write a function `MESSAGE()` to alert the customer with the product name if the rate of a product is more than $Rs.1000$.

2. Write a function `VOUCHER()` to generate the voucher for $Rs.200$ if the bill amount is greater than $Rs.10000$.

### **Input Format:**

- The first line of the input consists of the value of `n`.
- Next `n` inputs consist of the **item code**, **brand name**, **item name**, **quantity**, and **price** of the product (_per item_).

### **Output Format:**

- The output prints a message if the final amount of the product is greater than `1000`.
- The next line prints the bill amount (_Rounded off to two decimal places_).
- The last line prints whether the customer gets a voucher or not.

Refer to the sample _input_ and _output_ for the formatting specifications.

### **Sample testcases**

**Input 1**

```
2
101 philsbury flour 10 55
102 dettol soap 50 25
```

**Output 1**

```
soap costs more than 1000
1800
No voucher
```

**Input 2**

```
2
101 philsbury flour 10 55
102 dettol soap 500 25
```

**Output 2**

```
soap costs more than 1000
13050
You have won a voucher of Rs.200
```

**Input 3**

```
2
101 philsbury flour 10 55
102 dettol soap 10 25
```

**Output 3**

```
800
No voucher
```

**Input 4**

```
12
101 philsbury flour 10 55
102 dettol soap 10 25
103 ponds powder 10 99
104 lays chips 198 5
105 maaza drinks 18 50
106 nescafe coffee 12 75
107 boost powder 4 195
108 meera shampoo 498 2
109 silk shampoo 498 2
110 horlicks powder 5 195
111 sunrise coffee 19 50
112 gokul powder 20 45
```

**Output 4**

```
10177
You have won a voucher of Rs.200
```

#### **Answer:**

```cpp
#include <iostream>
using namespace std;

struct Item {
    string name, brand;
    int code, quantity, price;

    Item() {
        cin >> code >> brand >> name >> quantity >> price;
    }

    friend void Message(Item &item);
};

void Message(Item &item) {
    if (item.quantity * item.price >  1000) {
        cout << item.name << " costs more than 1000" << endl;
    }
}

void Voucher(int bill) {
    if (bill > 10'000)
        cout << "You have won a voucher of Rs.200";
    else
        cout << "No voucher";
}

int main() {
    int n;
    cin >> n;

    int amount = 0;

    while (n--) {
        Item item;
        Message(item);
        amount += item.quantity * item.price;
    }

    cout << amount << endl;
    Voucher(amount);
}
```

---
### 3. Create a structure named **DEPT** with the following fields:

- `name`
- `emp_id`
- `years_of_experience` and
- `basic_salary`.

Define an array of structures for **‘n’** employees and check the following constraints and print the results.

- Increase **10%** to the salaries of those employees who have worked **for 10 years or more**.
- Increase **5%** to the salaries of those employees who have experienced **between 5 to 9 years**.
- Increase **2%** to the salaries of those employees who have experienced **between 1 to 4 years.**

### **Input Format:**

- The first line of the input consists of the value of `n`.
- The next `n` inputs are the **name, id, years of experience, and salary** separated by a space.

### **Output Format:**

The output prints the _employee details_ with updated salaries.

Refer to the sample _input_ and _output_ for the formatting specifications.

### **Sample testcases**

**Input 1**

```
3
alice 101 10 40000
bob 102 8 35000
charles 103 4 25000
```

**Output 1**

```
Employee Name : alice
Employee Id : 101
years of experience : 10
salary : 44000

Employee Name : bob
Employee Id : 102
years of experience : 8
salary : 36750

Employee Name : charles
Employee Id : 103
years of experience : 4
salary : 25500
```

**Input 2**

```
4
alice 101 10 40000
bob 102 8 35000
charles 103 4 25000
david 104 12 50000
```

**Output 2**

```
Employee Name : alice
Employee Id : 101
years of experience : 10
salary : 44000

Employee Name : bob
Employee Id : 102
years of experience : 8
salary : 36750

Employee Name : charles
Employee Id : 103
years of experience : 4
salary : 25500

Employee Name : david
Employee Id : 104
years of experience : 12
salary : 55000
```

#### **Answer:**

```cpp
#include <iostream>
using namespace std;

struct DEPT {
    string name;
    int emp_id;
    int yoe; // years_of_experience
    int basic_salary;

    DEPT() {
        cin >> name >> emp_id >> yoe >> basic_salary;
    }

    friend void display(DEPT &dept);
    friend int calculateSalary(DEPT &dept);
};

int calculateSalary(DEPT &dept) {
    if (dept.yoe >= 10)
        return dept.basic_salary + dept.basic_salary * .1;

    if (5 <= dept.yoe && dept.yoe <= 9)
        return dept.basic_salary + dept.basic_salary * .05;

    if (1 <= dept.yoe && dept.yoe <= 4)
        return dept.basic_salary + dept.basic_salary * .02;

    return dept.basic_salary;
}

void display(DEPT &dept) {
    cout << "Employee Name : " << dept.name << endl;
    cout << "Employee Id : " << dept.emp_id << endl;
    cout << "years of experience : " << dept.yoe << endl;
    cout << "salary : " << calculateSalary(dept) << endl;
}

int main() {
    int n;
    cin >> n;

    DEPT dept[n]; // Initializes all the elements from the constructor automatically

    for (int i = 0; i < n; i++) {
        display(dept[i]);
        cout << endl;
    }
}
```

---
## **002 - Inheritance**
---

### 4. Write a program to implement the following logic using inheritance.

- Create a parent class and implement the fun method.
- In the method, get the individual digits of the entered number, store it in an array, and find their sum.
- Create the main class that inherits the parent class and call the fun method inside the parent function.

### **Example:**

**Input:**

```
1234
```

**Output:**

```
30
```

**Explanation:**

For 1234,

- the individual digits are **4, 3, 2, 1** and
- the final sum → (4+3)+(4+2)+(4+1)+(3+2)+(3+1)+(2+1) = 30.

### **Input Format:**

The input consists of an integer.

### **Output Format:**

The output prints the final sum.

### **Constraints:**

Integers only.

#### **Answer:**

```cpp
#include <iostream>
using namespace std;

class Parent {
public:
  int num;

  void fun() {
    int t = num, n = 0;
    int arr[num];

    while (t > 0) {
      arr[n++] = t % 10;
      t /= 10;
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        sum += arr[i] + arr[j];
      }
    }

    cout << sum;
  }
};

class Child : public Parent {
public:
  void read() {
    cin >> num;
  }
};

int main() {
  Child ch;
  ch.read();
  ch.fun();
}
```

---
## **Polymorphism**

### 5. Write a program to implement function overloading.

Ram is given _two_ or _three_ inputs as an `integer`.

- If he has _two_ integers, then **add** the two numbers.
- If he has _three_ inputs, then **multiply** the three numbers.

### **Function Header:**

#### **Answer:**

```cpp
public:
    void fun1(int a, int b, int c);
    void fun1(int a, int b);
```

### **Input Format:**

- First-line represents the number of elements($N$) followed by the elements separated by a single space.
- If the number of the elements exceeds $2$ or $3$, then display a message as **Invalid Input**.

### **Output Format:**

- Display the **sum**, if there are _two_ integers (or)
- Displays **product**, if there are _three_ integers.

### **Constraints:**

```
N > 0 and N < 4
```

### **Sample testcases**

**Input 1**

```
3 1 2 3
```

**Output 1**

```
6
```

**Input 2**

```
2 14 56
```

**Output 2**

```
70
```

**Input 3**

```
4 67 89 43 21
```

**Output 3**

```
Invalid Input
```

#### **Answer:**

```cpp
#include<iostream>
using namespace std;

int fun1(int a, int b, int c) {
    return a * b * c;
}

int fun1(int a, int b) {
    return a + b;
}

int main() {
    int n, a, b, c;
    cin >> n;

    if (0 >= n || n >= 4) {
        cout << "Invalid Input";
        return 0;
    }

    if (n == 2) {
        cin >> a >> b;
        cout << fun1(a, b);
    }

    else {
        cin >> a >> b >> c;
        cout << fun1(a, b, c);
    }
}
```

---
## **Abstract Class**

### 6. Write a program to find that whether the given number (x) is _even_ or _odd_.

- If it is even, then print the $cube(x)+square(x)$
- else print $cube(x)-square(x)$.

Create a _base class_ with a **virtual** function `void print()`.

Print the result by implementing this virtual function in the derived class.

### **Input Format:**

The input consists of an Integer.

### **Output Format:**

The output prints the result.

### **Sample testcases**

**Input 1**

```
5
```

**Output 1**

```
100
```

**Input 2**

```
4
```

**Output 2**

```
80
```

**Input 3**

```
5
```

**Output 3**

```
100
```

#### **Answer:**

```cpp
#include <iostream>
#include <cmath>
using namespace std;

class Base {
public:
    virtual void print(int x) = 0;
};

class Derived : public Base {
public:
    void print(int x) {
        int sq =  x * x;
        int cb = sq * x;
        cout << cb + pow(-1, x) * sq;
    }
};

int main() {
    int n;
    cin >> n;

    Derived d;
    d.print(n);
}
```

---
### 7. You have to enter four letters

- For each _uppercase_ letter, you will get **10 marks** and
- For each _lowercase_ letter, you will get **-5 marks**.

### Write a program to calculate the total score.

- Create a _base class_ with a **virtual** method `void game()`.
- Define this method in the _Derived class_ and calculate the **total score**.

### **Input Format:**

Input consists of _four characters_ separated by space.

### **Output Format:**

The output prints the _total score_.

### **Sample testcases**

**Input 1**

```
A F K R
```

**Output 1**

```
Score : 40
```

**Input 2**

```
A b D f
```

**Output 2**

```
Score : 10
```

#### **Answer:**

```cpp
#include <iostream>
#include <cstring>
using namespace std;

class Base {
public:
    virtual void game() = 0;
};

class Derived {
public:
    string s;

    Derived() {
        getline(cin, s);
    }

    void game() {
        int score = 0;

        for (char ch : s) {
            if (isupper(ch))
                score += 10;
            if (islower(ch))
                score -= 5;
        }

        cout << "Score : " << score;
    }
};

int main() {
    Derived d;
    d.game();
}
```

---
### 8. Write a Program to calculate the current bill.

- Create a _class currentBill_ with a **virtual** method `double amount()`.
- Create a \*class **Fan\*** that _extends currentBill_ with **watts** and **hours** as its public attributes and overrides the virtual function.
- Create a \*class **Light\*** that extends currentBill with watts and hours as its public attributes and overrides the virtual function.
- Create a \*class **TV\*** that extends currentBill with watts and hours as its public attributes and overrides the virtual function.

In the main method, prompt the user to enter the power _rate of the appliance_ and _the total hours_ used, then create the necessary objects and call the methods.

### **Input Format:**

- The first line consists of the power rating of the **Fan** and the total hours used separated by space.
- The second line consists of the power rating of **Light** and the total hours used separated by space.
- The third line consists of the power rating of the **TV** and the total hours used separated by space.

### **Output Format:**

The output prints the **bill amount**.

Refer to the sample _input_ and _output_ for the formatting specifications.

### **Sample testcases**

**Input 1**

```
40 123
55 200
33 400
```

**Output 1**

```
43.68
```

**Input 2**

```
60 300
54 360
30 720
```

**Output 2**

```
88.56
```

#### **Answer:**

```cpp
#include <iostream>
using namespace std;

class currentBill {
public:
    virtual double amount() = 0;
};

class Fan : public currentBill {
public:
    double watts, hours;

    Fan() {
        cin >> watts >> hours;
    }

    double amount() {
        return ((watts * hours) / 1000) * 1.5;
    }
};

class Light : public currentBill {
public:
    double watts, hours;

    Light() {
        cin >> watts >> hours;
    }

    double amount() {
        return ((watts * hours) / 1000) * 1.5;
    }
};

class TV : public currentBill {
public:
    double watts, hours;

    TV() {
        cin >> watts >> hours;
    }

    double amount() {
        return ((watts * hours) / 1000) * 1.5;
    }
};


int main() {
    Fan f;
    Light l;
    TV t;

    cout << f.amount() + l.amount() + t.amount();
}
```

---
## **Standard Template Library - STL**

### 9. Write a code that adds two arrays and stores it in a third array of the same size using the `transform()` function of **STL**.

### **Input Format:**

Three lines of input.

- First-line consists of a single integer which is the size of the three arrays.
- The second and third line consists of the elements of the 2 input arrays.

### **Output Format:**

- The output displays the contents of the third array in a single line separated by a space.
- If constraints are violated, prints `-1`.

### **Constraints:**

`0 < Size of the array <= 10`

### **Sample testcases**

**Input 1**

```
6
1 2 5 9 4 6
2 8 9 5 4 7
```

**Output 1**

```
3 10 14 14 8 13
```

**Input 2**

```
-8
```

**Output 2**

```
-1
```

#### **Answer:**

```cpp
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int size;
    cin >> size;

    if (0 >= size || size > 10) {
        cout << -1;
        return 0;
    }

    int arr1[size], arr2[size], res[size];

    for (int i = 0; i < size; i++)
        cin >> arr1[i];

    for (int i = 0; i < size; i++)
        cin >> arr2[i];

    transform(arr1, arr1+size, arr2, res, plus<int>());

    for (int i = 0; i < size; i++)
        cout << res[i] << ' ';
}
```

---
## **Exception Files**

### 10. You are required to compute the power of a number by implementing a calculator.

- Create a \*class **MyCalculator\*** which consists of a single method `long power(int, int)`. This method takes two integers, `n` and `p`, as parameters and finds `np`.
- If either `n` or `p` is _negative_, then the method must `throw` an **Exception** that says **"n and p should be non-negative"**.
- Also, if both `n` and `p` are _zero_, then the method must throw an _Exception_ that says "**n and p should not be zero"**.

Complete the function `power` in **class MyCalculator** and _return_ the appropriate result after the `power` operation or an appropriate exception as detailed above.

### **Input Format:**

- `n` value as an integer in the first line
- `p` value as an integer in the second line

### **Output Format:**

Calculated power value or appropriate exception

#### **Answer:**

```cpp
#include <iostream>
using namespace std;


class NonNegativeException {};
class NonZeroException {};

class MyCalculator {
public:
    long power(int n, int p)
    {
        try {
            if (n < 0 || p < 0)
                throw NonNegativeException();

            if (n == 0 && p == 0)
                throw NonZeroException();

            int res = 1;

            while (p--)
                res *= n;

            return res;
        }

        catch (NonNegativeException err) {
            cout << "n and p should be non-negative";
        }

        catch (NonZeroException err) {
            cout << "Both n and p should not be zero";
        }
        return -1;
    }
};

int main() {
    int n, p;
    cin >> n >> p;

    MyCalculator calc;
    long val = calc.power(n, p);
    if (val != -1)
        cout << val;
}
```

---
### 11. Write a program to get two time periods which are stored using structure and write it to file. Read them from file to compute the difference between them.

**File Name:** input.txt

### **Input Format:**

- _Hours, minutes_ and _seconds_ of **start time** in first line separated by space
- _Hours, minutes_ and _seconds_ of **stop time** in second line separated by space

### **Output Format:**

Difference between **start time** and **stop time**

#### **Answer:**

```cpp
#include <iostream>
using namespace std;

struct Time {
    int hr, min, sec;

    Time() { cin >> hr >> min >> sec; }
    Time(int h, int m, int s) { hr = h; min = m; sec = s; }

    void display() {
        cout << hr << ":" << min << ":" << sec;
    }

    Time operator-(Time &o) {
        if(o.sec > sec) { --min; sec += 60; }
        int diffSec = sec - o.sec;

        if(o.min > min) { --hr; min += 60; }

        int diffMin = min - o.min;
        int diffHr = hr - o.hr;

        Time t(diffHr, diffMin, diffSec);
        return t;
    }
};

int main() {
    Time t1, t2;
    Time t3 = t1 - t2;
    t3.display();
}
```

---
### 12. Create a vector of `n` size and add elements to it. Get a position and a value and modify the same.

If the position exceeds the size of the vector, `throw` and `catch` an exception and print the same.

### **Input Format:**

- The first line of the input consists of the `n` value.
- The next line of the input consists of the `values` of the vector.
- The last line of the input consists of the **position** and the **element to be replaced**.

### **Output Format:**

The output prints the **modified/original** vector and the exception.

Refer to the sample _input_ and _output_ for the formatting specifications.

### **Sample testcases**

**Input 1**

```
5
12 85 32 45 65
3 120
```

**Output 1**

```
12 85 32 120 65
```

**Input 2**

```
5
12 85 32 45 65
6 88
```

**Output 2**

#### **Answer:**

```cpp
vector::_M_range_check: __n (which is 6) >= this->size() (which is 5)
12 85 32 45 65
```

#### **Answer:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int pos, num;
    cin >> pos >> num;

    try {
        if (0 <= pos && pos < size)
            arr[pos] = num;
        else
            throw pos;
    } catch (int pos) {
        cout << "vector::_M_range_check: __n (which is "<< pos <<") >= this->size() (which is " << size << ")\n";
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << ' ';
    }
}
```

---
## **Standard Template Library - STL**

### 13. Using the sort algorithm of STL, write a program that sorts a user-defined character array in ascending order.

### **Input Format:**

Two lines of input.

- First-line contains the **number of elements**.
- Second-line contains the **elements of the array**.

### **Output Format:**

Output is displayed as shown in sample test cases.

### **Sample testcases**

**Input 1**

```
5
c d t h f
```

**Output 1**

```
Before sorting: c d t h f
After sorting: c d f h t
```

**Input 2**

```
8
r f g v d s e w
```

**Output 2**

```
Before sorting: r f g v d s e w
After sorting: d e f g r s v w
```

#### **Answer:**

```cpp
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int size;
    char ch;
    cin >> size;

    vector<char> v;

    for (int i = 0; i < size; i++) {
        cin >> ch;
        v.push_back(ch);
    }

    cout << "Before sorting: ";
    for (int i = 0; i < size; i++) {
        cout << v[i] << ' ';
    }

    sort(v.begin(), v.end());

    cout << endl << "After sorting: ";
    for (int i = 0; i < size; i++) {
        cout << v[i] << ' ';
    }
}
```

---
## **Lambda Functions**

### 14. Write a program to create a list of integer elements and print the even elements in them using lambda expressions.

### **Input Format:**

- The first line of the input consists of the value of `n`.
- The next line of input is the list of elements.

### **Output Format:**

The output prints the even elements in the list/no even elements in the list.

Refer to the sample _input_ and _output_ for the formatting specifications.

#### **Answer:**

```cpp
#include <iostream>
using namespace std;

// Lambda Function
auto print = [](int *p, int s) {
    for (int i = 0; i < s; i++) {
        if (*(p+i) % 2 == 0) {
            cout << "The first even number in the list is " << *(p+i) << '.';
            return 1;
        }
    }

    return 0;
};

int main() {
    int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    if (!print(arr, size))
        cout << "The list contains no even numbers.";
}
```

---
## **Looping Statements**

### 15. Fibonacci series starts from $0,1$ and the next number should be the sum of the previous two numbers.

- $0+1=1$, so the next number in the Fibonacci series in the C program is 1.
- Similarly, `0 1 1 2 3 5 8...` and so on.

Write a program to generate _Fibonacci series_ up to `n` terms using **while loop**

### **Input Format:**

The input consists of the value of `n`.

### **Output Format:**

The output prints the **Fibonacci series**.

#### **Answer:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int num, temp;
    cin >> num;

    if (num >= 1) cout << "0 ";

    int prev = 0;
    int curr = 1;

    while (--num) {
        cout << curr << ' ';

        temp = curr;
        curr = prev + curr;
        prev = temp;
    }
}
```

---
### 16. Write a program to print the following pattern.

```
7 6 5 4 3 2 1
7 6 5 4 3 2
7 6 5 4 3
7 6 5 4
7 6 5
7 6
7
```

### **Input Format:**

Number of rows

### **Output Format:**

Print the pattern as shown in sample output

#### **Answer:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int numOfRows;
    cin >> numOfRows;

    for (int i = numOfRows; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << numOfRows - j << ' ';
        }
        cout << endl;
    }
}
```

---
## **Arrays**

### 17. Adjacent Stick Game

Mukesh and his friends have set out on a vacation to Coorg. They have booked accommodation in a resort and the resort authorities organize Campfires every night as a part of their daily activities. Mukesh volunteered himself for an activity called the "**Adjacent Stick Game**" where sticks of different lengths will be placed in a line and Mukesh needs to remove a stick from each adjacent pair of sticks. He then has to form a bigger stick by combining all the remaining sticks.

Mukesh needs to know the smallest length of the bigger stick so formed and needs your help to compute the same. Given the number of sticks $N$ and the lengths of each of the sticks, write a program to find the smallest length of the bigger stick that is formed.

### **Input Format:**

- The first line of input contains an integer $N$ denoting the number of sticks. Assume that the maximum value for $N$ is $50$.
- Assume that $N$ is always even.
- The next line of input contains an $N$ integer denoting the length of each of the sticks.

### **Output Format:**

Output the smallest length of the bigger stick that is formed.

#### **Answer:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int size, sum = 0;
    cin >> size;

    int *arr = new int(size);

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i += 2) {
        if (arr[i] > arr[i+1])
            sum += arr[i+1];
        else
            sum += arr[i];
    }

    cout << sum;
}
```

---
### 18. Most occurring element

An array is filled with one of the values 1, 2, or 3.

Find the value that occurs the most in the array.
If two or more values occur the most number of times print the lower value.

### **Input Format:**

- The first line of input contains an integer $N$, denoting the number of elements in the array.
- The next line of input contains $N$ values, each of which is either 1, 2, or 3.

### **Output Format:**

The output prints the **minimum number** of rooms that need to be painted in order to have all the rooms painted with the same color (_i.e red, blue, or green_)

#### **Answer:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int n, temp;
    cin >> n;

    int arr[] = {0,0,0}; // [[1],[2],[3]]
    int max = 0;
    int num = 1;

    while (n--) {
        cin >> temp;
        arr[temp - 1] += 1;
        if (max < arr[temp - 1]) {
            max = arr[temp - 1];
            num = temp;
        }
    }

    cout << num;
}
```

---
### 19. Mid Aged

The Pan Am 73 flight from Bombay to New York en route to Karachi and Frankfurt was hijacked by a few Palestinian terrorists at the Karachi International Airport. The senior flight purser Neerja Banhot withered her fear and helped evacuate the passengers on board.

Neerja very well knew that she would not be able to evacuate all passengers dodging the hijackers. So she wanted to hand over the responsibility of evacuating the senior citizens (above 60 years of age) and children (below 18 years of age) in the flight to the mid-aged passengers seated in the diagonals

Given `n` the number of rows of seats and the number of seats in a row and the ages of passengers in each seat can you find the number of mid-aged passengers seated in the diagonals.

### **Input Format:**

- The first line input consists of an integer n, corresponding to the number of rows of seats and the number of seats in the aircraft.
- The next `n` lines of input consist of `n` integers that correspond to the ages of passengers

### **Output Format:**

The output consists of an integer corresponding to the number of mid-aged passengers seated in the diagonals.

#### **Answer:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int n, temp;
    cin >> n;

    int noOfMidAged = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> temp;
            if (i == j && 18 <= temp && temp <= 60) {
                noOfMidAged++;
            }
        }
    }

    cout << noOfMidAged;
}
```

---
### 20. Number of White Cells

Nurikabe logical game (_sometimes called Islands in the Stream_) is a binary determination puzzle. The puzzle is played on a typically rectangular grid of cells, some of which contain numbers. You must decide for each cell if it is white or black (_by clicking on them_) according to the following rules:

- All of the black cells must be connected.
- Each numbered cell must be part of a white island of connected white cells.
- Each island must have the same number of white cells as the number it contains (_including the numbered cell_).
- Two islands may not be connected.
- There cannot be any `2x2` blocks of black cells.

Unnumbered cells start out grey and cycle through white and black when clicked. Initially numbered cells are white in color.

#### **Problem Statement:**

Write a program to find the number of white cells in the final configuration of the board, given a valid initial configuration. Below figure is the sample valid initial configuration.

### **Input Format:**

- The first line of the input is an integer $N$ that gives the number of rows and columns of the grid.
- Next $N$ lines will have a valid initial board configuration with $N*N$ cells. Assume that the maximum number in a cell can be $10$.
- Grey-colored cells are represented by the integer $20$ in the matrix representation of the input configuration.

### **Output Format:**

The output should display an integer that the number of white cells in the final configuration of the board.

#### **Answer:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int n, temp;
    cin >> n;

    int sum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> temp;
            if (temp != 20) sum += temp;
        }
    }

    cout << sum;

    return 0;
}
```

---
## **String**

### 21. Alternating Code

It is IPL season and the first league match of Dhilip’s favorite team, "**Chennai Super Kings**". The CSK team is playing at the IPL after $2$ years and like all Dhoni lovers, Dhilip is also eagerly awaiting to see Dhoni back in action.

After waiting in long queues, Dhilip succeeded in getting the tickets for the big match. On the ticket, there is a letter code that can be represented as a string of **upper-case** Latin letters.

Dhilip believes that the CSK Team will win the match in case exactly two different letters in the code alternate. Otherwise, he believes that the team might lose.

Please see the note section for the formal definition of alternating code.

You are given a ticket code. Please determine, whether CSK Team will win the match or not based on Dhilip’sconviction. Print "**YES**" or "**NO**" (_without quotes_) corresponding to the situation.

### **NOTE:**

Two letters `x`, `y` where `x != y` are said to be alternating in a code if the code is of the form "**xyxyxy...**".

### **Input Format:**

The first and only line of the input contains a string $S$ denoting the letter code on the ticket.

### **Output Format:**

Output a single line containing "**Yes**" (_without quotes_) based on the conditions given and "**No**" otherwise.

#### **Answer:**

```cpp
#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    bool isAlternative = true;

    for (int i = 1; i < str.length() - 1; i++) {
        if (str[i-1] != str[i] && str[i-1] != str[i+1]) {
            isAlternative = false;
        }
    }

    cout << (isAlternative ? "Yes" : "No");
}
```

---
### 22. Wildcard Matching

Sunil is a little scientist. Sunil has planned to design a wildcard pattern matcher to exhibit at the "**Young Inventors**", a tech talent show organized at his school.

Sunil wanted to design the wildcard pattern matcher supporting the wildcard character '**?**'. The wildcard character '**?**' can be substituted by any single lower case English letter for matching. He has two strings `X` and `Y` of equal length, made up of lower case letters and the character '**?**'.

Sunil wants your help in designing the device, to know whether the strings `X` and `Y` can be matched or not. Write a program to check whether the given strings can be matched or not.

### **NOTE:**

Print '**No**' if the length of strings are not equal.

### **Input Format:**

- The first line of the input contains the string `X`.
- The second line of the input contains the string `Y`.

### **Output Format:**

Output a single line with the word "**Yes**" (_without quotes_) if the strings can be matched, otherwise output "**No**" (_without quotes_).

#### **Answer:**

```cpp
#include <iostream>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    if (s1.length() != s2.length()) {
        cout << "No";
        return 0;
    }

    bool isEqual = true;

    for (int i = 0; i < s1.length(); i++) {
        if (!(s1[i] == s2[i] || s1[i] == '?' || s2[i] == '?'))
            isEqual = false;
    }

    cout << (isEqual ? "Yes" : "No");
}
```

---
## **Pointer**

### 23. Write a program to sort a set of strings using pointers.

### **Input Format:**

- The first line of the input consists of the value of `n`.
- The next `n` inputs are the strings to be sorted.

### **Output Format:**

The output prints the sorted strings.

#### **Answer:**

```cpp
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int size;
    cin >> size;

    string *arr = new string[size];

    for (int i = 0; i < size; i++) {
        cin >> *(arr+i);
    }

    sort(arr, arr + size);

    for (int i = 0; i < size; i++) {
        cout << i+1 << ' ' << *(arr+i) << '\n';
    }
}
```

---
## **Functions**

### 24. Right Triangle of Dots

The much-awaited event in the entertainment industry every year is the "**Screen Awards**". This year the event is going to be organized on December $25$ to honor the Artists for their professional excellence in Cinema. The Organizers of the event, J&R Events, decided to design the logo of the Screen Awards as a digitized image and display it on the LED panel boards for the show promotions all across the venue. The Event team wanted to border the logo with right triangles which will describe it better.

For this purpose, the Event development team is in the task to find if $N$ dots can make a right triangle or not (_all $N$ dots must be used_). Given $N$ dots, we can make it look like a Right Triangle (_45-45-90 triangle_) exactly with $N$ dots. Rearrange the given $N$ dots, like this:

Your task is to help the team write a program using functions to find if $N$ dots can make a right triangle or not.

### **Function Specifications:**

Use the function name, return type, and the argument type as:

- `int find(int)`

The function must return $1$ if you can make a right triangle using $N$ dots, else return $0$.

### **Note:**

The main function is already provided and well defined. The function mentioned above is to be defined by you to solve this problem

### **Input format**

The first line of the input consists of an integer $N$.

### **Output format**

Output "**Yes**" (_without quotes_) if you can make a right triangle using $N$ dots, otherwise "**No**" (_without quotes_).

### **Sample testcases**

**Input 1**

```
6
```

**Output 1**

```
We can create Right Triagle of dots with 6 dots
```

**Input 2**

```
4
```

**Output 2**

```
We can't create Right Triagle of dots with 4 dots
```

#### **Answer:**

```cpp
#include <iostream>
using namespace std;

bool canMakeRightTriangle(int noOfDots) {
    int i = 1;

    while (noOfDots > 0) {
        noOfDots -= i++;
    }

    return noOfDots == 0;
}

int main() {
    int dots;
    cin >> dots;

    if (canMakeRightTriangle(dots))
        cout << "We can create Right Triagle of dots with "<< dots << " dots";
    else
        cout << "We can't create Right Triagle of dots with "<< dots << " dots";
}
```

---
## **Class Encapsulation**

### 25. BMI Calculator

The simple measure of body fitness is the BMI or Body Mass Index. It depends only on the height L and weight `W` of a person. It is defined as `BMI = [weight / height^2]` where weight is taken in kilograms and length in meters. Four general grades are proposed:

- `Underweight   [U] - when BMI < 18.5`
- `Normal weight [N] - 18.5 <= BMI < 25.0`
- `Heavyweight   [H] - 25.0 <= BMI < 30.0`
- `Overweight    [O] - above or equal to 30`.

Write a program that takes in the Weight (_in Kg_) and Length (_in meters_) of an individual and displays the grade as `U`, `N`, `H`, `O`.

### **NOTE:**

Bind the data members and the member functions inside the class

### **Input Format:**

Input to get two values `W`, `L` denoting the Weight and the Length.

- `W` is an integer.
- `L` is a decimal value.

### **Output Format:**

print the BMI Grade as `U`, `N`, `H`, or `O`.

#### **Answer:**

```cpp
#include <iostream>
using namespace std;

class BMI_Calculator {
private:
    int weight;
    double height;

public:
    void read() {
        cin >> weight >> height;
    }

    char calculate() {
        float bmi = weight / (height * height);

        if (bmi < 18.5)
            return 'U';

        if (18.5 <= bmi && bmi < 25)
            return 'N';

        if (25.0 <= bmi && bmi < 30)
            return 'H';

        return 'O';
    }
};

int main() {
    BMI_Calculator calc;

    calc.read();
    cout << calc.calculate();
}
```
