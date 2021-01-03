PROGRAM:
# Find a prime number if number is prime then print the number and show the my python code
def PRIME():
    # for input number and save in num
    num = int(input("Input the number check prime OR Not"))
    # loop start from 2 and end num
    for i in range(2, num):
        if num % i == 0:
            print(num, " is Not a  Prime Number ")
            print("HI THIS IS MY PYTHON CODE")
            break
    else:
        print(num, "  is Prime Number")
        print("HI THIS IS  MY PYTHON CODE")


def main():

    PRIME()


if __name__ == '__main__':
    main()
