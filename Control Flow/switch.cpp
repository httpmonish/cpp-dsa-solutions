#include<iostream>
using namespace std;

int main(){
     char grade;
     cout<< "Enter your Grade: "<<endl;
     cin>> grade;

    //  if(grade == 'A') {
    //     cout<<"your marks will be in range of 90 to 100"<<endl;
    //  }
    //  else if(grade == 'B'){
    //      cout<<"your marks will be in range of 80 to 100"<<endl;   
    //  }
    //  else if(grade == 'C'){
    //  cout<<"your marks will be in range of 70 to 100"<<endl;
    //  }
    //  else if(grade == 'D'){
    //     cout<<"your marks will be in range of 60 to 100"<<endl; 
    //  }
    //  else{
    //      cout<<"your marks will be in range of 0 to 60"<<endl;
    //  }
     switch(grade){
        case 'A': cout<<"your marks will be in range of 90 to 100"<< endl; 
        break;       
        case 'B': cout<<"your marks will be in range of 80 to 100"<< endl;
        break;        
        case 'C': cout<<"your marks will be in range of 70 to 100"<< endl;
        break;        
        case 'D': cout<<"your marks will be in range of 60 to 100"<< endl;
        break;
        default: cout<< "your marks will be in range of 0 to 60"<< endl;
             

     }
       return 0;
     }
  
    