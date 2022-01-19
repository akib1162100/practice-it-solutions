def ReverseNumber(num):
    reverse = 0
    temp = int(num)
    while temp:
        reverse = int(reverse*10)
        reverse = reverse + int(temp%10)
        temp = int(temp//10)

    return reverse

num = int(input("Enter a number: "))
reverse = ReverseNumber(num)
print(reverse)