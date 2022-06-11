'''
Python program to check if three
sides form a triangle or not
A triangle is a valid triangle,
If and only If, the sum of any two sides of a triangle is greater than the third side.
For Example, let A, B and C are three sides of a triangle. Then, A + B > C, B + C > A and C + A > B
'''

a = 7
b = 1
c = 5

def valid_triangle(a, b, c):
    if (a+b <= c) or (b+c <= a) or (a+c <= b):
        return False
    else:
        return True

print (valid_triangle(a,b,c))
if (valid_triangle(a, b, c)):
    print ("triangle is valid")
else:
    print ("triangle invalid")
