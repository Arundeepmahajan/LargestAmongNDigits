lst=[]
num=int(input('The size of the array: '))

for n in range(num):
    numbers=int(input('Enter numbers of the array: '))
    lst.append(numbers)
print("Maximum element in the list is: ",max(lst))