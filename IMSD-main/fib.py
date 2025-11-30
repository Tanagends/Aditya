
T = {
        0: 0,
        1: 1
}

def fib(n):
    if n <= 1:
        return n

    if T.get(n, -1) == -1:
        T[n] = fib(n-1) + fib(n-2)

    return T[n]


print(fib(10))
