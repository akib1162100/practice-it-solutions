def merge_sort(number_list,order=0):
    if len(number_list)>1:
        mid = len(number_list) // 2
        left_arr = number_list[:mid]
        right_arr = number_list[mid:]
        merge_sort(left_arr,order)
        merge_sort(right_arr,order)

        i=j=k=0
        while i<len(left_arr) and j<len(right_arr):
            if left_arr[i]<=right_arr[j]:
                if order==0:
                    number_list[k]=left_arr[i]
                    i+=1
                else:
                    number_list[k]=right_arr[j]
                    j+=1
            else:
                if order==0:
                    number_list[k]=right_arr[j]
                    j+=1
                else:
                    number_list[k]=left_arr[i]
                    i+=1
            k+=1
        while i<len(left_arr):
            number_list[k]=left_arr[i]
            i+=1
            k+=1
        while j<len(right_arr):
            number_list[k]=right_arr[j]
            j+=1
            k+=1

number_list = list(map(int,input("Enter a list of numbers: ").strip().split()))
merge_sort(number_list)
print("after descending sort ")
print (number_list) 
print("after ascending sort ")
merge_sort(number_list,order=1)
print (number_list) 