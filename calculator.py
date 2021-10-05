import math

def addition(a, b):
    return a+b


def subtration(a, b):
    return a-b


def multiplication(a, b):
    return a*b


def division(a, b):
    return a/b


def percentage(a, b):
    return (a/100)*b


def power(a, b):
    return a**b


def log(a, b):
    return math.log(a, b)


def sin(a):
    return math.sin(a)


def cos(a):
    return math.cos(a)


def tan(a):
    return math.tan(a)


t = 0
while(t == 0):
    val = input("Enter an Expression that you want to calculate : ")

    for i in range(len(val)):
        if(val[i] == "+"):
            a = float(val[0:i])
            b = float(val[i+1:len(val)])
            result = addition(a, b)

        if(val[i] == '-'):
            a = float(val[0:i])
            b = float(val[i+1:len(val)])
            result = subtration(a, b)

        if(val[i] == '*'):
            a = float(val[0:i])
            b = float(val[i+1:len(val)])
            result = multiplication(a, b)

        if(val[i] == "/"):
            a = float(val[0:i])
            b = float(val[i+1:len(val)])
            result = division(a, b)

        if(val[i] == "%"):
            a = float(val[0:i])
            if(i+1 == len(val)):
                b = 1
            else:
                b = float(val[i+1:len(val)])

            result = percentage(a, b)

        if(val[i] == "^"):
            a = float(val[0:i])
            b = float(val[i+1:len(val)])
            result = power(a, b)

        if((val[0] == "L" or val[0] == "l") and (val[i] == "(")):
            for j in range(i, len(val)):
                if(val[j] == ','):
                    a = float(val[i+1:j])
                    b = float(val[j+1:len(val)-1])
                    result = log(a, b)

        if((val[0] == "S" or val[0] == "s") and (val[i] == "(")):
            a = float(val[i+1:len(val)-1])
            result = sin(a)

        if((val[0] == "C" or val[0] == "c") and (val[i] == "(")):
            a = float(val[i+1:len(val)-1])
            result = cos(a)

        if((val[0] == "T" or val[0] == "t") and (val[i] == "(")):
            a = float(val[i+1:len(val)-1])
            result = tan(a)

    print("The result of "+val + " is : ", result)
    print("")
    x=int(input("If u want to exit enter 1 and if u wish to continue enter 0 :  "))


