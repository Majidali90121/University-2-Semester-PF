# 💻 C++ Console Application - Lab Project

This project includes **6 different C++ programs** that cover basic concepts like user input, conditional statements, arithmetic operations, and functions. Each task is represented with an image from the output for better understanding.

---

## 📚 Tasks Overview

---

### ✅ **Task 01: Student Information System**
The user enters their **name** and **roll number**, and the program displays both.

📸 Output Image:  
<p align="center">
  <img src="./Lab 01/Images/Photo1.png" alt="Task 01 Output" width="600px"/>
</p>

---

### ✅ **Task 02: Rectangle Area & Perimeter Calculator**
The customer enters **width** and **length** of a rectangle.  
The program calculates and displays:
- **Area = width × length**
- **Perimeter = 2 × (width + length)**

📸 Output Image:  
<p align="center">
  <img src="./Lab 01/Images/Lab1 photo2.png" alt="Task 02 Output" width="600px"/>
</p>

---

### ✅ **Task 03: Voter Eligibility Checker**
This program checks whether a person is **eligible to vote** or not.  
If the entered age is **greater than or equal to 18**, the person is eligible.

📸 If Eligible:  
<p align="center">
  <img src="./Lab 01/Images/Lab1 photo3.png" alt="Eligible Voter" width="600px"/>
</p>

📸 If Not Eligible:  
<p align="center">
  <img src="./Lab 01/Images/Lab1 noegligeble.png" alt="Not Eligible" width="600px"/>
</p>

---

### ✅ **Task 04: Celsius to Fahrenheit Converter**
This program takes a temperature in **Celsius** and converts it to **Fahrenheit** using the formula:  
**F = (C × 9/5) + 32**

📸 Output Image:  
<p align="center">
  <img src="./Lab 01/Images/Lab1 Photo4.png" alt="Temperature Conversion" width="600px"/>
</p>

---

### ✅ **Task 05: Simple Calculator**
The program performs basic operations:

- ➕ **Addition**

  <p align="center">
    <img src="./Lab 01/Images/Lab1 photo5.png" alt="Addition" width="600px"/>
  </p>

- ➖ **Subtraction**

  <p align="center">
    <img src="./Lab 01/Images/Lab01 photo5 subtract.png" alt="Subtraction" width="600px"/>
  </p>

- ➗ **Division**

  <p align="center">
    <img src="./Lab 01/Images/Lab01 devide.png" alt="Division" width="600px"/>
  </p>

- ✖️ **Multiplication**

  <p align="center">
    <img src="./Lab 01/Images/Lab01 Multiply.png" alt="Multiplication" width="600px"/>
  </p>

---

### ✅ **Task 06: Product Billing System**
This task accepts:
- **Product Price**
- **Product Quantity**

The program calculates the **total cost** and includes **validation**:
- If input is correct, shows result.
- If **price is negative**, displays a validation error.

📸 Correct Input:  
<p align="center">
  <img src="./Lab 01/Images/lab06 Correction.png" alt="Correct Input" width="600px"/>
</p>

📸 Validation Error:  
<p align="center">
  <img src="./Lab 01/Images/Lab01 photo6 Validation.png" alt="Validation Error" width="600px"/>
</p>

---

## 🛠️ Tools Used
- Language: **C++**
- Compiler: **G++ / Dev-C++ / Code::Blocks**
- Platform: **Console-based Application**

---


---

## 📎 Note
This lab project is designed for **beginners** in C++ and covers the basics of:
- I/O
- Arithmetic operations
- Conditionals
- Data validation
- Functions

---
## Task 1:  Default Constructor — Employee 
  ##       Management System
  Create a class named Employee for a basic employee management system.<br/> 
The class should have the following private data members:<br/>
❑ id (int)<br/>
❑ name (string)<br/>
❑ salary (float)<br/>
Implement a default constructor that initializes:<br/>
❑ id = 0<br/>
❑ name = "Not Assigned“<br/>
❑ salary = 0.0<br/>
Also include:<br/>
❑ A displayDetails() method that shows employee details.<br/>
❑ A main() function that creates an object using the default constructor and displays 
its information.<br/>

## 📸 OUT PUT
<p align="center">
  <img src="./Lab 02/Images/4.png" alt="Validation Error" width="600px"/>
</p>

---

## Task 2: Parameterized Constructor — Bank 
##          Account Initialization
Create a class named BankAccount that manages account information.<br/>
It should have the following private data members:<br/>
❑ accountNumber (string)<br/>
❑ accountHolder (string)<br/>
❑ balance (double)<br/>
Implement a parameterized constructor to initialize all three values 
when a new account is created:<br/>
❑ id = 0<br/>
❑ name = "Not Assigned“<br/>
❑ salary = 0.0<br/>
Also include:<br/>
❑ A method showAccountDetails() to display the account information..<br/>
❑ In main(), create an object of BankAccount using user-defined values and display 
the account details.<br/>
## 📸 OUT PUT
<p align="center">
  <img src="./Lab 02/Images/2.png" alt="Validation Error" width="600px"/>
</p>

---
## Constructor Overloading
Create a class named Rectangle with the following private data members:<br/>
❑ length (float) <br/>
❑ width (float) <br/>
Overload the constructor as follows:<br/>
❑ A default constructor that initializes both length and width to 1.0.<br/>
❑ A parameterized constructor that takes two float values to initialize length and 
width.<br/>
❑ A single-parameter constructor that sets both length and width to the same value 
(creating a square).<br/>
Also include:<br/>
❑ A method area() to return the area of the rectangle and a display() method.<br/> 
❑ In main(), create three objects using all constructor versions and display their 
dimensions and area.<br/>

## 📸 OUT PUT
<p align="center">
  <img src="./Lab 02/Images/3.png" alt="Validation Error" width="600px"/>
</p>

---

## Task 4: Destructor
Create a class called Locker that represents a bank locker.<br/>
◼ The constructor should print:<br/>
"Locker allocated to customer.“<br/>
◼ The destructor should print:<br/>
"Locker returned by customer.“<br/>
Inside your main() function:<br/>
❑ Create one locker object inside a block { } to observe automatic 
destructor call.<br/>
❑ Create another locker using new and release it using delete.<br/>

## 📸 OUT PUT
<p align="center">
  <img src="./Lab 02/Images/1.png" alt="Validation Error" width="600px"/>
</p>

---

## 👨‍💻 Author

**Majid Ali**