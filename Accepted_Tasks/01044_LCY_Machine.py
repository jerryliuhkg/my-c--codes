num = int(input())
counter = 1
i = 1
while i==1:
    if pow(2, counter) - 1 >= num:
        print(counter)
        i = 0
    else:
        counter = counter + 1
