def factorial(n):
    if n==0:
        return 0
    if n==1:
        return 1
    else:
        return n*factorial(n-1)
n=int(input("Enter any number:"))
print("Factorial value of",n,":",factorial(n))
