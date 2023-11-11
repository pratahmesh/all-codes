# n=4
# product=1
# for i in range(n):  
#     product=product*(i+1)
# print(product)
# n! =n * (n-1)!

def factorial_iter(n):
    product=1
    for i in range(n):  
        product=product*(i+1)
    return product
# f= factorial_iter(5)
# or
def factorial_recursive(n):
    if n==1 or n==0:
        return 1
    return n * factorial_recursive(n-1)

f=factorial_recursive(5)

print(f)
# recusrsion is a function calling itself , it is used to drictly use a maths formula as a function 