# Academic Management System

A C++ program demonstrating inheritance and polymorphism through a simple academic management system that handles both student and faculty information.

## Description

This program implements a hierarchical class structure to manage academic personnel information. It features a base class `Person` and two derived classes `Student` and `Faculty`, showcasing inheritance, virtual functions, and data encapsulation.

### Key Features
- Base class with common attributes (name, age)
- Derived classes with specific attributes for students and faculty
- Input validation for age
- Virtual function implementation
- User input handling with buffer management

## Class Structure

### Person (Base Class)
- Protected attributes: name, age
- Virtual functions for input and display
- Input validation for age (0-120)

### Student (Derived Class)
- Additional attributes: rollNumber, course
- Overridden input and display functions
- Inherits from Person class

### Faculty (Derived Class)
- Additional attributes: employeeId, department
- Overridden input and display functions
- Inherits from Person class

## Sample Usage

```cpp
Student student;
Faculty faculty;

// Input information
student.inputDetails();
faculty.inputDetails();

// Display information
student.displayDetails();
faculty.displayDetails();
