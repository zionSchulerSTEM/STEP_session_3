# STEP session 3
## The big picture
Programming is a means of getting a computer to complete a pre-specified task. In order for a computer to complete a task, it must be told EXACTLY what to do by the computer programmer. Computer programmers (like yourself) use programming languages (like C, Python, or Javascript) to solve interesting computational problems(problems that involve math). 

More specifically, a programmer comes up with algorithms and data structures that can effectively store problem relevant information and operate on that information in some interesting fashion. An algorithm is a step by step process that does a certain task, as long as some set of preconditions are satisfied. For example, one could view cleaning their clothes in an algorithmic sense. First, we store our clothes in a bin. If the bin is full, then we transfer the clothes from the bin into the washing machine. After that, we place soap into the machine, close the lid, and start the washing machine. When the washing machine is done, we transfer the clothes from the washer to the dryer, throw in some dryer sheets, close the dryer, and start the dryer. Lastly, the clothes from the dryer are transfered to your room for future use. This may be the longest winded explanation of laundry you have ever received, but I did it in this way to show you how much goes into explaining even a simple concept such as doing the laundry. The goal of a programmer is to come up with interesting solutions to problems / do interesting things, and to do these things in a manner that is time efficient, memory efficient, energy efficient, elegant, beautiful, meaningful, etc. 

A data structure is a way of storing information. The information we store may be numbers, letters, words, or groupings of these pieces of information. For example, a store might have a data structure that they refer to as a "customer object" which may contain a name, age, gender, list of prior purchases, etc. There are often multiple ways to store information about something, and a programmer must make an informed decision about how information is stored / the data structures that they use, because those decisions will impact the performance of the algorithms they use to do interesting stuff with the information stored in the data structures. Lets go back to the laundry example. After the clothes are brought back to your room, you have a choice for how you want to store your clothes. If you are in a rush, you might just throw your clothes into your drawers at random. While this may mean that you only have to spend a small amount of time storing your clothes, it may leave your clothes wrinkled as well as make it difficult to select an outfit. On the other hand, if you take a little bit more time and fold the clothes and then organize them into drawers, then your clothes will appear nicer and it is easier to select an outfit from the drawers. A super fancy individual might hang up particular clothing items that are prone to wrinkling, which again comes at a time cost but helps further increase appearance of your clothes. Good programmers must make informed tradeoff decisions with data structures based on what they are trying to accomplish with the program as well as what they value.

Our first programs will be composed of variables, conditional logic, and loops. A variable can be thought of as a basic data structure. We use variables to store things like numbers (integers and floats), letters/words (like characters/strings), and booleans (a data type that represents TRUE or FALSE). Conditional logic allows programmers to do a certain series of steps based on the values of the variables at a particular point in time. For example, maybe you want to print a number to the screen as long as it is bigger than a threshold value. One could use an if statement that uses a magnitude operator to check if the number variable is bigger than the threshold value and print the number variable to the screen if it is bigger than the threshold. Finally, loops provide programmers with a way of repeteadly doing things. For example, one might store the value 10 in a variable, then want to decrement the variable and print the value of the variable to the screen as long as the variable is positive. To do this, a programmer might use a while loop that checks if the variable is greater than or equal to zero, then print the value of the variable, then subtract one (ie decrement) the variable. The check is performed again and the variable is repeteadly printed and decremented until the variable is no longer greater than or equal to zero.

## Intro to Programming
The purpose of this session is to provide a brief introduction to programming assuming no prior experience. Programming, and more generally computer science, is an extremely deep field and only so much can be covered in a single session. With that being said, this repo should give a solid overview and provide starter code that can easily be extended by a motivated student.



## Variables

![](img/cdatatype.png)

```c
// example variable declarations in C
int x = 5;
double y = 5.6;
char z = 'a';
char* exampleWord = "ZBTHS";
string exampleWord2 = "ZeeBee";
```

## Operators

![](img/Operators-In-C.png)

```c

```

## Conditional Logic

![](img/if-elif-else.png)

### If statements

```c
// example if statement in C
int x = 1;
int y = 0;
if (x > y) {
  printf("x is greater than y\n");
}
printf("Code is done running\n");
```

### If Else statements

```c
// example if else statement in C
int x = 1;
int y = 0;
if (x > y) {
  printf("x is greater than y\n");
} else {
  printf("x is not greater than y\n");
}
printf("Code is done running\n");
```

### If Else if Else statements

```c
// example if, else if, else statement in c
int x = 1;
int y = 0;
if (x > y) {
  printf("x is greater than y\n");
} else if(y > x) {
  printf(y is greater than x\n");
} else {
  printf("x is equal to y\n");
}
printf("Code is done running\n");
```

## Loops

### For Loops

```c

```

### While Loops

```c

```

## Resources / References
[interactive intro to Git](https://learngitbranching.js.org/) <br>
[practice problems for beginner programmers](https://www.codestepbystep.com/) <br>
[Practical Unix(command line tutorial) playlist by Sam King](https://www.youtube.com/playlist?list=PLAn5BRyzQEf9VoK8gRKp8Z0LGME6fISaE) <br>

