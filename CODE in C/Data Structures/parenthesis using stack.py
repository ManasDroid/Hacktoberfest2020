def Balanced(expression) : 
    stack = [] 
  
    for char in expression: 
        if char in ["(", "{", "["]: 
  
            stack.append(char) 
        else: 
  
            # stack can't be empty if current_char is not an opening bracket
            if not stack: 
                return False
            current_char = stack.pop() 
            if current_char == '(': 
                if char != ")": 
                    return False
            if current_char == '{': 
                if char != "}": 
                    return False
            if current_char == '[': 
                if char != "]": 
                    return False
  
    # Check if stack is empty 
    if stack: 
        return False
    return True
  
  
# Driver code 
if __name__ == "__main__" :  
    expression = input();  
    if Balanced(expression) : 
        print("Balanced");  
    else : 
        print("Not Balanced");  