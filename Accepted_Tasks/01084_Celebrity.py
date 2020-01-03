q = int(input())
people = [];
for i in range(q):
    people.append(i+1)
for i in range(q-1):
    print("Q", people[0], people[1])
    b = int(input())
    if b==1:
        del people[0]
    else:
        del people[1]
print ("A", people[0])
