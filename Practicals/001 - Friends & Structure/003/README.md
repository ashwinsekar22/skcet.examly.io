---
Module: Friend & Structure
---

# Practicals Preparation Questions

## **Friend & Structure**

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
The output prints the *employee details* with updated salaries. 

Refer to the sample *input* and *output* for the formatting specifications.

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