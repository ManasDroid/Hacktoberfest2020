import java.util.*;

public class arrayRotation{
    //given a array rotate the array by one in either direction
    
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        
        int length = scanner.nextInt();
        int[] array = new int[length];
        
        for(int i = 0 ; i < length ; i++)
            array[i] = scanner.nextInt();
        
        //1 for left rotation and 2 for right rotation
        
        int choice = scanner.nextInt();
        
        rotateArray(array,choice);
    }
    
    public static void rotateArray(int[] arr,int choice)
    {
        int n = arr.length;
        
        //left rotation
        if(choice == 1)
        {
            //in a left rotation,the first element becomes the last element
            int lastElement = arr[0];
            for(int i = 0 ; i < n-1 ; i++)
                arr[i] = arr[i+1];
                
            arr[n-1] = lastElement;

	    //print the array
            printArray(arr);
        }
        //right rotation
        else if(choice == 2)
        {
            //in a right rotation,the last elemts becomes the first element
            int firstElement = arr[n-1];
            for(int i = n-1 ; i > 0 ; i--)
                arr[i] = arr[i-1];
                
            arr[0] = firstElement;

	    //print the array
            printArray(arr);
        }
        //invalid choice
        else
        {
            System.out.println("Invaid Choice");
        }
    }
    
    //helper function to print the array
    public static void printArray(int[] arr)
    {
        System.out.println("The Array after rotation");
        for(int i : arr)
            System.out.print(i+" ");
    }
}