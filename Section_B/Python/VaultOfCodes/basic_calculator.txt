def add(x, y): return x+y
def substract(x, y): return x-y
def multiply(x, y): return x*y
def divide(x, y): return x/y
def exponent(x, y): return x**y

while True:
    print("Welcome to Calculator!")
    operation : str = input("Enter the operation ('+' to Add, '-' to Substract '*' to Mutiply, '/' to Divide and '^' for Exponentiation, 'exit' to quit): \n")
    if operation=='exit':
       print("Quitting....")
       break

    try:
      op1 : float = float(input("Enter the First Operand: \n"))
      op2 : float = float(input("Enter the Second Operand: \n"))

      match(operation):
        case '+' : result = add(op1,op2)
        case '-' : result = substract(op1,op2)
        case '*' : result = multiply(op1,op2)
        case 'x' : result = multiply(op1,op2)
        case '/' : result = divide(op1,op2)
        case '^' : result = exponent(op1, op2)
        case _: print("Invalid! Please enter proper decimal values!")
      print(f"Result: {result}")

    except ZeroDivisionError as e:
        print("Division by Zero is not allowed!!! \n")
    except ValueError as e:
        print("Enter valid input! Please enter decimal values!! \n")
    except Exception as e:
        print(f"Unexpected Exception!: \n{e}")