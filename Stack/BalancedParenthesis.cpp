#include <bits/stdc++.h>
using namespace std;

bool matching(char a,char b){
    return (( a=='(' && b==')' )||( a=='[' && b==']' )||( a=='{' && b=='}' ));
}

bool isBalanced(string str){
      
    stack<char> s; 
    
    for (int i = 0; i < str.length(); i++)  
    { 
        if (str[i] == '(' || str[i] == '[' || str[i] == '{')  
        {  
            s.push(str[i]); 
        } 
        else{
        if (s.empty()==true) 
            return false;
        else if(matching(s.top(),str[i])==false)
            return false;
        else
            s.pop();
        }
    }    
    return (s.empty()==true); 
}

int main()
{
    string str = "{()}[]"; 
    
    if (isBalanced(str)) 
        cout << "Balanced"; 
    else
        cout << "Not Balanced"; 

    return 0; 
}


//Java Code
/*
import java.io.*;
import java.util.*;

class GFG {
    
    public static boolean matching(char a,char b){
        return (( a=='(' && b==')' )||( a=='[' && b==']' )||( a=='{' && b=='}' ));
    }
    
    public static boolean isBalanced(String str){
          
        Deque<Character> s=new ArrayDeque<>(); 
        
        for (int i = 0; i < str.length(); i++)  
        { 
            if (str.charAt(i) == '(' || str.charAt(i) == '[' || str.charAt(i) == '{')  
            {  
                s.add(str.charAt(i)); 
            } 
            else{
            if (s.isEmpty()==true) 
                return false;
            else if(matching(s.peek(),str.charAt(i))==false)
                return false;
            else
                s.pop();
            }
        }    
        return (s.isEmpty()==true); 
    }
    
	public static void main (String[] args) {
	
	    String str = "{()}[]"; 
    
        if (isBalanced(str)) 
            System.out.print("Balanced"); 
        else
            System.out.print("Not Balanced");
	  
	}
	
}
*/
