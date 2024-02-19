def isprime(num):
    if num == 0 or num == 1:
        return False
    for i in range(2, num // 2):
        if (num % i) == 0:
            return False
    return True


