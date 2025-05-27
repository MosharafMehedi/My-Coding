digit=0
letter=0
space=0

text=input("Enter any text: ")

for x in text:
    x=x.lower()
    if x>= 'a' and x<= 'z':
        letter=letter+1
    elif x>= '0' and x<= '9':
        digit=digit+1
    elif x == ' ':
        space=space+1

print("Number of letter: ",letter)
print("Number of digit: ",digit)
print("Number of space: ",space)