
def BubbleSort(L):
    ctr = 0
    n = len(L)
    for i in range(n-1):
#        print(i+1,'th pass')
        for j in range(n-1-i):
            if L[j+1] < L[j]:
                L[j],L[j+1] = L[j+1],L[j]
                ctr += 1
    print(L,ctr)
#            print(' ',j,L)


def SelectionSort(L):
    n = len(L)
    ctr = 0
    for i in range(n-1):
#        print(i+1,'th pass')
        for j in range(i,n):
#            print(' ',j,L[i])
            if L[j] < L[i]:
                ctr += i
                L[j],L[i] = L[i],L[j]
    print(L,ctr)
#        else:
#            print(L)

def InsertionSort(L):
    n = len(L)
    ctr = 0
    for i in range(n):
#        print(i+1,'th pass')
        t = L[i]
        j = i-1
        while j >=0 and t < L[j]:
#            print(j,t)
            L[j+1] = L[j]
            ctr += 1
            j = j-1
        L[j+1] = t
    print(L,ctr)


L1 = [5,2,8,3,9,7,4,1]
L2 = [5,2,8,3,9,7,4,1]
L3 = [5,2,8,3,9,7,4,1]
BubbleSort(L1)
SelectionSort(L2)
InsertionSort(L3)