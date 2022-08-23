# Starter file documenting lots of the most important features of
# the python programming language

# Declaration of a variable. Notice that in Python, variables are not typed
x = 5
print(x)
print(type(x))

y = 5.0
print(y)
print(type(y))

z = True
print(z)
print(type(z))

# Python is unique in that there is not a character data type
# Thus, a character is represented as a string that only contains one character
exampleString = "abc"
print(exampleString)
print(type(exampleString))


# Operators in Python
addResult = None
subtractResult = None
multiplyResult = None
divideResult = None
incrementResult = None
decrementResult = None
greaterThanResult = None
lessThanResult = None
equalsResult = None
doesNotEqualResult = None

x = 7
y = 4

addResult = x + y
subtractResult = x - y
multiplyResult = x * y
# Notice that most programming languages truncate all division problems
# Thus, 7/4 returns 1 since we simply truncate(remove) the decimal value
divideResult = x / y
# Unlike C, python does not have built in decrement and incremnent operators
incrementResult = x + 1
decrementResult = x - 1
greaterThanResult = x > y
lessThanResult = x < y
equalsResult = x == y
doesNotEqualResult = x != y

# These statements are a sanity check. Change x and y and make sure that the
# results make sense!
print("The result of x + y is ", addResult)
print("The result of x - y is ", subtractResult)
print("The result of x * y is ", multiplyResult)
print("The result of x / y is ", divideResult)
print("The result of x += 1 is ", incrementResult)
print("The result of x -= 1 is ", decrementResult)
print("The result of x > y is ", greaterThanResult)
print("The result of x < y is ", lessThanResult)
print("The result of x == y is ", equalsResult)
print("The result of x != y is ", doesNotEqualResult)
# A break line is added below in order to have to code output in a more
# readable format
print("\n")


# Variables for the conditional logic demo
x = 0
y = 1

# Example of an if statement in Python
if (x > y):
    print("x is greater than y")

print("If section code block is done running\n")

# Example of if else statement in Python
if (x > y):
    print("x is greater than y")
else:
    print("x is not greater than y")
    
print("If else code block is done running\n")

# Example of an if, elif, else statement in Python

if (x > y):
    print("x is greater than y")
elif (x < y):
    print("x is less than y")
else:
    print("x is equal to y")

print("If, elif, else code block is done running\n")

# Example of a for loop in python

# The range function returns a list of integers that stops just before the value entered in as an argument (in this case, the argument is 4
forLoopBegin = 1
forLoopEnd = 4
for x in range(forLoopBegin, forLoopEnd):
    print("x is ", x)

print("For loop code block is done running\n")

whileLoopCounter = 5
while (whileLoopCounter > 0):
    print("whileLoopCounter is ", whileLoopCounter)
    whileLoopCounter -= 1

print("While loop code block is done running")


