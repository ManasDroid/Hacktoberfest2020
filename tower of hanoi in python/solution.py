def TowerOfHanoi(n , sd="A", dd="C", td="B"):

   
 
 if n == 1:
   

   
    print ("Move disk 1 from rod",sd,"to rod",dd)
        
    return 
        
  
  
 TowerOfHanoi(n-1, sd, td, dd)
    
   


 print ("Move disk",n,"from rod",sd,"to rod",dd)
    
  


    
 TowerOfHanoi(n-1, td, dd, sd)

    
   
 
(int(input('Enter the no of disks:\n')))
