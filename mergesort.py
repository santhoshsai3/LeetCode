l1 = [1,5,6,9,21,76,99]
l2 = [2,4,7,8,36,72,101]

def merge(l1,l2):
    a = len(l1)
    b = len(l2)
    l=[]
    i=0
    j=0
    while i<a and j<b:
        if(l1[i]<=l2[j]):
            l.append(l1[i])
            i=i+1
        else:
            l.append(l2[j])
            j=j+1
    
    if i==a:
        while j<b:
            l.append(l2[j])
            j=j+1
    else:
        while i<a:
            l.append(l1[i])
            i=i+1
    return l
    
def mergesort(l,start,end):
    if start<end:
        mid = int (start+end)//2
        fl = mergesort(l,start,mid)
        sl = mergesort(l,mid+1,end)
        return merge(fl,sl)
    return [l[start]]


list1=[2,6,3,1,7,9,11,4] 
print(mergesort(list1,0,7))

        
        