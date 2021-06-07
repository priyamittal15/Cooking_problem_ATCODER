// at coder dishes problem
#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
    int b;
	int sum=0;
	int total= 0;
	int n;
	int a[n];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	 sort(a, a + n);
	 for(int i=0;i<n;i++){
	 	cout<<a[i];
	 	
	 }
	 if (n>2){
	 
	 
	 if(n%2==0){
	 	
	 
	 for(int i=0;i<=n-1;i++){
	 	for(int j=1;j<=n;j++){
	 		sum= a[j]-a[i];
	 		total = total+sum;
 }
}
}
     else{
     	b=a[0];
      	for(int i=1;i<n;i++){
	   	b=a[i]-b;
	   	total+=b;
	   	
 }
}
       	 	
}
else{
	 for(int i = 1;i < n; ++i){
	 

        if(a[0] < a[i]){
       	total=a[i];
	   }
          
    
       else{
	
       total=a[0];
	}
}
}
			
	   
	 	
	cout<<"\n"; 		
	cout<<total;
	 return 0;
	 
	
}
