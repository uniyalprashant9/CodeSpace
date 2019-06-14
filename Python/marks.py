sum = 0
i=1
while True:
    marks = input("Enter marks in "+str(i)+" subject:")
    if marks == ' ':
        break
    sum+=int(marks)
    i+=i
print(sum)