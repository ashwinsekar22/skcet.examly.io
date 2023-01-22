---
Module: Friend & Structure
---

# Practicals Preparation Questions

## **Friend & Structure**

### $2.$ In an online grocery shop, customers want to purchase multiple items.

  - Create a structure to store the
    - `Item code`
    - `Brand name`
    - `Item Name`
    - `Quantity`
    - `Price` of the product.
  - Generate the *Bill number* and
  - Display the purchased *product*, *name*, *amount* and *quantity*, and the *total bill amount*.


### **Function Specification:**

  1. Write a function `MESSAGE()` to alert the customer with the product name if the rate of a  product is more than $Rs.1000$.

  2. Write a function `VOUCHER()` to generate the voucher for $Rs.200$ if the bill amount is greater than $Rs.10000$.


### **Input Format:**
  - The first line of the input consists of the value of `n`.
  - Next `n` inputs consist of the **item code**, **brand name**, **item name**, **quantity**, and **price** of the product (*per item*).

### **Output Format:**
  - The output prints a message if the final amount of the product is greater than `1000`.
  - The next line prints the bill amount (*Rounded off to two decimal places*).
  - The last line prints whether the customer gets a voucher or not.


Refer to the sample *input* and *output* for the formatting specifications.

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