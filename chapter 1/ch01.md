<div id="table-of-contents">
<h2>Table of Contents</h2>
<div id="text-table-of-contents">
<ul>
<li><a href="#sec-1">1. Data Models</a>
<ul>
<li><a href="#sec-1-1">1.1. Two aspects of data model</a></li>
<li><a href="#sec-1-2">1.2. 'Data model' and 'data structure' are different</a></li>
<li><a href="#sec-1-3">1.3. Data models in programming</a></li>
<li><a href="#sec-1-4">1.4. Exercise</a></li>
</ul>
</li>
<li><a href="#sec-2">2. The C Data Model</a>
<ul>
<li><a href="#sec-2-1">2.1. The C Type System</a></li>
<li><a href="#sec-2-2">2.2. Exercise</a></li>
</ul>
</li>
<li><a href="#sec-3">3. Algorithms and the Design of Programs</a>
<ul>
<li><a href="#sec-3-1">3.1. Software development process</a></li>
<li><a href="#sec-3-2">3.2. Programming style</a></li>
</ul>
</li>
</ul>
</div>
</div>

Notes on chapter 1 of "Foundations of Computer Science" by Alfred Aho and Jeffrey Ullman

# Data Models<a id="sec-1" name="sec-1"></a>

## Two aspects of data model<a id="sec-1-1" name="sec-1-1"></a>

-   Value that an object can consume. This is usually the static part, also called as 'Type system'
-   Operations on data. This is usually the dynamic part.

## 'Data model' and 'data structure' are different<a id="sec-1-2" name="sec-1-2"></a>

-   Data model is an abstraction, while data structure is an implementation
-   For example, 'list' is an abstraction (data model), while 'linked list' is an implementation (data structure).

## Data models in programming<a id="sec-1-3" name="sec-1-3"></a>

-   The basic principle under which most programming languages deal with data is that each program has access to "boxes", which we can think of as regions of storage. Each box has a type, such as int or char.
-   We may store in a box any value of the correct type for that box.
-   We often refer to the values that can be stored in boxes as data objects
-   In C, a list of integers can be represented by a data structure called a linked list in which list elements are stored in cells.
-   Lists and their cells can be defined by a type declaration such as

    typedef struct CELL *LIST;
    struct CELL {
        int element;
        LIST next;;
    }

-   This declaration defines a self-referential structure CELL with two fields. The first is element, which holds the value of an element of the list and is of type int.
-   The second field of each CELL is next, which holds a pointer to a cell.
-   Note that the type LIST is really a pointer to a CELL. Thus, structures of type CELL can be linked together by their next fields to form what we usually think of as a linked list

## Exercise<a id="sec-1-4" name="sec-1-4"></a>

-   Describe data model of your favourite text editor
-   Describe data model of spreadsheet program

# The C Data Model<a id="sec-2" name="sec-2"></a>

## The C Type System<a id="sec-2-1" name="sec-2-1"></a>

-   Static part of C data model, describes the types of values that data can have.
-   Basic types in C:
    -   Characters (char, signed char, unsigned char)
    -   Integers (int, short int, long int, unsigned)
    -   Floating-point numbers (float, double, long double)
    -   Enumerations (enum)
-   Type formation rules in C:
    -   *Array Types* : Array whose elements are type T is denoted by

\begin{align*}
T &  A[n]
\end{align*}

-   *Structure Types* : Structure is a grouping of variables called *members* or *fields*.

    struct S {
        T1 M1 ;
        T2 M2 ;
        ···
        Tn Mn ;
    }

-   *Union Types* : A union type allows a variable to have different types at different times during the execution of a program.

The declaration

    union {
        T1 M1 ;
        T2 M2 ;
        ···
        Tn Mn ;
    } x;

defines a variable x that can hold a value of any of the types T1 , T2 , . . . , Tn .

-   *Pointer Types* : A variable of type pointer contains the address of a region of storage. Following is the declaration of variable p to be a pointer to a variable of type T.

\begin{align*}
T & *p;
\end{align*}

## Exercise<a id="sec-2-2" name="sec-2-2"></a>

-   Give an example of a C data object that has more than one name.
-   If you are familiar with another programming language besides C, describe its type system and operations.

# Algorithms and the Design of Programs<a id="sec-3" name="sec-3"></a>

Data models, their properties, and their appropriate usage is one pillar of computer science. Other, equally important, pillar is algorithms and and their associated data structures.

## Software development process<a id="sec-3-1" name="sec-3-1"></a>

-   Problem definition and specification
-   Design
-   Implementation
-   Integration and system testing
-   Installation and field testing
-   Maintenance

## Programming style<a id="sec-3-2" name="sec-3-2"></a>

-   Modularize the program into coherent pieces
-   Lay out the program so that its structure is clear
-   Write intelligent comments to explain the program. Describe the data models, data structures used to represent them, and operations performed.
-   Use meaningful names for procedures and variables
-   Avoid explicit constants whenever possible.
-   Avoid using global variables