def PalindromeN(number):
    length = len(number)
    mid = length // 2
    for i in range(mid):
        if number[i] != number[length - i - 1]:
            print("Not a Palindrome")
            return
    print("Palindrome")




input_number = int(input("Enter a number: "))
number_str = str(input_number)
PalindromeN(number_str)