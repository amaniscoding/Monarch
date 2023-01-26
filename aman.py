def accending_str(arr):
    temp=0
    for i in range(len(arr)):
        for j in range(len(arr)):
            if(int(arr[i]) < int(arr[j])):  
                temp = arr[i]    
                arr[i] = arr[j]    
                arr[j] = temp  
                
    # for i in range(len(arr)):
    #     print(arr,end=' ')
    print('Given array in accending order:')
    print(arr)


def decending_str(arr):   
    temp=0
    for i in range(len(arr)):
        for j in range(len(arr)):
            if(int(arr[i]) > int(arr[j])):  
                temp = arr[i]    
                arr[i] = arr[j]    
                arr[j] = temp  
                
    # for i in range(len(arr)):
    #     print(arr,end=' ')
    print('Given array in decending order:')
    print(arr)

# arr_len=int(input('enter length:'))
# for i in range(arr_len):
#     str=int(input('Enter the string:'))
# try:
#     str=input('Enter the string:').split(' ')
#     for i in str:
#         print(i)
#         # if (i != int(i)):
#         #     pass   
#         #     # raise ValueError
#         # else:
#         print('original array:')
#         # print(str)
#         sel=input("Select 'A' for accending ,Select 'D' for decending:")
#         if(sel=='A'or sel=='a'):
#             print(accending_str(str))
#         elif(sel=='D'or sel=='d'):
#             print(decending_str(str))
#         else:
#             print('wrong selection!')
# except ValueError:
#     print('Enter integer value only!')

str=input('Enter the string:').split(' ')
# for i in str:
#     print(i)

print('original array:')
print(str)
sel=input("Select 'A' for accending ,Select 'D' for decending:")
if(sel=='A'or sel=='a'):
    print(accending_str(str))
elif(sel=='D'or sel=='d'):
    print(decending_str(str))
else:
    print('wrong selection!')