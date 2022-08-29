#include <iostream> 
 #include<stdlib.h> 
 using namespace std; 
 static int n; 
 int LinearSearch(int array[],int key) 
 { 
     for(int i =0 ; i< n ; i++) 
     { 
         if(key == array[i]) 
             return 1+i; 
     } 
     return -1; 
 } 
 void Sorting(int array[] ) 
 { 
 for(int i=1;i<n;i++){ 
     for(int j=1;j<=n-i;j++){ 
         if(array[j-1]>array[j]){ 
              int temp =array[j-1]; 
             array[j-1]=array[j]; 
             array[j]=temp; 
         } 
     } 
 } 
 } 
 int BinarySearch(int array[],int key){ 
 int s=0; 
 int e=n; 
 for(int i=0;i<n;i++){ 
     int mid=(s+e)/2; 
     if(array[mid]==key){ 
         return mid+1; 
  
     } 
     else if (array[i]>key){ 
         e=mid-1; 
  
     } 
     else{ 
         s=mid+1; 
     } 
 } 
 return -1; 
 } 
 void Display(int array[]) 
 { 
     cout<<"Array is :"; 
     for(int i =0 ; i < n ; i++) 
         cout<<array[i]<<" "; 
  
     cout<<endl; 
 } 
 int Inserting(int array[]){ 
     if(n>=100) 
         return -1; 
 int ele,pos,i; 
 cout<<"Enter the Element"<<endl; 
 cin>>ele; 
 cout<<"Enter the Position"<<endl; 
 cin>>pos; 
 if(pos >= n){ 
     cout<<"This is Not Valid position"<<endl; 
     return -1; 
 } 
 else{ 
 for( i = n-1 ; i>=pos ; i--){ 
     array[i+1]= array[i]; 
 } 
 array[i+1]=ele; 
  
     return 1; 
 } 
 } 
 int Deleting(int array[]){ 
 int ele,pos; 
 cout<<"Enter the Deleting Element"<<endl; 
 cin>>ele; 
 pos=(LinearSearch(array,ele)-1); 
 if(pos==-1){ 
     return -1; 
 } 
 else{ 
 for(int i = pos ; i<n;i++) 
     array[i]=array[i+1]; 
  
     return 1; 
 } 
 } 
 int main() 
 { 
     int Arr[100]; 
     cout << "Enter the How many Element y want To insert" << endl; 
     cin>>n; 
     cout<<"Enter the Element"<<endl; 
     for(int i =0 ; i<n; i++) 
         cin>>Arr[i]; 
  
     while(1) 
     { 
         int choice; 
         cout<<"1.Linear Search"<<endl<<"2.Sorting Array"<<endl<<"3.Binary Search"<<endl<<"4.Display Array"<<endl<<"5.Inserting"<<endl<<"6.Deleting"<<endl<<"7.exit"<<endl<<" : "; 
         cin>>choice; 
         int pos,position,key; 
         switch(choice) 
         { 
         case 1: 
             cout<<"Enter Which element want"<<endl; 
             cin>>key; 
             position = LinearSearch(Arr,key); 
             if(position==-1) 
                 cout<<"Element Not Found "<<endl; 
             else 
                 cout<<"This Element Found in Position "<<position<<endl; 
  
             break; 
  
         case 2: 
             Sorting(Arr); 
             break; 
  
         case 3: 
             cout<<"Enter Which element want"<<endl; 
             cin>>key; 
             pos = BinarySearch(Arr,key); 
             if(pos==-1) 
                 cout<<"Element Not Found "<<endl; 
             else 
                 cout<<"This Element Found in Position "<<pos<<endl; 
             break; 
  
         case 4: 
             Display(Arr); 
             break; 
         case 5 : 
            pos = Inserting(Arr); 
             if(pos==-1) 
                 cout<<"Element Not Insert "<<endl; 
             else 
                 cout<<"Element is Insert "<<endl; 
                 n++; 
             break; 
         case 6: 
           pos = Deleting(Arr); 
             if(pos==-1) 
                 cout<<"Element Not Delete "<<endl; 
             else 
                 cout<<"Element is delete "<<endl; 
                 n--; 
             break; 
         case 7: 
             exit(1); 
  
         default: 
             cout<<"Wrong Choice"<<endl; 
  
         } 
     } 
     return 0; 
 }
