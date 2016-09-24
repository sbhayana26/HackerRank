#https://www.hackerrank.com/challenges/cut-the-sticks

import sys
n = int(input())
arr = input().split()
arr = [int(x) for x in arr]
smallest = 1001
while(True):
    print(len(arr))
    arr.sort()
    smallest = arr[0]
    arr1 = [i-smallest for i in arr if i-smallest>0]
    arr = arr1
    if smallest==0 or len(arr)==0:
        break
