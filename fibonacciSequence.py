def fibonacci(n):
    if n <= 1:
        return n
    else:
        return fibonacci(n-1) + fibonacci(n-2)

limit = int(input('Insert the number of values of the series that you would see: '))

for num in range(1, limit + 1):
    print(fibonacci(num))
    