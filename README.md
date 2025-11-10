[Topicwise-Class-Material.md](https://github.com/user-attachments/files/23445943/Topicwise-Class-Material.md)
# Tokens in C

# **Tokens in C**

Tokens are the basic parts of a C program. Understanding them is important for learning the language. In this tutorial, you will learn about different types of tokens, how they help define C’s rules, and see simple examples. By the end of this tutorial, you’ll have a clear grasp of tokens and how they contribute to writing structured C programs.

**Contents:**

1. What are Tokens in C?  
2. Types of Tokens in C  
3. Keywords in C  
4. Identifiers in C  
5. Constants in C  
6. Strings in C  
7. Operators in C  
8. Special Symbols in C  
9. How Tokens Define C’s Syntax  
10. Example of Tokens in C  
11. How Tokens Help in Code Compilation  
12. FAQs on Tokens in C

## **What are Tokens in C?**

Tokens are the smallest units in a C program that are meaningful to the compiler. They form the building blocks of a C program, allowing it to function as intended. In simple terms, every word and symbol in a C program is considered a token.

## **Types of Tokens in C**

There are six types of tokens in C:

* **Keywords** – Reserved words with special meanings (e.g., int, return, if).  
* **Identifiers** – Names for variables, functions, and arrays (e.g., sum, main).  
* **Constants** – Fixed values that do not change (e.g., 10, ‘A’, 3.14).  
* **Strings** – A sequence of characters inside double quotes (e.g., “Hello”).  
* **Operators** – Symbols for performing operations (e.g., \+, \-, \*, /).  
* **Special Symbols** – Characters with special purposes (e.g., {}, ;, \[\]).

advertisement

## **Keywords in C**

In C, keywords are reserved words that have predefined meanings and cannot be used as identifiers (variable names, function names, etc.). These words help define the structure and functionality of a C program.

**List of Keywords in C:**

auto       **break**      case       char       const  
continue   default    do         double     else  
**enum**       **extern**     float      for        goto  
if         int        long       register   return  
short      signed     sizeof     static     struct  
switch     typedef    union      unsigned   void  
volatile   while

**Rules for Using Keywords:**

* Keywords cannot be used as variable names, function names, or any other identifiers.  
* They are case-sensitive in C.  
* All keywords must be written in lowercase.

**Example Using Keywords:**

\#include \<stdio.h\>  
   
int main() {               *// 'int' and 'main' are keywords*  
    int score \= 90;        *// 'int' is a keyword*  
    char grade \= 'A';      *// 'char' is a keyword*  
   
    if (score \>= 50) {     *// 'if' is a keyword*  
        printf("Passed**\\n**");  
    } else {               *// 'else' is a keyword*  
        printf("Failed**\\n**");  
    }  
   
    return 0;              *// 'return' is a keyword*  
}

**Output:**

Passed

## **Identifiers in C**

Identifiers are names used for variables, functions, and arrays. They are user-defined and must follow naming rules.

**Rules for Identifiers:**

* Can have letters (A-Z, a-z), numbers (0-9), and \_ (underscore).  
* Must start with a letter or an underscore.  
* Cannot be a keyword (like int, return).  
* Case-sensitive (Score and score are different).

**Example:**

int score \= 85;  *// 'score' is an identifier*    
float point \= 99.99;  *// 'point' is an identifier*

## **Constants in C**

* Fixed values that do not change during the execution of a program.  
* Can be of different types such as integer, float, character, or string.  
* **Syntax:**

const int score \= 100;  *// Integer constant*  
const float marks \= 95.5;     *// Float constant*

* const char grade \= 'A';       *// Character constant***Examples:** 10, 3.14, ‘A’, “Hello”

## **Strings in C**

A string is a sequence of characters enclosed in double quotes “…”. Strings end with a null character (\\0).

**Example:**

\#include \<stdio.h\>  
   
int main() {  
    char lcbc\[20\] \= "C Programming"; *// String initialization*  
   
    printf("Welcome to %s**\\n**", lcbc);  
   
    return 0;

}

**Output:**

Welcome to C Programming

## **Operators in C**

Symbols that perform operations on operands.

**Syntax:**

int a \= 5, b \= 10;

int sum \= a \+ b;  *// '+' is an operator*

**Examples:**

* **Arithmetic Operators:** \+, \-, \*, /, %  
* **Relational Operators:** \==, \!=, \>, \<, \>=, \<=  
* **Logical Operators:** &&, ||, \!  
* **Bitwise Operators:** – &, |, ^, \~, \<\<, \>\>  
* **Assignment Operators:** – \=, \+=, \-=, \*=, /=, %=

## **Special Symbols in C**

Special symbols, also known as punctuators, are symbols with a special meaning in C. They help define the structure of a program.

**Common Special Symbols in C:**

| Symbol | Name | Description |
| :---: | ----- | ----- |
| **;** | Semicolon | Marks the end of a statement (int a \= 10;). |
| **{}** | Curly Braces | Define code blocks (if (x \> 0\) { … }). |
| **\[\]** | Square Brackets | Used for arrays (int arr\[5\];). |
| **()** | Parentheses | Used in functions and conditions (printf(“Hello”);). |
| **\#** | Hash | Used for preprocessor directives (\#include \<stdio.h\>). |
| **,** | Comma | Separates values or parameters (int a, b, c;). |
| **“”** | Double Quotes | Used for strings (printf(“Hello”);). |
| **”** | Single Quotes | Used for characters (char ch \= ‘A’;). |
| **.** | Period (Dot) | Accesses structure members (struct.name). |
| **\-\>** | Arrow | Accesses structure pointers (ptr-\>value). |
| **\~** | Tilde | Bitwise NOT operator (\~x inverts bits). |

**Example:**

\#include \<stdio.h\>  // '\#' is a special symbol  
   
int main()  
{  
    *// '\[\]' for array, '{}' for initialization*  
    int arr\[3\] \= {10, 20, 30};  
   
    *// '()', ';' are special symbols*  
    printf("Value: %d**\\n**", arr\[1\]);   
    return 0;  *// ';' ends the statement*

}

## **How Tokens Define C’s Syntax**

Tokens are important parts of a C program. They help define the rules of the language, so the compiler can understand and run the program correctly. Every C statement follows specific grammar rules made up of tokens like keywords, identifiers, constants, and operators.

**For example:**

int score \= 10 \+ 20;

* **int** (Keyword) defines the variable type.  
* **score** (Identifier) is the variable name.  
* **\=** (Operator) assigns a value.  
* **10** and **20** (Constants) are numbers.  
* **\+** (Operator) adds the values.  
* **;** (Special Symbol) marks the end of the statement.

Each token must be used correctly to follow C’s syntax rules.

## **Example of Tokens in C**

\#include \<stdio.h\>          // Preprocessor Directive (Special Symbol and Header File)  
   
int main() {                *// Keyword, Special Symbols*  
    int lcbc \= 10;    *// Keyword, Identifier, Constant*  
    float marks \= 95.5;     *// Keyword, Identifier, Constant*  
    char grade \= 'A';       *// Keyword, Identifier, Constant (Character)*  
   
    *// Operator and String in printf*  
    printf("lcbc Marks: %d**\\n**", lcbc);    
    printf("Marks obtained: %.2f**\\n**", marks);         
    printf("Grade: %c**\\n**", grade);                   
   
    *// Conditional Statement with Operator and Identifier*  
    if (lcbc \>= 50) {    
        printf("Result: Passed**\\n**"); *// String and Function*  
    } else {  
        printf("Result: Failed**\\n**");  
    }  
   
    return 0;    *// Keyword and Constant*

}

**Output:**

lcbc Marks: 10  
Marks obtained: 95.50  
Grade: A

Result: Passed

**Explanation:**

* **Keywords:** int, float, char, if, else, return  
* **Identifiers:** main, lcbc, marks, grade  
* **Constants:** 10, 95.5, ‘A’, 0  
* **Strings:** “lcbc Marks: %d\\n”, “Result: Passed\\n”  
* **Operators:** \=, \>=  
* **Special Symbols:** {, }, ;, (), \#

## **How Tokens Help in Code Compilation**

Tokens are important when compiling a C program. The compiler processes them in four steps:

* **Breaking the Code (Lexical Analysis)** – The compiler scans the program and splits it into small parts (tokens).  
* **Checking the Rules (Syntax Analysis)** – It checks if the tokens follow C’s grammar.  
* **Checking the Meaning (Semantic Analysis)** – It makes sure the tokens are used correctly (e.g., the right data types).  
* **Creating Machine Code (Code Generation)** – It converts tokens into machine code so the computer can run the program.

If tokens are not used correctly, the compiler gives errors. For example:

int 5score \= 10; *// A variable name cannot start with a number.*

Tokens help structure the program correctly, so it compiles without errors.

## **FAQs on Tokens in C**

**1\. What are tokens in C?**  
Tokens are the smallest units of a C program. The compiler breaks the source code into tokens to understand and process it.

**2\. What are the types of tokens in C?**  
There are six types of tokens in C: keywords, identifiers, constants, strings, operators, and special symbols. Each type plays a specific role in defining the syntax and behavior of a program.

**3\. Why are tokens important in C?**  
Tokens help define the syntax of a C program. The compiler uses them to understand and execute the code correctly.

**4\. What is the role of special symbols in C?**  
Special symbols help define the program structure. For example:

* **{}** – Defines a block of code.  
* **;** – Marks the end of a statement.  
* **\#** – Used for preprocessor directives like \#include.

**5\. How do tokens help in code compilation?**  
During compilation, the compiler first scans the program and breaks it into tokens. It then checks their correctness before converting them into machine code. This process ensures that the program follows the rules of the C language.

**6\. How are string constants different from character constants?**  
A string constant is a sequence of characters enclosed in double quotes and ends with a null character. A character constant is a single character enclosed in single quotes and represents a single value.

## **Key Points to Remember**

Here is the list of key points we need to remember about “Tokens in C”.

* Tokens are the smallest parts of a C program that the computer understands.  
* There are six types of tokens: keywords, identifiers, constants, strings, operators, and special symbols.  
* Keywords are reserved words with predefined meanings that cannot be used as identifiers, such as int, return, and if.  
* Identifiers are user-defined names for variables, functions, and arrays, which must start with a letter or an underscore and cannot be keywords.  
* Constants have fixed values that do not change during execution, while strings are sequences of characters enclosed in double quotes.  
* Operators are symbols like \+, \-, and \* that perform actions in a program.  
* Special symbols like {}, \[\], and ; help organize the program’s structure.  
* The compiler reads tokens in four steps: breaking them into parts, checking grammar, checking meaning, and turning them into machine code.

# Variables in C

# **Variables in C**

This tutorial will help you learn about variables in C. You will find out what they are, their types, and how to use them. You will also learn where you can use a variable (scope) and how long it stays in memory (lifetime). Understanding variables helps with memory management. Real-world examples will make the concept clear.

**Contents:**

1. What are Variables in C?  
2. Declaring and Initializing Variables in C  
3. Variable Naming Rules in C  
4. Conventions for Naming Variables in C  
5. Types of Variables in C  
6. Local Variables in C  
7. Global Variables in C  
8. Static Variables in C  
9. Automatic Variables in C  
10. External Variables (extern) in C  
11. Register Variables in C  
12. Constants vs Variables in C  
13. Best Practices for Using Variables in C  
14. FAQs on Variables in C

## **What are Variables in C?**

In C programming, a variable is a name given to a memory location where data is stored. Variables act as placeholders for values that may change during the execution of a program. They play a crucial role in handling and processing data efficiently.

## **Declaring and Initializing Variables in C**

In C programming, you must declare a variable before using it. This tells the compiler what type of data it will store and sets aside memory for it. Initialization means giving the variable a value when you declare it.

**1\. Declaring Variables**

In C, declaring a variable means specifying its type and giving it a name.

**Syntax:**

data\_type variable\_name;

**Example:**

int score;       *// Declares an integer variable*  
float percentage; *// Declares a float variable*  
char grade;      *// Declares a character variable*

**2\. Initializing Variables**

A variable can be assigned an initial value at the time of declaration.

**Syntax:**

data\_type variable\_name \= value;

**Example:**

int score \= 95;        *// Initializing an integer variable*  
float percentage \= 88.5; *// Initializing a float variable*  
char grade \= 'A';      *// Initializing a character variable*

**3\. Multiple Variable Declarations and Initializations**

You can declare multiple variables of the same type in a single line, optionally initializing them.

**Example:**

int score, time, points;         *// Declaring multiple variables*  
float x \= 1.5, y \= 2.5; *// Declaring and initializing multiple variables*

**Example of Declaration and Initialization:**

\#include \<stdio.h\>  
   
int main()  
{  
    int quizScore \= 85;    *// Declaration and Initialization*  
    float percentage \= 90.5;  
    char grade \= 'A';  
   
    printf("Quiz Score: %d**\\n**", quizScore);  
    printf("Percentage: %.2f%%**\\n**", percentage);  
    printf("Grade: %c**\\n**", grade);  
   
    return 0;  
}

**Output:**

Quiz Score: 85  
Percentage: 90.50%  
Grade: A

This C program shows how to declare, initialize, and print variables. It creates an **int** (**quizScore**), a **float** (**percentage**), and a **char** (**grade**). Each variable stores a value. The **printf** function displays them using format specifiers: **%d** for integers, **%.2f** for floats (with two decimal places), and **%c** for characters. The **%%** prints the percentage symbol. The program runs and prints the values correctly.

## **Variable Naming Rules in C**

In C, variable names must follow specific rules enforced by the compiler. Breaking these rules results in syntax errors. Below are the fundamental naming rules for variables in C.

**1\. Start with a Letter or Underscore**: A variable name must begin with a letter (A-Z or a-z) or an underscore (\_).

* **Valid:** count, \_score, value123  
* **Invalid:** 123value, \#price

**2\. Cannot Use Keywords**: C has reserved words (keywords) that cannot be used as variable names.

* **Valid:** int1, float\_value  
* **Invalid:** int, float, return, while

**3\. No Special Characters or Spaces**: Variable names cannot contain special characters like @, \#, $, %, etc. Spaces are not allowed.

* **Valid:** student\_marks, count2, max\_value  
* **Invalid:** total$cost, my-variable, first name

**4.Case Sensitivity**: C is case-sensitive, so score and Score are treated as different variables.

int score \= 50;

int Score \= 100;

**5\. No Digits at the Beginning**: Digits are allowed in variable names but cannot be the first character.

* **Valid:** marks1, var123  
* **Invalid:** 123var, 1score

**6\. Length of Variable Names**: Although C allows long variable names, it is best to keep names within 31 characters for portability.

int maximumStudentCount;

**7\. Use of Underscores**: Variable names can contain underscores \_ between characters.

int total\_marks;

## **Conventions for Naming Variables in C**

**1\. Use Meaningful and Descriptive Names**: Choose names that clearly describe the variable’s purpose. Avoid single-character names except for loop counters (i, j, k).

* **Valid:** int studentCount;  
* **Invalid:** int x;

**2\. Follow Camel Case or Snake Case Naming**: Use camelCase or snake\_case consistently.

* **Camel Case:** int studentMarks;  
* **Snake Case:** int student\_marks;

**3\. Use Uppercase for Constants (Macros)**: For constants or macros, use uppercase letters with underscores.

\#define MAX\_STUDENTS 100 const int MIN\_SCORE \= 50;

**4\. Prefix Boolean Variables with “is”, “has”, or “can”**: Boolean variables should indicate a condition or state.

* **Valid:** int isPassed;  
* **Valid:** int hasAccess;

**5\. Use Singular Names for Single Variables and Plural Names for Arrays**

* **Valid:** int studentAge;  
* **Valid:** int studentAges\[50\];

**6\. Avoid Abbreviations (Unless Well-Known)**: Use full, clear names instead of vague abbreviations.

* **Valid:** int totalMarks;  
* **Invalid:** int tm; // Unclear abbreviation

**7\. Avoid Using Underscores**: For local variables, prefer camelCase. Use underscores for global variables or constants.

int totalMarks; *// Local variable*

**8\. Consistency in Naming Style**: Maintain a consistent style throughout the program.

* **Valid:** int studentMarks;  
* **Valid:** float totalFee;

## **Types of Variables in C**

In C Programming, variables are classified based on their scope, storage duration, and lifetime. Below are the main types:

* Local Variables  
* Global Variables  
* Static Variables  
* Automatic Variables  
* External Variables (extern)  
* Register Variables

## **Local Variables in C**

Local variables are declared inside a function or a block in C and can only be accessed within that function or block. Their scope is limited to the block where they are defined, and they cease to exist once the control leaves the block.

**Characteristics of Local Variables:**

* Declared inside a function or block.  
* Accessible only within the same function or block.  
* Stored in the stack memory.  
* Memory is allocated when the function is called and deallocated when the function exits.  
* Cannot be accessed by other functions in the program.

**Syntax:**

return\_type function\_name()  
{  
    data\_type variable\_name;  *// Local variable*  
    *// Statements*

}

**Example:**

\#include \<stdio.h\>  
   
void display()  
{  
    int marks \= 85;  *// Local variable*  
    printf("Marks inside display(): %d**\\n**", marks);  
}  
   
int main()  
{  
    display();  
   
    *// Trying to access marks here will result in an error*  
    *// printf("%d", marks);  // Error: marks is not accessible here*  
   
    int score \= 90;  *// Local variable for main()*  
    printf("Score inside main(): %d**\\n**", score);  
   
    return 0;

}

**Output:**

Marks inside display(): 85

Score inside main(): 90

This program shows local variables and their scope. The **display()** function has a variable **marks**, which can only be used inside that function. In **main()**, another variable score is declared and printed. Since **marks** belongs to **display()**, it cannot be used in **main()**. This helps keep variables separate and avoids errors.

## **Global Variables in C**

Global variables in C are declared outside all functions, usually at the beginning of a program. They can be accessed and modified by any function within the same program.

**Characteristics:**

* Declared outside any function.  
* Accessible from any function in the program.  
* Retains its value throughout the program.  
* Stored in the data segment of memory.

**Syntax:**

data\_type variable\_name;  *// Global variable*  
   
int main()  
{  
    *// Code*  
}  
   
return\_type function\_name() {  
    *// Code can access global variable*

}

**Example:**

\#include \<stdio.h\>  
   
*// Global variable to store lcbc score*  
int score \= 90;  
   
*// Function to display the quiz score*  
void displayScore() {  
    printf("lcbc Quiz Score: %d**\\n**", score);  
}  
   
*// Function to update the score*  
void updateScore() {  
    score \+= 10;  
    printf("Updated lcbc Quiz Score: %d**\\n**", score);  
}  
   
int main() {  
    displayScore();    *// Display initial score*  
    updateScore();     *// Update and display new score*  
    displayScore();    *// Display updated score*  
    return 0;

}

**Output:**

lcbc Quiz Score: 90  
Updated lcbc Quiz Score: 100  
lcbc Quiz Score: 100

This program shows global variables. The variable score is declared outside all functions, so every function can use it. The **displayScore()** function shows the score, and **updateScore()** adds 10 to it. In **main()**, the program first prints the score, then updates it, and prints it again. Since score is global, all functions can change it.

## **Static Variables in C**

A static variable in C retains its value between multiple function calls. It is initialized only once and maintains its value even after the function exits.

**Characteristics:**

* Memory allocated only once in the data segment.  
* Maintains its value between multiple calls.  
* Initialized only once, default value is 0 if uninitialized.

**Syntax:**

static data\_type variable\_name \= value;

**Example:**

\#include \<stdio.h\>  
   
*// Function to count lcbc quiz attempts*  
void lcbcAttempt() {  
    static int attempt \= 0;  *// Static variable*  
    attempt\++;  
    printf("lcbc Quiz Attempt: %d**\\n**", attempt);  
}  
   
int main() {  
    lcbcAttempt();  *// 1st attempt*  
    lcbcAttempt();  *// 2nd attempt*  
    lcbcAttempt();  *// 3rd attempt*  
    return 0;  
}

**Output:**

lcbc Quiz Attempt: 1  
lcbc Quiz Attempt: 2

lcbc Quiz Attempt: 3

This program shows static variables. The variable **attempt** is static, so it keeps its value even after the function ends. Each time **lcbcAttempt()** runs, **attempt** increases by 1\. In **main()**, calling the function three times makes the count go up. Normal variables reset each time, but static variables remember their value.

## **Automatic Variables in C**

An automatic variable in C is a variable that is declared inside a function or a block and is automatically created when the function is invoked and destroyed when the function exits.

**Characteristics:**

* Default storage class for variables.  
* Scope is local to the block or function where it is defined.  
* Memory allocated on the stack.  
* Automatically initialized with garbage value if not explicitly initialized.

**Syntax:**

auto data\_type variable\_name \= value;  *// 'auto' keyword is optional*

**Note:** Since auto is the default, it is usually omitted.

**Example:**

\#include \<stdio.h\>  
   
void lcbcQuiz() {  
    auto int score \= 90;  *// Automatic variable*  
    printf("lcbc Quiz Score: %d**\\n**", score);  
}  
   
int main() {  
    lcbcQuiz();  
    *// score is not accessible here*  
    return 0;

}

**Output:**

lcbc Quiz Score: 90

This program shows automatic variables. The function **lcbcQuiz()** creates the variable score when it runs and deletes it when it ends. Calling **lcbcQuiz()** in **main()** prints the score, but **main()** cannot use score because it exists only inside the function. In C, local variables are auto by default.

## **External Variables (extern) in C**

An external variable in C is a variable that is declared outside of any function or block, making it global and accessible across multiple files or functions.

**Characteristics:**

* Declared outside any function, typically at the top of the file.  
* Accessible to all functions within the file.  
* To use it in another file, it is declared with the extern keyword.

**Syntax:**

**extern** data\_type variable\_name;  *// Declaration*

**Example:**

**File 1: lcbc.c**

\#include \<stdio.h\>  
   
int lcbcScore \= 85;  *// External variable*  
   
void displayScore() {  
    printf("lcbc Quiz Score: %d**\\n**", lcbcScore);

}

**File 2: main.c**

\#include \<stdio.h\>  
   
**extern** int lcbcScore;  *// External variable declaration*  
   
void displayScore();  *// Function prototype*  
   
int main() {  
    displayScore();  
    lcbcScore \= 95;  *// Modifying the external variable*  
    printf("Updated lcbc Score: %d**\\n**", lcbcScore);  
    return 0;

}

**Output:**

lcbc Quiz Score: 85

Updated lcbc Score: 95

## **Register Variables in C**

A register variable is a type of variable that is stored in the CPU register rather than in the main memory (RAM). It is declared using the register keyword.

**Characteristics:**

* Stores frequently accessed data for faster access.  
* Used for optimization in time-critical operations.  
* The compiler may or may not honor the register request, depending on available CPU registers.  
* Cannot use the address-of operator (&) to get the address of a register variable.

**Syntax:**

register data\_type variable\_name;

**Example:**

\#include \<stdio.h\>  
   
int main() {  
    register int lcbcMarks \= 90;  *// Declaring a register variable*  
   
    for (register int i \= 0; i \< 3; \++i) {  *// Loop variable in register*  
        printf("lcbc Marks: %d**\\n**", lcbcMarks);  
    }  
   
    return 0;

}

**Output:**

lcbc Marks: 90  
lcbc Marks: 90

lcbc Marks: 90

## **Constants vs Variables in C**

Here is a comparison table for Constants vs Variables in C:

| Feature | Constants | Variables |
| :---: | ----- | ----- |
| **Definition** | Fixed values that do not change during execution. | Data storage locations whose values can change. |
| **Declaration** | Declared using const keyword or \#define. | Declared using data types like int, float, char, etc. |
| **Modification** | Cannot be modified after declaration. | Can be updated during program execution. |
| **Memory Usage** | Stored in read-only memory or replaced at compile time. | Stored in RAM and can be modified. |
| **Scope** | Follows the scope where declared but remains unchanged. | Scope can be local or global, and values may change. |
| **Lifespan** | Exists throughout program execution if defined globally. | Exists only within its scope and may change multiple times. |
| **Examples** | const int MAX \= 100; or \#define PI 3.14 | int age \= 25; or float price \= 99.99; |
| **Use Case** | Used for fixed values like mathematical constants. | Used for dynamic data like user input and calculations. |

## **Best Practices for Using Variables in C**

* Use clear and meaningful names instead of vague or single-character names.  
* Follow naming conventions like **camelCase** or **snake\_case**, and avoid starting with numbers or special characters.  
* Declare and initialize variables at the same time to prevent garbage values.  
* Use const for fixed values to prevent accidental changes.  
* Select the correct data type to optimize memory and avoid data loss.  
* Reduce global variables by using static for file-specific scope or passing values through functions.  
* Use **enum** instead of hardcoded numbers for better readability and maintainability.  
* Remove unused variables to save memory and avoid unnecessary compiler warnings.

## **FAQs on Variables in C**

**1\. What is a variable in C?**  
A variable in C is a named storage location used to hold data that can change during program execution.

**2\. Can a variable name start with a number?**  
No, variable names cannot start with a number. For example, 1stValue is invalid, but firstValue is valid.

**3\. What is the scope of a variable in C?**

* **Local Scope** – Variable is accessible only within the function/block where it is declared.  
* **Global Scope** – Variable is accessible throughout the program.  
* **Block Scope** – Variable is limited to a {} block where it is declared.

**4\. Can a variable be declared multiple times in C?**  
Yes, but only if it’s declared inside different scopes. Re-declaring the same variable in the same scope will cause an error.

**5\. What is the default value of an uninitialized variable?**  
Uninitialized variables in C contain garbage values (random memory content). Always initialize variables before use.

**6\. What is the lifetime of a static variable?**  
A static variable retains its value throughout the program’s execution, even if declared inside a function.

## **Key Points to Remember**

Here is the list of key points we need to remember about “Variables in C”.

* A variable holds data and can change while the program runs.  
* The name of a variable must start with a letter or an underscore. It cannot have spaces or special symbols. It is case-sensitive, so uppercase and lowercase letters mean different things.  
* Local variables exist only inside the function where they are created. They disappear when the function ends.  
* Global variables exist outside functions. Any part of the program can use them, and they keep their value until the program stops.  
* Static variables keep their value even after the function ends. The program creates them once and remembers their last value when the function runs again.  
* Automatic variables exist only when the function runs and disappear when it ends.  
* External variables appear in one file but work in another. They help share data across files in big programs.  
* Register variables store data in the CPU for faster access. The computer may not use a register if none are available.  
* Constants store fixed values that never change. They help keep important numbers like mathematical values.  
* Good practices include using clear names, initializing variables before use, picking the right data type, and limiting global variables.

# Operators in C

# **Operators in C**

In C programming, operators are symbols that perform actions on numbers and values. They help you do math, compare numbers, and control how a program runs. C has many types of operators, such as arithmetic, logical, and assignment operators. These are important because they help in making calculations and decisions in a program. In this guide, we will explain these operators with simple examples.

**Contents:**

1. What are Operators in C?  
2. Types of Operators in C  
3. Arithmetic Operators in C  
4. Relational Operators in C  
5. Logical Operators in C  
6. Bitwise Operators in C  
7. Assignment Operators in C  
8. Increment and Decrement Operators in C  
9. Ternary Operator in C  
10. Other Operators in C  
11. FAQs on Operators in C

## **What are Operators in C?**

Operators in C are symbols that perform operations on variables and values. They help in performing calculations, comparing values, and controlling the flow of a program.

**Syntax:**

result \= operand1 operator operand2;

**Example:**

advertisement

sum \= a \+ b;  *// Here, \`+\` is an operator that adds \`a\` and \`b\`*

## **Types of Operators in C**

Operators in C are classified into different types based on their functionality. Below are the main types of operators in C:

* **Arithmetic Operators** – Perform basic math operations (+, \-, \*, /, %).  
* **Relational Operators** – Compare values (==, \!=, \>, \<, \>=, \<=).  
* **Logical Operators** – Combine conditions (&&, ||, \!).  
* **Bitwise Operators** – Work on bits (&, |, ^, \<\<, \>\>).  
* **Assignment Operators** – Assign values (=, \+=, \-=, \*=, /=).  
* **Increment and Decrement Operators** – Increase or decrease values (++, –).  
* **Ternary Operator** – A shorthand for if-else (condition ? true\_value : false\_value).  
* **Comma Operator** – Evaluates multiple expressions (a \= (b, c);).  
* **Sizeof Operator** – Finds the size of a variable (sizeof(int)).  
* **Type Casting Operator** – Converts data types ((int) 3.5).

## **Arithmetic Operators in C**

Arithmetic operators in C help perform basic math, like adding, subtracting, multiplying, dividing, and finding the remainder. They work with both whole numbers (integers) and decimal numbers (floating-point).

**Syntax:**

result \= operand1 operator operand2;

where operator can be \+, \-, \*, /, or %.

**List of Arithmetic Operators:**

| Operator | Description | Example (a \= 10, b \= 5\) |
| :---: | ----- | ----- |
| **\+** | Addition | a \+ b \= 15 |
| **–** | Subtraction | a – b \= 5 |
| **\*** | Multiplication | a \* b \= 50 |
| **/** | Division | a / b \= 2 |
| **%** | Modulus (Remainder) | a % b \= 0 |

**Example of Arithmetic Operators in C**

\#include \<stdio.h\>  
   
int main()  
{  
    int a \= 15, b \= 4;   
   
    printf("Addition: %d**\\n**", a \+ b);  
    printf("Subtraction: %d**\\n**", a \- b);  
    printf("Multiplication: %d**\\n**", a \* b);  
    printf("Division: %d**\\n**", a / b);  
    printf("Modulus: %d**\\n**", a % b);  
   
    return 0;

}

**Output:**

Addition: 19  
Subtraction: 11  
Multiplication: 60  
Division: 3  
Modulus: 3

## **Relational Operators in C**

Relational operators in C are used to compare two values or variables. They return either true (1) or false (0) based on the comparison result.

**Syntax:**

variable1 operator variable2;

where **operator** is one of the relational operators.

**Types of Relational Operators in C:**

| Operator | Description | Example (a \= 10, b \= 5\) | Result |
| :---: | ----- | ----- | ----- |
| **\==** | Equal to | a \== b | 0 (false) |
| **\!=** | Not equal to | a \!= b | 1 (true) |
| **\>** | Greater than | a \> b | 1 (true) |
| **\<** | Less than | a \< b | 0 (false) |
| **\>=** | Greater than or equal to | a \>= b | 1 (true) |
| **\<=** | Less than or equal to | a \<= b | 0 (false) |

**Example:**

\#include \<stdio.h\>  
   
int main()  
{  
    int a \= 10, b \= 5;  
   
    printf("a \== b: %d**\\n**", a \== b);  *// 0 (false)*  
    printf("a \!= b: %d**\\n**", a \!= b);  *// 1 (true)*  
    printf("a \> b: %d**\\n**", a \> b);    *// 1 (true)*  
    printf("a \< b: %d**\\n**", a \< b);    *// 0 (false)*  
    printf("a \>= b: %d**\\n**", a \>= b);  *// 1 (true)*  
    printf("a \<= b: %d**\\n**", a \<= b);  *// 0 (false)*  
   
    return 0;  
}

**Output:**

a \== b: 0  
a \!= b: 1  
a \> b: 1  
a \< b: 0  
a \>= b: 1  
a \<= b: 0

## **Logical Operators in C**

Logical operators in C are used to combine multiple conditions to make logical decisions. They return true (1) or false (0).

**Syntax:**

condition1 operator condition2;

where **operator** is &&, ||, or \!.

**Types of Logical Operators in C:**

| Operator | Description | Example (a \= 1, b \= 0\) | Result |
| :---: | ----- | ----- | ----- |
| **&&** | Logical AND | a && b | 0 (false) |
| **||** | Logical OR | a || b | 1 (true) |
| **\!** | Logical NOT | \!a | 0 (false) |

**Example:**

\#include \<stdio.h\>  
   
int main()  
{  
    int marks \= 85;  
    int attendance \= 75;  
   
    *// Logical AND*  
    if (marks \>= 50 && attendance \>= 70) {  
        printf("Student is eligible for the exam.**\\n**");  
    } else {  
        printf("Student is not eligible for the exam.**\\n**");  
    }  
   
    *// Logical OR*  
    if (marks \>= 90 || attendance \>= 80) {  
        printf("Student gets a special award.**\\n**");  
    } else {  
        printf("No special award.**\\n**");  
    }  
   
    *// Logical NOT*  
    int pass \= 0;   
    if (\!pass) {  
        printf("Student failed the test.**\\n**");  
    }  
   
    return 0;  
}

**Output:**

Student is eligible for the exam.  
No special award.  
Student failed the test.

## **Bitwise Operators in C**

Bitwise operators in C perform operations at the bit level and manipulate individual bits of data.

**Syntax:**

result \= operand1 operator operand2;

where **operator** is a bitwise operator such as &, |, ^, \~, \<\<, or \>\>.

**Types of Bitwise Operators in C**

| Operator | Symbol | Description |
| :---: | ----- | ----- |
| **AND** | & | Performs bitwise AND operation |
| **OR** | | | Performs bitwise OR operation |
| **XOR** | ^ | Performs bitwise XOR operation |
| **NOT** | \~ | Performs bitwise NOT (one’s complement) |
| **Left Shift** | \<\< | Shifts bits to the left (multiplication by 2\) |
| **Right Shift** | \>\> | Shifts bits to the right (division by 2\) |

**Examples of Bitwise Operators in C**

**1\. Bitwise AND (&)**

\#include \<stdio.h\>  
   
int main()  
{  
    int a \= 5, b \= 3; *// 5 \= 0101, 3 \= 0011*  
    printf("Bitwise AND: %d**\\n**", a & b); *// 0101 & 0011 \= 0001 (1)*  
    return 0;  
}

**Output:**

Bitwise AND: 1

**2\. Bitwise OR (|)**

\#include \<stdio.h\>  
   
int main()  
{  
    int a \= 5, b \= 3;  
    printf("Bitwise OR: %d**\\n**", a | b); *// 0101 | 0011 \= 0111 (7)*  
    return 0;  
}

**Output:**

Bitwise OR: 7

**3\. Bitwise XOR (^)**

\#include \<stdio.h\>  
   
int main()  
{  
    int a \= 5, b \= 3;  
    printf("Bitwise XOR: %d**\\n**", a ^ b); *// 0101 ^ 0011 \= 0110 (6)*  
    return 0;  
}

**Output:**

Bitwise XOR: 6

**4\. Bitwise Complement (\~)**

\#include \<stdio.h\>  
   
int main()  
{  
    int a \= 5;  
    printf("Bitwise Complement: %d**\\n**", \~a); *// \~0101 \= 1010 (-6 in 2's complement)*  
    return 0;  
}

**Output:**

Bitwise Complement: \-6

**5\. Left Shift (\<\<)**

\#include \<stdio.h\>  
   
int main()  
{  
    int a \= 5;  
    printf("Left Shift: %d**\\n**", a \<\< 1); *// 0101 \<\< 1 \= 1010 (10)*  
    return 0;  
}

**Output:**

Left Shift: 10

**6\. Right Shift (\>\>)**

\#include \<stdio.h\>  
   
int main()  
{  
    int a \= 5;  
    printf("Right Shift: %d**\\n**", a \>\> 1); *// 0101 \>\> 1 \= 0010 (2)*  
    return 0;  
}

**Output:**

Right Shift: 2

## **Assignment Operators in C**

Assignment operators in C are used to assign values to variables. The most common assignment operator is \=. However, C provides compound assignment operators that combine an arithmetic or bitwise operation with assignment.

**Syntax:**

variable operator\= value;

where **operator** can be \=, \+=, \-=, \*=, /=, %=, &=, |=, ^=, \<\<=, \>\>=.

**Types of Assignment Operators in C**

| Operator | Example | Equivalent To | Description |
| :---: | ----- | ----- | ----- |
| **\=** | a \= b | a \= b | Assigns value of b to a |
| **\+=** | a \+= b | a \= a \+ b | Adds b to a and assigns the result to a |
| **\-=** | a \-= b | a \= a – b | Subtracts b from a and assigns the result to a |
| **\*=** | a \*= b | a \= a \* b | Multiplies a by b and assigns the result to a |
| **/=** | a /= b | a \= a / b | Divides a by b and assigns the result to a |
| **%=** | a %= b | a \= a % b | Computes remainder of a divided by b and assigns it to a |
| **\<\<=** | a \<\<= b | a \= a \<\< b | Left shifts a by b bits and assigns the result to a |
| **\>\>=** | a \>\>= b | a \= a \>\> b | Right shifts a by b bits and assigns the result to a |
| **&=** | a &= b | a \= a & b | Performs bitwise AND on a and b, then assigns the result to a |
| **^=** | a ^= b | a \= a ^ b | Performs bitwise XOR on a and b, then assigns the result to a |

**Example: Using Different Assignment Operators**

\#include \<stdio.h\>  
   
int main()  
{  
    int score \= 50;  
   
    score \+= 20;  *// score \= score \+ 20*  
    printf("Score after \+= : %d**\\n**", score);  
   
    score \-= 10;  *// score \= score \- 10*  
    printf("Score after \-= : %d**\\n**", score);  
   
    score \*= 3;   *// score \= score \* 3*  
    printf("Score after \*= : %d**\\n**", score);  
   
    score /= 2;   *// score \= score / 2*  
    printf("Score after /= : %d**\\n**", score);  
   
    score %= 7;   *// score \= score % 7*  
    printf("Score after %%= : %d**\\n**", score);  
   
    return 0;

}

**Output:**

Score after \+= : 70    
Score after \-= : 60    
Score after \*= : 180    
Score after /= : 90    
Score after %= : 6

## **Increment and Decrement Operators in C**

Increment (++) and decrement (–) operators are used to increase or decrease the value of a variable by 1\.

**Syntax:**

variable\++;  *// Post-increment*  
\++variable;  *// Pre-increment*  
variable\--;  *// Post-decrement*  
\--variable;  *// Pre-decrement*

**Example: Using Increment and Decrement Operators**

\#include \<stdio.h\>  
   
int main()  
{  
    int num \= 10;  
   
    printf("Initial Value: %d**\\n**", num);  
   
    *// Prints 10, then num becomes 11*  
    printf("Post-increment: %d**\\n**", num\++);    
    printf("After Post-increment: %d**\\n**", num);  
   
    *// Increments first, then prints 12*  
    printf("Pre-increment: %d**\\n**", \++num);    
   
    *// Prints 12, then num becomes 11*  
    printf("Post-decrement: %d**\\n**", num\--);  
    printf("After Post-decrement: %d**\\n**", num);  
   
    *// Decrements first, then prints 10*  
    printf("Pre-decrement: %d**\\n**", \--num);  
   
    return 0;  
}

**Output:**

Initial Value: 10    
Post\-increment: 10    
After Post\-increment: 11    
Pre\-increment: 12    
Post\-decrement: 12    
After Post\-decrement: 11    
Pre\-decrement: 10

## **Ternary Operator in C**

The ternary operator (? :) is a shorthand for the if-else statement, used for making quick decisions in a single line of code.

**Syntax:**

condition ? expression1 : expression2;

* If the condition is true, expression1 is executed.  
* If the condition is false, expression2 is executed.

**Example: Using the Ternary Operator**

\#include \<stdio.h\>  
   
int main()  
{  
    int num \= 15;  
   
    *// Using ternary operator to check if the number is even or odd*  
    (num % 2 \== 0) ? printf("Even**\\n**") : printf("Odd**\\n**");  
   
    return 0;  
}

**Output:**

Odd

Here, since 15 % 2 \!= 0, the condition is false, so “Odd” is printed.

## **Other Operators in C**

Apart from arithmetic, relational, logical, bitwise, assignment, and ternary operators, C provides some additional operators:

**1\. Sizeof Operator (sizeof)**

Used to determine the size (in bytes) of a data type or variable.

**Example:**

\#include \<stdio.h\>  
   
int main()  
{  
    int a;  
    printf("Size of int: %lu bytes**\\n**", sizeof(a));  
    return 0;  
}

**Output:**

Size of int: 4 bytes (may vary based on system)

**2\. Comma Operator (,)**

The comma operator allows multiple expressions to be evaluated in a single statement, with only the last expression’s value being returned.

**Example:**

\#include \<stdio.h\>  
   
int main()  
{  
    int a, b;  
    a \= (b \= 5, b \+ 10); *// b is assigned 5, then a is assigned b \+ 10*  
    printf("a \= %d, b \= %d**\\n**", a, b);  
    return 0;  
}

**Output:**

a \= 15, b \= 5

**3\. Typecast Operator ((type))**

Used to explicitly convert one data type to another.

**Example:**

\#include \<stdio.h\>  
   
int main()  
{  
    int a \= 10, b \= 3;  
    float result \= (float)a / b; *// Typecasting 'a' to float*  
    printf("Result: %.2f**\\n**", result);  
    return 0;  
}

**Output:**

Result: 3.33

**4\. Pointer Operators (\* and &)**

Used for working with memory addresses and pointers.

**Example:**

\#include \<stdio.h\>  
   
int main()  
{  
    int num \= 20;  
    int \*ptr \= &num; *// Pointer stores address of num*  
    printf("Value of num: %d**\\n**", \*ptr);  
    return 0;  
}

**Output:**

Value of num: 20

## **FAQs on Operators in C**

**1\. What are operators in C?**  
Operators in C are symbols that perform operations on variables and values. For example, \+ is used for addition, – for subtraction, and \* for multiplication.

**2\. What is the difference between \= and \== in C?**  
The \= operator is used for assignment, meaning it assigns a value to a variable. The \== operator is used for comparison to check if two values are equal.

**3\. What is the modulus operator % used for?**  
The modulus operator % gives the remainder when one number is divided by another. For example, 10 % 3 gives 1\.

**4\. Can the ternary operator replace if-else statements?**  
Yes, the ternary operator ? : can replace simple if-else conditions. However, for complex logic, if-else is preferable for readability.

**5\. What is the difference between & and &&?**  
& is the bitwise AND operator, which works at the binary level. && is the logical AND operator, which is used to check conditions in a boolean expression.

**6\. What happens when dividing by zero using the modulus operator?**  
Dividing by zero using % results in a runtime error since division by zero is undefined.

**7\. Can we use logical operators on non-boolean values?**  
Yes, in C, 0 is treated as false, and any non-zero value is treated as true.

## **Key Points to Remember**

Here is the list of key points we need to remember about “Operators in C”.

* Operators in C are symbols that perform operations on variables and values, such as arithmetic, comparison, and logical operations.  
* Arithmetic operators (+, \-, \*, /, %) are used for basic mathematical calculations.  
* Relational operators (==, \!=, \>, \<, \>=, \<=) compare values and return true (1) or false (0).  
* Logical operators (&&, ||, \!) combine conditions to control program flow based on true/false evaluations.  
* Bitwise operators (&, |, ^, \~, \<\<, \>\>) perform operations at the binary level, manipulating individual bits.  
* Assignment operators (=, \+=, \-=, \*=, /=, %=, \<\<=, \>\>=, &=, |=, ^=) assign values to variables and perform compound operations.  
* The ternary operator (condition ? true\_value : false\_value) acts as a shorthand for if-else conditions.  
* Other operators include sizeof (determines memory size), comma (evaluates multiple expressions), typecasting ((type) converts data types), and pointer operators (\*, &) for memory address manipulation.

# Expressions in C

# **Expressions in C**

This tutorial will help you understand **expressions in C**. You’ll learn what they are, how they work, and why they matter. We’ll look at real examples and explain rules like which part runs first. By the end, you’ll know how to use expressions in your code.

## **What is an Expression in C?**

An expression in C is a valid combination of operands and operators that computes a value.

**For example:**

a \+ b

Here, **a** and **b** are operands, and **\+** is the operator. The result of the expression is the sum of **a** and **b**.

**Key Components of C Expressions**

Expressions are made up of:

* **Operands:** Variables, constants, or literals (e.g., a, 42, 3.14)  
* **Operators:** Symbols that perform operations (e.g., \+, \-, \*, /, %, \=)  
* **Function Calls:** Functions returning values (e.g., sqrt(x))

## **Types of Expressions in C**

C expressions can be classified into the following categories:

* Arithmetic Expressions  
* Relational Expressions  
* Logical Expressions  
* Conditional (Ternary) Expressions  
* Increment and Decrement Expressions

## **Arithmetic Expressions in C**

These expressions perform arithmetic operations on both literals and variables. Some of the commonly used arithmetic operators are **\+ (addition), – (subtraction), \* (multiplication), / (division) and % (modulus)**.

**Arithmetic Operators in C**

| Operator | Symbol | Operation |
| :---: | ----- | ----- |
| **Addition** | \+ | Adds two operands |
| **Subtraction** | – | Subtracts right operand from left |
| **Multiplication** | \* | Multiplies two operands |
| **Division** | / | Divides left operand by right |
| **Modulus** | % | Gives remainder after division (integers only) |

**Syntax of Arithmetic Expressions**

result \= operand1 operator operand2;

**Examples of Arithmetic Expressions**

int a \= 8, b \= 3;  
int x;  
   
x \= a \+ b;      *// x \= 11*  
x \= a \- b;      *// x \= 5*  
x \= a \* b;      *// x \= 24*  
x \= a / b;      *// x \= 2 (integer division)*  
x \= a % b;      *// x \= 2 (remainder of 8/3)*

## **Relational Expressions in C**

These expressions compare two values or variables and return either true or false based on the outcome of the comparison. The commonly used relational operators are **\== (equal to), \!= (not equal to), \> (greater than), \< (less than), \>= (greater than or equal to) and \<= (less than or equal to)**.

For **example**, the expression 5\>6 will return false as 5 is not greater than 6 while the expression 6\>=6 will return true as 6 is greater than or equal to 6\.

\#include \<stdio.h\>  
int main()  
{  
    int a \= 5, b \= 6;  
    if(a\>b)  
    {  
        printf("true");  
    }printf("false");  
}

**Output:**

**false**

## **Logical Expressions in C**

Logical expressions in C are used to make decisions based on true or false values. They are typically used in conditional statements, loops, and control flow mechanisms. These expressions evaluate to either 1 (true) or 0 (false).

**Syntax of Logical Expressions**

expression1 operator expression2

Or for NOT:

\!expression

**Examples of Logical Expressions**

**1\. Logical AND (&&)**

Returns true only if both conditions are true.

int a \= 10, b \= 5;  
   
if (a \> 5 && b \< 10) {  
    *// True, because both conditions are true*

}

**2\. Logical OR (||)**

Returns true if at least one condition is true.

if (a \== 10 || b \== 0) {  
    *// True, because a \== 10 is true*

}

**3\. Logical NOT (\!)**

Reverses the truth value.

if (\!(a \< 5)) {  
    *// True, because a \< 5 is false, so \!false \= true*

}

**4\. Combining Logical and Relational Expressions**

Logical expressions often involve relational expressions like \>, \<, \==, etc.

if ((x \>= 10 && x \<= 20) || y \== 0) {  
    *// Do something if x is in \[10,20\] OR y is 0*

}

## **Conditional Expressions in C**

The conditional expression is a operator that takes three operands. The first operand is a boolean expression, and the second and third operands are values. Conditional operator, also known as the ternary operator.

**Syntax:**

expression1 ? expression2 : expression3;

**Example:**

\#include \<stdio.h\>  
void main()  
{  
    int a \= 8;  
    int b \= 7;  
    int c \= a \< b ? a \= b : b\++;  
    printf("%d", c);

}

**Output:**

7

## **Increment and Decrement Expressions**

In C programming, increment and decrement expressions are used to increase or decrease the value of a variable by one. These are unary operators, meaning they operate on a single operand.

**Example:**

int a \= 3;  
int b \= a\++ \+ 2;  *// b \= 5, a \= 4 (a is used first, then incremented)*  
 

int c \= \++a \+ 2;  *// a \= 5, then c \= 7 (a is incremented first)*

## **Operator Precedence**

In C, operator precedence defines the order in which operators are evaluated in an expression. Operators with higher precedence are executed before those with lower precedence.

**For example:**

int result \= 10 \+ 5 \* 2; *// result \= 10 \+ (5 \* 2\) \= 20*

Here, \* has higher precedence than \+, so multiplication occurs first.

If operators have the same precedence, associativity determines the direction of evaluation:

* Most operators are left-to-right  
* Assignment and unary operators are right-to-left

Use parentheses to clearly define the order and improve readability:

int result \= (10 \+ 5) \* 2; *// result \= 30*

Understanding precedence helps you avoid logic errors in complex expressions.

## **FAQs on Expressions in C**

**1\. What is an expression in C?**  
An expression in C is a valid combination of variables, constants, operators, or function calls that produces a value.

**2\. How is an expression different from a statement?**  
An expression evaluates to a value, while a statement performs an action. For example, assigning a value or calling a function is a statement.

**3\. What is operator precedence and why is it important?**  
Operator precedence defines the order in which operators are evaluated in an expression. It ensures that some operations are performed before others, unless parentheses are used to change the order.

**4\. What is associativity in expressions?**  
Associativity determines the direction in which operators of the same precedence are evaluated. Most operators are left-to-right associative, while a few like assignment are right-to-left.

**5\. Can expressions be combined?**  
Yes, different types of expressions can be combined to form more complex expressions, such as combining arithmetic with logical or relational expressions.

# Operator Precedence and Associativity in C

# **Operator Precedence and Associativity in C**

## **What is Operator Precedence?**

Operator precedence tells the compiler which operation to do first when there are multiple operators in an expression.

**Example:**

int result \= 10 \+ 2 \* 5;

You might think it adds **10 \+ 2** first, but actually it does **2 \* 5** first because **\*** (multiply) has higher precedence than **\+** (add).

So, the compiler evaluates it like this:

\= 10 \+ (2 \* 5)  
\= 10 \+ 10  
\= 20

## **What is Operator Associativity?**

When two operators have the same precedence, associativity decides which one to evaluate first – from left to right or right to left.

**Example:**

int result \= 20 / 5 \* 2;

Both / and \* have the same precedence. So C uses left-to-right associativity.

Calculation becomes:

\= (20 / 5) \* 2  
\= 4 \* 2  
\= 8

## **C Operator Precedence and Associativity Table**

Here’s a quick reference to common operators, ranked from highest to lowest precedence:

| Precedence | Operators | Associativity | Description |
| :---: | ----- | ----- | ----- |
| **1 (Highest)** | () \[\] . \-\> | Left to Right | Function calls, array subscripts, member access |
| **2** | \++ — \+ (unary) – \! \~ \* (pointer) & sizeof | Right to Left | Unary operators |
| **3** | \* / % | Left to Right | Multiplication, division, modulo |
| **4** | \+ – | Left to Right | Addition and subtraction |
| **5** | \<\< \>\> | Left to Right | Bitwise shift operators |
| **6** | \< \<= \> \>= | Left to Right | Relational operators |
| **7** | \== \!= | Left to Right | Equality operators |
| **8** | & | Left to Right | Bitwise AND |
| **9** | ^ | Left to Right | Bitwise XOR |
| **10** | | | Left to Right | Bitwise OR |
| **11** | && | Left to Right | Logical AND |
| **12** | || | Left to Right | Logical OR |
| **13** | ?: | Right to Left | Ternary operator |
| **14** | \= \+= \-= \*= /= %= &= ^= |= \<\<= \>\>= | Right to Left | Assignment operators |
| **15 (Lowest)** | , | Left to Right | Comma operator |

## **Examples of Operator Precedence and Associativity in C**

**Example 1: Mix of \+, , and \=**

int a \= 2 \+ 3 \* 4;

* The multiplication operator \* has higher precedence than addition \+.  
* So, the expression is evaluated like this: a \= 2 \+ (3 \* 4\) → a \= 2 \+ 12 → a \= 14  
* **Result:** a \= 14

**Example 2: Assignment Chaining**

int a, b, c;  
a \= b \= c \= 10;

* The assignment operator \= is right-associative.  
* This means it’s evaluated from right to left like this: c \= 10 → b \= c → a \= b  
* **Result:** All variables hold the same value: a \= 10, b \= 10, c \= 10

**Example 3: Ternary with Assignment**

int x \= 5, y \= 10;  
int max \= (x \> y) ? x : y;

* The ternary operator ?: checks the condition x \> y.  
* Since 5 \> 10 is false, the expression evaluates to y.  
* **Result:** max \= 10

**Example 4: Logical AND && vs. Bitwise AND &**

int a \= 5, b \= 0, c;  
 

c \= a && b;

* The && operator is a logical AND. It checks whether both a and b are non-zero.  
* Since a \= 5 (true) and b \= 0 (false), the result is false (0).  
* Logical operators return either 0 (false) or 1 (true).  
* **Result:** c \= 0

**Example 5: Mixed Bitwise and Equality Operators**

int x \= 6, y \= 4;

int result \= x & y \== 4;

* Bitwise AND & has lower precedence than \==.  
* So, the expression is evaluated as: x & (y \== 4\)  
* y \== 4 is true → evaluates to 1  
* Then x & 1 → 6 & 1 → 0 (since 0110 & 0001 \= 0000\)  
* **Result:** result \= 0

## **Common Pitfalls to Avoid**

**1\. Misunderstanding precedence:**

int result \= a \+ b \<\< 2; *// \+ has higher precedence than \<\<*

**2\. Forgetting parentheses:**

if (a & b \== 0) *// Wrong\!*

*// Should be: if ((a & b) \== 0\)*

**3\. Confusing assignment \= with comparison \==:**

if (a \= b) *// This assigns, not compares*

**Pro Tip: Use Parentheses for Clarity**

Even if you know precedence rules, adding parentheses makes your code easier to read and less error-prone.

*// Clearer version*

int a \= (2 \+ (3 \* 4));

# L Value and R Value in C Language with Examples

# **L Value and R Value in C Language with Examples**

In C programming, grasping the concepts of **lvalue** and **rvalue** is crucial for writing efficient and error-free code. These terms define how expressions are evaluated and how memory is accessed and manipulated. This tutorial aims to demonstrate the lvalues and rvalues in C, providing clear explanations, examples, and insights to enhance your understanding.​

## **What is an Lvalue?**

An lvalue (locator value) refers to an object that occupies an identifiable location in memory. In simpler terms, an lvalue has an address that can be accessed using the address-of operator (&). Lvalues can appear on the left or right side of an assignment.​

**Characteristics of Lvalues:**

* Have a persistent memory address.  
* Can appear on the left-hand side of an assignment.  
* Can be modified if not declared as const.​

**Examples of Lvalues:**

int x \= 30;     *// 'x' is an lvalue*  
x \= 20;         *// 'x' is on the left-hand side*

int \*p \= &x;    *// 'x' has an address*

In the above examples, x is an lvalue because it refers to a specific memory location.​

## **What is an Rvalue?**

An rvalue (read value) is a temporary value that does not have a persistent memory address. Rvalues are typically literals or the result of expressions and can only appear on the right-hand side of an assignment.​

advertisement

**Characteristics of Rvalues:**

* Do not have a persistent memory address.  
* Can appear only on the right-hand side of an assignment.  
* Cannot be assigned a value.​

**Examples of Rvalues:**

int x \= 40;     *// '40' is an rvalue*

int y \= x \+ 5;  *// 'x \+ 5' is an rvalue*

In these examples, 40 and x \+ 5 are rvalues because they do not refer to a specific memory location.​

## **Lvalue vs Rvalue: Key Differences**

| Aspect | Lvalue | Rvalue |
| :---: | ----- | ----- |
| **Memory Address** | Has a persistent address | No persistent address |
| **Assignment Position** | Can be on both sides | Only on the right-hand side |
| **Modifiability** | Modifiable (unless const) | Not directly modifiable |
| **Examples** | Variables, array elements | Literals, temporary expressions |

## **L Value and R Value Examples in C**

**Example 1: Assigning Quiz Score**

\#include \<stdio.h\>  
   
int main() {  
    int mcq \= 10;  
    int score;  
   
    score \= mcq \+ 5;  *// 'score' is L-value, 'mcq \+ 5' is R-value*  
   
    printf("Final score \= %d**\\n**", score);  *// Output: Final score \= 15*  
    return 0;

}

This C program shows how L-values and R-values work. It sets **mcq \= 10** and then adds 5 to it. The result, 15, is stored in score (an L-value). **mcq \+ 5** is an R-value because it’s a temporary value. The program prints: “Final score \= 15”.

**Example 2:**

\#include \<stdio.h\>  
   
int main() {  
    int quiz \= 8;  
    int bonus \= 2;  
   
    quiz \= quiz \+ bonus;  *// 'quiz' is L-value, 'quiz \+ bonus' is R-value*  
   
    printf("Updated quiz score \= %d**\\n**", quiz);  *// Output: 10*  
    return 0;

}

This C program shows how L-values and R-values are used in assignment. It sets **quiz \= 8** and **bonus \= 2**. The expression quiz \+ bonus (an R-value) adds them to get 10\. This value is stored back in quiz, which is an L-value. The program prints: “Updated quiz score \= 10”.

**Example 3: Illegal Assignment to R-value**

\#include \<stdio.h\>  
   
int main() {  
    int mcq \= 5;  
    (mcq \+ 2) \= 10;   *// Error: R-value on the left*  
    return 0;

}

This C program shows an invalid assignment. It sets **mcq \= 5** and then tries to assign **10 to (mcq \+ 2\)**. But **(mcq \+ 2\)** is an R-value a temporary result so it can’t be on the left side of an assignment. This causes a compile-time error. The program won’t run until the error is fixed.

**Example 4: Function Call with R-value**

\#include \<stdio.h\>  
   
void evaluate(int marks) {  
    printf("Marks: %d**\\n**", marks);  
}  
   
int main() {  
    int score \= 12;  
    evaluate(score);      *// L-value used as R-value (score passed by value)*  
    evaluate(score \+ 3);  *// R-value (expression) directly*  
    return 0;  
}

This C program shows how L-values and R-values are used in function calls. It defines a function **evaluate()** that prints the given marks. In **main()**, score \= 12 is passed to the function—score is an L-value used as an R-value. Then **score \+ 3**, an R-value (temporary result), is also passed.

**Example 5:**

\#include \<stdio.h\>  
   
int main() {  
    int quiz \= 7;  
    int \*ptr \= &quiz;  *// Valid: 'quiz' is L-value*  
   
    printf("Address of quiz \= %p**\\n**", (void\*)ptr);  
    return 0;

}

This C program shows how to use an L-value with a pointer. It sets **quiz \= 7** and creates a pointer **ptr** that stores the address of **quiz**. Since quiz is an L-value, it has a valid memory address. The program then prints the address of quiz using the pointer, and ends.

**Example 6: Invalid Address of R-value**

\#include \<stdio.h\>  
   
int main() {  
    int \*ptr \= &(3 \+ 4);  *// Error: cannot take address of R-value*  
    return 0;

}

## **Common Misconceptions**

**Misconception 1: All variables are lvalues.**

While most variables are lvalues, certain expressions involving variables can result in rvalues. For example, the result of a function returning a non-reference type is an rvalue.​

**Misconception 2: Rvalues cannot be assigned.**

Rvalues can be assigned to lvalues, but rvalues themselves cannot be assigned a value. For instance, x \= 5; is valid, but 5 \= x; is invalid because 5 is an rvalue.​

# Difference between Expression and Statement in C

# **Difference between Expression and Statement in C**

In C programming, expressions and statements are two fundamental concepts, but they serve different purposes.

## **What is an Expression in C?**

An expression in C is any valid combination of variables, constants, operators, and function calls that produces a value.

Think of it like a math equation. You’re calculating something and expecting a result.

**Example:**

a \+ b

This is an expression. It adds the value of a and b and gives you a result. But on its own, it doesn’t do anything unless you use it in a statement.

x \= 5    *// Here, 'x \= 5' is also an expression. It assigns 5 to x and returns 5\.*

x \* y \+ 10  *// Multiplies x and y, adds 10\.*

Expressions are used inside statements.

## **What is a Statement in C?**

A statement in C is a complete instruction that tells the computer to perform an action. It ends with a semicolon (;).

In simple words, a statement is like a command or task.

**Example:**

x \= a \+ b;

This is a statement. It tells the computer to add a and b, and store the result in x.

**Types of Statements:**

* Expression statement – like x \= 5;  
* Declaration statement – like int a;  
* Control statement – like if, while, for, etc.  
* Compound statement – a group of statements inside { }

## **Key Differences Between Expression and Statement in C**

Here’s a comparison table highlighting the key differences between Expression and Statement in C.

| Feature | Expression | Statement |
| :---: | ----- | ----- |
| **Definition** | A combination of variables, constants, and operators that evaluates to a value. | A complete instruction that performs an action. |
| **Result** | Always returns a value. | May or may not return a value. |
| **Usage** | Can be part of a statement. | Can contain expressions or be a control structure. |
| **Assignment** | Can be assigned to a variable. Example: x \= a \+ b; | Cannot be directly assigned to a variable. |
| **Examples** | a \+ b, x \* y, 10 / 2 | if, while, return, x \= 5; |
| **Purpose** | Used to compute values. | Used to perform actions or control flow. |
| **Syntax Requirement** | No semicolon needed when used within a statement. | Usually ends with a semicolon (except blocks and control structures). |
| **Independence** | Cannot stand alone as a line of code. | Can stand alone as a complete instruction. |
| **Function Calls** | Treated as an expression when used in another expression, e.g., y \= pow(2, 3); | Treated as a statement when used alone, e.g., pow(2, 3); |

**Simple Code Example in C**

\#include \<stdio.h\>  
   
int main() {  
    int a \= 10, b \= 20;  
    int sum;  
   
    sum \= a \+ b;      *// 'a \+ b' is an expression, 'sum \= a \+ b;' is a statement*  
    printf("%d**\\n**", sum); *// This is another statement*  
   
    return 0;

}

This C program adds two numbers and prints the result. It starts by including the standard input-output library. Inside the **main()** function, two integers a and b are given values 10 and 20\. Their sum is stored in the variable sum. The **printf()** function then displays the sum, which is 30\. The program ends with return 0;, showing that it ran successfully.

## **Side Effects, Expression Statements, and Null Statements in C**

**1\. Side Effects in Expressions:**

Some expressions, like assignment (x \= 5), can have side effects. An expression that changes the state of variables is a typical side effect. For example:

x \= 5;  *// Expression with a side effect (it changes the value of x)*

**2\. Expression Statements:**

Expressions can be used as statements on their own. For example, a function call is an expression but can be used as a statement:

printf("Hello, World\!");  *// Expression statement*

**3\. Null Statement:**

The null statement (a semicolon ; alone) is a valid statement in C, but it does nothing. It’s typically used when a statement is syntactically required, but no action is needed:

for (int i \= 0; i \< 10; i\++)

    ;  *// Null statement, does nothing but is syntactically correct*

**4\. Common Mistakes:**

A typical mistake is confusing an expression with a statement, especially when semicolons are missing or incorrectly placed.

# Identifiers in C

# **Identifiers in C**

Identifiers are names for variables, functions, arrays, and other parts of a C program. They help make the code clear and easy to understand. This article explains what identifiers are, how to name them, and why they are important. It also shows common mistakes and how to avoid them. With simple explanations and useful examples, you will learn to use identifiers correctly in C programming.

**Contents:**

1. What are Identifiers in C?  
2. Rules for Naming Identifiers in C  
3. Examples of Identifiers in C  
4. Differences Between Identifiers and Keywords in C  
5. Types of Identifiers in C  
6. Scope of Identifiers in C  
7. Lifetime of Identifiers in C  
8. Best Practices for Naming Identifiers in C  
9. FAQs on Identifiers in C

## **What are Identifiers in C?**

An identifier in C is the name used to identify variables, functions, arrays, or other user-defined entities. It is a symbolic name assigned to program elements to refer to them in the code.

**Syntax:**

\<datatype\> identifier\_name;

## **Rules for Naming Identifiers in C**

* Must begin with a letter (A-Z or a-z) or an underscore (\_).  
* Can be followed by letters, digits (0-9), or underscores.  
* Cannot be a C keyword (e.g., **int**, **return**, etc.).  
* Case-sensitive (e.g., **score** and **Score** are different).  
* Avoid very short names unless used in loops (e.g., i, j, k).  
* No special characters allowed except the underscore (**\_**).  
* No spaces allowed (**myVariable** is valid, but **my Variable** is not).  
* Use meaningful names for clarity, such as totalMarks instead of tm.  
* Maintain a consistent naming convention, such as camelCase (totalMarks) or snake\_case (total\_marks).

## **Examples of Identifiers in C**

**Valid Identifiers Examples:**

int lcbcScore;    *// Variable to store score*  
float averageMarks;     *// Variable for marks*  
char studentName\[50\];   *// Array to store student name*  
void displayResult();   *// Function to display result*

**Invalid Identifiers Examples:**

int 123marks;         *// Cannot start with a digit*  
float avg\-score;      *// Hyphens not allowed*  
char return;          *// Cannot use keywords*

**Example 1:**

\#include \<stdio.h\>  
   
int main()  
{  
    int quizScore \= 90;          *// Valid identifier*  
    float lcbcPercentage \= 95.5;   
   
    printf("Quiz Score: %d**\\n**", quizScore);  
    printf("lcbc Percentage: %.2f**\\n**", lcbcPercentage);  
   
    return 0;

}

**Output:**

Quiz Score: 90

lcbc Percentage: 95.50

The program creates two variables: **quizScore** (a whole number) and **lcbcPercentage** (a decimal number). It then shows their values on the screen using **printf()**. The **%d** prints the whole number, and **%.2f** prints the decimal with two places. The program finishes with **return 0;**, meaning it ran successfully.

**Example 2:**

\#include \<stdio.h\>  
   
*// Function to calculate internship stipend*  
int calculateStipend(int codingHours, int quizScore)  
{  
    int stipend \= (codingHours \* 50) \+ (quizScore \* 20);  
    return stipend;  
}  
   
int main() {  
    int codingHours \= 30;    *// Valid identifier*  
    int quizScore \= 90;      *// Valid identifier*  
   
    int totalStipend \= calculateStipend(codingHours, quizScore);  
   
    printf("Coding Hours: %d**\\n**", codingHours);  
    printf("Quiz Score: %d**\\n**", quizScore);  
    printf("Total Stipend: %d**\\n**", totalStipend);  
   
    return 0;

}

**Output:**

Coding Hours: 30  
Quiz Score: 90

Total Stipend: 3300

The program calculates an internship stipend based on coding hours and quiz scores. The **calculateStipend()** function multiplies **codingHours** by 50 and **quizScore** by 20, then adds both values. In main(), **codingHours** is set to 30 and **quizScore** to 90\. The function returns the total stipend, which is displayed using **printf()**. The program ends with **return 0;**, meaning it ran successfully.

## **Differences Between Identifiers and Keywords in C**

Here is the comparison table between identifiers and keywords in C are:

| Feature | Identifiers | Keywords |
| :---: | ----- | ----- |
| **Definition** | Identifiers are names assigned to variables, functions, arrays, etc. | Keywords are predefined reserved words in C with special meanings. |
| **Purpose** | Used to uniquely name program elements. | Used to define the syntax and structure of the C language. |
| **User-defined?** | Yes, programmers define identifiers. | No, keywords are predefined by the C language. |
| **Can be modified?** | Yes, programmers can change them. | No, their meanings stay fixed. |
| **Examples** | age, totalMarks, sum | int, float, while, return |
| **Case Sensitivity** | Case-sensitive (Sum and sum are different). | Also case-sensitive (Int is not the same as int). |
| **Rules for Naming** | Can contain letters, digits, and underscores (\_). Cannot start with a digit. Cannot be a keyword. | Fixed by the language. Cannot be used as an identifier. |
| **Total Count** | Unlimited (depends on the program’s needs). | Limited (C has a fixed number of keywords, e.g., 32 in C89). |
| **Usage in Program** | Can be used to define variables, functions, arrays, etc. | Used to define program structure and control flow. |

## **Types of Identifiers in C**

In C, identifiers refer to the names assigned to various program elements like variables, functions, arrays, and structures. Identifiers can be classified based on their scope, lifetime, and purpose.

1. **Variables:** Store data values of a specific type.

int marks;       *// Integer variable*

2. float percentage; *// Floating-point variable***Functions**: Perform tasks and can be user-defined or built-in.

void displayResult() {  
    printf("lcbc Results Published**\\n**");

3. }**Arrays**: Hold multiple values of the same data type.  
4. int lcbcScores\[5\] \= {90, 85, 88, 92, 95};**Structures**: Group different data types under one name.

struct lcbcStudent {  
    char name\[50\];  
    int id;  
    float score;

5. };**Pointers**: Store memory addresses of variables.

int marks \= 100;

6. int \*ptr \= &marks;**Constants**: Hold fixed values that do not change.

\#define MAX\_MARKS 100

7. const float PI \= 3.14;**Macros**: Define reusable code snippets or constants.  
8. \#define lcbc 1**Labels:** Control program flow using goto.

goto label;  
label:

    printf("Welcome to lcbc Quiz\!**\\n**");

## **Scope of Identifiers in C**

The scope of an identifier determines where it can be accessed or modified in the program. There are four types:

**1\. Local Scope**  
Variables declared inside a function or block are only accessible within that function or block.

**Example:**

\#include \<stdio.h\>  
   
void lcbcQuiz() {  
    int score \= 90;  *// Local variable*  
    printf("lcbc Score: %d**\\n**", score);  
}  
   
int main() {  
    lcbcQuiz();  
    *// printf("%d", score);  // Error: score is not accessible here*  
    return 0;

}

**Output:**

lcbc Score: 90

**2\. Global Scope**

Variables declared outside any function or block are accessible throughout the program.

**Example:**

\#include \<stdio.h\>  
   
int totalParticipants \= 100;  *// Global variable*  
   
void lcbcResults() {  
    printf("Total Participants: %d**\\n**", totalParticipants);  
}  
   
int main() {  
    lcbcResults();  
    printf("Participants confirmed: %d**\\n**", totalParticipants);  
    return 0;

}

**Output:**

Total Participants: 100

Participants confirmed: 100

**3\. Function Scope**

Variables declared inside a function are only accessible within that function.

**Example:**

\#include \<stdio.h\>  
   
void lcbcPractice(int attempts) {  
    int maxAttempts \= 3;  *// Function scope*  
    if (attempts \< maxAttempts) {  
        printf("Try Again\!**\\n**");  
    } else {  
        printf("Max Attempts Reached**\\n**");  
    }

}

**Output:**

Try Again\!

Max Attempts Reached

**4\. File Scope**

Variables declared with static outside any function retain their value between function calls but are accessible only within the same file.

**Example:**

\#include \<stdio.h\>  
   
static int lcbcID \= 101;  *// File scope*  
   
void displayID() {  
    printf("lcbc ID: %d**\\n**", lcbcID);

}

**Output:**

lcbc ID: 101

## **Lifetime of Identifiers in C**

The lifetime of an identifier defines how long a variable remains in memory during program execution. There are three types:

**1\. Automatic (auto) Variables**  
Variables declared inside a block with auto (default) are automatically destroyed when the block is exited.

**Example:**

\#include \<stdio.h\>  
   
void lcbcSession()  
{  
    auto int session \= 1;  
    printf("lcbc Session %d**\\n**", session);

}

**Output:**

lcbc Session 1

The program has a function called **lcbcSession()**. Inside, it creates a number variable session and sets it to 1\. The **printf()** function shows “**lcbc Session 1**” on the screen. The auto keyword is used, but it is not needed because local variables are automatic.

**2\. Static Variables**

Variables declared with static retain their value between multiple function calls.

**Example:**

\#include \<stdio.h\>  
   
void lcbcCounter() {  
    static int count \= 0;  *// Static variable*  
    count\++;  
    printf("Attempt %d**\\n**", count);  
}  
   
int main() {  
    lcbcCounter();  
    lcbcCounter();  
    lcbcCounter();  
    return 0;

}

**Output:**

Attempt 1  
Attempt 2

Attempt 3

The program has a function called **lcbcCounter()**. Inside, it creates a static number count and sets it to 0\. Each time the function runs, count increases by 1\. The **printf()** function shows “Attempt 1”, “Attempt 2”, and “Attempt 3” on the screen. The static keyword keeps the value even after the function ends.

**3\. Dynamic Variables**

Memory allocated using malloc() or calloc() remains in memory until explicitly freed using free().

**Example:**

\#include \<stdio.h\>  
\#include \<stdlib.h\>  
   
int main() {  
    int \*score \= (int \*)malloc(sizeof(int));  
    \*score \= 95;  
    printf("lcbc Quiz Score: %d**\\n**", \*score);  
    free(score);  
    return 0;

}

**Output:**

lcbc Quiz Score: 95

The program creates a number variable **score** using dynamic memory allocation with **malloc()**. It assigns 95 to score and prints “**lcbc Quiz Score: 95**” on the screen. The **free()** function releases the memory after use. This helps manage memory efficiently.

## **Best Practices for Naming Identifiers in C**

1. **Use Meaningful Names:** Choose names that describe the purpose of the variable, function, or constant.

int studentCount;  *// Good*

2. int sc;            *// Avoid***Follow Naming Conventions:** Use camelCase for variables and functions and use PascalCase for structures and constants.

int totalMarks;         *// Variable*

3. float calculateGrade(); *// Function***Avoid Single Character Names (Unless Loop Variables):** Use single characters like i, j, and k only for loop counters or temporary variables.

for (int i \= 0; i \< 10; i\++) {  
    printf("%d**\\n**", i);

4. }**Start with a Letter or Underscore:** Identifiers should begin with a letter (A-Z, a-z) or an underscore (\_).

int \_tempValue;   *// Valid*

5. int 1value;       *// Invalid***Avoid Reserved Keywords:** Do not use C language reserved keywords as identifiers.  
6. int int;  *// Invalid***Be Consistent with Case:** C is case-sensitive, so be consistent with uppercase and lowercase letters.

int lcbcQuiz;  *// Valid*

7. int lcbcQuiz;  *// Different identifier***Use Constants for Fixed Values:** Use \#define or const to define constant values.

\#define MAX\_SCORE 100

const float PI \= 3.14;

## **FAQs on Identifiers in C**

**1\. What is an identifier in C?**  
An identifier is the name of a variable, function, array, or other user-defined item. It helps to identify them in a program.

**2\. Can an identifier start with a number?**  
No, it cannot start with a number. For example, 1variable is wrong, but variable1 is correct.

**3\. Are identifiers case-sensitive in C?**  
Yes, they are. For example, Age and age are different names in C.

**4\. Can we use special characters in identifiers?**  
No, you cannot use \*\*@, $, %, or \*\*\* in identifiers. Only letters, numbers, and underscores are allowed.

**5\. How long can an identifier be in C?**  
Most compilers allow up to 31 characters for uniqueness, but longer names help readability.

**6\. Can we use underscores in identifiers?**  
Yes, underscores are allowed. They are often used to separate words, like max\_value.

**7\. Why should we follow naming conventions?**  
Good names make code easier to read and understand. For example, totalSalary is better than x.

## **Key Points to Remember**

Here is the list of key points we need to remember about “Identifiers in C”.

* Identifiers are names for variables, functions, and other parts of a C program to make the code easy to understand.  
* An identifier must start with a letter (A-Z or a-z) or an underscore (\_) and can only have letters, numbers, and underscores.  
* Identifiers are created by programmers, but keywords are special words in C that have fixed meanings and cannot be used as names.  
* Identifiers include variables, functions, arrays, and structures, each used for different tasks in a program.  
* The lifetime of an identifier depends on how it is created—some exist only for a short time, while others stay in memory longer.  
* Identifiers have different scopes, meaning they can be used in a small part of the program or throughout the whole program.  
* Common mistakes include using spaces, starting with a number, using special symbols, or choosing a keyword as a name.  
* Good practices include using clear and meaningful names, following naming rules, avoiding keywords, and keeping names consistent.

# Escape Sequences in C

# **Escape Sequences in C**

In this tutorial, you will learn about **escape sequences** in C programming. We’ll explain what they are, why programmers use them, and how to apply them in your code. You will also explore different types, such as **\\n, \\t, \\\\, \\”**, and more. These sequences help format output and control special characters within strings.

**What is an Escape Sequence in C?**

An escape sequence in C is a way to show special characters that you can’t type directly in a string. It starts with a backslash (\\), followed by another character that tells C what to do.

**Common Escape Sequences in C:**

| Escape Sequence | Meaning |
| :---: | ----- |
| **\\n** | New line |
| **\\t** | Horizontal tab |
| **\\\\** | Backslash (\\) |
| **\\”** | Double quote (“) |
| **\\’** | Single quote (‘) |
| **\\a** | Alert (bell sound) |
| **\\b** | Backspace |
| **\\t** | Tabspace |
| **\\r** | Carriage return |
| **\\f** | Form feed |
| **\\v** | Vertical tab |
| **\\0** | Null character |
| **\\nnn** | Octal Number |
| **\\xhh** | Hexadecimal Number |

## **Examples of Escape Sequences**

**Example 1: Newline (\\n)**

\#include \<stdio.h\>  
   
int main()  
{  
    printf("C**\\n**Programming");  
    return 0;

}

**Output:**

C

Programming

\\n moves the cursor to the next line after “C”.

**Example 2: Tab (\\t)**

\#include \<stdio.h\>  
   
int main()  
{  
    printf("Name**\\t**Subject**\\t**Score**\\n**Divya**\\t**Java**\\t**85");  
    return 0;

}

**Output:**

Name    Subject    Score  
John    Divya    85

**\\t** adds a horizontal space like the Tab key.

**Example 3: Double Quote (\\”)**

\#include \<stdio.h\>  
   
int main() {  
    printf("She said, **\\"**I love C programming\!**\\"**");  
    return 0;  
}

**Output:**

She said, "I love C programming\!"

**\\”** allows us to include double quotes inside a string.

**Example 4: Backslash (\\\\)**

\#include \<stdio.h\>  
   
int main() {  
    printf("Path: C:**\\\\**Program Files**\\\\**C");  
    return 0;

}

**Output:**

Path: C:\\Program Files\\C

**\\\\** is used to print a single backslash.

**Example 5: Alert (\\a)**

Produces a beep sound or alerts (if supported by system).

\#include \<stdio.h\>  
   
int main() {  
    printf("**\\a**Alert Triggered");  
    return 0;  
}

**Output:** Displays Alert Triggered and beeps.

**Example 6: \\r – Carriage Return**

Returns the cursor to the beginning of the current line, and overwrites from there.

\#include \<stdio.h\>  
int main()  
{  
    printf("lcbcollege**\\r**Quiz");  
    return 0;  
}

**Output:**

Quizollege

“Quiz” replaces “lcbc” from “lcbcollege”

**Example 7: \\f – Form Feed**

Advances the cursor to the next page. Often has no visible effect on modern terminals.

\#include \<stdio.h\>  
int main()  
{  
    printf("lcbcollege**\\f**C Language");  
    return 0;

}

**Output:**

Lcbcollege  
          C Language

**Example 8: \\0 – Null Character**

\#include \<stdio.h\>  
   
int main() {  
    char str\[\] \= "C**\\0**Programming";  
    printf("%s", str);  
    return 0;  
}

**Output:**

C

Everything after \\0 is ignored when printing.

## **Trigraphs**

Trigraphs are all three-lettered characters, all begin with ?? (double question marks) followed by a character, represent some other character. Basically, they are used to complement a Character Set lacking for some characters. For example:

??( represent \[  
??) represent \]

# Control Statements in C

# **Control Statements in C**

In C programming, control statements help decide how the program runs. They allow the program to make choices, repeat actions, or jump to different parts of the code. These statements make programs more useful by adding decision-making and loops. There are three main types of control statements: decision-making statements (if, if-else, switch), looping statements (for, while, do-while), and jump statements (break, continue, goto, return). Learning these statements will help you write better and more flexible C programs.

**Contents:**

1. What are Control Statements in C?  
2. Types of Control Statements in C  
3. if Statement in C  
4. if-else Statement in C  
5. else-if Ladder in C  
6. nested if Statement in C  
7. Switch Statement in C  
8. Looping Statements in C  
9. Jump Statements in C  
10. Comparison of Jump Statements in C  
11. FAQs on Control Statements in C

## **What are Control Statements in C?**

Control statements in C are used to control the flow of execution of a program based on certain conditions or loops. They help in making decisions, repeating a set of instructions, or jumping to specific parts of the program.

## **Types of Control Statements in C**

Control statements in C regulate the execution flow of a program. They are categorized into three main types:

**1\. Decision-Making Statements**

These statements evaluate conditions and execute code accordingly.

* if statement  
* if-else statement  
* else-if ladder  
* switch statement

**2\. Looping Statements (Iteration Statements)**

These statements allow the execution of a block of code multiple times.

* for loop  
* while loop  
* do-while loop

**3\. Jump Statements**

These statements are used to transfer control from one part of the program to another.

* break (terminates a loop or switch statement)  
* continue (skips the current iteration of a loop)  
* goto (jumps to a labeled statement)  
* return (exits from a function and returns a value)

## **if Statement in C**

The if statement is used to execute a block of code when a given condition is true.

**Syntax:**

if (condition) {  
    *// Code executes if condition is true*

}

**Example:**

\#include \<stdio.h\>  
   
int main()  
{  
    int score \= 85;    
   
    if (score \>= 50) {    
        printf("Congratulations\! You have passed the lcbcollege C Quiz.**\\n**");  
    }  
   
    return 0;

}

**Output:**

Congratulations\! You have passed the lcbcollege C Quiz.

This C program checks if a score is 50 or higher. If true, it prints a success message. The if statement controls this check. Since the score is 85, the message is displayed. If the score were lower, nothing would print. The program ends with return 0\.

## **if-else Statement in C**

The if-else statement allows a program to execute one block of code when a condition is true and another block when it is false.

**Syntax:**

if (condition) {  
    *// Code executes if condition is true*  
} else {  
    *// Code executes if condition is false*

}

**Example:**

\#include \<stdio.h\>  
   
int main()  
{  
    int score;  
   
    printf("Enter your lcbcollege quiz score: ");  
    scanf("%d", &score);  
   
    if (score \>= 50) {    
        printf("Congratulations\! You have passed the lcbcollege quiz.**\\n**");  
    } else {    
        printf("Sorry\! You have failed the lcbcollege quiz. Try again\!**\\n**");  
    }  
   
    return 0;

}

**Input:**

Enter your lcbcollege quiz score: 40

**Output:**

Sorry\! You have failed the lcbcollege quiz. Try again\!

This program asks for a quiz score and checks if it is 50 or more. If it is, it prints a message saying you passed. If the score is less than 50, it prints a message saying you failed. The **if-else statement** decides which message to show. After that, the program ends.

## **else-if Ladder in C**

The else-if ladder in C is used when multiple conditions need to be checked sequentially. It allows the program to test several conditions one by one and execute the corresponding block of code when a condition is true. If none of the conditions are true, the else block executes.

**Syntax:**

if (condition1) {  
    *// Code executes if condition1 is true*  
} else if (condition2) {  
    *// Code executes if condition2 is true*  
} else if (condition3) {  
    *// Code executes if condition3 is true*  
} else {  
    *// Code executes if all conditions are false*

}

**Example:**

\#include \<stdio.h\>  
   
int main()  
{  
    int marks;  
   
    printf("Enter your marks in the lcbcollege exam: ");  
    scanf("%d", &marks);  
   
    if (marks \>= 90) {  
        printf("Grade: A+ (Outstanding Performance\!)**\\n**");  
    } else if (marks \>= 80) {  
        printf("Grade: A (Excellent Work\!)**\\n**");  
    } else if (marks \>= 70) {  
        printf("Grade: B (Good Job\!)**\\n**");  
    } else if (marks \>= 60) {  
        printf("Grade: C (Satisfactory, but needs improvement.)**\\n**");  
    } else if (marks \>= 50) {  
        printf("Grade: D (Just Passed, work harder.)**\\n**");  
    } else {  
        printf("Grade: F (Failed\! Better luck next time.)**\\n**");  
    }  
   
    return 0;

}

**Input:**

Enter your marks in the lcbcollege exam: 75

**Output:**

Grade: B (Good Job\!)

This program takes the user’s marks as input and assigns a grade based on the score. It uses an i**f-else if-else** structure to check the marks and display the corresponding grade. Higher marks get better grades, while lower marks result in a lower grade or failure. The program helps the user know their performance.

## **nested if Statement in C**

A nested if statement is an if statement inside another if statement. It is used when multiple conditions need to be checked in a hierarchical manner.

**Syntax**

if (condition1) {  
    *// Executes if condition1 is true*  
    if (condition2) {  
        *// Executes if condition2 is also true*  
    }

}

The inner if statement runs only when the outer if condition is true. Multiple if statements can be nested within each other to check additional conditions.

**Example:**

\#include \<stdio.h\>  
   
int main()  
{  
    int score;  
   
    printf("Enter your lcbcollege quiz score (out of 100): ");  
    scanf("%d", &score);  
   
    if (score \>= 50) {    
        if (score \>= 80) {    
            printf("Excellent\! You are a quiz master\!**\\n**");  
        } else {  
            printf("Good job\! You passed the quiz.**\\n**");  
        }  
    } else {  
        printf("You failed the quiz. Try again\!**\\n**");  
    }  
   
    return 0;

}

**Input 1:**

Enter your lcbcollege quiz score (out of 100): 85

**Output 1:**

Excellent\! You are a quiz master\!

**Input 2:**

Enter your lcbcollege quiz score (out of 100): 65

**Output 2:**

Good job\! You passed the quiz.

**Input 3:**

Enter your lcbcollege quiz score (out of 100): 40

**Output 3:**

You failed the quiz. Try again\!

This program asks the user to enter their quiz score. If the score is 50 or more, they pass. If it is 80 or more, they get an “Excellent\!” message. If it is between 50 and 79, they get a “Good job\!” message. If the score is below 50, they fail. This program gives clear feedback based on the user’s score.

## **Switch Statement in C**

The switch statement allows a variable to be tested for equality against multiple values (cases). It is an alternative to using multiple if-else statements.

**Syntax:**

switch (expression) {  
    case value1:  
        *// Code to execute if expression \== value1*  
        **break**;  
    case value2:  
        *// Code to execute if expression \== value2*  
        **break**;  
    default:  
        *// Code to execute if no case matches*

}

**Example:**

\#include \<stdio.h\>  
   
int main()  
{  
    char subject;  
   
    printf("Select a subject (C \- C Programming, D \- Data Structures, O \- Operating Systems): ");  
    scanf(" %c", &subject);  
   
    switch (subject)  
    {  
        case 'C':  
            printf("You selected C Programming.**\\n**");  
            **break**;  
        case 'D':  
            printf("You selected Data Structures.**\\n**");  
            **break**;  
        case 'O':  
            printf("You selected Operating Systems.**\\n**");  
            **break**;  
        default:  
            printf("Invalid selection\! Please enter C, D, or O.**\\n**");  
    }  
   
    return 0;

}

**Input 1:**

Select a subject (C \- C Programming, D \- Data Structures, O \- Operating Systems): D

**Output 1:**

You selected Data Structures.

**Input 2:**

Select a subject (C \- C Programming, D \- Data Structures, O \- Operating Systems): X

**Output 2:**

Invalid selection\! Please enter C, D, or O.

This program asks the user to choose a subject by entering a letter: ‘C’ for C Programming, ‘D’ for Data Structures, or ‘O’ for Operating Systems. The program then displays the selected subject. If the user enters any other letter, it shows an error message. The switch statement makes the program easy to read and manage.

## **Looping Statements in C**

Looping statements in C are used to execute a block of code multiple times until a specified condition is met. They help in reducing code redundancy and improving efficiency.

**1\. for Loop**

**Syntax:**

for(initialization; condition; update) {  
    *// Code to be executed*

}

**Example:**

\#include \<stdio.h\>  
   
int main() {  
    char options\[4\] \= {'A', 'B', 'C', 'D'};  
   
    printf("lcbcollege Quiz Options:**\\n**");  
    for(int i \= 0; i \< 4; i\++) {  
        printf("%c) Option %d**\\n**", options\[i\], i \+ 1);  
    }  
   
    return 0;  
}

**Output:**

lcbcollege Quiz Options:    
A) Option 1    
B) Option 2    
C) Option 3  
D) Option 4

**2\. while Loop**

**Syntax:**

while(condition) {  
    *// Code to be executed*  
}

**Example:**

\#include \<stdio.h\>  
   
int main()  
{  
    int timer \= 5;  
   
    printf("You have %d seconds to submit your answer\!**\\n**", timer);  
    while(timer \> 0) {  
        printf("Time left: %d seconds**\\n**", timer);  
        timer\--;  
    }  
   
    printf("Time’s up\! Submitting your last saved answer...**\\n**");  
   
    return 0;

}

**Output:**

You have 5 seconds to submit your answer\!    
Time left: 5 seconds    
Time left: 4 seconds    
Time left: 3 seconds    
Time left: 2 seconds    
Time left: 1 seconds    
Time’s up\! Submitting your last saved answer...

## **Jump Statements in C**

Jump statements in C are used to transfer control from one point to another in a program. These statements allow programmers to skip certain parts of the code, exit loops, or switch execution flow.

**Types of Jump Statements:**

**1\. break Statement in C**

**Syntax:**

**break**;

**Example: Ending a quiz when a wrong answer is selected**

\#include \<stdio.h\>  
   
int main() {  
    int answers\[\] \= {1, 1, 0, 1}; *// 0 means wrong answer*  
    int i;  
   
    for(i \= 0; i \< 4; i\++) {  
        printf("Question %d: ", i \+ 1);  
   
        if (answers\[i\] \== 0) {  
            printf("Wrong Answer\! Ending quiz.**\\n**");  
            **break**;  
        } else {  
            printf("Correct Answer\!**\\n**");  
        }  
    }  
   
    return 0;

}

**Output:**

Question 1: Correct Answer\!    
Question 2: Correct Answer\!    
Question 3: Wrong Answer\! Ending quiz.

**2\. continue Statement in C**

**Syntax:**

continue;

**Example: Skipping a question if it’s marked “unattempted”**

\#include \<stdio.h\>  
   
int main()  
{  
    int answers\[\] \= {1, \-1, 1, \-1}; *// \-1 means unattempted question*  
   
    for(int i \= 0; i \< 4; i\++) {  
        if (answers\[i\] \== \-1) {  
            printf("Question %d was skipped.**\\n**", i \+ 1);  
            continue;  
        }  
        printf("Question %d: Answered correctly\!**\\n**", i \+ 1);  
    }  
   
    return 0;

}

**Output:**

Question 1: Answered correctly\!    
Question 2 was skipped.    
Question 3: Answered correctly\!    
Question 4 was skipped.

**3\. goto Statement in C**

**Syntax:**

goto label;  
……  
label:

**Example: Jumping to the end if a wrong answer is given**

\#include \<stdio.h\>  
   
int main() {  
    int answer;  
   
    printf("Enter your answer (1 for correct, 0 for wrong): ");  
    scanf("%d", &answer);  
   
    if (answer \== 0) {  
        goto wrongAnswer;  
    }  
   
    printf("Correct Answer\! Proceeding to the next question.**\\n**");  
   
    return 0;  
   
wrongAnswer:  
    printf("Wrong Answer\! Try again next time.**\\n**");  
   
    return 0;  
}

**Input & Output Example:**

Enter your answer (1 for correct, 0 for wrong): 0    
Wrong Answer\! Try again next time.

**4\. return Statement in C**

\#include \<stdio.h\>  
   
int getNumber() {  
    return 10;  *// Returning a value*  
}  
   
int main() {  
    int num \= getNumber();    
    printf("The number is: %d**\\n**", num);  
    return 0;  
}

**Output:**

The number is: 10

## **Comparison of Jump Statements in C**

| Jump Statement | Purpose | Effect on Control Flow |
| :---: | ----- | ----- |
| **break** | Exits a loop or switch statement | Stops execution of the current loop or switch and moves to the next statement outside it |
| **continue** | Skips the rest of the current loop iteration | Jumps to the next iteration without executing remaining statements in the loop body |
| **goto** | Jumps to a labeled statement in the program | Causes an unconditional jump, which can make code harder to read and debug |
| **return** | Exits a function and optionally returns a value | Ends function execution and transfers control back to the calling function |

## **FAQs on Control Statements in C**

**1\. What are control statements in C?**  
Control statements in C are used to control the flow of execution in a program. They help in decision-making, looping, and jumping within the code.

**2\. What are the types of control statements in C?**

Control statements in C are categorized into three types:

* Decision-Making Statements: if, if-else, nested if, switch  
* Looping Statements: for, while, do-while  
* Jump Statements: break, continue, goto, return

**3\. What is the purpose of decision-making statements?**  
Decision-making statements help a program choose what to do based on conditions. The if statement runs code only if a condition is true. The if-else statement picks between two choices. The switch statement checks a variable against many fixed values.

**4\. What is the difference between if-else and switch?**  
The if-else statement is flexible and works with complex conditions. The switch statement is better when checking a variable against many fixed values.

**5\. Why is the goto statement discouraged in C?**  
The goto statement is not recommended because it makes code hard to read. But it can be helpful in rare cases, like exiting deep loops.

**6\. How does the return statement work?**  
The return statement ends a function and can send a value back. In main(), it stops the program.

**7\. What happens if break is missing in a switch statement?**  
If a break is missing in a switch case, the program continues to the next case, which may cause errors. This is called “fall-through”.

## **Key Points to Remember**

Here is the list of key points we need to remember about “Control Statements in C”.

* Control Statements in C help regulate the program flow by making decisions, looping through code, or jumping between sections.  
* Decision-Making Statements include if, if-else, else-if ladder, and switch, allowing the program to execute specific code based on conditions.  
* Looping Statements (for, while, do-while) repeat a block of code until a condition is met, improving efficiency and reducing redundancy.  
* Jump Statements (break, continue, goto, return) control the program flow by skipping, exiting loops, or jumping to specific locations.  
* The if Statement executes a block of code only if a given condition is true, while if-else allows different actions for true and false conditions.  
* The switch Statement provides an efficient way to handle multiple conditions without using multiple if-else statements.  
* Looping Statements execute code multiple times, with for being best for fixed iterations, while for unknown repetitions, and do-while ensuring at least one execution.

# Recursion in C

# **Recursion in C**

In this tutorial, you will learn about recursion in C. A recursive function calls itself to solve a problem. It is useful for tasks like factorials and Fibonacci numbers. Every recursive function needs a stopping point to avoid infinite loops. Let’s see how it works\!

**Contents:**

1. What is Recursion in C?  
2. How Recursion Works in C  
3. Base Case and Recursive Case in C  
4. Fibonacci Series Using Recursion in C  
5. Sum of Natural Numbers Using Recursion in C  
6. Reverse a String Using Recursion in C  
7. Types of Recursion in C  
8. Tail Recursion vs. Non-Tail Recursion in C  
9. Advantages of Recursion in C  
10. Disadvantages of Recursion in C  
11. FAQs on Recursion in C

## **What is Recursion in C?**

Recursion in C is a programming technique where a function calls itself to solve smaller instances of a problem. It continues calling itself until it reaches a base condition, which stops the recursion.

**Syntax:**

returnType functionName(parameters) {  
    if (base\_condition)    
        return some\_value;    
    else    
        return functionName(modified\_parameters);  *// Recursive call*  

}

## **How Recursion Works in C**

Recursion in C works when a function calls itself with modified parameters until it reaches a stopping condition (base case). Each function call goes onto the call stack, and once the base case is met, the program resolves the calls in reverse order.

**Steps in Recursion Execution:**

* **Function Calls Itself:** The function repeats with updated arguments.  
* **Base Case Check:** The program checks a condition to stop further recursive calls.  
* **Call Stack Management:** The system stores each call in the stack until reaching the base case.  
* **Stack Unwinding:** After reaching the base case, the program resolves calls in reverse order.

**Example: Factorial Calculation using Recursion**

\#include \<stdio.h\>  
   
*// Recursive function to find factorial*  
int factorial(int n) {  
    if (n \== 0)    
        return 1;  *// Base condition*  
    return n \* factorial(n \- 1);  *// Recursive call*  
}  
   
int main() {  
    int num;  
   
    printf("Enter a number: ");  
    scanf("%d", &num);  
   
    printf("Factorial of %d is %d**\\n**", num, factorial(num));  
   
    return 0;

}

**Output:**

Enter a number: 5

Factorial of 5 is 120

**Step-by-Step Execution (for n \= 5):**

1. factorial(5) \= 5 \* factorial(4)  
2. factorial(4) \= 4 \* factorial(3)  
3. factorial(3) \= 3 \* factorial(2)  
4. factorial(2) \= 2 \* factorial(1)  
5. factorial(1) \= 1 \* factorial(0)  
6. factorial(0) \= 1 (Base condition met, recursion stops)  
7. Now, values are returned in reverse order:  
   * factorial(1) \= 1 \* 1 \= 1  
   * factorial(2) \= 2 \* 1 \= 2  
   * factorial(3) \= 3 \* 2 \= 6  
   * factorial(4) \= 4 \* 6 \= 24  
   * factorial(5) \= 5 \* 24 \= 120

## **Base Case and Recursive Case in C**

Recursion in C consists of two main parts:

* **Base Case:** The condition that stops the recursion.  
* **Recursive Case:** The function calls itself with a modified argument to progress toward the base case.

**1\. Base Case**

The base case is the stopping condition that prevents infinite recursion. Without it, the function would call itself endlessly and cause a stack overflow.

**Example: Base Case in Factorial Function**

int factorial(int n) {  
    if (n \== 0)  *// Base Case: Stops recursion*  
        return 1;  
    else  
        return n \* factorial(n \- 1);  *// Recursive Case*

}

Here, if (n \== 0\) return 1; is the base case because the factorial of 0 is 1, and no further recursive calls are needed.

**2\. Recursive Case**

The recursive case is where the function calls itself to break the problem into smaller parts until the base case is reached.

**Example: Recursive Case in Factorial Function**

return n \* factorial(n \- 1);

This reduces n\! to n \* (n-1)\! until it reaches factorial(0).

## **Fibonacci Series Using Recursion in C**

The Fibonacci series is a sequence where each number is the sum of the two preceding ones, starting from 0 and 1\.

**Formula:** F(n)=F(n−1)+F(n−2)  
**with base cases:** F(0)=0,F(1)=1

**C Program to Print Fibonacci Series Using Recursion**

\#include \<stdio.h\>  
   
*// Recursive function to return Fibonacci number*  
int fibonacci(int n) {  
    if (n \== 0) *// Base Case 1*  
        return 0;  
    else if (n \== 1) *// Base Case 2*  
        return 1;  
    return fibonacci(n \- 1) \+ fibonacci(n \- 2); *// Recursive Case*  
}  
   
int main() {  
    int n \= 10; *// Number of terms*  
    printf("Fibonacci Series up to %d terms:**\\n**", n);  
   
    for (int i \= 0; i \< n; i\++) {  
        printf("%d ", fibonacci(i));  
    }  
   
    return 0;

}

**Output:**

Fibonacci Series up to 10 terms:

0 1 1 2 3 5 8 13 21 34

This C program calculates Fibonacci numbers using recursion. The **fibonacci()** function calls itself to compute each term based on the sum of the two previous terms. The base cases handle **n \= 0 and n \= 1**. The program prints the Fibonacci series up to n terms using a loop.

## **Sum of Natural Numbers Using Recursion in C**

The sum of the first n natural numbers can be calculated using recursion.

**Formula:** S(n)=n+S(n−1)  
**with the base case:** S(0)=0

**C Program to Find Sum of Natural Numbers Using Recursion**

\#include \<stdio.h\>  
   
*// Recursive function to calculate sum of natural numbers*  
int sum(int n) {  
    if (n \== 0) *// Base Case*  
        return 0;  
    return n \+ sum(n \- 1); *// Recursive Case*  
}  
   
int main() {  
    int n \= 10; *// Change this value to find sum of different numbers*  
    printf("Sum of first %d natural numbers: %d**\\n**", n, sum(n));  
    return 0;

}

**Output:**

Sum of first 10 natural numbers: 55

This C program calculates the sum of the first n natural numbers using recursion. The **sum()** function calls itself with **n – 1** until it reaches the base case (**n \= 0**). The main function sets n \= 10 and prints the sum using **printf()**.

## **Reverse a String Using Recursion in C**

Recursion can be used to reverse a string by swapping characters from both ends until the middle of the string is reached.

**C Program to Reverse a String Using Recursion**

\#include \<stdio.h\>  
\#include \<string.h\>  
   
*// Recursive function to reverse a string*  
void reverseString(char str\[\], int start, int end) {  
    if (start \>= end) *// Base Case*  
        return;  
   
    *// Swap characters*  
    char temp \= str\[start\];  
    str\[start\] \= str\[end\];  
    str\[end\] \= temp;  
   
    *// Recursive call*  
    reverseString(str, start \+ 1, end \- 1);  
}  
   
int main() {  
    char str\[\] \= "lcbc";  
    int length \= strlen(str);  
   
    reverseString(str, 0, length \- 1); *// Call recursive function*  
   
    printf("Reversed String: %s**\\n**", str);  
    return 0;

}

**Output:**

Reversed String: yrdnuofnaS

This C program reverses a string using recursion. The **reverseString()** function swaps characters from the start and end until they meet in the middle. It calls itself with updated indices. The main function initializes “lcbc”, gets its length using **strlen()**, and calls **reverseString()**. Finally, the reversed string is printed using **printf()**.

## **Types of Recursion in C**

Recursion in C can be categorized into different types based on how the recursive function calls itself.

**1\. Direct Recursion**  
In direct recursion, a function calls itself directly within its body.

**Example: Factorial Calculation**

\#include \<stdio.h\>  
   
int factorial(int n) {  
    if (n \== 0) *// Base case*  
        return 1;  
    return n \* factorial(n \- 1); *// Recursive call*  
}  
   
int main() {  
    printf("Factorial of 5: %d**\\n**", factorial(5));  
    return 0;

}

**Output:**

Factorial of 5: 120

**2\. Indirect Recursion**

In indirect recursion, two or more functions call each other in a cycle.

**Example: Even and Odd Check**

\#include \<stdio.h\>  
   
void isEven(int n);  
void isOdd(int n);  
   
void isEven(int n) {  
    if (n \== 0)  
        printf("Even**\\n**");  
    else  
        isOdd(n \- 1); *// Calling isOdd()*  
}  
   
void isOdd(int n) {  
    if (n \== 0)  
        printf("Odd**\\n**");  
    else  
        isEven(n \- 1); *// Calling isEven()*  
}  
   
int main() {  
    isEven(5);  
    return 0;

}

**Output:**

Odd

**3\. Tail Recursion**

In tail recursion, the recursive call is the last operation performed by the function. It helps in compiler optimizations.

**Example: Tail Recursive Factorial**

\#include \<stdio.h\>  
   
int factorial(int n, int result) {  
    if (n \== 0)  
        return result;  
    return factorial(n \- 1, n \* result);  
}  
   
int main() {  
    printf("Factorial of 5: %d**\\n**", factorial(5, 1));  
    return 0;

}

**Output:**

Factorial of 5: 120

**4\. Non-Tail Recursion**

In non-tail recursion, the recursive call is not the last operation in the function.

**Example: Fibonacci Series**

\#include \<stdio.h\>  
   
int sumOfDigits(int n) {  
    if (n \== 0)   
        return 0;  
    return (n % 10) \+ sumOfDigits(n / 10); *// Recursive call is not last*  
}  
   
int main() {  
    int num \= 1234;  
    printf("Sum of digits of %d is: %d**\\n**", num, sumOfDigits(num));  
    return 0;

}

**Output:**  
Sum of digits of 1234 is: 10

**5\. Nested Recursion**

In nested recursion, a function’s recursive call passes another recursive call as its argument.

**Example: Nested Function Call**

\#include \<stdio.h\>  
   
int nestedRecursion(int n) {  
    if (n \> 100)  
        return n \- 10;  
    return nestedRecursion(nestedRecursion(n \+ 11));  
}  
   
int main() {  
    printf("Result: %d**\\n**", nestedRecursion(95));  
    return 0;

}

**Output:**

Result: 91

## **Tail Recursion vs. Non-Tail Recursion in C**

Here’s a comparison table between Tail Recursion and Non-Tail Recursion in C:

| Feature | Tail Recursion | Non-Tail Recursion |
| :---: | ----- | ----- |
| **Definition** | Recursive call is the last operation before returning | Recursive call is not the last operation before returning |
| **Extra Computation After Recursion?** | No | Yes |
| **Memory Efficiency** | More efficient (less stack usage) | Less efficient (more stack usage) |
| **Stack Growth** | Does not grow after base case | Grows with each recursive call |
| **Optimization (Tail Call Elimination)** | Can be optimized into an iterative loop by the compiler | Cannot be optimized into a loop |
| **Performance** | Faster, as it requires fewer stack frames | Slower, as it retains stack frames |
| **Usage** | Useful for problems like summation, iterative calculations | Used in problems where intermediate values must be retained (e.g., Fibonacci, factorial) |
| **Example** | return sum(n-1, sum \+ n); | return n \* factorial(n-1); |

## **Advantages of Recursion in C**

* **Simplifies Complex Problems** – Recursion makes solving complex problems easier by breaking them into smaller, manageable parts.  
* **Reduces Code Length** – Recursive solutions often need fewer lines of code, especially for tasks like tree traversal.  
* **Fits Certain Problems Naturally** – Recursion works well for divide and conquer methods, backtracking, and hierarchical data structures.  
* **Manages Stack Automatically** – The function call stack is handled by the system, making recursion useful for depth-first search and expression evaluation.

## **Disadvantages of Recursion in C**

* **Uses More Memory** – Each recursive call adds a new entry to the stack, which increases memory usage.  
* **Risk of Stack Overflow** – Too many recursive calls can exceed the stack limit and crash the program.  
* **Slower Execution** – Function calls take extra time, making recursion less efficient than loops in many cases.  
* **Harder to Debug** – Following the flow of recursive calls can be confusing, making debugging more difficult.

## **FAQs on Recursion in C**

**1\. What is recursion in C?**  
Recursion is a process where a function calls itself to solve smaller instances of a problem until a base condition is met.

**2\. How does recursion work in C?**  
A recursive function repeatedly calls itself, reducing the problem size with each call. It stops when it reaches a base case, preventing infinite recursion.

**3\. What are the key components of recursion?**  
Recursion consists of two parts:

* **Base Case** – The condition that stops recursion.  
* **Recursive Case** – The part where the function calls itself with a smaller input.

**4\. When should recursion be used?**  
Recursion is useful for solving problems that involve divide and conquer, tree and graph traversal, backtracking, and problems with a recursive structure, like Fibonacci series and factorial calculation.

**5\. What are the disadvantages of recursion?**  
Recursion can lead to high memory usage, stack overflow, and increased execution time due to function call overhead.

**6\. How to prevent stack overflow in recursion?**  
Limit recursion depth, use tail recursion where possible, and consider iterative solutions for problems with large inputs.

**7\. Can every recursive function be converted into an iterative function?**  
Yes, recursion can always be replaced with iteration using loops and an explicit stack in some cases.

**8\. What are some common examples of recursion in C?**  
Common examples of recursion in C include factorial, Fibonacci series, sum of natural numbers, string reversal, Tower of Hanoi, binary tree traversal, Merge Sort, and Quick Sort.

## **Key Points to Remember**

Here is the list of key points we need to remember about “Recursion in C”.

* A recursive function calls itself with modified parameters until it reaches a base case, stopping further recursive calls.  
* The base case prevents infinite recursion, while the recursive case breaks the problem into smaller subproblems.  
* Each recursive call is stored in the call stack, and once the base case is reached, the calls are resolved in reverse order.  
* Recursion is commonly used for factorial, Fibonacci series, sum of natural numbers, string reversal, and sorting algorithms like Merge Sort and Quick Sort.  
* Recursion types include direct recursion, indirect recursion, tail recursion, and nested recursion, each with different characteristics.  
* Tail recursion is more memory-efficient as it does not grow the call stack, while non-tail recursion retains stack frames and is generally less optimized.  
* Recursion simplifies complex problems, reduces code length, and is useful for hierarchical structures like tree traversal.  
* Recursion uses more memory, risks stack overflow in deep recursion, runs slower than loops, and can be harder to debug due to complex call sequences.

# Functions in C

# **Functions in C**

In this tutorial, you will learn about functions in C, which help organize code by breaking it into reusable blocks. Functions make programs more readable, efficient, and easy to manage. C has built-in library functions and user-defined functions. Let’s explore how functions work in C.

**Contents:**

1. What is Function in C?  
2. Types of Functions in C  
3. Syntax of a Function in C  
4. Example of a Function in C  
5. Library Functions in C  
6. User-defined Functions in C  
7. Function Scope in C  
8. Function Pointers in C  
9. Inline Functions in C  
10. Predefined (Library) Functions in C  
11. Advantages of Functions in C  
12. FAQs on Functions in C

## **What is Function in C?**

A function in C is a block of code that performs a specific task and can be reused throughout the program. Functions help in modular programming, making code more readable, reusable, and easier to debug.

## **Types of Functions in C**

In C programming, functions can be categorized into two main types:

* **Library Functions** – Predefined functions in C, such as printf(), scanf(), strlen(), sqrt(), etc.  
* **User-defined Functions** – Functions created by the programmer to perform specific tasks.

## **Syntax of a Function in C**

return\_type function\_name(parameters)  
{  
    *// Function body*  
    return value;  *// Optional return statement*

}

* **return\_type** → Specifies the type of value the function returns. Use void if no value is returned.  
* **function\_name** → The name of the function.  
* **parameters** → Input values (optional).  
* **function body** → Contains the logic of the function.  
* **return** → Returns a value if needed.

## **Example of a Function in C**

\#include \<stdio.h\>  
   
*// Function to print a quiz question*  
void lcbcQuiz() {  
    printf("Which keyword is used to declare a function in C?**\\n**");  
    printf("A) define**\\n**B) function**\\n**C) void**\\n**D) declare**\\n**");  
}  
   
int main() {  
    lcbcQuiz();  *// Function call*  
    return 0;

}

**Output:**

Which keyword is used to declare a **function** in C?  
A) define  
B) **function**  
C) void

D) declare

This C program prints a quiz question using a function. It defines **lcbcQuiz()**, which displays a multiple-choice question when called. The **main()** function calls this quiz function, keeping the code clean and reusable. The program ends with **return 0;** to indicate successful execution.

## **Library Functions in C**

Library functions in C are built-in functions provided by the C standard library. These functions help perform common tasks like mathematical operations, input/output handling, string manipulation, and more.

**Syntax:**

return\_type function\_name(arguments);

**Example 1: (Using printf and sqrt Library Functions)**

\#include \<stdio.h\>  
\#include \<math.h\>  // Library for mathematical functions  
   
int main() {  
    int score \= 64;  
   
    *// Using printf (stdio.h) for output*  
    printf("lcbc Quiz Score: %d**\\n**", score);  
   
    *// Using sqrt (math.h) to find square root*  
    printf("Square Root of Score: %.2f**\\n**", sqrt(score));  
   
    return 0;

}

**Output:**

lcbc Quiz Score: 64

Square Root of Score: 8.00

This C program prints a quiz score and finds its square root. It first sets **score** to 64 and displays it using **printf()** from **stdio.h**. Then, it uses **sqrt()** from **math.h** to calculate the square root and prints the result. Finally, the program ends successfully with **return 0**.

**Example 2: String Manipulation using strlen and strcat (String.h)**

\#include \<stdio.h\>  
\#include \<string.h\>    
   
int main() {  
    char quiz1\[\] \= "lcbc ";  
    char quiz2\[\] \= "Quiz";  
   
    *// Using strlen() to find length of string*  
    printf("Length of first string: %lu**\\n**", strlen(quiz1));  
   
    *// Using strcat() to concatenate strings*  
    strcat(quiz1, quiz2);  
    printf("Combined String: %s**\\n**", quiz1);  
   
    return 0;

}

**Output:**

Length of first string: 10  

Combined String: lcbc Quiz

This C program works with strings using functions from **string.h**. It first defines two strings, **quiz1** and **quiz2**. The **strlen()** function finds the length of **quiz1**, which is then printed. Next, **strcat()** joins **quiz2** to **quiz1**, creating a combined string. Finally, the result is displayed before the program ends.

**Example 3: Mathematical Computations using pow and abs (Math.h)**

\#include \<stdio.h\>  
\#include \<math.h\>  
   
int main() {  
    int x \= \-10;  
    double y \= 3.0;  
   
    *// Using abs() to get absolute value*  
    printf("Absolute value of %d: %d**\\n**", x, abs(x));  
   
    *// Using pow() to calculate power*  
    printf("2 raised to power %.1f: %.2f**\\n**", y, pow(2, y));  
   
    return 0;

}

**Output:**

Absolute value of \-10: 10  

2 raised to power 3.0: 8.00

This C program demonstrates mathematical functions from **math.h**. It first declares an integer x and a double y. The **abs()** function calculates the absolute value of x, which is printed. Then, the **pow()** function raises 2 to the power of y, and the result is displayed. The program then ends.

**Example 4: Character Handling using toupper and tolower (Ctype.h)**

\#include \<stdio.h\>  
\#include \<ctype.h\>  
   
int main() {  
    char ch1 \= 's';  
    char ch2 \= 'Q';  
   
    *// Convert to uppercase*  
    printf("Uppercase of %c: %c**\\n**", ch1, toupper(ch1));  
   
    *// Convert to lowercase*  
    printf("Lowercase of %c: %c**\\n**", ch2, tolower(ch2));  
   
    return 0;

}

**Output:**

Uppercase of s: S  

Lowercase of Q: q

This C program demonstrates character case conversion using **ctype.h**. It defines two characters, ch1 and ch2. The **toupper()** function converts ch1 to uppercase, and the **tolower()** function converts ch2 to lowercase. The results are printed, and the program then ends.

**Example 5: Random Number Generation using rand() (stdlib.h)**

\#include \<stdio.h\>  
\#include \<stdlib.h\>  
   
int main() {  
    *// Generate and print a random number*  
    printf("lcbc Quiz Random Number: %d**\\n**", rand() % 100);  
   
    return 0;

}

**Output (varies):**

lcbc Quiz Random Number: 57

This C program generates a random number using **rand()** from **stdlib.h**. The result is limited to a range of 0-99 using the modulus operator (**% 100**). The program then prints the random number and exits.

## **User-defined Functions in C**

A user-defined function in C is a function created by the programmer to perform a specific task. It helps in modularizing code, improving reusability, and making the program more readable. User-defined functions in C can be categorized based on parameters and return values. The four main types are:

**1\. Function with No Parameters and No Return Value**

A function that does not take any input and does not return any value.

**Example:**

\#include \<stdio.h\>  
   
*// Function with no parameters and no return value*  
void greet() {  
    printf("Hello, lcbc Learners\!**\\n**");  
}  
   
int main() {  
    greet(); *// Function call*  
    return 0;

}

**Output:**

Hello, lcbc Learners\!

**2\. Function with Parameters but No Return Value**

A function that accepts arguments but does not return a value.

**Example:**

\#include \<stdio.h\>  
   
*// Function with parameters but no return value*  
void displayNumber(int num) {  
    printf("The number is: %d**\\n**", num);  
}  
   
int main() {  
    displayNumber(10); *// Function call with an argument*  
    return 0;

}

**Output:**

The number is: 10

**3\. Function with No Parameters but Returns a Value**

A function that does not take arguments but returns a value.

**Example:**

\#include \<stdio.h\>  
   
*// Function with no parameters but returns a value*  
int getNumber() {  
    return 25;  
}  
   
int main() {  
    int value \= getNumber(); *// Storing returned value*  
    printf("Returned number: %d**\\n**", value);  
    return 0;

}

**Output:**

Returned number: 25

**4\. Function with Parameters and Returns a Value**

A function that accepts arguments and returns a value.

**Example:**

\#include \<stdio.h\>  
   
*// Function with parameters and return value*  
int addNumbers(int a, int b) {  
    return a \+ b;  
}  
   
int main() {  
    int sum \= addNumbers(8, 12); *// Passing arguments*  
    printf("Sum: %d**\\n**", sum);  
    return 0;

}

**Output:**

Sum: 20

## **Function Scope in C**

Function scope determines where a function or variable can be accessed in the program. The major types of scope in C are:

**1\. Local Scope**

Variables declared inside a function are local to that function. They cannot be accessed outside the function.

**Example:**

\#include \<stdio.h\>  
   
void display() {  
    int x \= 10; *// Local variable*  
    printf("Value of x inside function: %d**\\n**", x);  
}  
   
int main() {  
    display();  
    *// printf("%d", x); // Error\! x is not accessible here.*  
    return 0;

}

**Output:**

Value of x inside **function**: 10

**2\. Global Scope**

A global variable is declared outside all functions. It can be accessed anywhere in the program.

**Example:**

\#include \<stdio.h\>  
   
int globalVar \= 100; *// Global variable*  
   
void display() {  
    printf("Global Variable: %d**\\n**", globalVar);  
}  
   
int main() {  
    display();  
    printf("Accessing globalVar in main(): %d**\\n**", globalVar);  
    return 0;

}

**Output:**

Global Variable: 100

Accessing globalVar in main(): 100

**3\. Block Scope**

Variables declared inside a block {} are only accessible within that block.

**Example:**

\#include \<stdio.h\>  
   
int main() {  
    int x \= 5;  
    {  
        int y \= 10; *// Block-scoped variable*  
        printf("Inside block: x \= %d, y \= %d**\\n**", x, y);  
    }  
    *// printf("%d", y); // Error\! y is not accessible here.*  
    return 0;

}

**Output:**

Inside block: x \= 5, y \= 10

**4\. Function Scope**

A function name itself has a global scope, meaning it can be called anywhere in the program.

**Example:**

\#include \<stdio.h\>  
   
*// Function with global scope*  
void sayHello() {  
    printf("Hello, lcbc Learners\!**\\n**");  
}  
   
int main() {  
    sayHello(); *// Can be called anywhere*  
    return 0;

}

**Output:**

Hello, lcbc Learners\!

## **Function Pointers in C**

A function pointer is a pointer that stores the address of a function. It allows functions to be called dynamically at runtime.

**Syntax:**

return\_type (\*pointer\_name)(parameter\_list);

**Example of Function Pointer**

\#include \<stdio.h\>  
   
*// Function to be pointed*  
void greet() {  
    printf("Hello, lcbc Learners\!**\\n**");  
}  
   
int main() {  
    *// Declare a function pointer*  
    void (\*ptr)();  
   
    *// Assign address of function*  
    ptr \= &greet;  
   
    *// Call function using function pointer*  
    (\*ptr)();  
   
    return 0;

}

**Output:**

Hello, lcbc Learners\!

This C program demonstrates function pointers. The **greet()** function prints a message. A function pointer **ptr** is declared and assigned the address of **greet**. The function is then called using **(\*ptr)()**, showing how pointers can be used to invoke functions dynamically.

## **Inline Functions in C**

An inline function is a function that is expanded at the point of its call, instead of executing a separate function call. It is used to reduce function call overhead and improve program execution speed.

**Syntax:**

**inline** return\_type function\_name(parameters) {  
    *// Function body*

}

**Example of an Inline Function**

\#include \<stdio.h\>  
   
*// Define an inline function*  
**inline** int square(int x) {  
    return x \* x;  
}  
   
int main() {  
    int num \= 5;  
    printf("Square of %d is %d**\\n**", num, square(num));  
    return 0;

}

**Output:**

Square of 5 is 25

This C program demonstrates an inline function. The **square()** function computes the square of a number. Since it’s defined as **inline**, the compiler may replace function calls with the actual computation, improving performance. The program calculates and prints the square of **num** using this function.

## **Predefined (Library) Functions in C**

Here’s a list of predefined (library) functions in C along with their descriptions:

| Function | Description |
| :---: | ----- |
| **printf()** | Prints formatted output to the console. |
| **scanf()** | Reads formatted input from the user. |
| **puts()** | Outputs a string followed by a newline. |
| **fgets()** | Reads a line from input safely. |
| **putchar()** | Prints a single character. |
| **getchar()** | Reads a single character from input. |
| **strcpy()** | Copies one string to another. |
| **strcat()** | Concatenates two strings. |
| **strcmp()** | Compares two strings lexicographically. |
| **strlen()** | Returns the length of a string. |
| **pow()** | Computes the power of a number. |
| **sqrt()** | Returns the square root of a number. |
| **abs()** | Returns the absolute value of an integer. |
| **rand()** | Generates a random number. |
| **malloc()** | Allocates memory dynamically. |

## **Advantages of Functions in C**

* **Code Reusability** – Write once, use many times. This saves effort and avoids repeating the same code.  
* **Better Readability & Maintainability** – Functions break code into small parts. This makes it simple to understand and update.  
* **Smaller Code Size** – No need to copy the same code. Functions make programs shorter and faster.  
* **Easier Debugging & Testing** – You can test each function separately. This makes debugging simple.  
* **Keeps Code Organized** – Big programs are split into small, clear sections. This helps in managing code better.  
* **Hides Complex Details** – Functions keep inner details hidden. This makes programs safer and easier to use.

## **FAQs on Functions in C**

**1\. What is a function in C?**  
A function in C is a block of code that performs a specific task and can be called multiple times within a program.

**2\. What are the types of functions in C?**

* Library functions (e.g., printf(), scanf())  
* User-defined functions (functions created by the programmer)

**3\. What is a recursive function?**  
A function that calls itself is called a recursive function (e.g., factorial calculation).

**4\. What is a function pointer in C?**  
A function pointer stores the address of a function and allows dynamic function calls.

**5\. What is an inline function?**  
An inline function suggests the compiler replace the function call with its code to improve speed.

**6\. Can a function return multiple values in C?**  
No, a function in C can return only one value. However, multiple values can be returned using pointers or structures.

**7\. What are storage classes in functions?**  
Storage classes (auto, static, extern, register) determine function scope and lifetime.

## **Key Points to Remember**

Here is the list of key points we need to remember about “Functions in C”.

* Functions allow writing code once and using it multiple times, improving efficiency.  
* C has built-in library functions like printf(), sqrt(), and user-defined functions for specific tasks.  
* A function consists of a return type, name, parameters (optional), and a body, with an optional return value.  
* Function scope determines accessibility and includes local, global, block, and function scope.  
* Function pointers store addresses of functions, enabling dynamic function calls at runtime.  
* Inline functions replace function calls with actual code to reduce execution overhead.  
* Predefined functions handle input/output, math, string manipulation, and memory allocation.

# Call by value and Call by reference in C

# **Call by value and Call by reference in C**

In this tutorial, we will learn about Call by Value and Call by Reference in C. In Call by Value, the function gets a copy of the variable. This means any changes inside the function do not affect the original value. In Call by Reference, the function gets the memory address of the variable. This allows it to change the original value. Let’s look at some examples\!

**Contents:**

1. Introduction to Call by Value and Call by Reference in C  
2. What is Call by Value in C?  
3. Examples of Call by Value in C  
4. Advantages and Disadvantages of Call by Value in C  
5. What is Call by Reference in C?  
6. Examples of Call by Reference in C  
7. Advantages and Disadvantages of Call by Reference in C  
8. Call by Value Vs Call by Reference in C  
9. When to Use Call by Value vs Call by Reference in C?  
10. FAQs on Call by value and Call by reference in C

## **Introduction to Call by Value and Call by Reference in C**

In C, there are two ways to pass arguments to a function: Call by Value and Call by Reference. These methods decide how data is sent to functions. Knowing how they work helps in writing clear and efficient programs.

## **What is Call by Value in C?**

Call by Value is a method of passing arguments to a function in C. In this approach, the function receives a copy of the actual parameter. As a result, any modifications inside the function do not change the original variable in the calling function.

**How Does Call by Value Work?**

* The function gets a copy of the argument.  
* Any changes inside the function affect only the copy, not the original variable.  
* The original variable stays the same after the function call.  
* It uses more memory if large data structures are passed because copies are made.

**Syntax:**

return\_type function\_name(data\_type parameter)  
{  
    *// Function body*

}

## **Examples of Call by Value in C**

**Example 1:**

\#include \<stdio.h\>  
   
void updateMarks(int marks) {  *// Function receives a copy of 'marks'*  
    marks \+= 10;               *// Modify the copy*  
    printf("Updated Marks inside function: %d**\\n**", marks);  
}  
   
int main()  
{  
    int studentMarks \= 50;  *// Original marks*  
    updateMarks(studentMarks);  *// Passing by value*  
    printf("Original Marks in main: %d**\\n**", studentMarks);  
    return 0;

}

**Output:**

Updated Marks inside **function**: 60

Original Marks in main: 50

This program shows Call by Value in C. The function **updateMarks(int marks)** gets a copy of the variable. It adds 10 and prints the new value, but the original variable in **main()** stays the same. In main(), **studentMarks** is set to 50 and passed to **updateMarks()**. The function prints 60, but **studentMarks** remains 50 after the function call. This proves that Call by Value does not change the original variable.

**Example 2: Swapping Two Numbers**

\#include \<stdio.h\>  
   
void swap(int a, int b) {  
    int temp \= a;  
    a \= b;  
    b \= temp;  
    printf("Inside function: a \= %d, b \= %d**\\n**", a, b);  
}  
   
int main() {  
    int x \= 10, y \= 20;  
    swap(x, y);  
    printf("Outside function: x \= %d, y \= %d**\\n**", x, y);  
    return 0;

}

**Output:**

Inside **function**: a \= 20, b \= 10

Outside **function**: x \= 10, y \= 20

This program demonstrates Call by Value in C using a swap function. The function **swap(int a, int b)** receives copies of the original variables. It swaps their values and prints them inside the function, but the original variables remain unchanged in **main()**. In **main()**, x \= 10 and y \= 20 are passed to **swap()**. Inside the function, a and b are swapped, displaying **a \= 20, b \= 10**. However, after the function call, x and y remain 10 and 20, proving that Call by Value does not modify the original variables.

## **Advantages and Disadvantages of Call by Value in C**

**Advantages of Call by Value in C**

* Original Data Stays Safe: The function works with a copy, so the original variable does not change.  
* No Unwanted Changes: Any updates inside the function affect only the copy, keeping global data safe.  
* Easy to Use: It is simple to understand and does not involve pointers, making it great for beginners.  
* More Secure: The function cannot change sensitive data from the main program, reducing risks.  
* Good for Small Data: Works well for small values like int, float, and char since it uses little memory.

**Disadvantages of Call by Value in C**

* **Uses More Memory:** A new copy is made for each function call, increasing memory use, especially for large data.  
* **Slower for Large Data:** Copying big structures or arrays takes time and can slow down the program.  
* **Not Good for Modifications:** Changes inside the function do not affect the original variable, making it less useful when updates are needed.  
* **Cannot Change the Original Variable:** If a function must update a variable, Call by Reference (using pointers) is a better choice.

## **What is Call by Reference in C?**

Call by Reference is a way to pass arguments to a function by sending the memory address of the variable. This allows the function to change the original value instead of working on a copy.

**How Does Call by Reference Work?**

* Instead of passing a copy, we send the memory address (pointer) of the variable.  
* The function accesses the original memory location and modifies the actual value.  
* Any changes made inside the function affect the original variable.  
* It is efficient for large data because no extra copy is created.

**Syntax:**

return\_type function\_name(datatype \*parameter) {  
    *// Function body*

}

* The parameter is a pointer (\*) that stores the address of the actual variable.  
* The function modifies the original variable through its address.

## **Examples of Call by Reference in C**

**Example 1: Updating Student Marks**

\#include \<stdio.h\>  
   
void updateMarks(int \*marks) {  
    \*marks \+= 10;  *// Increase the original marks by 10*  
}  
   
int main() {  
    int studentMarks \= 50;  
    updateMarks(&studentMarks);  *// Passing address*  
    printf("Updated Marks: %d**\\n**", studentMarks);  
    return 0;

}

**Output:**

Updated Marks: 60

This program shows Call by Reference in C. The function **updateMarks(int \*marks)** gets the memory address of the variable. It adds 10 to the original value. In **main()**, **studentMarks** is set to 50\. Its address is sent to **updateMarks()**, so the function updates the actual variable. After the function call, **studentMarks** becomes 60\. This proves that Call by Reference changes the original value.

**Example 2: Swapping Two Numbers**

\#include \<stdio.h\>  
   
void swap(int \*a, int \*b) {   
    int temp \= \*a;  
    \*a \= \*b;  
    \*b \= temp;  
}  
   
int main() {  
    int x \= 10, y \= 20;  
    swap(&x, &y);  
    printf("After swapping: x \= %d, y \= %d**\\n**", x, y);  
    return 0;

}

**Output:**

After swapping: x \= 20, y \= 10

This program shows Call by Reference in C using a swap function. The function **swap(int \*a, int \*b)** gets the memory addresses of two variables and swaps their values. In **main()**, **x \= 10 and y \= 20**. Their addresses are passed to **swap()**, so the function swaps the actual values. After the function call, x becomes 20 and y becomes 10\. This proves that Call by Reference allows direct changes to the original variables.

## **Advantages and Disadvantages of Call by Reference in C**

**Advantages of Call by Reference in C**

* **Changes the Original Data:** The function works with the real variable, so any changes remain after the function call.  
* **Saves Memory:** No extra copies are made, reducing memory use. This is helpful for large data like arrays and structures.  
* **Faster Execution:** Since no data is copied, the function runs faster, especially with large data.  
* **Can Return Multiple Values:** A function can change many variables at once, unlike Call by Value, which returns only one.  
* **Good for Large Data:** Best for arrays, structures, and linked lists, avoiding extra memory use.  
* **Useful for Recursion and Data Structures:** It helps in working with linked lists, trees, and graphs without copying data.

**Disadvantages of Call by Reference in C**

* **Risk of Unwanted Changes:** The function directly changes the original variable, which can cause errors.  
* **Less Secure:** If not handled well, the function may change the wrong memory location, causing crashes.  
* **Uses Pointers:** You need to understand pointers, which can be hard for beginners.  
* **Harder to Debug:** Since the function changes real data, finding errors is more difficult.  
* **Unexpected Effects:** If different functions change the same variable, it can create confusing bugs.  
* **More Complex Code:** Using pointers makes the code harder to read and increases the risk of memory issues.

## **Key Differences Between Call by Value and Call by Reference in C**

Here is a key differences between Call by Value and Call by Reference in C:

| Feature | Call by Value | Call by Reference |
| :---: | ----- | ----- |
| **How Data is Passed** | A copy of the variable is sent to the function. | The memory address of the variable is sent. |
| **Effect on Original Data** | The original variable stays the same. | The function changes the original variable. |
| **Memory Use** | Uses more memory because it makes a copy. | Uses less memory since no copy is made. |
| **Execution Speed** | Can be slower for large data since copies take time. | Faster because no extra copying is needed. |
| **Security** | Safer, as the original data is not changed. | Less safe since the function can change the actual variable. |
| **Usage** | When the original value should not change. | When you need to modify the original variable. |
| **Return Values** | Can return only one value. | Can update multiple variables. |
| **Complexity** | Simple and easy to use (no pointers needed). | More complex because it requires pointers. |

## **When to Use Call by Value vs Call by Reference in C?**

**Use Call by Value when:**

* You want to keep the original data unchanged.  
* The function does not need to modify the variable.  
* You are working with small data types (like int, char, float).  
* Simplicity is important, and you want to avoid pointers.  
* Security matters, and you want to prevent accidental data modifications.

**Use Call by Reference when:**

* The function needs to modify the original variable.  
* You are working with large data structures (arrays, structs) to avoid memory overhead.  
* You need to return multiple values from a function.  
* Performance is a priority, and avoiding unnecessary copies is important.  
* You need direct memory access for advanced data structures like linked lists and trees.

## **FAQs on Call by value and Call by reference in C**

**1\. What is Call by Value in C?**  
Call by Value means passing a copy of a variable’s value to a function. The function works on this copy, so any changes inside the function do not affect the original variable.

**2\. What is Call by Reference in C?**  
Call by Reference means passing a variable’s memory address to a function. The function accesses the original memory location, allowing it to modify the actual variable.

**3\. What is the main difference between Call by Value and Call by Reference?**  
In Call by Value, the function works on a copy, leaving the original data unchanged. In Call by Reference, the function works on the actual variable, so changes affect the original data.

**4\. Does C support Call by Reference?**  
C does not have built-in Call by Reference like C++. However, it achieves the same effect by passing pointers, which allow functions to modify original values.

**5\. When should I use Call by Value or Call by Reference?**  
Use Call by Value when you want to protect the original data from changes. Use Call by Reference when the function needs to modify the variable or when working with large data structures to save memory.

**6\. Is Call by Reference safer than Call by Value?**  
No, Call by Reference can be risky because it changes the original data, which may cause unintended modifications. Call by Value is safer because it does not affect the original variable.

**7\. Can Call by Reference be used to return multiple values?**  
Yes, a function can modify multiple variables by using pointers, making it possible to return multiple values.

## **Key Points to Remember**

Here is the list of key points we need to remember about “Call by value and Call by reference in C”.

* A copy of the variable is passed in Call by Value, whereas Call by Reference sends the memory address.  
* The original variable remains unchanged in Call by Value, but Call by Reference modifies it directly.  
* Since Call by Value creates copies, it increases memory usage, while Call by Reference is more efficient.  
* Security is higher with Call by Value because it prevents unintended changes, unlike Call by Reference.  
* Using Call by Reference requires pointers, which add complexity but allow direct data modification.  
* When a function needs to return multiple values, Call by Reference is the better choice.  
* Small data types work well with Call by Value, whereas large structures benefit from Call by Reference.  
* In swapping functions, Call by Value fails to modify the original numbers, while Call by Reference succeeds.

# C Arrays

# **C Arrays**

In this tutorial, we will learn about arrays in C. An array stores many values of the same type under one name. The values stay in order, and each has a position number starting from zero. This makes it easy to find and use them. Programmers use arrays to handle lists, perform calculations, and organize data. Let’s see how they work with examples\!

**Contents:**

1. What are Arrays in C?  
2. Declaring and Initializing Arrays in C  
3. Accessing Elements of an Array in C  
4. Types of Arrays in C  
5. One-Dimensional Array (1D Array) in C  
6. Two-Dimensional Array (2D Array or Matrix) in C  
7. Multi-Dimensional Array in C  
8. Array Operations in C  
9. One-Dimensional vs Two-Dimensional Arrays in C  
10. Array and Pointers in C  
11. Advantages of Array in C  
12. Disadvantages of Array in C  
13. FAQs on Arrays in C

## **What are Arrays in C?**

An array in C is a way to store multiple values of the same type in a single, organized structure. The values are kept together in memory, making it easy to access and manage them using a single variable name.

**Key Features of Arrays:**

* **Fixed Size:** You must define the size of an array when you create it, and you cannot change it later.  
* **Same Data Type:** Every element in an array must have the same type, such as int, char, or float.  
* **Indexed Access:** You can access each element using an index, starting from 0\.  
* **Efficient Memory Usage:** Since arrays store data in a continuous block of memory, they allow faster access than linked lists.

## **Declaring and Initializing Arrays in C**

**Declaration of an Array**

In C, an array must be declared before using it. The declaration specifies the data type and the size of the array.

**Syntax:**

data\_type array\_name\[size\];

* **data\_type** → Type of elements (int, float, char, etc.).  
* **array\_name** → Name of the array.  
* **size** → Number of elements in the array.

**Example:**

int numbers\[5\];  *// Declaring an array of 5 integers*

**Initializing an Array**

Array elements can be initialized at the time of declaration or individually later.

**1\. Initialization at Declaration**

int numbers\[5\] \= {10, 20, 30, 40, 50};  *// Initializing array with values*

**2\. Individual Initialization**

int numbers\[5\];    
numbers\[0\] \= 10;    
numbers\[1\] \= 20;    
numbers\[2\] \= 30;    
numbers\[3\] \= 40;  

numbers\[4\] \= 50;

**Example Program**

\#include \<stdio.h\>  
   
int main() {  
    int marks\[3\] \= {85, 90, 78};  *// Initializing an array*  
   
    printf("Marks in C Programming: %d**\\n**", marks\[0\]);  
    printf("Marks in Java: %d**\\n**", marks\[1\]);  
    printf("Marks in C++ Programming: %d**\\n**", marks\[2\]);  
   
    return 0;

}

**Output:**

Marks in C Programming: 85    
Marks in Java: 90  

Marks in C\++ Programming: 78

This C program shows how to use arrays. It creates an array called **marks** with three numbers: **{85, 90, 78}**. The program prints these numbers using **printf**. The first number is for C Programming, the second is for Java, and the third is for C++. It ends by returning **0**, which means it ran successfully.

## **Accessing Elements of an Array in C**

Once an array is declared and initialized, its elements can be accessed using indexing. Each element of an array is stored in contiguous memory locations and can be accessed using its index number, starting from 0\.

**Syntax:**

array\_name\[index\]

* **array\_name** → The name of the array.  
* **index** → The position of the element (starting from 0).

**Example Program: Accessing Array Elements**

\#include \<stdio.h\>  
   
int main() {  
    int numbers\[5\] \= {10, 20, 30, 40, 50};  *// Initializing the array*  
   
    *// Accessing and printing elements using indexing*  
    printf("First element: %d**\\n**", numbers\[0\]);    
    printf("Second element: %d**\\n**", numbers\[1\]);    
    printf("Third element: %d**\\n**", numbers\[2\]);    
    printf("Fourth element: %d**\\n**", numbers\[3\]);    
    printf("Fifth element: %d**\\n**", numbers\[4\]);    
   
    return 0;

}

**Output:**

First element: 10    
Second element: 20    
Third element: 30    
Fourth element: 40  

Fifth element: 50

**Accessing Array Elements Using Loops**

Instead of manually accessing each element, we can use loops to iterate through the array.

**Example: Accessing Elements with a for Loop**

\#include \<stdio.h\>  
   
int main() {  
    int numbers\[5\] \= {5, 15, 25, 35, 45};    
   
    printf("Array elements:**\\n**");  
    for(int i \= 0; i \< 5; i\++) {  *// Loop through array*  
        printf("Element at index %d: %d**\\n**", i, numbers\[i\]);  
    }  
   
    return 0;

}

**Output:**

Array elements:    
Element at index 0: 5    
Element at index 1: 15    
Element at index 2: 25    
Element at index 3: 35  

Element at index 4: 45

## **Types of Arrays in C**

In C programming, arrays are classified into different types based on their structure and usage. The main types of arrays in C are:

* One-Dimensional Array (1D Array)  
* Two-Dimensional Array (2D Array or Matrix)  
* Multi-Dimensional Array

## **One-Dimensional Array (1D Array) in C**

A one-dimensional array is a collection of elements of the same data type stored in contiguous memory locations. It allows efficient storage and retrieval of data using an index.

**Syntax of 1D Array in C**

data\_type array\_name\[size\];

* **data\_type** → Type of data (int, float, char, etc.)  
* **array\_name** → Name of the array  
* **size** → Number of elements in the array

**Declaring and Initializing a 1D Array**

int numbers\[5\] \= {10, 20, 30, 40, 50};  *// Declaration and Initialization*

Alternatively, you can declare an array without initialization:

int numbers\[5\];  *// Declaration only*

And assign values later:

numbers\[0\] \= 10;  
numbers\[1\] \= 20;  
numbers\[2\] \= 30;  
numbers\[3\] \= 40;

numbers\[4\] \= 50;

**Accessing Elements of a 1D Array**

Array elements are accessed using an index, which starts from 0\.

\#include \<stdio.h\>  
   
int main() {  
    *// Declaration and initialization of lcbc Certification scores*  
    int scores\[5\] \= {80, 85, 90, 95, 88};  
   
    *// Displaying array elements*  
    printf("lcbc Certification Exam Scores:**\\n**");  
    printf("Score in Module 1: %d**\\n**", scores\[0\]);  
    printf("Score in Module 2: %d**\\n**", scores\[1\]);  
    printf("Score in Module 3: %d**\\n**", scores\[2\]);  
    printf("Score in Module 4: %d**\\n**", scores\[3\]);  
    printf("Score in Module 5: %d**\\n**", scores\[4\]);  
   
    return 0;

}

**Output:**

lcbc Certification Exam Scores:  
Score in Module 1: 80  
Score in Module 2: 85  
Score in Module 3: 90  
Score in Module 4: 95

Score in Module 5: 88

This C program demonstrates how to use arrays. It creates an array called scores with five values: **{80, 85, 90, 95, 88}**. The program prints each score using **printf**. The scores represent results from five modules of the lcbc Certification Exam. It ends by returning 0, meaning it ran successfully.

**Looping Through a 1D Array**

We can use loops to iterate through an array efficiently.

\#include \<stdio.h\>  
   
int main() {  
    *// Declaration and initialization of lcbc Quiz scores*  
    int scores\[5\] \= {78, 85, 90, 88, 92};  
   
    *// Displaying scores using a loop*  
    printf("lcbc Quiz Scores:**\\n**");  
    for(int i \= 0; i \< 5; i\++) {  
        printf("Score in Quiz %d: %d**\\n**", i \+ 1, scores\[i\]);  
    }  
   
    return 0;

}

**Output:**

lcbc Quiz Scores:  
Score in Quiz 1: 78  
Score in Quiz 2: 85  
Score in Quiz 3: 90  
Score in Quiz 4: 88

Score in Quiz 5: 92

This C program demonstrates how to use arrays with loops. It creates an array called scores with five values: **{78, 85, 90, 88, 92}**. The program uses a for loop to print each score, representing results from five **lcbc Quiz** attempts. It ends by returning 0, meaning it ran successfully.

## **Two-Dimensional Array (2D Array or Matrix) in C**

A Two-Dimensional Array (2D Array) is an array of arrays where data is stored in rows and columns. It is often used to represent tabular data like matrices, game boards, and exam scores.

**Syntax:**

data\_type array\_name\[rows\]\[columns\];

* **data\_type** → Type of elements (e.g., int, float, char).  
* **array\_name** → Name of the 2D array.  
* **rows** → Number of rows.  
* **columns** → Number of columns.

**Example:**

\#include \<stdio.h\>  
   
int main() {  
    *// Declaring a 2D array for quiz scores*  
    int quizScores\[3\]\[2\] \= {  
        {80, 85},  *// Student 1 scores*  
        {90, 88},  *// Student 2 scores*  
        {75, 78}   *// Student 3 scores*  
    };  
   
    *// Printing quiz scores*  
    printf("lcbc Quiz Scores:**\\n**");  
    for (int i \= 0; i \< 3; i\++) {  
        for (int j \= 0; j \< 2; j\++) {  
            printf("Student %d, Quiz %d: %d**\\n**", i \+ 1, j \+ 1, quizScores\[i\]\[j\]);  
        }  
    }  
   
    return 0;

}

This C program demonstrates how to use a 2D array. It creates a **quizScores** array with three students’ scores from two quizzes: **{80, 85}, {90, 88}, {75, 78}**. A nested for loop prints each student’s quiz scores. The program ends by returning 0, meaning it ran successfully.

## **Multi-Dimensional Array in C**

A Multi-Dimensional Array in C is an array that has more than one dimension, allowing the storage of data in a tabular or matrix format. The most commonly used multi-dimensional array is the 2D array (Matrix), but C supports 3D arrays and beyond.

**Syntax:**

data\_type array\_name\[size1\]\[size2\]...\[sizeN\];

* **data\_type** → Type of data (int, float, char, etc.)  
* **array\_name** → Name of the array  
* **size1, size2, …, sizeN** → Number of elements in each dimension

**Example:**

\#include \<stdio.h\>  
   
int main() {  
    *// Declaring a 3D array for storing scores of 2 teams in 3 rounds with 3 participants each*  
    int scores\[2\]\[3\]\[3\] \= {  
        { {85, 90, 88}, {78, 80, 85}, {90, 92, 89} },  *// Team 1 scores*  
        { {75, 80, 78}, {88, 85, 90}, {92, 94, 91} }   *// Team 2 scores*  
    };  
   
    *// Printing scores*  
    printf("lcbc Coding Championship Scores:**\\n**");  
    for (int team \= 0; team \< 2; team\++) {  
        printf("Team %d Scores:**\\n**", team \+ 1);  
        for (int round \= 0; round \< 3; round\++) {  
            printf(" Round %d: ", round \+ 1);  
            for (int participant \= 0; participant \< 3; participant\++) {  
                printf("%d ", scores\[team\]\[round\]\[participant\]);  
            }  
            printf("**\\n**");  
        }  
        printf("**\\n**");  
    }  
   
    return 0;

}

**Output:**

lcbc Coding Championship Scores:  
Team 1 Scores:  
 Round 1: 85 90 88    
 Round 2: 78 80 85    
 Round 3: 90 92 89    
   
Team 2 Scores:  
 Round 1: 75 80 78    
 Round 2: 88 85 90  

 Round 3: 92 94 91

This C program uses a 3D array to store scores for two teams, each participating in three rounds with three players. The scores array holds these values, and nested for loops display the scores for each team, round, and participant. Finally, the program returns 0, indicating successful execution.

## **Array Operations in C**

Arrays in C allow performing various operations such as insertion, deletion, searching, updating, and traversing. These operations help manage data efficiently in different programming scenarios.

**1\. Traversing an Array (Displaying Elements)**

\#include \<stdio.h\>  
   
int main() {  
    int scores\[\] \= {85, 90, 78, 92, 88};  *// Array of quiz scores*  
    int n \= sizeof(scores) / sizeof(scores\[0\]); *// Calculate number of elements*  
   
    printf("lcbc Quiz Scores:**\\n**");  
    for (int i \= 0; i \< n; i\++) {  
        printf("Quiz %d: %d**\\n**", i \+ 1, scores\[i\]);  
    }  
   
    return 0;

}

**Output:**

lcbc Quiz Scores:  
Quiz 1: 85  
Quiz 2: 90  
Quiz 3: 78  
Quiz 4: 92

Quiz 5: 88

This C program demonstrates how to use an array to store and display quiz scores. It declares an integer array scores with five values: **{85, 90, 78, 92, 88}**. The program then calculates the number of elements in the array using **sizeof(scores) / sizeof(scores\[0\])**. A for loop iterates through the array and prints each quiz score along with its corresponding quiz number.

**2\. Insertion in an Array**

Example: Adding a New Score at a Specific Position

\#include \<stdio.h\>  
   
int main()  
{  
    *// Initial array with space for 1 more element*  
    int scores\[6\] \= {85, 90, 78, 92, 88};   
    int n \= 5;  *// Current number of elements*  
    int pos \= 3; *// Position to insert (0-based index)*  
    int newScore \= 95;  
   
    *// Shifting elements to the right*  
    for (int i \= n; i \> pos; i\--) {  
        scores\[i\] \= scores\[i \- 1\];  
    }  
    scores\[pos\] \= newScore; *// Insert new element*  
    n\++; *// Increase count*  
   
    printf("Updated Scores:**\\n**");  
    for (int i \= 0; i \< n; i\++) {  
        printf("%d ", scores\[i\]);  
    }  
   
    return 0;

}

**Output:**

Updated Scores:

85 90 95 78 92 88

This program inserts a new score into an array by shifting elements to the right. It initializes scores with five values and creates space for one more. A loop shifts elements to make room at the specified position, then inserts the new score. Finally, it prints the updated array.

**3\. Deletion in an Array**

\#include \<stdio.h\>  
   
int main()  
{  
    int scores\[\] \= {85, 90, 78, 92, 88};  
    int n \= 5;  *// Number of elements*  
    int pos \= 2; *// Position to delete (0-based index)*  
   
    *// Shift elements to the left*  
    for (int i \= pos; i \< n \- 1; i\++) {  
        scores\[i\] \= scores\[i \+ 1\];  
    }  
    n\--; *// Decrease count*  
   
    printf("Scores after deletion:**\\n**");  
    for (int i \= 0; i \< n; i\++) {  
        printf("%d ", scores\[i\]);  
    }  
   
    return 0;

}

**Output:**

Scores after deletion:

85 90 92 88

This program removes an element from an array by shifting elements to the left. It initializes scores with five values and selects a position to delete. A loop shifts elements to overwrite the deleted value, reducing the array size. Finally, it prints the updated scores.

**4\. Searching in an Array**

\#include \<stdio.h\>  
   
int main()  
{  
    int scores\[\] \= {85, 90, 78, 92, 88};  
    int n \= 5;  
    int key \= 92; *// Value to search*  
    int found \= 0;  
   
    for (int i \= 0; i \< n; i\++) {  
        if (scores\[i\] \== key) {  
            printf("Score %d found at position %d**\\n**", key, i \+ 1);  
            found \= 1;  
            **break**;  
        }  
    }  
   
    if (\!found)  
        printf("Score not found**\\n**");  
   
    return 0;

}

**Output:**

Score 92 found at position 4

This program searches for a specific score in an array. It initializes **scores** with five values and checks each element using a loop. If the score is found, it prints its position; otherwise, it displays a “not found” message. The program stops searching once it finds the score.

**5\. Updating an Array**

\#include \<stdio.h\>  
   
int main() {  
    int scores\[\] \= {85, 90, 78, 92, 88};  
    int n \= 5;  
    int pos \= 1; *// Index to update*  
    int newScore \= 95;  
   
    scores\[pos\] \= newScore; *// Updating element*  
   
    printf("Updated Scores:**\\n**");  
    for (int i \= 0; i \< n; i\++) {  
        printf("%d ", scores\[i\]);  
    }  
   
    return 0;

}

**Output:**

Updated Scores:

85 95 78 92 88

This program updates an element in an array. It initializes scores with five values and changes the score at a specified index.

## **One-Dimensional vs Two-Dimensional Arrays in C**

Here’s a comparison table for One-Dimensional vs Two-Dimensional Arrays in C:

| Feature | One-Dimensional Array | Two-Dimensional Array |
| :---: | ----- | ----- |
| **Definition** | A list of elements stored in a single row or column. | A table-like structure with rows and columns. |
| **Declaration** | int arr\[5\]; | int arr\[3\]\[4\]; |
| **Storage Structure** | Stores elements in a single line. | Stores elements in a grid format (rows × columns). |
| **Accessing Elements** | Accessed using a single index (e.g., arr\[2\]). | Accessed using two indices (e.g., arr\[1\]\[2\]). |
| **Usage** | Used for simple lists like marks, temperatures, or prices. | Used for matrices, tables, or grids of data. |
| **Example** | {10, 20, 30, 40, 50} | {{1, 2}, {3, 4}, {5, 6}} |
| **Memory Allocation** | Stored in a contiguous block of memory. | Each row is stored as a separate contiguous block. |
| **Complexity** | Easier to manage and use. | More complex, requiring nested loops for processing. |

## **Array and Pointers in C**

In C, arrays and pointers are closely related. Since an array’s name acts as a pointer to its first element, we can use pointers to access and manipulate array elements efficiently.

**Example 1: Accessing Array Elements Using Pointers**

\#include \<stdio.h\>  
   
int main() {  
    int scores\[\] \= {85, 90, 78, 92, 88};    
    int \*ptr \= scores;  *// Pointer to the first element of the array*  
   
    printf("lcbc Quiz Scores using Pointers:**\\n**");  
    for (int i \= 0; i \< 5; i\++) {  
        printf("Quiz %d: %d**\\n**", i \+ 1, \*(ptr \+ i));  
    }  
   
    return 0;

}

**Output:**

lcbc Quiz Scores using Pointers:  
Quiz 1: 85  
Quiz 2: 90  
Quiz 3: 78  
Quiz 4: 92

Quiz 5: 88

**Example 2: Storing and Printing Strings Using an Array of Pointers**

\#include \<stdio.h\>  
   
int main() {  
    char \*subjects\[\] \= {"C", "Java", "Python", "C++", "JavaScript"};  
   
    printf("Programming Subjects:**\\n**");  
    for (int i \= 0; i \< 5; i\++) {  
        printf("%s**\\n**", subjects\[i\]);  
    }  
   
    return 0;

}

**Output:**

Programming Subjects:  
C  
Java  
Python  
C\++

JavaScript

## **Advantages of Array in C**

* They’re simple to use and understand.  
* Arrays are very efficient for storing and accessing data.  
* Arrays offer an easy way to keep track of related data items (i.e., by using indices).  
* It allows you to directly access any element in the array without having to loop through all of the elements. This can improve the efficiency of your code, especially if you need to access a large number of elements.

## **Disadvantages of Array in C**

* The size of the array must be fixed when it is created. This means that if you want to add or remove elements from the array, you must create a new array with the updated size.  
* Arrays are not always efficient. If you want to find an element in an array, you must go through each element until you find the one you’re looking for.  
* Inserting or deleting items from an array can be costly. This is because when you insert or delete an item from an array, all items in the array must be shifted in memory to make room for the new item or fill the gap left by the deleted item. This can take a lot of time, especially with large arrays.

## **FAQs on Arrays in C**

**1\. What is an array in C?**  
An array is a collection of elements of the same data type stored in contiguous memory locations. It allows multiple values to be stored under a single variable name.

**2\. How are array elements accessed in C?**  
Array elements are accessed using an index, starting from 0\. The first element is at index 0, the second at index 1, and so on.

**3\. What happens if you access an array element out of bounds?**  
Accessing an out-of-bounds element leads to undefined behavior, which may cause incorrect values or program crashes.

**4\. How do you pass an array to a function?**  
Instead of passing the entire array, only a pointer to its first element is passed. This allows the function to operate on the same memory without creating a copy.

**5\. Can you change the size of an array after declaration?**  
No, the size of a statically declared array cannot be changed at runtime. However, dynamic memory allocation can be used to create resizable arrays.

**6\. How are arrays stored in memory?**  
Arrays are stored in contiguous memory locations, meaning elements are placed sequentially. If an integer array starts at memory address 1000, the next element will be stored at 1004 (assuming 4-byte integers).

**7\. What is an array of pointers?**  
An array of pointers stores memory addresses instead of values. Each element in such an array is a pointer pointing to a different memory location.

**8\. Can you use sizeof to find the size of an array?**  
Yes, the total size of an array can be determined using the sizeof operator. To get the number of elements, divide the total size by the size of one element.

## **Key Points to Remember**

Here is the list of key points we need to remember about “Arrays in C”.

* An array is a collection of values of the same type stored in contiguous memory locations.  
* Arrays must be declared with a fixed size and type and can be initialized at declaration or assigned values individually.  
* Elements are accessed using their index, and loops like for loops help in iteration.  
* Arrays can be one-dimensional, two-dimensional (matrices), or multi-dimensional.  
* Common operations on arrays include traversal, insertion, deletion, searching, and updating.  
* Arrays and pointers are closely related, as the array name represents a pointer to its first element.  
* Loops like for and while are used to manipulate array elements efficiently.  
* Arrays are widely used in sorting, searching, mathematical computations, data storage, and implementing structures like stacks and queues.

# C Pointers

# **C Pointers**

In this tutorial, you will learn about pointers in C. A pointer is a special variable that stores the address of another variable. Instead of holding a direct value, it tells where the value is kept in memory. Pointers help in handling memory, working with arrays, and using dynamic memory well.

**Contents:**

1. What is a Pointer in C?  
2. Declaring and Initializing Pointers in C  
3. Referencing Pointer in C  
4. Dereferencing Pointer in C  
5. Types of Pointers in C  
6. Examples of Pointer Types in C  
7. Pointers and Arrays in C  
8. Pointers and Functions in C  
9. String Manipulation Using Pointers in C  
10. [Double Pointers i](https://www.sanfoundry.com/c-pointers/#10)n [C](https://www.sanfoundry.com/c-pointers/#10)  
11. FAQs on Pointers in C

## **What is a Pointer in C?**

A pointer in C is a variable that stores the memory address of another variable instead of storing a direct value. It is used to access and manipulate memory efficiently.

## **Declaring and Initializing Pointers in C**

**Syntax of a Pointer**

data\_type \*pointer\_name;

* **data\_type** → Type of data the pointer will point to.  
* **\*pointer\_name** → Declares a pointer variable.

**Declaring a Pointer**

int \*ptr;   *// Pointer to an integer*  
char \*cptr; *// Pointer to a character*

float \*fptr; *// Pointer to a float*

**Initializing a Pointer**

To store the address of a variable in a pointer, use the address-of operator (&).

int num \= 10;

int \*ptr \= &num; *// ptr stores the address of num*

**Example:**

\#include \<stdio.h\>  
   
int main()  
{  
    *// Declare a variable to store quiz score*  
    int quiz\_score \= 90;  
   
    *// Declare a pointer and store the address of quiz\_score*  
    int \*ptr \= &quiz\_score;  
   
    *// Display the quiz score using pointer*  
    printf("lcbcollege Quiz Score: %d**\\n**", \*ptr);  
    printf("Memory Address of Score: %p**\\n**", ptr);  
   
    return 0;

}

**Output:**

lcbcollege Quiz Score: 90

Memory Address of Score: 0x7ffee2a4bc34  (Example memory address)

This program shows how pointers work in C. It stores a quiz score in **quiz\_score** and assigns its memory address to the pointer **ptr**. Using **\*ptr**, the program prints the score, and with **ptr**, it displays the memory address. This helps in understanding how pointers access and manage memory.

## **Referencing Pointer in C**

Referencing a pointer means assigning the address of a variable to a pointer using the address-of (&) operator allows the pointer to store the variable’s memory location. This enables indirect access or modification of the variable’s value.

**Syntax:**

data\_type variable;

data\_type \*pointer \= &variable;  *// Pointer referencing the variable's address*

**Example:**

\#include \<stdio.h\>  
   
int main()  
{  
    int quiz\_score \= 90;  *// lcbcollege Quiz Score*  
   
    *// Referencing: Assigning address of quiz\_score to pointer*  
    int \*ptr \= &quiz\_score;  
   
    printf("lcbcollege Quiz Score: %d**\\n**", quiz\_score);  
    printf("Address of Quiz Score: %p**\\n**", ptr);  *// Prints memory address*  
   
    return 0;

}

**Output:**

lcbcollege Quiz Score: 90

Address of Quiz Score: 0x7ffee9a4babc  *// (Example address)*

This program shows how pointers work in C. It saves a quiz score in **quiz\_score** and stores its memory address in **ptr**. Then, it prints the quiz score and its memory address. This helps to understand how pointers store and use memory locations.

## **Dereferencing Pointer in C**

Dereferencing a pointer means accessing the value stored at the memory location the pointer holds. This is done using the dereference operator (\*).

**Syntax:**

data\_type variable \= value;  
data\_type \*pointer \= &variable;  *// Referencing*

data\_type data \= \*pointer;       *// Dereferencing (access value)*

**Example:**

\#include \<stdio.h\>  
   
int main() {  
    int marks \= 95;  *// lcbcollege Certification Exam Marks*  
   
    int \*ptr \= &marks;  *// Referencing: Storing address of marks in pointer*  
   
    *// Dereferencing: Accessing value using pointer*  
    printf("lcbcollege Certification Marks: %d**\\n**", \*ptr);  
   
    return 0;

}

**Output:**

lcbcollege Certification Marks: 95

In this example, **ptr** stores the address of marks, and **\*ptr** retrieves its value through pointer dereferencing.

## **Types of Pointers in C**

Pointers in C are classified into different types based on their behavior and usage.

| Pointer Type | Description | Example |
| :---: | ----- | ----- |
| **Null Pointer** | A pointer that stores NULL | int \*p \= NULL; |
| **Void Pointer** | A generic pointer that can hold any type | void \*ptr; |
| **Dangling Pointer** | A pointer pointing to deallocated memory | free(p); \*p \= 10; (Error) |
| **Wild Pointer** | An uninitialized pointer with a garbage value | int \*p; \*p \= 10; (Error) |
| **Constant Pointer** | A pointer whose address cannot change | int \*const p \= \&x; |
| **Pointer to Constant** | A pointer that cannot modify the value it points to | const int \*p \= \&x; |
| **Constant Pointer to Constant** | A pointer that cannot change the address or value | const int \*const p \= \&x; |
| **Function Pointer** | A pointer storing the address of a function | void (\*ptr)(); |
| **Pointer to Pointer** | A pointer storing the address of another pointer | int \*\*p; |

## **Examples of Pointer Types in C**

**1\. Null Pointer**

A pointer that does not point to any memory location.

\#include \<stdio.h\>  
   
int main() {  
    int \*ptr \= NULL;  *// Null pointer*  
   
    if (ptr \== NULL) {  
        printf("lcbcollege Certification: Pointer is NULL**\\n**");  
    }  
   
    return 0;

}

**Output:**

lcbcollege Certification: Pointer is NULL

**2\. Void Pointer (Generic Pointer)**

A pointer that can store the address of any data type.

\#include \<stdio.h\>  
   
int main()  
{  
    int marks \= 85;  
    void \*ptr \= &marks;  *// Void pointer*  
   
    printf("lcbcollege Exam Marks: %d**\\n**", \*(int \*)ptr);  *// Type casting needed*  
   
    return 0;

}

**Output:**

lcbcollege Exam Marks: 85

**3\. Wild Pointer**

An uninitialized pointer that may point to a random memory location.

\#include \<stdio.h\>  
   
int main() {  
    int \*ptr;  *// Wild pointer (uninitialized)*  
   
    *// printf("%d", \*ptr); // Dereferencing a wild pointer causes undefined behavior*  
   
    return 0;

}

**Note:** Always initialize pointers before using them.

**4\. Dangling Pointer**

A pointer that still refers to memory after it has been freed.

\#include \<stdio.h\>  
\#include \<stdlib.h\>  
   
int main() {  
    int \*ptr \= (int \*)malloc(sizeof(int));  
    \*ptr \= 100;  
   
    free(ptr);  *// Memory is freed*  
    *// printf("%d", \*ptr); // Accessing freed memory leads to undefined behavior*  
   
    return 0;

}

**Fix:** Set ptr \= NULL after free(ptr);

**5\. Constant Pointer**  
A pointer whose value (address) cannot be changed after initialization.

\#include \<stdio.h\>  
   
int main() {  
    int num1 \= 10, num2 \= 20;  
    int \*const ptr \= &num1;  *// Constant pointer*  
   
    \*ptr \= 50;   *// Allowed: Changing value*  
    *// ptr \= \&num2;  // Error: Cannot change address*  
   
    printf("Value: %d**\\n**", \*ptr);  
   
    return 0;

}

**Output:**

Value: 50

**6\. Pointer to Constant**

A pointer that points to a constant value (cannot modify the value).

\#include \<stdio.h\>  
   
int main() {  
    int num \= 100;  
    const int \*ptr \= &num;  *// Pointer to constant*  
   
    *// \*ptr \= 200; // Error: Cannot modify the value*  
   
    printf("Value: %d**\\n**", \*ptr);  
   
    return 0;

}

## **Pointers and Arrays in C**

In C, pointers and arrays are closely related. The name of an array acts as a pointer to its first element, and pointer arithmetic can be used to traverse the array efficiently.

**1\. Accessing Array Elements Using Pointers**

Instead of using array indexing (arr\[i\]), we can access elements using pointers.

**Example:**

\#include \<stdio.h\>  
   
int main()  
{  
    int scores\[\] \= {80, 90, 85, 95, 88};  
    int \*ptr \= scores;  *// Array name acts as a pointer*  
   
    printf("lcbcollege Quiz Scores:**\\n**");  
    for (int i \= 0; i \< 5; i\++) {  
        printf("Score %d: %d**\\n**", i \+ 1, \*(ptr \+ i));  *// Pointer arithmetic*  
    }  
   
    return 0;

}

**Output:**

lcbcollege Quiz Scores:  
Score 1: 80  
Score 2: 90  
Score 3: 85  
Score 4: 95

Score 5: 88

**2\. Pointer Arithmetic with Arrays**

ptr \+ 1 moves to the next element (because pointers store addresses). \*(ptr \+ i) accesses the value at that position.

**Example:**

\#include \<stdio.h\>  
   
int main() {  
    int arr\[\] \= {10, 20, 30, 40, 50};  
    int \*ptr \= arr;  
   
    printf("First: %d**\\n**", \*ptr);  
    printf("Second: %d**\\n**", \*(ptr \+ 1));  
    printf("Third: %d**\\n**", \*(ptr \+ 2));  
   
    return 0;

}

**Output:**

First: 10  
Second: 20

Third: 30

**3\. Array of Pointers**

An array of pointers is useful for storing multiple strings.

\#include \<stdio.h\>  
   
int main()  
{  
    char \*topics\[\] \= {"Pointers", "Arrays", "Functions", "Loops"};  
   
    printf("lcbcollege C Topics:**\\n**");  
    for (int i \= 0; i \< 4; i\++) {  
        printf("%s**\\n**", topics\[i\]);  
    }  
   
    return 0;

}

**Output:**

lcbcollege C Topics:  
Pointers  
Arrays  
Functions

Loops

**4\. Pointer to an Array**

A pointer to an array stores the address of the entire array.

\#include \<stdio.h\>  
   
int main()  
{  
    int arr\[3\] \= {100, 200, 300};  
    int (\*ptr)\[3\] \= &arr;  *// Pointer to an array*  
   
    printf("C Quiz Id: %d**\\n**", (\*ptr)\[0\]);  
    printf("C++ Quiz Id: %d**\\n**", (\*ptr)\[1\]);  
    printf("Java Quiz Id: %d**\\n**", (\*ptr)\[2\]);  
   
    return 0;

}

**Output:**

C Quiz Id: 100  
C\++ Quiz Id: 200

Java Quiz Id: 300

## **Pointers and Functions in C**

Pointers and functions in C work together to enhance flexibility and efficiency. By passing pointers to functions, we can modify variables directly, return multiple values, and use function pointers for dynamic execution.

\#include \<stdio.h\>  
   
void display() {  
    printf("lcbcollege Certification Exam Started\!**\\n**");  
}  
   
int main() {  
    void (\*ptr)();  *// Function pointer declaration*  
    ptr \= display;  *// Assign function address*  
   
    ptr();  *// Call function using pointer*  
    return 0;

}

**Output:**

lcbcollege Certification Exam Started\!

This C program shows how to use function pointers. The **display()** function prints a message. In **main()**, a function pointer ptr is created and set to display. Instead of calling **display()** directly, the program calls it using **ptr();**. This makes function calls more flexible and useful in advanced programming.

**Example: Function Pointer with Parameters**

\#include \<stdio.h\>  
   
void greet(char \*name) {  
    printf("Hello, %s\! Welcome to lcbcollege.**\\n**", name);  
}  
   
int main() {  
    void (\*ptr)(char \*);  *// Function pointer declaration*  
    ptr \= greet;  *// Assign address*  
   
    ptr("Asha");  *// Call function using pointer*  
    return 0;

}

**Output:**

Hello, Asha\! Welcome to lcbcollege.

This C program uses function pointers with parameters. The **greet()** function prints a welcome message using a name. In **main()**, a function pointer **ptr** is assigned to greet. Instead of calling **greet(“Asha”)** directly, the program calls it using **ptr(“Asha”);**. This makes function calls more flexible and useful for dynamic execution.

## **String Manipulation Using Pointers in C**

In C, strings are represented as arrays of characters, and pointers provide an efficient way to manipulate them.

**Example 1: Print a String Using Pointers**

\#include \<stdio.h\>  
   
int main() {  
    char \*str \= "lcbcollege Certification";  
    printf("Quiz Topic: %s**\\n**", str);  
    return 0;

}

**Output:**

Quiz Topic: lcbcollege Certification

**Example 2: Accessing Each Character Using a Pointer**

\#include \<stdio.h\>  
   
int main() {  
    char str\[\] \= "lcbcollege";  
    char \*ptr \= str;  
   
    printf("lcbcollege Quiz Letters: ");  
    while (\*ptr \!= '**\\0**') {  
        printf("%c ", \*ptr);  
        ptr\++;  
    }  
    return 0;

}

**Output:**

lcbcollege Quiz Letters: S a n f o u n d r y

**Example 3: String Comparison Using Pointers**

\#include \<stdio.h\>  
   
int compareStrings(char \*s1, char \*s2)   
{  
    while (\*s1 && (\*s1 \== \*s2)) {    
        s1\++;   
        s2\++;    
    }  
    return \*(unsigned char \*)s1 \- \*(unsigned char \*)s2;  
}  
   
int main() {  
    char str1\[\] \= "lcbcollege";  
    char str2\[\] \= "lcbcollege";  
   
    if (compareStrings(str1, str2) \== 0)  
        printf("Certification Strings Match\!**\\n**");  
    else  
        printf("Strings are Different.**\\n**");  
   
    return 0;

}

**Output:**

Certification Strings Match\!

## **Double Pointers in C**

A double pointer (pointer to a pointer) is a pointer that stores the address of another pointer. It is used in cases where a pointer itself needs to be modified inside a function, dynamic memory allocation, or working with arrays of pointers.

**Syntax:**

datatype \*\*pointer\_name;

**Example:**

int \*\*ptr;

**Example 1: Printing a Value Using a Double Pointer**

\#include \<stdio.h\>  
   
int main() {  
    int quizScore \= 95;      
    int \*ptr \= &quizScore;     
    int \*\*dptr \= &ptr;    
   
    printf("Quiz Score: %d**\\n**", \*\*dptr);    
    return 0;

}

**Output:**

Quiz Score: 95

**dptr** stores the address of **ptr**, and ptr stores the address of **quizScore**. Accessing **\*\*dptr** gives the actual value.

**Example 2: Array of Pointers Using Double Pointer**

\#include \<stdio.h\>  
   
int main()  
{  
    int scores\[3\] \= {90, 85, 80};  
    int \*ptr\[3\];  *// Array of pointers*  
    int \*\*dptr \= ptr;    
   
    for (int i \= 0; i \< 3; i\++)  
        ptr\[i\] \= &scores\[i\];  
   
    printf("lcbcollege Quiz Scores:**\\n**");  
    for (int i \= 0; i \< 3; i\++)  
        printf("Quiz %d Score: %d**\\n**", i \+ 1, \*\*(dptr \+ i));  
   
    return 0;

}

**Output:**

lcbcollege Quiz Scores:  
Quiz 1 Score: 90  
Quiz 2 Score: 85

Quiz 3 Score: 80

**dptr** points to an array of pointers, and we access elements dynamically.

## **FAQs on Pointers in C**

**1\. What is a pointer in C?**  
A pointer is a variable that holds the memory address of another variable. It allows direct access to memory, making programs more efficient.

**2\. What is the difference between \* and & in C?**

* **& (Address-of Operator)** – Returns the memory address of a variable.  
* **\* (Dereference Operator)** – Accesses the value stored at the memory address.

**3\. What happens if you dereference a NULL pointer?**  
Dereferencing a NULL pointer (accessing its value) leads to errors and may crash the program because it points to nothing.

**4\. What is pointer arithmetic?**  
Pointer arithmetic allows moving through memory using addition or subtraction. This helps navigate elements in an array or structure.

**5\. What is a void pointer?**  
A void pointer can store the address of any data type but must be converted to the correct type before use.

**6\. What is a dangling pointer?**  
A dangling pointer is a pointer that refers to memory that has been freed or deleted. Using it can cause unpredictable program behavior.

**7\. What are the risks of using pointers in C?**

* **Memory Leaks** – Forgetting to free allocated memory.  
* **Dangling Pointers** – Using freed or unallocated memory.  
* **Segmentation Fault** – Dereferencing NULL or invalid pointers.  
* **Uninitialized Pointers** – Using pointers without proper initialization.

**8\. What is NULL in pointers?**  
NULL is a special value that represents a pointer not pointing to any valid memory. It helps prevent accidental access to invalid memory locations.

**9\. How do you free dynamically allocated memory?**  
To prevent memory leaks, free allocated memory when it’s no longer needed. This ensures efficient memory usage in programs.

## **Key Points to Remember**

Here is the list of key points we need to remember about “Pointers in C”.

* Pointers store memory addresses, helping to access and manage data efficiently. They are useful in dynamic memory, functions, and data structures.  
* The \* symbol is used for pointer declaration and accessing values, while the & symbol gets a variable’s memory address.  
* A null pointer (NULL) points to nothing, preventing errors from uninitialized memory access and reducing crashes.  
* Pointer arithmetic lets you move through arrays and data structures easily by changing memory addresses.  
* Function pointers hold addresses of functions, allowing flexible program execution like callbacks in event-driven programming.  
* Dynamic memory functions (malloc, calloc, free, realloc) let you allocate and manage memory while a program runs.  
* Double pointers (\*\*ptr) store addresses of other pointers, useful for modifying function arguments and handling complex data structures.

# Strings in C

In this tutorial, we will learn about strings in C. A string is a group of characters that ends with a special character called \\0. C stores strings in arrays of characters. We will also see how to use functions like strlen, strcpy, and strcmp to work with strings.

**Contents:**

1. What are Strings in C?  
2. Declaring and Initializing Strings in C  
3. Input and Output of Strings in C  
4. Using printf() and scanf() in C  
5. Using gets() and puts() in C  
6. fgets() in C  
7. String Manipulation Functions in C  
8. Finding String Length (strlen()) in C  
9. Copying Strings (strcpy()) in C  
10. Concatenating Strings (strcat()) in C  
11. Searching for a Character (strchr()) in C  
12. Finding a Substring (strstr()) in C  
13. Reversing a String (strrev()) in C  
14. Differences Between Strings and Character Arrays in C  
15. FAQs on Strings in C

## **What are Strings in C?**

A string in C is a sequence of characters stored in an array and ended with a null character (\\0). Unlike other languages, C does not have a built-in string type. Instead, it uses character arrays **(char\[\])** or pointers **(char\*)** to work with strings.

## **Declaring and Initializing Strings in C**

There are multiple ways to declare and initialize strings in C:

**1\. Using Character Array (With Explicit Size)**

char name\[10\] \= "lcbcollege";

Stores the string “lcbcollege” with an extra \\0 at the end. Size must be large enough to store the string and null character.

**2\. Using Character Array (Without Explicit Size)**

char name\[\] \= "lcbcollege";

The compiler automatically determines the size (10 characters, including \\0).

Free 30-Day C++ Certification Bootcamp is Live. [Join Now\!](https://www.sanfoundry.com/cpp-certification-bootcamp/)

**3\. Using Individual Characters**

char name\[\] \= {'S', 'a', 'n', 'f', 'o', 'u', 'n', 'd', 'r', 'y', '**\\0**'};

Requires \\0 explicitly at the end to indicate the end of the string.

**4\. Using a Pointer**

char \*name \= "lcbcollege";

It points to a string stored in read-only memory. Changing it can cause errors.

**Example: Declaring and Initializing Strings**

\#include \<stdio.h\>  
   
int main()  
{  
    char quiz1\[\] \= "C Programming";  
    char quiz2\[15\] \= "lcbcollege";  
    char \*quiz3 \= "String in C";  
   
    printf("Quiz 1: %s**\\n**", quiz1);  
    printf("Quiz 2: %s**\\n**", quiz2);  
    printf("Quiz 3: %s**\\n**", quiz3);  
   
    return 0;

}

**Output:**

Quiz 1: C Programming  
Quiz 2: lcbcollege

Quiz 3: String in C

This C program shows three ways to store and print strings.

* **quiz1** is a character array that holds the string “C Programming”. The size of the array is set automatically by the compiler.  
* **quiz2** is a character array with a size of 15, holding the string “lcbcollege”. It has extra space for other characters if needed.  
* **quiz3** is a pointer to the string “String in C”, which is stored in read-only memory.

The **printf** function is used to print each string with the labels “Quiz 1”, “Quiz 2”, and “Quiz 3”.

## **Input and Output of Strings in C**

In C, strings are character arrays that require special handling for input and output. The standard methods for string I/O are:

* scanf() and printf()  
* gets() and puts() (but gets() is unsafe)  
* fgets() for safe input

## **Using printf() and scanf() in C**

In C, printf() and scanf() are standard input and output functions used for displaying output and taking user input.

* **printf()** is used to display a string.  
* **scanf()** is used to read a string.

**Example: Using scanf() and printf()**

\#include \<stdio.h\>  
   
int main()  
{  
    int score;  
    char quizName\[20\];  
   
    printf("Enter lcbcollege quiz name: ");  
    scanf("%s", quizName);  
   
    printf("Enter your score: ");  
    scanf("%d", &score);  
   
    printf("**\\n**Quiz: %s**\\n**", quizName);  
    printf("Your Score: %d**\\n**", score);  
   
    return 0;

}

**Input:**

Enter lcbcollege quiz name: C\_Programming

Enter your score: 90

**Output:**

Quiz: C\_Programming

Your Score: 90

This C program lets the user enter a quiz name and score. It first asks for the quiz name and stores it in the **quizName** array. Then, it asks for the score and stores it in the **score** variable. Finally, the program displays the quiz name and score on the screen.

## **Using gets() and puts() in C**

In C, gets() and puts() are used for handling string input and output. Due to security risks, the gets() function in C is unsafe and has been deprecated. Instead, you should use fgets(), which provides better control over input size and prevents buffer overflow.

* **gets()** reads the entire line, including spaces.  
* **puts()** prints the string and automatically adds a newline (\\n).

**Example: Using gets() and puts()**

\#include \<stdio.h\>  
   
int main()  
{  
    char quizTopic\[100\];  
   
    printf("Enter the lcbcollege quiz topic: ");  
    gets(quizTopic);  *// Accepts input with spaces*  
   
    puts("**\\n**Quiz Topic Entered:");  
    puts(quizTopic);  *// Displays the entered topic*  
   
    return 0;

}

**Example Input:**

Enter the lcbcollege quiz topic: C Programming Basics

**Output:**

Quiz Topic Entered:

C Programming Basics

This C program allows the user to input a quiz topic, including spaces. It declares a character array **quizTopic** to store the input. The program uses the **gets** function to read the quiz topic, which allows spaces in the input. After the input is entered, the program uses **puts** to display the entered quiz topic on the screen.

## **fgets() in C**

The fgets() function in C is used for safely reading a string from the standard input (stdin) or a file. It is the recommended alternative to gets() because it prevents buffer overflow by limiting the number of characters read.

**Syntax:**

char\* fgets(char\* str, int n, FILE\* stream);

**Parameters:**

* **str** → The character array where input is stored.  
* **n** → Maximum number of characters to read (including \\0).  
* **stream** → The input source (usually stdin for keyboard input).

**Example:**

\#include \<stdio.h\>  
   
int main()  
{  
    char topic\[100\];  
   
    printf("Enter the lcbcollege quiz topic: ");  
    fgets(topic, sizeof(topic), stdin);  
   
    *// Remove newline character*  
    topic\[strcspn(topic, "**\\n**")\] \= '**\\0**';  
   
    printf("Quiz Topic Entered: %s**\\n**", topic);  
    return 0;

}

**Example Input:**

Enter the lcbcollege quiz topic: C Programming

**Output:**

Quiz Topic Entered: C Programming

This C program lets the user enter a quiz topic with spaces. It stores the input in the topic array using **fgets**. The program then removes the newline character added by **fgets**. Finally, it shows the entered **quiz topic** on the screen.

## **String Manipulation Functions in C**

Here’s the list of String Manipulation Functions in C:

| Function | Description | Example Usage |
| :---: | ----- | ----- |
| **strlen(str)** | Returns the length of the string (excluding \\0). | int len \= strlen(“Hello”); |
| **strcpy(dest, src)** | Copies src into dest (unsafe if dest is smaller). | strcpy(dest, “C Language”); |
| **strncpy(dest, src, n)** | Copies at most n characters from src to dest. | strncpy(dest, “C Language”, 5); |
| **strcat(dest, src)** | Appends src to dest (unsafe if dest is small). | strcat(str1, str2); |
| **strncat(dest, src, n)** | Appends at most n characters from src to dest. | strncat(str1, str2, 3); |
| **strcmp(str1, str2)** | Compares two strings lexicographically. | int res \= strcmp(“apple”, “banana”); |
| **strncmp(str1, str2, n)** | Compares the first n characters of two strings. | strncmp(“apple”, “apricot”, 3); |
| **strchr(str, ch)** | Finds the first occurrence of ch in str. | char \*ptr \= strchr(“Hello”, ‘e’); |
| **strrchr(str, ch)** | Finds the last occurrence of ch in str. | char \*ptr \= strrchr(“Hello”, ‘l’); |
| **strstr(str, substr)** | Finds the first occurrence of substr in str. | char \*ptr \= strstr(“Hello World”, “World”); |
| **strtok(str, delim)** | Splits str into tokens based on delim. | char \*token \= strtok(str, “,”); |
| **toupper(ch)** | Converts a character to uppercase (from \<ctype.h\>). | char upper \= toupper(‘a’); |
| **tolower(ch)** | Converts a character to lowercase (from \<ctype.h\>). | char lower \= tolower(‘A’); |

## **Finding String Length (strlen()) in C**

Finds the number of characters in a string (excluding the null terminator \\0).

**Syntax:**

size\_t strlen(const char \*str);

**Example:**

\#include \<stdio.h\>  
\#include \<string.h\>  
   
int main() {  
    char str\[\] \= "lcbcollege";  
    printf("Length of the string: %lu**\\n**", strlen(str));  
    return 0;

}

**Output:**

Length of the string: 10

This C program shows how to find the length of a string. It declares a string **str** with the value “lcbcollege”. The program uses the **strlen** function to calculate the length of the string and prints the result on the screen.

## **Copying Strings (strcpy()) in C**

Copies one string into another.

**Syntax:**

char\* strcpy(char \*destination, const char \*source);

**Example:**

\#include \<stdio.h\>  
\#include \<string.h\>  
   
int main()  
{  
    char src\[\] \= "C Programming";  
    char dest\[50\];  
   
    strcpy(dest, src);  
    printf("Copied String: %s**\\n**", dest);  
    return 0;

}

**Output:**

Copied String: C Programming

This C program demonstrates how to copy a string. It declares a source string **src** with the value “C Programming” and a destination array **dest** with enough space to hold the string. The program uses the **strcpy** function to copy the content of src into dest. Finally, it prints the copied string on the screen.

## **Concatenating Strings (strcat()) in C**

Appends one string to another.

**Syntax:**

char\* strcat(char \*destination, const char \*source);

**Example:**

\#include \<stdio.h\>  
\#include \<string.h\>  
   
int main()  
{  
    char str1\[50\] \= "Hello, ";  
    char str2\[\] \= "lcbcollege\!";  
   
    strcat(str1, str2);  
    printf("Concatenated String: %s**\\n**", str1);  
    return 0;

}

**Output:**

Concatenated String: Hello, lcbcollege\!

This C program demonstrates how to concatenate two strings. It declares **str1** with the value “Hello, ” and **str2** with “lcbcollege\!”. The program uses the **strcat** function to append **str2 to str1**. Finally, it prints the concatenated string on the screen.

## **Searching for a Character (strchr()) in C**

Finds the first occurrence of a character in a string.

**Syntax:**

char\* strchr(const char \*str, int ch);

**Example:**

\#include \<stdio.h\>  
\#include \<string.h\>  
   
int main()  
{  
    char text\[\] \= "lcbcollege Quiz";  
    char \*pos \= strchr(text, 'Q');  
   
    if (pos \!= NULL)  
        printf("Character found at position: %ld**\\n**", pos \- text);  
    else  
        printf("Character not found.**\\n**");  
   
    return 0;

}

**Output:**

Character found at position: 10

This C program shows how to find the position of a character in a string. It declares a string text with the value “lcbcollege Quiz”. The program uses the **strchr** function to search for the character ‘**Q**‘. If the character is found, it prints the position of the character in the string. If the character is not found, it prints a message saying the character was not found.

## **Finding a Substring (strstr()) in C**

Finds the first occurrence of a substring in a string.

**Syntax:**

char\* strstr(const char \*str, const char \*substr);

**Example:**

\#include \<stdio.h\>  
\#include \<string.h\>  
   
int main()  
{  
    char text\[\] \= "Learn C Programming at lcbcollege\!";  
    char \*pos \= strstr(text, "Programming");  
   
    if (pos \!= NULL)  
        printf("Substring found at position: %ld**\\n**", pos \- text);  
    else  
        printf("Substring not found.**\\n**");  
   
    return 0;

}

**Output:**

Substring found at position: 8

This C program finds the position of a substring in a string. It stores the string “Learn C Programming at lcbcollege\!” in the variable **text**. The program uses **strstr** to search for the substring “Programming”. If the substring is found, it shows the position where it starts. If not, it prints a message saying the substring is not found.

## **Reversing a String (strrev()) in C**

Reverses the given string.

**Syntax:**

char\* strrev(char \*str);

**Example:**

\#include \<stdio.h\>  
\#include \<string.h\>  
   
int main()  
{  
    char text\[\] \= "lcbcollege";  
    printf("Reversed: %s**\\n**", strrev(text));  
    return 0;

}

**Output:**

Reversed: egellocbcl

This C program reverses a string. It stores the string “lcbcollege” in the variable text. The program uses the **strrev** function to reverse the string. Finally, it prints the reversed string on the screen.

## **Differences Between Strings and Character Arrays in C**

Here’s the key differences between Strings and Character Arrays in C:

| Aspect | String | Character Array |
| :---: | ----- | ----- |
| **Definition** | A sequence of characters ending with a null character ‘\\0’. | A collection of characters stored in contiguous memory locations. |
| **Null Terminator** | Always ends with ‘\\0’ to indicate the end of the string. | Does not necessarily end with ‘\\0’ unless explicitly assigned. |
| **Declaration** | char str\[\] \= “Hello”; | char arr\[\] \= {‘H’, ‘e’, ‘l’, ‘l’, ‘o’}; |
| **Memory Allocation** | Can be declared as an array or a pointer. | Only declared as an array. |
| **Modification** | Can be modified if stored in a character array. | Can modify individual characters, but if a string is assigned directly, modifying is unsafe. |
| **Accessing Elements** | Can be accessed using array indexing or pointer notation. | Accessed using array indexing only. |
| **Operations** | Supports standard string functions like strlen(), strcpy(), strcat(). | Does not support string functions unless explicitly terminated with ‘\\0’. |
| **Example Usage** | char str\[\] \= “Hello”; | char arr\[\] \= {‘H’, ‘e’, ‘l’, ‘l’, ‘o’}; |

## **FAQs on Strings in C**

**1\. What is a string in C?**  
A string in C is a sequence of characters stored in a character array, ending with a null character (\\0).

**2\. How do you declare and initialize a string in C?**  
Strings can be declared using character arrays or pointers and initialized using double quotes or character lists.

**3\. What is the difference between a character array and a string?**  
A character array is a collection of characters, whereas a string is a character array that ends with a null terminator (\\0).

**4\. Can we modify a string literal in C?**  
No, string literals are stored in read-only memory, and modifying them leads to undefined behavior.

**5\. How do you take string input in C?**  
String input can be taken using functions like scanf() and fgets(). scanf() does not read spaces, while fgets() reads the entire line.

**6\. What happens if a string is not null-terminated?**  
Without a null terminator, string functions may read beyond the allocated memory, leading to undefined behavior.

**7\. How do you dynamically allocate memory for a string?**  
Memory for a string can be allocated using dynamic memory functions like malloc() and calloc().

**8\. How do you concatenate two strings safely?**  
Using strncat() ensures that only a limited number of characters are appended, preventing buffer overflow.

**9\. How do you compare two strings in C?**  
The strcmp() function is used for comparison. A return value of 0 indicates that the strings are equal.

## **Key Points to Remember**

Here is the list of key points we need to remember about “Strings in C”.

* Strings in C are arrays of characters, terminated by a null character (\\0).  
* Strings can be declared using character arrays (with or without an explicit size) or pointers, but modifying strings declared with a pointer to a string literal is unsafe.  
* scanf() and printf() are used for basic input/output, while gets() (unsafe) and puts() handle string input/output. fgets() is a safer alternative to gets().  
* Functions like strlen(), strcpy(), strcat(), and strcmp() allow common operations such as measuring string length, copying, concatenating, and comparing strings.  
* strlen() is used to find the length of a string, excluding the null terminator (\\0).  
* strcpy() is used to copy one string into another. Ensure that the destination array is large enough to hold the copied string.  
* strcat() appends one string to another, but care must be taken to ensure there is enough space in the destination array.  
* Strings end with a null character (\\0), while character arrays may not. Strings are easier to manipulate using built-in functions, whereas character arrays require explicit handling of the null terminator.

# Structures and Unions in C

# 

# **Structures and Unions in C**

In this tutorial, we will learn about structures and unions in C. A structure lets you group different types of data together, and each piece of data gets its own memory. A union also groups data, but all the data shares the same memory, so only one piece of data can be stored at a time. We will show you how to use and work with both structures and unions in C.

**Contents:**

1. What are Structures in C?  
2. Defining a Structure in C  
3. Array of Structures in C  
4. Nested Structures in C  
5. Self-Referential Structures in C  
6. What are Unions in C?  
7. Defining a Union in C  
8. Differences Between Structures and Unions in C  
9. Applications of Structures in C  
10. Applications of Unions in C  
11. FAQs on Structures and Unions in C

## **What are Structures in C?**

In C, a structure is a custom data type that groups different types of data under one name. It helps to store related variables together in an organized way.

**Key Features of Structures:**

* **Heterogeneous Data Storage:** Unlike arrays, which store only one type of data, structures can store different types of data.  
* **Memory Allocation:** Each part of the structure has its own memory space.  
* **Accessing Members:** You can use the dot (.) operator to access each part of the structure.  
* **Supports Arrays of Structures**: You can use an array to create multiple records.

## **Defining a Structure in C**

In C, a structure is defined using the struct keyword.

**Syntax:**

struct StructureName {  
    data\_type member1;  
    data\_type member2;  
    …  
};

**Example: Defining and Using a Structure**

\#include \<stdio.h\>  
   
*// Define a structure for certification details*  
struct Certification  
{  
    char candidateName\[50\];  
    char course\[30\];  
    int score;  
};  
   
int main()  
{  
    *// Declare and initialize a structure variable*  
    struct Certification cert \= {"Pooja", "C Programming", 95};  
   
    *// Display certification details*  
    printf(" Certification Details**\\n**");  
    printf("--------------------------------**\\n**");  
    printf("Candidate Name : %s**\\n**", cert.candidateName);  
    printf("Course         : %s**\\n**", cert.course);  
    printf("Score         : %d%%**\\n**", cert.score);  
   
    return 0;  
}

**Output:**

lcbcollege Certification Details  
\--------------------------------  
Candidate Name : Pooja  
Course         : C Programming  
Score         : 95%

This C program creates a structure called **Certification** to store a candidate’s name, course, and score. In the **main()** function, it sets values for these details. Then, it prints the candidate’s name, course, and score on the screen in a simple format.

## **Array of Structures in C**

An array of structures in C is a collection of structure variables stored sequentially in memory. It is used when you need to store multiple records of the same type.

**Syntax:**

struct StructureName {  
    data\_type member1;  
    data\_type member2;  
    *// More members if needed*  
};  
struct StructureName arrayName\[array\_size\];

**Example:**

\#include \<stdio.h\>  
   
// Define a structure for quiz results  
struct QuizResult {  
    char participant\[50\];  
    int score;  
};  
   
int main()  
{  
    // Declare an array of structures  
    struct QuizResult results\[3\] \= {  
        {"David", 95},  
        {"Sreeja", 88},  
        {"Nitesh", 92}  
    };  
   
    // Display quiz results  
    printf("lcbcollege Quiz Results\\n");  
    printf("----------------------------\\n");  
    for (int i \= 0; i \< 3; i++) {  
        printf("Participant: %s, Score: %d\\n", results\[i\].participant, results\[i\].score);  
    }  
   
    return 0;  
}

**Output:**

lcbcollege Quiz Results  
\----------------------------  
Participant: David, Score: 95  
Participant: Sreeja, Score: 88  
Participant: Nitesh, Score: 92

This C program defines a structure called **QuizResult** to store the participant’s name and score. In the **main()** function, it declares an array of structures called **results** to hold quiz results for three participants: David, Sreeja, and Nitesh. The program then uses a loop to print the name and score of each participant in a clear format.

## **Nested Structures in C**

A nested structure in C is a structure that contains another structure as a member. It helps in organizing complex data by allowing hierarchical structuring.

**Syntax:**

struct Outer {  
    data\_type variable1;  
    struct Inner {  
        data\_type variable2;  
    } innerVar;  
};

**Example:**

\#include \<stdio.h\>  
   
*// Define an outer structure*  
struct Certification {  
    char name\[50\];  
    struct Score {  
        int marks;  
        char grade;  
    } result;  
};  
   
int main()  
{  
    *// Declare and initialize a nested structure*  
    struct Certification student \= {"Harsh", {90, 'A'}};  
   
    *// Display the certification details*  
    printf("lcbcollege Certification Details:**\\n**");  
    printf("Participant: %s**\\n**", student.name);  
    printf("Marks: %d**\\n**", student.result.marks);  
    printf("Grade: %c**\\n**", student.result.grade);  
   
    return 0;  
}

**Output:**

lcbcollege Certification Details:  
Participant: Harsh  
Marks: 90  
Grade: A

This C program defines a structure called **Certification** with a nested structure **Score**. The **Certification** structure stores a participant’s name, and the **Score** structure stores the marks and grade. The program creates a variable **student** with the name “Harsh,” marks 90, and grade ‘A’. It then prints the participant’s name, marks, and grade.

## **Self-Referential Structures in C**

A self-referential structure is a structure that includes a pointer to an instance of the same structure type. These structures are commonly used in linked lists, trees, and other dynamic data structures.

**Syntax:**

struct Node {  
    int data;  
    struct Node \*next; *// Pointer to another instance of struct Node*  
};

**Example: Implementing a Simple Linked List Node**

\#include \<stdio.h\>  
\#include \<stdlib.h\>  
   
*// Define a self-referential structure*  
struct Node {  
    int data;  
    struct Node \*next; *// Pointer to the next node*  
};  
   
int main() {  
    *// Creating nodes dynamically*  
    struct Node \*head \= (struct Node\*)malloc(sizeof(struct Node));  
    struct Node \*second \= (struct Node\*)malloc(sizeof(struct Node));  
   
    *// Initializing data*  
    head\-\>data \= 10;  
    head\-\>next \= second;  
   
    second\-\>data \= 20;  
    second\-\>next \= NULL;  
   
    *// Displaying the values*  
    printf("lcbcollege Linked List Example:**\\n**");  
    printf("First Node Data: %d**\\n**", head\-\>data);  
    printf("Second Node Data: %d**\\n**", second\-\>data);  
   
    *// Free allocated memory*  
    free(head);  
    free(second);  
   
    return 0;  
}

**Output:**

lcbcollege Linked List Example:  
First Node Data: 10  
Second Node Data: 20

## **What are Unions in C?**

A union in C is a special data type similar to a structure, but with a key difference: all members share the same memory location. This means that only one member can hold a value at any given time, and the size of the union is determined by the largest member.

## **Defining a Union in C**

A union is defined using the union keyword, similar to how a structure (struct) is defined.

**Syntax:**

union UnionName {  
    data\_type member1;  
    data\_type member2;  
    …  
};

**Example: Declaring and Using a Union**

\#include \<stdio.h\>  
   
*// Define a union for a lcbcollege certification test result*  
union TestResult  
{  
    int score;  
    char grade;  
};  
   
int main()  
{  
    union TestResult lcbcollege;  
   
    *// Assign and print score*  
    lcbcollege.score \= 85;  
    printf("lcbcollege Quiz Score: %d**\\n**", lcbcollege.score);  
   
    *// Assign and print grade (overwrites score due to shared memory)*  
    lcbcollege.grade \= 'A';  
    printf("lcbcollege Certification Grade: %c**\\n**", lcbcollege.grade);  
   
    *// Previous score is now overwritten, showing the union's behavior*  
    printf("Updated Score (Corrupted due to Union behavior): %d**\\n**", lcbcollege.score);  
   
    return 0;  
}

**Output:**

lcbcollege Quiz Score: 85    
lcbcollege Certification Grade: A    
Updated Score (Corrupted due to Union behavior): 65

This C program uses a union called **TestResult**. The union can store either a score or a grade, but not both at the same time. First, it stores the score 85 and prints it. Then, it stores the grade ‘A’, which replaces the score. When it prints the score again, it shows the overwritten value.

## **Differences Between Structures and Unions in C**

Here’s a structured comparison between Structures (struct) and Unions (union) in C:

| Feature | Structure (struct) | Union (union) |
| :---: | ----- | ----- |
| **Memory Allocation** | Allocates separate memory for each member. | All members share the same memory space. |
| **Calculation of Size** | Size \= sum of all members. | Size \= size of the largest member. |
| **Access** | All members can be accessed simultaneously. | Only one member can store a valid value at a time. |
| **Value Retention** | Each member retains its own value. | Storing a new value overwrites previous data. |
| **Example Size (for int, float, char\[20\])** | Size \= 28 bytes (4+4+20). | Size \= 20 bytes (largest member). |
| **Use Case** | When all members are needed at once. | When only one member is needed at a time. |
| **Speed** | Faster (direct access to all members). | Slightly slower (only one member usable at a time). |
| **Memory Efficiency** | Uses more memory. | Saves memory by sharing space. |
| **Example Applications** | Employee records, student details, car specs. | Symbol tables, compiler data types, device drivers. |
| **Supported Nesting** | Yes (can contain structures and unions). | Yes (can contain structures and unions). |

## **Applications of Structures in C**

* **Grouping Related Data:** Structures combine different types of data into one unit. This is helpful for things like students, employees, and customers.  
* **Database Records:** Structures help manage database records, making it easier to store and retrieve data.  
* **Data Processing:** Structures are used to work with data files, network packets, and formats like JSON or XML.  
* **System Programming:** Structures help operating systems manage processes, system calls, and hardware tasks.  
* **Networking:** Structures define network headers and help manage data packets in networking.

## **Applications of Unions in C**

* **Memory Optimization:** Unions allow different variables to use the same memory space, saving memory in small systems like microcontrollers.  
* **Handling Different Data Types:** Unions store different data types in one memory space, which is useful in hardware and data conversion.  
* **Bit Manipulation:** Unions help modify specific bits in hardware registers using bit-fields.  
* **Device Drivers:** Unions are used in low-level programming and controlling devices efficiently.  
* **APIs and Hardware:** Unions help manage data in C-based APIs and during hardware access, making data handling easier.

## **FAQs on Structures and Unions in C**

**1\. What is a structure in C?**  
A structure in C is a user-defined data type that allows grouping different data types under a single name. It is used to organize complex data efficiently.

**2\. What is a union in C?**  
A union is a special data type in C that allows multiple variables to share the same memory space. Only one member can store a value at a time, making unions memory-efficient.

**3\. When should I use a structure instead of a union?**  
Use a structure when you need to store multiple pieces of related data independently. Examples include student records, employee details, and product catalogs.

**4\. When should I use a union instead of a structure?**  
Use a union when memory optimization is crucial, and only one value is needed at a time. Examples include embedded systems, hardware registers, and variant data storage.

**5\. Can a structure contain a union?**  
Yes, a structure can contain a union as a member. This is useful when defining complex data types that require memory-efficient storage.

**6\. Can a union contain a structure?**  
Yes, a union can contain a structure, but since a union shares memory for all its members, you must carefully manage data assignment to avoid overwriting values.

**7\. Can we use pointers with structures and unions?**  
Yes, pointers can be used with both structures and unions to dynamically allocate memory and manipulate data efficiently.

**8\. Are structures and unions compatible with file handling in C?**  
Yes, structures and unions are widely used in file handling, particularly when reading and writing binary data.

## **Key Points to Remember**

Here is the list of key points we need to remember about “Structures and Unions in C”.

* Structures allow grouping different types of data under one name, each with its own memory space.  
* In unions, all members share the same memory space, so only one member can hold a value at any time.  
* In structures, each member has its own memory space, while in unions, all members share a common memory location.  
* Structures allow accessing all members at the same time, whereas unions allow accessing only one member at a time.  
* Structures can contain other structures as members, allowing for hierarchical data representation.  
* You can store multiple records of the same type using arrays of structures.  
* Structures can have pointers to themselves, commonly used in dynamic data structures like linked lists.  
* Structures are useful for grouping related data, while unions are great for memory optimization and handling different data types in embedded systems or hardware programming.

# Dynamic Memory Allocation in C

# **Dynamic Memory Allocation in C**

In this tutorial, we will learn about Dynamic Memory Allocation in C. This method lets you request memory while your program is running. It is helpful when you don’t know how much memory you’ll need ahead of time. We will cover how to use functions like malloc(), calloc(), realloc(), and free() to manage memory effectively in your programs.

**Contents:**

1. What is Dynamic Memory Allocation in C?  
2. Why Use Dynamic Memory Allocation in C?  
3. Functions for Dynamic Memory Allocation in C  
4. malloc() Function in C  
5. calloc() Function in C  
6. realloc() Function in C  
7. free() Function in C  
8. Difference Between malloc() and calloc() in C  
9. Common Mistakes and Best Practices in DMA  
10. FAQs on Dynamic Memory Allocation in C

## **What is Dynamic Memory Allocation in C?**

Dynamic memory allocation (DMA) in C is the process of allocating memory while the program is running, using special functions. Unlike static memory allocation, which happens at compile-time, DMA allows a program to request memory as needed. This makes it a more efficient way to use memory.

## **Why Use Dynamic Memory Allocation in C?**

* **Efficient Memory Usage:** Static memory allocation sets memory in advance. This can waste memory if it’s not fully used. With dynamic memory allocation (DMA), you only ask for the memory you need, which saves space.  
* **Handling Large Data Structures:** Some data structures, like arrays, linked lists, trees, and graphs, need memory that the program doesn’t know about until it runs. DMA lets you create and resize these structures as needed.  
* **Flexibility in Memory Management:** With DMA, you can request memory when you need it and release it when you’re done. This helps save memory, especially in resource-limited systems.  
* **Supports Variable-Sized Data Structures:** When the number of elements changes, such as with user input, DMA helps manage it. For example, a program can read an unknown number of student records from a database.  
* **Enables Dynamic Array Resizing:** DMA allows arrays to change size. The realloc() function lets you resize arrays as the data grows or shrinks, saving memory.  
* **Prevents Stack Overflow for Large Memory Needs:** Stack memory is limited, which can cause stack overflow when the data is too large. DMA uses the heap, a larger memory area, to prevent overflow.

## **Functions for Dynamic Memory Allocation in C**

The C Standard Library provides four functions for dynamic memory allocation, found in \<stdlib.h\>:

| Function | Description |
| :---: | ----- |
| **malloc()** | Allocates a block of memory but does not initialize it. |
| **calloc()** | Allocates and initializes memory with zero. |
| **realloc()** | Resizes previously allocated memory. |
| **free()** | Deallocates the allocated memory to avoid memory leaks. |

## **malloc() Function in C**

The malloc() function in C is used for dynamic memory allocation. It allows a program to allocate a block of memory at runtime, making it useful for creating flexible data structures like dynamic arrays and linked lists.

**Syntax:**

void\* malloc(size\_t size);

* **size\_t size:** The number of bytes to allocate.  
* Returns a **void\*** pointer to the allocated memory.  
* Returns **NULL** if memory allocation fails.

**Key Features of malloc()**

* Allocates memory at runtime.  
* Returns a void pointer, which can be typecast to any data type.  
* Does not initialize the allocated memory (contains garbage values).  
* Requires free() to release memory and prevent memory leaks.

**Example:**

\#include \<stdio.h\>  
\#include \<stdlib.h\>  
   
int main()  
{  
    int \*quizScores;  
    int count, i;  
   
    printf("Enter the number of quizzes: ");  
    scanf("%d", &count);  
   
    *// Allocating memory dynamically*  
    quizScores \= (int\*) malloc(count \* sizeof(int));  
   
    if (quizScores \== NULL) {  
        printf("Memory allocation failed\!**\\n**");  
        return 1;  
    }  
   
    *// Taking input*  
    printf("Enter quiz scores:**\\n**");  
    for (i \= 0; i \< count; i\++) {  
        scanf("%d", &quizScores\[i\]);  
    }  
   
    *// Displaying scores*  
    printf(" Quiz Scores: ");  
    for (i \= 0; i \< count; i\++) {  
        printf("%d ", quizScores\[i\]);  
    }  
   
    free(quizScores); *// Freeing memory*  
   
    return 0;  
}

**Output:**

Enter the number of quizzes: 4  
Enter quiz scores:  
88 76 92 85  
lcbcollege Quiz Scores: 88 76 92 85

This C program asks the user for the number of quizzes. It then uses **malloc()** to create enough space in memory to store the quiz scores. After that, the program takes the quiz scores as input and shows them on the screen. Once done, it frees the memory to avoid any memory issues.

## **calloc() Function in C**

The calloc() function in C is used for dynamic memory allocation. It allocates a specified number of blocks in memory, initializing all elements to zero. Unlike malloc(), which does not initialize memory, calloc() ensures that allocated memory starts with all bytes set to 0\.

**Syntax:**

void\* calloc(size\_t num, size\_t size);

**Parameters:**

* **num** → Number of elements to allocate.  
* **size** → Size of each element in bytes.

**Return Value:**

* Returns a pointer to the allocated memory.  
* If memory allocation fails, it returns NULL.

**Example:**

\#include \<stdio.h\>  
\#include \<stdlib.h\>  
   
int main()  
{  
    int \*scores;  
    int numQuizzes, i;  
   
    printf("Enter the number of quizzes: ");  
    scanf("%d", &numQuizzes);  
   
    *// Allocating memory using calloc*  
    scores \= (int\*) calloc(numQuizzes, sizeof(int));  
   
    if (scores \== NULL) {  
        printf("Memory allocation failed\!**\\n**");  
        return 1;  
    }  
   
    *// Input scores*  
    printf("Enter quiz scores:**\\n**");  
    for (i \= 0; i \< numQuizzes; i\++) {  
        scanf("%d", &scores\[i\]);  
    }  
   
    *// Display scores*  
    printf("Quiz Scores: ");  
    for (i \= 0; i \< numQuizzes; i\++) {  
        printf("%d ", scores\[i\]);  
    }  
   
    free(scores); *// Free allocated memory*  
   
    return 0;  
}

**Output:**

Enter the number of quizzes: 3  
Enter quiz scores:  
85 90 78  
Quiz Scores: 85 90 78

This C program asks the user for the number of quizzes and uses **calloc()** to allocate memory for storing quiz scores. Unlike **malloc()**, **calloc()** also initializes the memory to zero. The program then takes quiz scores as input and displays them. Finally, it frees the memory to prevent memory leaks.

## **realloc() Function in C**

The realloc() function in C is used to resize previously allocated memory dynamically. It allows you to increase or decrease the size of allocated memory without losing the existing data (up to the new size limit).

**Syntax:**

void\* realloc(void\* ptr, size\_t new\_size);

**Parameters:**

* ptr → Pointer to the previously allocated memory block.  
* new\_size → The new size (in bytes) for the memory block.

**Return Value:**

* Returns a pointer to the newly allocated memory.  
* If new\_size is 0, the memory is freed, and NULL is returned.  
* If realloc() fails, it returns NULL, and the original memory remains unchanged.

**Example:**

\#include \<stdio.h\>  
\#include \<stdlib.h\>  
   
int main()  
{  
    int \*scores, i, numQuizzes;  
   
    *// Initial allocation for 3 quizzes*  
    numQuizzes \= 3;  
    scores \= (int\*) malloc(numQuizzes \* sizeof(int));  
   
    if (scores \== NULL) {  
        printf("Memory allocation failed\!**\\n**");  
        return 1;  
    }  
   
    printf("Enter scores for %d quizzes:**\\n**", numQuizzes);  
    for (i \= 0; i \< numQuizzes; i\++) {  
        printf("Quiz %d: ", i \+ 1);  
        scanf("%d", &scores\[i\]);  
    }  
   
    *// Resize memory to accommodate more quiz scores*  
    printf("Enter new total quiz count: ");  
    scanf("%d", &numQuizzes);  
   
    scores \= (int\*) realloc(scores, numQuizzes \* sizeof(int));  
   
    if (scores \== NULL) {  
        printf("Memory reallocation failed\!**\\n**");  
        return 1;  
    }  
   
    *// Input additional scores if the size increased*  
    for (i \= 3; i \< numQuizzes; i\++) {  
        printf("Enter score for Quiz %d: ", i \+ 1);  
        scanf("%d", &scores\[i\]);  
    }  
   
    printf("**\\n**Updated Quiz Scores:**\\n**");  
    for (i \= 0; i \< numQuizzes; i\++) {  
        printf("Quiz %d: %d**\\n**", i \+ 1, scores\[i\]);  
    }  
   
    free(scores); *// Free allocated memory*  
    return 0;  
}

**Output:**

Enter scores for 3 quizzes:  
Quiz 1: 85  
Quiz 2: 90  
Quiz 3: 78  
Enter new total quiz count: 5  
Enter score for Quiz 4: 88  
Enter score for Quiz 5: 92  
   
Updated Quiz Scores:  
Quiz 1: 85  
Quiz 2: 90  
Quiz 3: 78  
Quiz 4: 88  
Quiz 5: 92

This C program shows how to allocate and resize memory. First, it allocates space for three quiz scores. The user enters scores for these three quizzes. Then, the program asks for the new number of quizzes and reallocates memory to fit this number. If successful, the user can enter more scores. Finally, the program shows all the quiz scores and frees the memory used.

## **free() Function in C**

The free() function in C is used to deallocate memory that was previously allocated using malloc(), calloc(), or realloc(). It helps in preventing memory leaks by releasing unused memory back to the system.

**Syntax:**

void free(void \*ptr);

**ptr** is the pointer to the memory block that needs to be freed.

**Example:**

\#include \<stdio.h\>  
\#include \<stdlib.h\>  
   
int main()  
{  
    int \*scores;  
   
    *// Allocating memory for 5 quiz scores*  
    scores \= (int\*) malloc(5 \* sizeof(int));  
   
    if (scores \== NULL) {  
        printf("Memory allocation failed\!**\\n**");  
        return 1;  
    }  
   
    printf("Enter 5 quiz scores:**\\n**");  
    for (int i \= 0; i \< 5; i\++) {  
        printf("Quiz %d: ", i \+ 1);  
        scanf("%d", &scores\[i\]);  
    }  
   
    *// Displaying scores*  
    printf("**\\n**Stored Quiz Scores:**\\n**");  
    for (int i \= 0; i \< 5; i\++) {  
        printf("Quiz %d: %d**\\n**", i \+ 1, scores\[i\]);  
    }  
   
    *// Freeing allocated memory*  
    free(scores);  
    printf("**\\n**Memory has been deallocated successfully.**\\n**");  
   
    return 0;  
}

**Output:**

Enter 5 quiz scores:  
Quiz 1: 85  
Quiz 2: 90  
Quiz 3: 78  
Quiz 4: 88  
Quiz 5: 92  
   
Stored Quiz Scores:  
Quiz 1: 85  
Quiz 2: 90  
Quiz 3: 78  
Quiz 4: 88  
Quiz 5: 92  
Memory has been deallocated successfully.

This C program allocates memory for 5 quiz scores using **malloc**. After allocating the memory, it asks the user to input scores for 5 quizzes. The scores are then displayed. Finally, the memory is freed using **free**, and a message is shown to confirm successful memory deallocation.

## **Difference Between malloc() and calloc() in C**

Here is the difference between malloc() and calloc() in C:

| Feature | malloc() | calloc() |
| :---- | :---- | :---- |
| **Full Form** | Memory Allocation | Contiguous Allocation |
| **Memory Initialization** | Does not initialize memory (contains garbage values). | Initializes memory to zero. |
| **Syntax** | ptr \= (int\*) malloc(size\_in\_bytes); | ptr \= (int\*) calloc(num\_elements, size\_of\_each\_element); |
| **Number of Arguments** | Takes one argument (total size in bytes). | Takes two arguments (number of elements and size of each element). |
| **Performance** | Faster since it doesn’t initialize memory. | Slightly slower due to zero initialization. |
| **Use Case** | When memory initialization is not required (e.g., if values will be overwritten). | When memory must be initialized to zero (e.g., arrays, structs). |
| **Memory Contiguity** | Allocates a single continuous block of memory. | Allocates multiple blocks and initializes them to \`0\`. |
| **Return Value** | Returns NULL if allocation fails. | Returns NULL if allocation fails. |

## **Common Mistakes and Best Practices in DMA**

* **Check if Memory Allocation Fails** – malloc(), calloc(), or realloc() can return NULL if memory isn’t available. Always check before using the allocated memory to avoid crashes.  
* **Free Memory After Use** – If you allocate memory, don’t forget to free() it. Otherwise, your program may leak memory and slow down over time.  
* **Avoid Using Memory After Freeing It** – Accessing memory after calling free() leads to unpredictable behavior. To prevent this, set the pointer to NULL after freeing it.  
* **Be Careful with realloc()** – If realloc() fails, it returns NULL and doesn’t free the original memory. Store the result in a temporary pointer before assigning it to avoid losing the original data.  
* **Use calloc() for Zero-Initialized Memory** – malloc() gives you uninitialized memory with garbage values. If you need the memory to start with zeros, use calloc().  
* **Don’t Free Memory Twice** – Calling free() twice on the same pointer can cause errors or crashes. After freeing, set the pointer to NULL to avoid accidental double free.  
* **Allocate Enough Space** – If you don’t allocate enough memory, especially for strings, your program may overwrite memory it shouldn’t. Always account for extra space, like the \\0 at the end of strings.  
* **Only Free Heap Memory** – You can only free() memory allocated with malloc(), calloc(), or realloc(). Trying to free stack memory (like local arrays) will cause errors.

## **FAQs on Dynamic Memory Allocation in C**

**1\. What is dynamic memory allocation in C?**  
Dynamic memory allocation allows programs to request memory at runtime using functions like malloc(), calloc(), realloc(), and free(). It helps efficiently manage memory based on program needs.

**2\. How is dynamic memory different from static memory allocation?**  
Static memory allocation occurs at compile time, and memory size is fixed (e.g., arrays). Dynamic memory allocation happens at runtime, allowing flexible memory usage.

**3\. What happens if malloc() fails?**  
If malloc() fails due to insufficient memory, it returns NULL. Always check if the pointer returned is NULL before using it.

**4\. How is calloc() different from malloc()?**  
malloc() allocates memory without initializing it, meaning it may contain garbage values. calloc() allocates memory and initializes it to zero.

**5\. When should I use realloc()?**  
Use realloc() when you need to resize previously allocated memory without losing existing data. If it fails, the original memory remains unchanged.

**6\. What happens if I forget to call free()?**  
Forgetting to call free() results in memory leaks, where allocated memory is not returned to the system, leading to higher memory consumption.

**7\. What is a memory leak?**  
A memory leak occurs when allocated memory is never freed, leading to wastage and potential application slowdown over time.

**8\. Can I use free() on a NULL pointer?**  
Yes. Calling free(NULL) is safe and does nothing. This prevents accidental crashes when trying to free an unallocated pointer.

## **Key Points to Remember**

Here is the list of key points we need to remember about “Dynamic Memory Allocation in C”.

* Dynamic memory allocation allows memory to be requested during program execution, making memory usage more efficient and flexible.  
* malloc() allocates memory but doesn’t set it to anything, while calloc() allocates memory and fills it with zeros.  
* realloc() allows you to change the size of already allocated memory, keeping your data intact.  
* Always use free() to release memory once you’re done with it, and set the pointer to NULL to avoid mistakes.  
* Always check if malloc(), calloc(), or realloc() return NULL to make sure memory was successfully allocated.  
* Avoid errors like freeing memory twice, using freed memory, or not allocating enough space for your needs.  
* Use calloc() when you need memory to start as zero, and malloc() when you don’t need that.  
* Memory allocated by malloc() and calloc() is continuous, so make sure you allocate enough to avoid issues.

# Tab 19

# **File Handling in C**

File handling in C allows you to open, read, write, and edit files. You can use functions like fopen(), fclose(), fread(), fwrite(), fprintf(), and fscanf() to manage files. C works with text and binary files. In this tutorial, you will learn how to open files, write and read data, and close them properly. Knowing how to handle files helps you save and use data in C programs.

**Contents:**

1. [What is File Handling in C?](https://www.sanfoundry.com/file-handling-in-c/#1)  
2. [Types of Files in C](https://www.sanfoundry.com/file-handling-in-c/#2)  
3. [File Operations in C](https://www.sanfoundry.com/file-handling-in-c/#3)  
4. [Opening and Closing a File (Using fopen() and fclose()) in C](https://www.sanfoundry.com/file-handling-in-c/#4)  
5. [Writing to a File (Using fprintf() and fputs()) in C](https://www.sanfoundry.com/file-handling-in-c/#5)  
6. [Reading from a File in C (Using fscanf() and fgets()) in C](https://www.sanfoundry.com/file-handling-in-c/#6)  
7. [Writing and Reading Binary Data (Using fwrite() and fread()) in C](https://www.sanfoundry.com/file-handling-in-c/#7)  
8. [Renaming and Deleting a File in C](https://www.sanfoundry.com/file-handling-in-c/#8)  
9. [File Handling Functions in C](https://www.sanfoundry.com/file-handling-in-c/#9)  
10. [File Pointers in C](https://www.sanfoundry.com/file-handling-in-c/#10)  
11. [Error Handling in File Operations in C](https://www.sanfoundry.com/file-handling-in-c/#11)  
12. [FAQs on File Handling in C](https://www.sanfoundry.com/file-handling-in-c/#12)

## **What is File Handling in C?**

File handling in C allows a program to create, open, read, write, and close files stored on a disk. It enables persistent data storage beyond the program’s execution, unlike variables that lose data after the program ends.

**Why Use File Handling?**

File handling is important for several reasons:

* **Storing data permanently:** You can save data for future use.  
* **Handling large data:** It helps manage large amounts of data efficiently.  
* **Working with structured data:** You can read and write data like logs, records, or settings.  
* **Exchanging data:** It allows different programs to share data.

advertisement

## **Types of Files in C**

In C, files are categorized into two main types:

**1\. Text Files**  
These files contain human-readable characters and are stored in ASCII format. They can be opened and edited with a text editor.

**Characteristics:**

* Stores data as plain text.  
* Each line ends with a newline (\\n) character.  
* Slower access speed due to formatting and conversion.  
* Takes more storage space than binary files.

**Example – Writing to a Text File**

Free 30-Day Java Certification Bootcamp is Live. [Join Now\!](https://www.sanfoundry.com/java-certification-bootcamp/)

\#include \<stdio.h\>  
   
int main()   
{  
    FILE \*file \= fopen("quiz.txt", "w"); *// Open file in write mode*  
    if (file \== NULL) {  
        printf("Error opening file\!**\\n**");  
        return 1;  
    }  
   
    fprintf(file, "Sanfoundry C Programming Quiz**\\n**");  
    fprintf(file, "This is a text file example.**\\n**");  
   
    fclose(file); *// Close the file*  
    printf("Text file created successfully.**\\n**");  
    return 0;

}

The program creates “quiz.txt” and writes two lines using fprintf(). The file stores the content as plain text.

**2\. Binary Files**

Binary files store data in raw binary format (0s and 1s). They are not human-readable and require a program to interpret their content.

**Characteristics:**

* Stores data in machine-readable format.  
* Faster read/write operations compared to text files.  
* Uses less storage space as no conversions occur.  
* Suitable for storing images, audio, video, and structured data.

**Example – Writing to a Binary File**

\#include \<stdio.h\>  
   
struct Quiz  
{  
    int id;  
    char name\[20\];  
};  
   
int main()  
{  
    struct Quiz q \= {101, "C Basics"};  
    FILE \*file \= fopen("quiz.bin", "wb"); *// Open file in binary write mode*  
   
    if (file \== NULL) {  
        printf("Error opening file\!**\\n**");  
        return 1;  
    }  
   
    fwrite(&q, sizeof(q), 1, file); *// Write struct to binary file*  
    fclose(file); *// Close the file*  
   
    printf("Binary file created successfully.**\\n**");  
    return 0;

}

Creates a binary file named “quiz.bin”. Uses fwrite() to store a struct Quiz in raw binary format.

## **File Operations in C**

File operations in C allow programmers to create, read, write, modify, and delete files. The stdio.h library provides functions to handle file operations.

**Types of File Operations**

* **Creating a File** – Using fopen() in write (w) or append (a) mode.  
* **Opening a File** – Using fopen() in various modes (r, w, a, etc.).  
* **Reading a File** – Using fscanf(), fgets(), or fread().  
* **Writing to a File** – Using fprintf(), fputs(), or fwrite().  
* **Closing a File** – Using fclose().  
* **Deleting a File** – Using remove().  
* **Renaming a File** – Using rename().

## **Opening and Closing a File (Using fopen() and fclose())**

The fopen() function is used to open a file in different modes.

**Syntax:**

FILE \*file\_pointer;

file\_pointer \= fopen("filename.txt", "mode");

* **filename.txt** → Name of the file to open.  
* **“mode”** → Specifies how the file is opened.

**File Opening Modes:**

| Mode | Description |
| :---: | ----- |
| **“r”** | Open for reading (file must exist) |
| **“w”** | Open for writing (creates a new file or overwrites an existing file) |
| **“a”** | Open for appending (creates a new file if it doesn’t exist) |
| **“r+”** | Open for both reading and writing |
| **“w+”** | Open for reading and writing (overwrites existing file) |
| **“a+”** | Open for reading and appending |

**Closing a File in C (Using fclose())**

The fclose() function is used to close an opened file.

**Syntax:**

fclose(file\_pointer);

It flushes any buffered data and releases resources.

**Example: Opening and Closing a File**

\#include \<stdio.h\>  
   
int main()  
{  
    *// Open file in write mode*  
    FILE \*file \= fopen("sanfoundry\_quiz.txt", "w");  
   
    if (file \== NULL) {    
        printf("Error opening file\!**\\n**");  
        return 1;  
    }  
    *// Write to file*  
    fprintf(file, "Sanfoundry Certification \- File Handling in C**\\n**");   
   
    fclose(file);  *// Close the file*  
    printf("File successfully opened, written, and closed.**\\n**");  
   
    return 0;

}

This C program opens a file named **sanfoundry\_quiz.txt** in write mode. It checks if the file opens successfully. If there’s an error, it displays a message and exits. If successful, it writes “Sanfoundry Certification – File Handling in C” to the file using **fprintf()**. After writing, the file is closed with **fclose()**, and a success message is printed.

## **Writing to a File (Using fprintf() and fputs()) in C**

In C, we can write data to a file using fprintf() and fputs() functions.

**1\. Writing Using fprintf()**

The fprintf() function works like printf() but writes formatted data to a file.

**Syntax:**

fprintf(file\_pointer, "format\_string", values);

* **file\_pointer** → Pointer to the opened file  
* **“format\_string”** → The format specifier like %d, %s, etc.  
* **values** → Data to write in the file

**2\. Writing Using fputs()**

The fputs() function writes a string to a file.

**Syntax:**

fputs("String to write", file\_pointer);

* **file\_pointer** → Pointer to the opened file  
* **“String to write”** → The string that will be written

**Example: Writing to a File Using fprintf() and fputs()**

\#include \<stdio.h\>  
   
int main()  
{  
    *// Open file in write mode*  
    FILE \*file \= fopen("sanfoundry\_notes.txt", "w");  
   
    if (file \== NULL) {  
        printf("Error opening file\!**\\n**");  
        return 1;  
    }  
    *// Using fprintf()*  
    fprintf(file, "Sanfoundry Certification: C Programming**\\n**");   
    fputs("Topic: File Handling in C**\\n**", file);  *// Using fputs()*  
   
    fclose(file);  *// Close the file*  
    printf("Data written successfully to the file.**\\n**");  
   
    return 0;

}

This C program demonstrates how to write data to a file using both **fprintf()** and **fputs()**. The program opens a file named **sanfoundry\_notes.txt** in write mode (“w”). If the file fails to open, it prints an error message and exits. If the file opens successfully, it uses **fprintf()** to write the string “Sanfoundry Certification: C Programming” and then **fputs()** to write the string “Topic: File Handling in C” to the file. After writing, the file is closed using **fclose()**, and a success message is printed to confirm that the data was written successfully.

## **Reading from a File in C (Using fscanf() and fgets()) in C**

In C programming, you can read data from a file using the functions fscanf() (for formatted input) and fgets() (for string input). Both are widely used in file handling.

**1\. Using fscanf()**

Similar to scanf(), but reads formatted data from a file.

**Syntax:**

 

fscanf(file\_pointer, "format\_specifier", &variable);

**2\. Using fgets()**

Reads a line or string from a file, including whitespace, until a newline or EOF.

**Syntax:**

fgets(string, size, file\_pointer);

* string → Array to store the input  
* size → Maximum number of characters to read  
* file\_pointer → Pointer to the file

**Example: Reading from a File Using fscanf() and fgets()**

\#include \<stdio.h\>  
   
int main() {  
    FILE \*file \= fopen("sanfoundry\_data.txt", "r");  *// Open in read mode*  
   
    if (file \== NULL) {  
        printf("Unable to open file\!**\\n**");  
        return 1;  
    }  
   
    char name\[30\];  
    int score;  
   
    *// Reading using fscanf()*  
    fscanf(file, "%s %d", name, &score);  
    printf("Student Name: %s**\\n**", name);  
    printf("Score: %d**\\n**", score);  
   
    *// Move to next line and read using fgets()*  
    char line\[100\];  
    fgets(line, sizeof(line), file);  
    printf("Extra Line: %s", line);  
   
    fclose(file);  
    return 0;

}

**Output (Assume file contains):**

Arya 95

This is a Sanfoundry C quiz.

**Output:**

Student Name: Arya  
Score: 95  

Extra Line: This is a Sanfoundry C quiz.

This C program reads data from “**sanfoundry\_data.txt**” using **fscanf()** and **fgets()**. It first opens the file in read mode and checks for errors. Then, it reads a student’s name and score using **fscanf()** and prints them. Next, it reads an extra line using **fgets()**. Finally, it closes the file to free resources. This simple program demonstrates basic file reading in C.

## **Writing and Reading Binary Data (Using fwrite() and fread()) in C**

Binary files store data in the same format used in memory, making them efficient for storing structures and arrays.

**fwrite() – Writing to a Binary File**

**Syntax:**

fwrite(&data, size, count, file\_pointer);

* **\&data** – address of the variable or structure  
* **size** – size of each element  
* **count** – number of elements to write  
* **file\_pointer** – pointer to the file

**fread() – Reading from a Binary File**

**Syntax:**

fread(&data, size, count, file\_pointer);

Works just like fwrite(), but reads binary data into memory.

**Example: Using fwrite() and fread() in C**

\#include \<stdio.h\>  
\#include \<string.h\>  
   
struct QuizResult  
{  
    char username\[30\];  
    int score;  
};  
   
int main()  
{  
    struct QuizResult q1 \= {"quiz\_master", 92};  
    struct QuizResult loaded;  
   
    *// Write to binary file*  
    FILE \*fp \= fopen("quizdata.dat", "wb");  
    if (fp \== NULL) {  
        printf("Unable to open file.**\\n**");  
        return 1;  
    }  
    fwrite(&q1, sizeof(struct QuizResult), 1, fp);  
    fclose(fp);  
   
    *// Read from binary file*  
    fp \= fopen("quizdata.dat", "rb");  
    if (fp \== NULL) {  
        printf("Unable to open file.**\\n**");  
        return 1;  
    }  
    fread(&loaded, sizeof(struct QuizResult), 1, fp);  
    fclose(fp);  
   
    printf("User: %s**\\n**", loaded.username);  
    printf("Score: %d**\\n**", loaded.score);  
   
    return 0;

}

**Output:**

User: quiz\_master

Score: 92

This C program saves and loads a quiz result using a binary file. It writes a **QuizResult** struct to “**quizdata.dat**” with **fwrite()**, then reads it back using **fread()**. It checks for errors and ensures proper file handling. Finally, it prints the stored username and score.

## **Renaming and Deleting a File in C**

* **rename(“oldname.txt”, “newname.txt”):** Renames a file from old name to new name.  
* **remove(“filename.txt”):** Deletes the file from disk.

**Syntax:**

int rename(const char \*oldname, const char \*newname);

int remove(const char \*filename);

**Example:**

\#include \<stdio.h\>  
   
int main()  
{  
    FILE \*fp;  
   
    *// Create a file named "oldfile.txt"*  
    fp \= fopen("oldfile.txt", "w");  
    if (fp \== NULL) {  
        printf("Error creating file.**\\n**");  
        return 1;  
    }  
    fprintf(fp, "Sanfoundry Certification Practice**\\n**");  
    fclose(fp);  
   
    *// Rename file to "quizfile.txt"*  
    if (rename("oldfile.txt", "quizfile.txt") \== 0)  
        printf("File renamed successfully.**\\n**");  
    else  
        printf("Error renaming file.**\\n**");  
   
    *// Delete the renamed file*  
    if (remove("quizfile.txt") \== 0)  
        printf("File deleted successfully.**\\n**");  
    else  
        printf("Error deleting file.**\\n**");  
   
    return 0;

}

**Output:**

File renamed successfully.

File deleted successfully.

This C program creates, renames, and deletes a file. It first writes text to “**oldfile.txt**“, then renames it to “**quizfile.txt**” using **rename()**. Finally, it deletes the renamed file with **remove()**, checking for errors at each step.

## **File Handling Functions in C**

File handling in C allows programs to create, read, write, and manipulate files. The stdio.h library provides various functions to perform these operations.

| Function | Purpose |
| :---: | ----- |
| **fopen()** | Opens a file for reading, writing, or appending |
| **fclose()** | Closes an opened file |
| **fprintf()** | Writes formatted data to a file (similar to printf()) |
| **fscanf()** | Reads formatted data from a file (similar to scanf()) |
| **fputc()** | Writes a single character to a file |
| **fgetc()** | Reads a single character from a file |
| **fputs()** | Writes a string to a file |
| **fgets()** | Reads a string from a file |
| **fread()** | Reads binary data from a file |
| **fwrite()** | Writes binary data to a file |
| **feof()** | Checks if the end of the file is reached |
| **fseek()** | Moves the file pointer to a specific position |
| **ftell()** | Returns the current position of the file pointer |
| **rewind()** | Moves the file pointer to the beginning |
| **remove()** | Deletes a file |
| **rename()** | Renames a file |

## **File Pointers in C**

In C, a file pointer is a special pointer of type FILE \* that is used to access files. It is used with standard file handling functions like fopen(), fclose(), fread(), fwrite(), etc. The file pointer keeps track of where we are in the file (i.e., the current read/write position).

**Syntax:**

FILE \*fp;

Here, **fp** is a pointer to a FILE object, which contains information about the file such as its current position, mode, and more.

**Example:**

\#include \<stdio.h\>  
   
int main()  
{  
    FILE \*fp;  
   
    *// Opening a file for writing*  
    fp \= fopen("sanfoundry\_file.txt", "w");  
    if (fp \== NULL)  
    {  
        printf("File could not be opened.**\\n**");  
        return 1;  
    }  
   
    *// Writing to file using file pointer*  
    fprintf(fp, "This file is for Sanfoundry Quiz Practice.**\\n**");  
   
    *// Closing file*  
    fclose(fp);  
   
    printf("Data written successfully using file pointer.**\\n**");  
   
    return 0;

}

**Console Output:**

Data written successfully using file pointer.

**Contents of the File sanfoundry\_file.txt:**

This file is for Sanfoundry Quiz Practice.

This C program writes text to a file. It opens “**sanfoundry\_file.txt**” in write mode using **fopen()**. If successful, it writes a line using **fprintf()**, then closes the file with **fclose()**. Finally, it confirms the write operation.

## **Error Handling in File Operations in C**

When working with files in C, errors can occur due to various reasons such as:

* File not found (while reading)  
* Insufficient permissions  
* Disk full or file system issues  
* Invalid file mode

To handle these errors properly, we use error checking mechanisms with functions like fopen(), fclose(), fgets(), and fwrite(). Additionally, C provides perror() and strerror() for debugging.

**Example 1: Handling fopen() Failure**

\#include \<stdio.h\>  
   
int main()  
{  
    FILE \*file;  
   
    *// Try to open a non-existent file*  
    file \= fopen("nonexistent.txt", "r");  
   
    if (file \== NULL) {  
        perror("Error opening file");  
        return 1;  
    }  
   
    fclose(file);  
    return 0;

}

**Output:**

Error opening file: No such file or directory

**2\. Using ferror() and feof() Example**

\#include \<stdio.h\>  
   
int main()  
{  
    FILE \*file \= fopen("data.txt", "r");  
    if (file \== NULL) {  
        perror("Failed to open file");  
        return 1;  
    }  
   
    char ch;  
    while ((ch \= fgetc(file)) \!= EOF) {  
        putchar(ch);  
    }  
   
    if (ferror(file)) {  
        printf("**\\n**An error occurred while reading the file.**\\n**");  
    } else if (feof(file)) {  
        printf("**\\n**Reached end of file.**\\n**");  
    }  
   
    fclose(file);  
    return 0;

}

**3\. Using strerror() for More Customization**

strerror() converts error codes into readable strings.

\#include \<stdio.h\>  
\#include \<errno.h\>  // Required for error handling  
   
int main() {  
    FILE \*fp \= fopen("nonexistent.txt", "r");  
   
    if (fp \== NULL) {  
        printf("Error: %s**\\n**", strerror(errno)); *// Converts error code to string*  
        return 1;  
    }  
   
    fclose(fp);  
    return 0;

}

* errno is a global variable that stores the error code.  
* strerror(errno) converts it into a human-readable message.

**4\. Handling Write Errors**

Always check the return value of fprintf() and fputs().

\#include \<stdio.h\>  
   
int main()  
{  
    *// Trying to write to a restricted file*  
    FILE \*fp \= fopen("/root/protected.txt", "w");   
   
    if (fp \== NULL) {  
        perror("Error opening file");  
        return 1;  
    }  
   
    if (fprintf(fp, "Writing test**\\n**") \< 0) {  
        perror("Error writing to file");  
    }  
   
    fclose(fp);  
    return 0;

}

If there’s a permission issue, it prints:

Error opening file: Permission denied

## **FAQs on File Handling in C**

**1\. What is file handling in C?**  
File handling in C allows programs to create, read, write, and modify files. It helps in storing data permanently instead of keeping it in temporary memory.

**2\. Why is file handling important?**  
File handling is useful for storing large amounts of data, preserving information between program executions, and sharing data between different applications.

**3\. What are the basic operations in file handling?**  
The main operations include creating a file, opening a file, reading from a file, writing to a file, appending data, and closing a file.

**4\. What is a file pointer in C?**  
A file pointer is a special pointer that helps manage and access files. It keeps track of the file being used and the current position within the file.

**5\. What are the different file opening modes?**  
There are various modes such as read-only, write-only, append mode, and read-write combinations. These modes control how the file is accessed and whether existing data is preserved or overwritten.

**6\. What happens if you open a file in write mode and it already exists?**  
The existing contents of the file will be erased. If data loss is a concern, use append mode instead.

**7\. How can you append data to an existing file?**  
Appending mode allows adding new content to the end of a file without erasing existing data.

**8\. What is the difference between read-write mode and write-read mode?**  
One mode allows modifying an existing file while keeping its data, whereas the other starts fresh and erases any previous content.

**9\. What are some best practices for file handling in C?**  
Always check if a file was successfully opened, handle errors properly, close files after use, and use the correct file modes to prevent data loss.

## **Key Points to Remember**

Here is the list of key points we need to remember about “File Handling in C”.

* File handling in C allows programs to create, open, read, write, and close files for persistent data storage.  
* Text files store human-readable characters in ASCII format, while binary files store raw data more efficiently.  
* Common file operations include creating, opening, reading, writing, closing, renaming, and deleting files.  
* The fopen() function opens files in modes like r, w, a, and r+, while fclose() ensures data is saved and resources are released.  
* Writing functions include fprintf() for formatted text, fputs() for strings, and fwrite() for binary data.  
* Reading functions include fscanf() for formatted input, fgets() for lines of text, and fread() for binary data.  
* Functions like fseek(), ftell(), and rewind() help navigate files using file pointers (FILE \*fp).  
* Error handling includes checking if fopen() returns NULL and using feof() to detect the end of a file.

# Tab 20

# **Enumeration in C**

In this tutorial, we will learn about enumeration in C. It helps give names to numbers using the enum keyword. This makes code easier to read and understand. For example, instead of using 0 for Sunday and 1 for Monday, you can use SUNDAY and MONDAY. This way, the code looks clear and makes fewer mistakes. Enumerations are useful when working with fixed values like days, colors, or directions.

**Contents:**

1. [What is Enumeration in C?](https://www.sanfoundry.com/enumeration-in-c/#1)  
2. [Why Use Enumeration in C?](https://www.sanfoundry.com/enumeration-in-c/#2)  
3. [Examples of Enumeration in C](https://www.sanfoundry.com/enumeration-in-c/#3)  
4. [Enum with Structs in C](https://www.sanfoundry.com/enumeration-in-c/#4)  
5. [Enum with Switch Statement in C](https://www.sanfoundry.com/enumeration-in-c/#5)  
6. [Comparison Between Enum and \#define Constants in C](https://www.sanfoundry.com/enumeration-in-c/#6)  
7. [Advantages of Enumeration in C](https://www.sanfoundry.com/enumeration-in-c/#7)  
8. [Limitations of Enumeration in C](https://www.sanfoundry.com/enumeration-in-c/#8)  
9. [FAQs on Enumeration in C](https://www.sanfoundry.com/enumeration-in-c/#9)

## **What is Enumeration in C?**

Enumeration (or enum) in C is a user-defined data type that consists of a set of named integer constants. It helps improve code readability, clarity, and maintainability by giving meaningful names to values.

**Syntax:**

**enum** enum\_name {  
    constant1,  
    constant2,  
    ...,  
    constantN

};

By default, values start from 0 and increase by 1\. You can also assign specific values.

advertisement

**Example:**

\#include \<stdio.h\>  
   
**enum** Weekday { SUN, MON, TUE, WED, THU, FRI, SAT };  
   
int main() {  
    **enum** Weekday today;  
    today \= WED;  
   
    printf("Today is: %d**\\n**", today); *// Output: 3*  
   
    return 0;

}

This program defines an **enum** called Weekday, where days are numbered from **0 to 6**. The variable **today** is set to **WED**, which has the value 3\. The **printf()** function prints this value. Enums make code clearer by replacing numbers with readable names.

Free 30-Day C Certification Bootcamp is Live. [Join Now\!](https://www.sanfoundry.com/c-certification-bootcamp/)

## **Why Use Enumeration in C?**

* **Improves Readability** – Replaces confusing numbers with easy-to-understand names. This makes the code more readable.  
* **Prevents Errors** – Reduces mistakes caused by assigning the wrong number. Using names instead of numbers makes errors less likely.  
* **Easy to Update** – You can change a value in one place, and it updates everywhere in the program. This saves time and effort.  
* **Automatic Numbering** – By default, numbers start from 0 and increase by 1\. You can also set specific values if needed.  
* **Better for Switch Statements** – Using named values in switch-case makes the code more structured and easier to follow.  
* **Keeps Code Consistent** – Ensures the same values are used throughout the program. This makes debugging and teamwork easier.  
* **Removes Magic Numbers** – No need to remember random numbers. Named values explain their purpose, reducing confusion.  
* **Saves Memory** – Uses only as much space as needed. Many compilers optimize enums to use minimal memory.  
* **Stronger Type Safety** – Helps catch mistakes at compile time. The compiler warns if an invalid value is used.  
* **Better Debugging** – When an error happens, names appear instead of numbers. This makes troubleshooting easier.

## **Examples of Enumeration in C**

**Example 1:**

\#include \<stdio.h\>  
   
**enum** QuizResult { FAIL, PASS, DISTINCTION };  
   
int main()  
{  
    **enum** QuizResult result;  
    result \= DISTINCTION;  
   
    switch (result) {  
        case FAIL:  
            printf("Result: Fail. Better luck next time\!**\\n**");  
            **break**;  
        case PASS:  
            printf("Result: Pass. Keep improving\!**\\n**");  
            **break**;  
        case DISTINCTION:  
            printf("Result: Distinction. Excellent performance\!**\\n**");  
            **break**;  
    }  
   
    return 0;

}

**Output:**

Result: Distinction. Excellent performance\!

This program defines an **enum** called **QuizResult**, assigning values from 0 to 2\. The variable **result** is set to **DISTINCTION**, which has the value 2\. A switch statement checks the result and prints a message based on its value. Enums improve code readability by using meaningful names instead of numbers.

**Example 2:**

\#include \<stdio.h\>  
   
**enum** Day { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };  
   
int main() {  
    **enum** Day today;  
   
    today \= FRIDAY;  
   
    if (today \== FRIDAY)  
        printf("It's Friday\! Weekend is near.**\\n**");  
   
    return 0;

}

**Output:**

It's Friday\! Weekend is near.

This program defines an **enum** called Day, where days are assigned values from 0 to 6\. The variable today is set to **FRIDAY**, which has the value **5\.** An **if** statement checks if today is **FRIDAY** and prints a message. Enums make code clearer by replacing numbers with readable names.

## **Enum with Structs in C**

In C, an enum (enumeration) is a user-defined type consisting of a set of named integer constants. When used inside a struct, it allows grouping meaningful values under a structured format, making the code more readable and organized.

**Syntax:**

**enum** EnumName { VALUE1, VALUE2, VALUE3 };  
   
struct StructName {  
    data\_type member1;  
    ...  
    **enum** EnumName enumMember;

};

**Example: Using enum with struct in C**

\#include \<stdio.h\>  
   
*// Define an enum for levels of access*  
**enum** AccessLevel { ADMIN, MODERATOR, USER };  
   
*// Define a struct that uses the enum*  
struct Account {  
    char username\[20\];  
    **enum** AccessLevel level;  
};  
   
int main() {  
    struct Account a1 \= {"Manish", ADMIN};  
    struct Account a2 \= {"Harshita", USER};  
   
    printf("Username: %s, Access Level: %d**\\n**", a1.username, a1.level);  
    printf("Username: %s, Access Level: %d**\\n**", a2.username, a2.level);  
   
    return 0;

}

**Output:**

Username: Manish, Access Level: 0

Username: Harshita, Access Level: 2

This program uses an **enum** called **AccessLevel** to set user roles. A struct named **Account** stores a username and role. It creates two users: “Manish” as **ADMIN** and “Harshita” as **USER**. The program prints their names and roles. Enums make the code easy to read and avoid mistakes.

## **Enum with Switch Statement in C**

Using an enum with a switch statement allows for more readable and maintainable code by replacing numeric constants with named constants.

**Syntax:**

**enum** EnumName { VALUE1, VALUE2, VALUE3 };  
   
switch(enumVariable) {  
    case VALUE1:  
        *// Code*  
        **break**;  
    case VALUE2:  
        *// Code*  
        **break**;  
    *// ...*

}

**Example:**

\#include \<stdio.h\>  
   
**enum** TrafficSignal { RED, YELLOW, GREEN };  
   
void showSignalAction(**enum** TrafficSignal signal) {  
    switch (signal) {  
        case RED:  
            printf("Stop the vehicle.**\\n**");  
            **break**;  
        case YELLOW:  
            printf("Slow down and prepare to stop.**\\n**");  
            **break**;  
        case GREEN:  
            printf("Go\!**\\n**");  
            **break**;  
        default:  
            printf("Invalid signal.**\\n**");  
    }  
}  
   
int main() {  
    **enum** TrafficSignal currentSignal \= YELLOW;  
    showSignalAction(currentSignal);  
    return 0;

}

**Output:**

Slow down and prepare to stop.

This program uses an **enum** called **TrafficSignal** to represent traffic lights. The **showSignalAction** function checks the signal and prints the correct action. If the signal is **RED**, it says “Stop.” If **YELLOW**, it advises slowing down. If **GREEN**, it says “Go\!” The program sets the signal to YELLOW and calls the function. Enums make the code clear and easy to manage.

## **Comparison Between Enum and \#define Constants in C**

Here’s the key differences between enum and \#define constants in C:

| Feature | enum | \#define (Macro) |
| :---: | ----- | ----- |
| **Definition Type** | Defines a set of integer constants. | Defines constant values via preprocessor. |
| **Syntax Check** | Type-checked by compiler. | No type-checking; done by preprocessor. |
| **Scope** | Limited to the scope of the enum block. | Global scope (unless undefined). |
| **Debugging** | Easier to debug (has symbolic names). | Harder to debug (no symbolic names). |
| **Memory Usage** | Uses memory (if assigned to a variable). | No memory allocation (just substitution). |
| **Grouping** | Groups related constants together. | No grouping; each constant is defined separately. |
| **Type Safety** | Yes, has a specific type (enum Color). | No, treated as a raw number. |
| **Code Readability** | Improves readability with named constants. | Less readable compared to enum. |
| **Automatic Numbering** | Yes, assigns values automatically. | No, each value must be manually defined. |
| **Expandable** | Yes, can be extended easily. | No, requires manual updates. |

## **Advantages of Enumeration in C**

* **Easy to Read Code:** Enums use clear names instead of numbers. This makes the code simple and easy to understand.  
* **Prevents Mistakes:** Enums make sure values belong to a set group. This helps avoid errors when assigning values.  
* **Automatic Numbering:** Enums give numbers to values starting from 0\. This saves time and avoids mistakes.  
* **Helps in Debugging:** Debugging tools show enum names instead of numbers. This makes it easier to find and fix errors.  
* **No Name Conflicts:** Enum values stay within their group. This prevents name clashes with other variables.  
* **Uses Less Memory:** Enums store values as numbers. This makes them memory-friendly and fast.  
* **Easy to Update:** Enums keep values in one place. Changing an enum updates the value everywhere in the program.  
* **Can Set Custom Values:** You can assign specific numbers to enums. This is useful for matching fixed codes like error messages.

## **Limitations of Enumeration in C**

* **Only Works with Integers:** Enums can only store whole numbers. They cannot hold decimals, text, or characters.  
* **No Strict Checking at Runtime:** Enums help catch errors when compiling, but at runtime, any integer can still be assigned, even if it’s not in the enum list.  
* **Risk of Name Conflicts:** Enum names are not grouped unless you use unique prefixes (e.g., COLOR\_RED, COLOR\_BLUE). This can cause confusion in large programs.  
* **No Automatic Text Conversion:** Enums store numbers, but there is no built-in way to convert them to text. You must manually create a function to print names.  
* **No Complex Values:** Enums cannot use expressions, formulas, or function calls when defining values. Only fixed numbers are allowed.  
* **Needs Full Definition:** You cannot declare an enum before defining all its values. Unlike structures, partial declarations are not practical.  
* **Not Ideal for Bitwise Operations:** While enums can represent bit flags, C does not support them directly. You must manually assign bit values for bitwise operations.  
* **Size Depends on Compiler:** The memory used by an enum depends on the compiler and may vary across systems, affecting portability.

## **FAQs on Enumeration in C**

**1\. What is an enum in C?**  
An enum is a user-defined data type that allows you to assign names to a set of integer constants. It makes programs easier to read and maintain.

**2\. What is the default value of enum constants?**  
By default, the first constant has a value of 0, and each subsequent constant increases by 1 automatically.

**3\. Can we assign custom values to enum constants?**  
Yes, you can manually assign specific integer values to enum constants as needed.

**4\. Are enum values limited to integers?**  
Yes, in C, enum values must be integers. You cannot use strings, characters, or floating-point values in an enum.

**5\. Can two enum constants have the same value?**  
Yes, it’s possible to assign the same value to multiple constants within an enum, though it may reduce clarity.

**6\. What is the size of an enum in C?**  
The size is generally the same as an integer, but it can vary depending on the system and compiler.

**7\. Can we use enums in switch statements?**  
Yes, enums work well with switch statements and help improve readability when checking different cases.

**8\. Are enums better than \#define for constants?**  
Enums are usually better because they provide better grouping, debugging support, and limited type safety compared to simple macros.

## **Key Points to Remember**

Here is the list of key points we need to remember about “Enumeration in C”.

* Enums use clear names instead of numbers, making the code easy to read and understand.  
* Enum values start from 0 by default and increase by 1, but you can set custom values.  
* Enums help prevent errors because the compiler checks if values are valid.  
* Debugging is easier with enums since error messages show names instead of numbers.  
* Enums can only store whole numbers; they cannot hold text, decimals, or other types.  
* There is no built-in way to turn an enum into text, so you need to write a function for it.  
* If enum names are not unique, they may cause conflicts, so using prefixes like COLOR\_RED helps.  
* Enums use little memory, but their size may vary depending on the compiler and system.

# Tab 21

# **Preprocessor Directives in C**

In this tutorial, you will learn about preprocessor directives in C. These are special commands that help the program before it compiles. You will see important directives like \#include, \#define, \#ifdef, \#ifndef, and \#pragma. They help add files, create shortcuts, and control parts of the code. By the end, you will know how to use these commands to write simple and clear C programs.

**Contents:**

1. [Introduction to Preprocessor Directives](https://www.sanfoundry.com/preprocessor-directives-in-c/#1)  
2. [Working of the C Preprocessor](https://www.sanfoundry.com/preprocessor-directives-in-c/#2)  
3. [Types of Preprocessor Directives](https://www.sanfoundry.com/preprocessor-directives-in-c/#3)  
4. [Macro Definitions: \#define in C](https://www.sanfoundry.com/preprocessor-directives-in-c/#4)  
5. [File Inclusion: \#include in C](https://www.sanfoundry.com/preprocessor-directives-in-c/#5)  
6. [Conditional Compilation: \#if, \#else, \#elif, \#endif in C](https://www.sanfoundry.com/preprocessor-directives-in-c/#6)  
7. [Undefining Macros: \#undef in C](https://www.sanfoundry.com/preprocessor-directives-in-c/#7)  
8. [\#error Directive in C](https://www.sanfoundry.com/preprocessor-directives-in-c/#8)  
9. [\#pragma Directive in C](https://www.sanfoundry.com/preprocessor-directives-in-c/#9)  
10. [\#line Directive in C](https://www.sanfoundry.com/preprocessor-directives-in-c/#10)  
11. [Advantages of Using Preprocessor Directives in C](https://www.sanfoundry.com/preprocessor-directives-in-c/#11)  
12. [FAQs on Preprocessor Directives in C](https://www.sanfoundry.com/preprocessor-directives-in-c/#12)

## **Introduction to Preprocessor Directives**

Preprocessor directives in C are commands that are processed before the compilation of the program. These directives start with \# and are used to include files, define constants, and manage code conditions.

Preprocessor directives help the program before it compiles. They do tasks like:

* Adding header files using **\#include**  
* Creating constants or shortcuts with **\#define**  
* Running code only in certain cases using **\#if, \#ifdef, \#ifndef, and \#endif**  
* Removing a defined name using **\#undef**  
* Adding special code for testing or for different systems

These commands do not end with semicolons. They are not normal C statements. Instead, they give instructions to the preprocessor.

**Example:**

advertisement  
\#include \<stdio.h\>   // File Inclusion  
\#define PI 3.14      // Macro Definition  
   
int main() {  
    printf("Value of PI: %f**\\n**", PI); *// Macro Expansion*  
    return 0;

}

**Output:**

Value of PI: 3.140000

Free 30-Day Python Certification Bootcamp is Live. [Join Now\!](https://www.sanfoundry.com/python-certification-bootcamp/)

## **Working of the C Preprocessor**

The C preprocessor is a tool that processes your source code before compilation. It performs the following key operations:

1. **File Inclusion:** It replaces \#include directives with the contents of the specified header file.  
2. \#include \<stdio.h\>  // Replaced with the full content of stdio.h**Macro Expansion:** It replaces all macro identifiers with their corresponding values or code blocks.

\#define PI 3.14

3. float area \= PI \* r \* r;  *// PI is replaced by 3.14***Conditional Compilation:** It compiles parts of the code based on conditions.

\#ifdef DEBUG  
printf("Debugging**\\n**");

4. \#endif**Removing Comments:** The preprocessor removes all single-line (//) and multi-line (/\* \*/) comments from the code.  
5. **Macro Functions:** Macros can also work like functions with parameters.

\#define SQUARE(x) ((x)\*(x))

int y \= SQUARE(5);  *// Expands to ((5)\*(5))*

## **Types of Preprocessor Directives**

C provides several types of preprocessor directives that control how the source code is processed before compilation. These include:

| Type | Directive(s) | Purpose |
| :---: | ----- | ----- |
| **Macro Definition** | \#define, \#undef | Define and undefine macros |
| **File Inclusion** | \#include | Include standard or user-defined files |
| **Conditional Compilation** | \#if, \#ifdef, \#ifndef, etc. | Compile code based on conditions |
| **Error Handling** | \#error | Generate compiler error with message |
| **Line Control** | \#line | Modify line numbers in error messages |
| **Null Directive** | \# | Does nothing; placeholder sometimes used |

## **Macro Definitions: \#define in C**

In C, the \#define preprocessor directive is used to define macros, which are constant values or code fragments that are replaced before compilation.

**Syntax of \#define**

\#define MACRO\_NAME value\_or\_expression

* **MACRO\_NAME** → The identifier (constant or function-like macro).  
* **value\_or\_expression** → The replacement text.

**Types of Macros in C**

**1\. Object-like Macros (Constant Macros)**

These macros define constant values.

**Example:**

\#include \<stdio.h\>  
\#define PI 3.14159  // Defining a constant macro  
   
int main() {  
    printf("Value of PI: %f**\\n**", PI);  
    return 0;

}

**Output:**

Value of PI: 3.141590

**2\. Function-like Macros (Parameterized Macros)**

These macros work like inline functions.

**Example:**

\#include \<stdio.h\>  
\#define AREA(l, w) (l \* w)  // Macro for calculating area  
   
int main() {  
    printf("Area of rectangle: %d**\\n**", AREA(5, 10));  
    return 0;

}

**Output:**

Area of rectangle: 50

**3\. Conditional Macros (\#ifdef, \#ifndef, \#endif)**

Used for conditional compilation.

**Example:**

\#include \<stdio.h\>  
\#define DEBUG  // Enable Debugging Mode  
   
int main() {  
    \#ifdef DEBUG  
        printf("Debug Mode: Active**\\n**");  
    \#else  
        printf("Debug Mode: Inactive**\\n**");  
    \#endif  
    return 0;

}

**Output:**

Debug Mode: Active

**4\. Multi-line Macros (\\ for Continuation)**

Macros can span multiple lines using \\.

**Example:**

\#include \<stdio.h\>  
\#define PRINT\_DETAILS(name, age) \\  
    printf("Name: %s\\n", name);  \\  
    printf("Age: %d\\n", age)  
   
int main() {  
    PRINT\_DETAILS("Sanfoundry", 10);  
    return 0;

}

**Output:**

Name: Sanfoundry

Age: 10

## **File Inclusion: \#include in C**

The \#include directive is a preprocessor command used to include external files in a C program. These files typically contain function declarations, macros, and definitions that help in modular programming.

**Types of \#include Directives**

**1\. Angle Bracket (\<\>) Syntax: Used for standard library files.**

\#include \<stdio.h\>  // Includes standard input-output library

**2\. Double Quotes (“”) Syntax: Used for user-defined header files.**

\#include "myheader.h"  // Includes a custom header file

**Example 1: Including a Standard Library Header**

\#include \<stdio.h\>  
   
int main()  
{  
    printf("Sanfoundry C MCQs\!**\\n**");  *// Uses printf() from stdio.h*  
    return 0;

}

**Output:**

Sanfoundry C MCQs\!

**Example 2: Including a User-Defined Header File**

**Step 1:** Create a file named myheader.h

*// myheader.h*  
\#define PI 3.14159  
void greet() {  
    printf("Welcome to C Programming\!**\\n**");

}

**Step 2:** Include myheader.h in the main program

\#include \<stdio.h\>  
\#include "myheader.h"  // Including user-defined header file  
   
int main() {  
    greet();  
    printf("Value of PI: %f**\\n**", PI);  
    return 0;

}

**Output:**

Welcome to C Programming\!

Value of PI: 3.141590

## **Conditional Compilation: \#if, \#else, \#elif, \#endif in C**

Conditional compilation allows the compiler to selectively compile portions of the program based on conditions. This is useful for:

* Debugging  
* Platform-specific code  
* Including/excluding features

**Preprocessor Directives for Conditional Compilation**

| Directive | Description |
| :---: | ----- |
| **\#if** | Checks if a condition is true |
| **\#else** | Executes if the \#if condition is false |
| **\#elif** | “Else if” statement for multiple conditions |
| **\#endif** | Marks the end of conditional compilation |

**Example 1: Using \#if and \#else**

\#include \<stdio.h\>  
   
\#define DEBUG 1  // Set to 0 to disable debug mode  
   
int main() {  
    \#if DEBUG  
        printf("Debugging is enabled**\\n**");  
    \#else  
        printf("Debugging is disabled**\\n**");  
    \#endif  
    return 0;

}

**Output (if DEBUG is 1):**

Debugging is enabled

**Output (if DEBUG is 0):**

Debugging is disabled

**Example 2: Using \#elif for Multiple Conditions**

\#include \<stdio.h\>  
   
\#define OS 2  // 1 for Windows, 2 for Linux, 3 for Mac  
   
int main() {  
    \#if OS \== 1  
        printf("Running on Windows**\\n**");  
    \#elif OS \== 2  
        printf("Running on Linux**\\n**");  
    \#elif OS \== 3  
        printf("Running on Mac**\\n**");  
    \#else  
        printf("Unknown OS**\\n**");  
    \#endif  
    return 0;

}

**Output (if OS is 2):**

Running on Linux

**Example 3: Using \#ifdef and \#ifndef**

\#include \<stdio.h\>  
   
\#define FEATURE\_ENABLED  
   
int main() {  
    \#ifdef FEATURE\_ENABLED  
        printf("Feature is enabled**\\n**");  
    \#else  
        printf("Feature is disabled**\\n**");  
    \#endif  
    return 0;

}

**Output (since FEATURE\_ENABLED is defined):**

Feature is enabled

## **Undefining Macros: \#undef in C**

The \#undef preprocessor directive removes a previously defined macro. It is useful when:

* You want to redefine a macro with a new value.  
* You need to ensure a macro is undefined before defining it again.

**Syntax:**

\#undef MACRO\_NAME

MACRO\_NAME is the macro that was previously defined using \#define.

**Example 1: Using \#undef to Redefine a Macro**

\#include \<stdio.h\>  
   
\#define MAX\_SIZE 100  
   
int main() {  
    printf("Initial MAX\_SIZE: %d**\\n**", MAX\_SIZE);  
   
    \#undef MAX\_SIZE  // Undefining the macro  
    \#define MAX\_SIZE 50  // Redefining the macro  
   
    printf("Updated MAX\_SIZE: %d**\\n**", MAX\_SIZE);  
   
    return 0;

}

**Output:**

Initial MAX\_SIZE: 100

Updated MAX\_SIZE: 50

This program shows how to define, remove, and change a macro in C. First, **MAX\_SIZE** is set to 100 using **\#define**. The program prints this value. Then, **\#undef** removes the old **MAX\_SIZE**, and it is redefined as 50\. The program prints the new value. This shows how macros can be updated before the code is compiled.

**Example 2: Ensuring a Macro is Undefined Before Defining It**

\#include \<stdio.h\>  
   
\#define MODE 1  
   
\#undef MODE  // Ensure it is undefined before redefining  
\#define MODE 2  
   
int main() {  
    printf("Current MODE: %d**\\n**", MODE);  
    return 0;

}

**Output:**

Current MODE: 2

This program shows how to change a macro value using **\#undef** and **\#define**. First, **MODE** is set to 1\. Then, **\#undef** removes the old value. After that, **MODE** is redefined as 2\. When the program runs, it prints the new value. This shows how you can update macros before the code is compiled.

## **\#error Directive in C**

The \#error directive forces compilation to stop and displays a custom error message. It is useful for:

* reventing compilation if a condition is not met.  
* Ensuring compatibility with specific compilers or platforms.  
* Debugging configuration issues.

**Syntax**

\#error "Custom error message"

**Example: Using \#error to Check Compiler Version**

\#include \<stdio.h\>  
   
\#if \_\_STDC\_VERSION\_\_ \< 199901L  
    \#error "C99 or later is required for this program."  
\#endif  
   
int main() {  
    printf("Program compiled successfully\!**\\n**");  
    return 0;

}

**Output (if using an older compiler):**

C99 or later is required for this program.

This program uses a preprocessor check to make sure the C compiler supports C99 or later. The **\#if** directive checks the version of the C standard. If it’s older than C99, the **\#error** directive stops the compilation and shows a message. If the version is fine, the program compiles and prints a success message. This helps ensure the code runs only on compatible compilers.

## **\#pragma Directive in C**

The \#pragma directive provides compiler-specific instructions, allowing:

* Compiler optimizations.  
* Warnings control.  
* Code segmenting.

**Common Uses of \#pragma in C**

**1\. Suppress Warnings (\#pragma warning)**

\#pragma warning(disable: 4996\)  // Disables specific warning in MSVC  
\#include \<stdio.h\>  
   
int main() {  
    char name\[20\];  
    gets(name);  *// No warning due to \#pragma*  
    printf("Hello, %s**\\n**", name);  
    return 0;

}

**2\. Optimize Code (\#pragma optimize)**

\#pragma optimize("g", off)  // Disable global optimizations  
\#include \<stdio.h\>  
   
int main() {  
    printf("Optimizations are disabled\!**\\n**");  
    return 0;

}

**3\. Region Marking (\#pragma region and \#pragma endregion)**

\#pragma region Debugging  
void debugFunction() {  
    printf("Debug Mode**\\n**");  
}

\#pragma endregion

**4\. Pack Structure (\#pragma pack)**

\#include \<stdio.h\>  
   
\#pragma pack(1)  // Align structure to 1-byte boundary  
struct Example {  
    char a;  
    int b;  
};  
   
int main() {  
    printf("Size of struct: %lu**\\n**", sizeof(struct Example));  
    return 0;

}

## **\#line Directive in C**

The \#line directive in C is used to change the current line number and filename reported by the compiler. It is mainly used for:

* Debugging and error tracking.  
* Simulating output from code generators.  
* Modifying error messages to reflect different source files.

**Syntax**

\#line line\_number "optional\_filename"

* **line\_number** → Sets the line number to start counting from.  
* **“optional\_filename”** → Changes the filename (optional).

**Example 1: Changing Line Number for Error Messages**

\#include \<stdio.h\>  
   
int main() {  
    printf("Line before \#line: %d**\\n**", \_\_LINE\_\_); *// Prints current line number*  
   
    \#line 100  // Change the line number to 100  
    printf("Line after \#line: %d**\\n**", \_\_LINE\_\_);  
   
    return 0;

}

**Output:**

Line before \#line: 5

Line after \#line: 100

* \_\_LINE\_\_ is a predefined macro that stores the current line number.  
* \#line 100 sets the next line to 100, affecting \_\_LINE\_\_.

**Example 2: Changing Both Line Number and Filename**

\#include \<stdio.h\>  
   
int main() {  
    printf("Current File: %s, Line: %d**\\n**", \_\_FILE\_\_, \_\_LINE\_\_);  
   
    \#line 200 "newfile.c"  // Change both filename and line number  
    printf("Modified File: %s, Line: %d**\\n**", \_\_FILE\_\_, \_\_LINE\_\_);  
   
    return 0;

}

**Output:**

Current File: original.c, Line: 5

Modified File: newfile.c, Line: 200

* \_\_FILE\_\_ is a predefined macro for the current filename.  
* After \#line 200 “newfile.c”, the compiler treats the following lines as if they belong to newfile.c starting at line 200\.

## **Advantages of Using Preprocessor Directives in C**

* By using \#define to name constants or macros, the code becomes easier to read and understand. It also makes maintenance simpler, since changes need to be made only at one place.  
* Directives like \#if, \#ifdef, and \#ifndef allow selective compilation of code blocks. This is especially helpful for enabling debug code or building for different environments.  
* With \#include, you can split your code into multiple files such as headers and source files. This modular approach promotes code reuse, readability, and cleaner structure.  
* Preprocessor checks can detect the target OS or compiler and include platform-specific code. This helps in writing cross-platform code that works on Windows, Linux, and macOS.  
* You can use macros to enable or disable debugging output or test features quickly. This helps in testing specific parts of the code without changing the core logic.  
* Macros can replace repeated expressions or logic, reducing redundant code. This not only saves space but also ensures consistency throughout the program.  
* Since preprocessing happens before actual compilation, unnecessary code can be excluded early. This can reduce compilation time and make the build process more efficient.

## **FAQs on Preprocessor Directives in C**

**1\. What is a preprocessor directive in C?**  
Preprocessor directives are instructions that are processed by the compiler before actual compilation starts. They begin with a \# symbol (e.g., \#include, \#define, \#if).

**2\. What is the use of \#define in C?**  
\#define is used to create symbolic constants or macros. It helps improve code readability and makes updating values easier.

**3\. What is the purpose of \#include?**  
\#include is used to include the contents of another file (usually a header file) into the current file before compilation.

**4\. What is conditional compilation?**  
Conditional compilation lets you compile specific parts of code based on defined conditions using directives like \#if, \#ifdef, \#else, and \#endif.

**5\. How do I prevent multiple inclusions of a header file?**  
By using conditional preprocessor checks, you can ensure a file is included only once, avoiding redefinition errors.

**6\. What does \#undef do?**  
It cancels a previously defined macro so it can be redefined or removed from the current compilation scope.

**7\. Can we define functions using macros?**  
Yes, macros can mimic functions by substituting repetitive code, though they do not support type checking like regular functions.

**8\. Are preprocessor directives part of the C language syntax?**  
No, they are separate instructions handled by the preprocessor before actual C code compilation begins.

## **Key Points to Remember**

Here is the list of key points we need to remember about “Preprocessor Directives in C”.

* Preprocessor directives in C are commands that run before compilation and start with \#, used for file inclusion, macros, and conditional compilation.  
* \#define is used to create constant macros and function-like macros, while \#undef removes a macro definition.  
* \#include adds external files, using \<\> for standard headers and “” for user-defined files.  
* Conditional compilation directives like \#if, \#ifdef, \#ifndef, and \#endif help compile specific code sections based on conditions.  
* \#error stops compilation with a custom error message, useful for version checks and debugging.  
* \#pragma provides compiler-specific instructions for optimizations, warnings, and structure packing.  
* \#line changes the reported line number and filename, aiding debugging and error tracking.  
* Preprocessor directives improve code modularity, readability, debugging, platform compatibility, and efficiency.

# Tab 22

# **Storage Classes in C**

In this tutorial, you will learn the basics of storage classes in C. You will understand their types, purpose, and how they affect the scope of variables. We will also look at how storage classes change the lifetime and visibility of variables in a program. You will explore the roles of auto, register, static, and extern. Real-world examples will help you understand these concepts better.

**Contents:**

1. [What are Storage Classes in C?](https://www.sanfoundry.com/storage-classes-in-c/#1)  
2. [Types of Storage Classes in C](https://www.sanfoundry.com/storage-classes-in-c/#2)  
3. [auto Storage Class in C](https://www.sanfoundry.com/storage-classes-in-c/#3)  
4. [register Storage Class in C](https://www.sanfoundry.com/storage-classes-in-c/#4)  
5. [static Storage Class in C](https://www.sanfoundry.com/storage-classes-in-c/#5)  
6. [extern Storage Class in C](https://www.sanfoundry.com/storage-classes-in-c/#6)  
7. [Difference Between Storage Class and Data Type in C](https://www.sanfoundry.com/storage-classes-in-c/#7)  
8. [Scope, Lifetime, and Linkage in C](https://www.sanfoundry.com/storage-classes-in-c/#8)  
9. [FAQs on Storage Classes in C](https://www.sanfoundry.com/storage-classes-in-c/#9)

## **What are Storage Classes in C?**

In C programming, storage classes define the scope (visibility), lifetime, and linkage of variables and functions. They tell the compiler how long a variable should exist in memory, where it can be accessed, and whether it can be accessed from other files.

## **Types of Storage Classes in C**

There are four storage classes in C:

* auto Storage Class  
* register Storage Class  
* static Storage Class  
* extern Storage Class

advertisement

## **auto Storage Class in C**

The auto storage class is the default storage class for all local variables inside a function or block in C. So even if you don’t write auto, the variable is treated as auto by default.

**Key Features of auto:**

* **Scope:** Local to the block or function where it is defined.  
* **Lifetime:** Exists only while the block/function is running. Memory is freed after execution ends.  
* Default storage class for local variables.  
* Not necessary to write auto explicitly, but you can.

**Syntax:**

auto data\_type variable\_name;

Although, rarely use it explicitly since it’s the default for local variables.

Free 30-Day Python Certification Bootcamp is Live. [Join Now\!](https://www.sanfoundry.com/python-certification-bootcamp/)

**Example:**

\#include \<stdio.h\>  
   
void showMarks()  
{  
    auto int marks \= 80; *// explicitly using 'auto'*  
    printf("Student Marks: %d**\\n**", marks);  
}  
   
int main() {  
    showMarks();  
    return 0;

}

**Output:**

Student Marks: 80

This program shows how the **auto** storage class works in C. The **marks** variable is declared inside a function using **auto**, which is the default for local variables. It stores the value 80 and prints it. The variable exists only while the function runs.

## **register Storage Class in C**

The register storage class is used to store variables in CPU registers instead of RAM to make access faster. It’s a hint to the compiler to optimize performance for variables used very frequently, like loop counters.

**Key Features of register:**

* **Scope:** Local to the block/function.  
* **Lifetime:** Temporary (as long as the block/function runs).  
* Faster access (intended for performance-critical variables).  
* Cannot get the address using the & operator.

**Syntax:**

register int counter;

**Note:** You can’t get the address of a register variable using & operator.

**Example:**

\#include \<stdio.h\>  
   
int main()  
{  
    register int i;  
    for (i \= 1; i \< 5; i\++) {  
        printf("Sanfoundry Quiz %d**\\n**", i);  
    }  
    return 0;

}

**Output:**

Sanfoundry Quiz 1  
Sanfoundry Quiz 2  
Sanfoundry Quiz 3

Sanfoundry Quiz 4

This program shows how the **register** storage class works in C. It stores the variable **i** in a CPU register (if possible) to speed up access. The program runs a loop from 1 to 4 and prints a message with the current count each time. The **register** keyword tells the compiler that the variable will be used often.

## **static Storage Class in C**

The static storage class in C is used to retain the value of a variable across multiple function calls. It extends the lifetime of a variable to the entire program, even though the variable might be local in scope.

**Syntax:**

static int counter \= 0;

**Example:**

\#include \<stdio.h\>  
   
void showCounter() {  
    static int count \= 0;  *// retains its value across calls*  
    count\++;  
    printf("Sanfoundry Call Count: %d**\\n**", count);  
}  
   
int main() {  
    showCounter();  
    showCounter();  
    showCounter();  
    return 0;

}

**Output:**

Sanfoundry Call Count: 1  
Sanfoundry Call Count: 2

Sanfoundry Call Count: 3

This program uses the **static** storage class in C. It declares a variable **count** that keeps its value between function calls. Each time the program calls **showCounter()**, it increases **count** by 1 and prints it. The program calls the function three times, so it prints an increasing count from 1 to 3\.

## **extern Storage Class in C**

The extern storage class in C is used to declare a global variable or function that is defined in another file or at a later point in the same file. It allows multiple files in a program to share the same global variable or function.

**Syntax:**

**extern** data\_type variable\_name;

**file1.c:**

int sanfoundryMarks \= 95;

**file2.c:**

\#include \<stdio.h\>  
   
**extern** int sanfoundryMarks;  *// Declared from file1.c*  
   
int main() {  
    printf("Certification Marks: %d**\\n**", sanfoundryMarks);  
    return 0;

}

**Compile together:**

gcc file1.c file2.c \-o program

./program

**Output:**

Certification Marks: 95

This program shows how the **extern** storage class works in C. The variable **sanfoundryMarks** is defined in **file1.c** and shared with **file2.c** using the extern keyword. The **main()** function prints the value of that variable. This lets one file access a variable defined in another.

## **Difference Between Storage Class and Data Type in C**

Here are the key difference between Storage Class and Data Type in C

| Feature | Storage Class | Data Type |
| :---: | ----- | ----- |
| **Purpose** | Determines lifetime, scope, visibility, and memory location of a variable | Defines type of data a variable holds (e.g., int, float) |
| **Examples** | auto, register, static, extern | int, float, char, double, long, etc. |
| **Focus Area** | Focuses on how and where the variable is stored and used | Focuses on what kind of data the variable stores |
| **Memory Allocation** | Affects how memory is allocated and managed | Affects how much memory is allocated per type |
| **Initialization** | Controls default values and initialization behavior | Does not handle initialization rules |
| **Scope & Lifetime** | Controls scope (visibility) and lifetime (how long variable exists) | Data type has no control over scope or lifetime |
| **Can Be Combined?** | Yes, you can combine with data types | Yes, e.g., static int x \= 5; |

## **Scope, Lifetime, and Linkage in C**

These three terms define how variables behave in a C program in terms of visibility, existence, and accessibility.

**1\. Scope – Where a variable is accessible**

The Scope refers to the region of the program where the variable is visible and can be used.

| Scope Type | Description | Example |
| :---: | ----- | ----- |
| **Block Scope** | Variable declared inside {} — accessible only within that block | int main() { int x \= 5; } |
| **Function Scope** | Labels (like goto labels) have function scope | goto label; … label: |
| **File Scope** | Variable declared outside all functions — accessible throughout the file | int count \= 0; |
| **Function Prototype Scope** | Variables declared in function prototype | int add(int a, int b); |

**2\. Lifetime – How long a variable exists in memory**

Lifetime refers to the duration for which the variable retains its value during program execution.

| Storage Class | Lifetime | Memory Retention |
| :---: | ----- | ----- |
| **auto** | Created and destroyed in block | No persistence |
| **static** | Exists for the entire program | Persists values |
| **register** | Same as auto (faster access) | No persistence |
| **extern** | Exists as long as program runs | Global memory |

**3\. Linkage – Whether variable can be used in other files**

Linkage determines whether multiple declarations refer to the same entity (variable or function) across multiple files.

| Type of Linkage | Description | Keyword Used |
| :---: | ----- | ----- |
| **Internal Linkage** | Variable/function accessible only within the current file | static |
| **External Linkage** | Accessible across different files | default or extern |
| **No Linkage** | Each declaration is a separate entity | auto, register |

**Example:**

\#include \<stdio.h\>  
   
int globalVar \= 10; *// File Scope, External Linkage, Static Lifetime*  
   
void demo() {  
    static int count \= 0;  *// Block Scope, Internal Linkage, Static Lifetime*  
    int temp \= 5;          *// Block Scope, No Linkage, Auto Lifetime*  
   
    count\++;  
    printf("Count: %d, Temp: %d, Global: %d**\\n**", count, temp, globalVar);  
}  
   
int main() {  
    demo();  
    demo();  
    return 0;

}

**Output:**

Count: 1, Temp: 5, Global: 10

Count: 2, Temp: 5, Global: 10

This program shows how different storage classes work in C. The global variable **globalVar** keeps its value and is shared across the file. The **count** variable inside the function uses **static**, so it keeps its value between calls. The temp variable is local and resets each time. When **demo()** runs twice, count increases, but temp stays the same.

## **FAQs on Storage Classes in C**

**1\. What are storage classes in C?**  
Storage classes in C define the scope (visibility), lifetime, and linkage of variables or functions. They help the compiler understand how to handle the variable in terms of memory allocation and accessibility.

**2\. How many storage classes are there in C?**  
There are four main storage classes in C: auto, register, static and extern.

**3\. What is the default storage class of a local variable?**  
The default storage class of a local variable is auto. However, you usually don’t need to specify it explicitly, as it’s assumed automatically.

**4\. What is the use of the register storage class?**  
The register storage class suggests that the variable be stored in the CPU register for faster access. It cannot be used with global variables or with the address-of (&) operator.

**5\. What is a static variable in C?**  
A static variable retains its value between function calls. It has internal linkage and a lifetime throughout the program, even if it is declared inside a function.

**6\. What is the purpose of the extern keyword?**  
The extern keyword is used to declare a global variable or function that is defined in another file or later in the code. It tells the compiler that the variable exists, but the memory is allocated elsewhere.

**7\. Can we use static with global variables?**  
Yes, a global variable declared with static has file scope, meaning it is accessible only within the file where it’s declared.

## **Key Points to Remember**

Here is the list of key points we need to remember about “Storage Classes in C”.

* Storage classes control a variable’s scope, lifetime, and linkage in a C program.  
* The four storage classes in C are: auto, register, static, and extern.  
* auto is the default storage class for local variables inside functions or blocks.  
* register suggests storing a variable in a CPU register for faster access but doesn’t allow using the & operator.  
* static keeps the value of a variable between multiple function calls.  
* extern allows variables to be shared across multiple files in a program.  
* Storage classes are different from data types; they manage how and where a variable is stored, not what data it holds.  
* Scope defines visibility, lifetime defines duration in memory, and linkage defines accessibility across files.

