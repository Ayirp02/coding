def pal(s):
    s=s.lower()
    if len(s)<=1:
        return True
    elif s[0]!=s[-1]:
        return False
    else:
        return pal(s[1:-1])
myinput=input("Enter a string:")
if pal(myinput):
    print(f"'{myinput}' is a palindrome.")
else:
    print(f"'{myinput}' is not a palindrome.")
