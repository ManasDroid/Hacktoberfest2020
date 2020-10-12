def sortDutch(arr): 
    # Function to sort the array of 0's, 1's and 2's 

    # Calculate array length
    n = len(arr)

    # Count each array element
    count_0 = arr.count(0)
    
    count_1 = arr.count(1)
    
    count_2 = arr.count(2)
    
    for i in range(n):
        # The For loop uses the counts as ranges to replace
        # array elements
        
        # Replaces initial list elements with 0's
        if i < count_0:
            arr[i] = 0

        # Then with 1's
        elif i >= count_0 and i < count_0 + count_1:
            arr[i] = 1

        # Then with 2's
        elif i >= n - count_2:
            arr[i] = 2
    
    print(arr)

arr = [0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1] 
  
sortDutch(arr) 
