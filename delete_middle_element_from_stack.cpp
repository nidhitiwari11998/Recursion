#include<bits/stdc++.h>
void help(int count,int N,stack<int>&inputStack){
   if(inputStack.empty() or count==N)
       return;
    int x=inputStack.top();
    inputStack.pop();
    help(count+1,N,inputStack);
    if(count!=N/2)
        inputStack.push(x);
}
void deleteMiddle(stack<int>&inputStack, int N){
	
   // Write your code here
    int count=0;
    if(inputStack.size()==1){
        inputStack.pop();
        return;
    }
    help(count,N,inputStack);
}
