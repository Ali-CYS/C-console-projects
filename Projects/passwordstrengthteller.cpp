#include <iostream>
#include <cctype>// for upper/lower/digits
#include <string>
#include <cmath> // for adding functionality this is not used in this program
using namespace std;
// an string of 40 common pass is made and a function is also made to check if the user's entered password , IF the user entered password is same 
// this function will return true else it will return false(0)
int commonpassword(string password ){
    string list[40] = {
    "123456", "password", "123456789", "12345678", "12345",
    "123123", "qwerty", "abc123", "football", "monkey",
    "letmein", "admin", "welcome", "login", "dragon",
    "iloveyou", "sunshine", "princess", "qwerty123", "1q2w3e4r",
    "baseball", "111111", "1234", "1234567", "654321",
    "superman", "passw0rd", "master", "trustno1", "qazwsx",
    "hello", "freedom", "whatever", "qwertyuiop", "asdfghjkl",
    "batman", "1234", "zxcvbnm", "zaq1zaq1", "starwars"
};
;

    for(int i=1;i<=40;i++){
        if(password==list[i]){
            cout<<"The password is too common"<<endl;
            return true;
        }
    }
    return false;

   
}
// function ends here

// new function to check getstrength starts here
// checks the strenght of the password
void getStrength(string password){
	//using cctype islower,isupper,isdigits.
 int islower=0,isupper=0,isdigit=0,symbol=0;
int passlength= password.length();

// calls the above function we made at the start
 if(commonpassword(password)){

    
}
// it not a common pass then it checks if >=8 or not
 else if(passlength<=8){

    cout<<"Password should be more than 8 characters attleast"<<endl;

}
// if it is more than 8 and is not the common password then it checks for each lower,upper ,symbol,digits
//we use ascii values to check

else{
int check=0;
 for(int i=0;i<passlength;i++){
    char store=password[i];
    
    if(store>=97 && store<=122){
        islower=1;
    }
    if(store>=65 && store <=90){
        isupper=2;
    }
    if(store>=48 && store <=57){
        isdigit=3;
    }
    if(store>=33 && store <=47){
       symbol=4;
    }
}
//if lower/upper/digit/symbol is found the checks=checks+1
if(islower==1){check=check+1;}
if(isupper==2){check=check+1;}
if(isdigit==3){check=check+1;}
if(symbol==4){check=check+1;}
if(check==0){
    cout<<"Password is too weak"<<endl;
}
cout<<"************************"<<endl;
cout<<"Password you entered is "<<password<<endl;
cout<<"************************"<<endl;
// gives result based on checks
if(check==4){
    cout<<endl;
    cout<<"The password is quite strong ! GOOD JOB! Remember it now"<<endl;
}
if(check==3){
    cout<<endl;
    cout<<"The password you choose is strong but better if you apply following suggestions \n"<<endl;
}
if(check==2){
    cout<<endl;

    cout<<"The password you choose is not strong consider the following suggestions \n"<<endl;
}
if(check<=1){
    cout<<endl;
    cout<<"The password is extremly weak \n"<<endl;
    cout<<"choose a strong password for example: " <<endl;
     cout<<"K7v#zT91!aLp"<<endl;
     cout<<"@M4qXf*2rW8b"<<endl;
     cout<<"nC9$Bv!tL0#Y"<<endl;
     cout<<"F!6kXp@zT2Qw"<<endl;
     cout<<"uR#81dP!zV$3"<<endl;

}
// different symbols is made to make it look good visually 
if(check<4){
cout<<" --------Make your password stronger by : ---\n"<<endl;
    if(islower!=1){
        cout<<" || Including  a lower case character (a-z) ||  \n"<<endl;
    }
    if(isupper!=2){
        cout<<" || Including a Upper case character (A-Z) || \n"<<endl;
    }
    if(isdigit!=3){
        cout<<" || Including digits (0-9) \t \t   || \n"<<endl;
         
    }
    if(symbol!=4){
        cout<<" || Including a Symbol (~#@# etc)\t   || \n"<<endl;

    }
    cout<<" || THE STRONGER THE PASSWORD              ||\n "<<endl;
    cout<<" || THE HARDER IT IS TO BRUTEFORCE IT      ||\n"<<endl;
    cout<<" ||  --------------------------------------||\n"<<endl;
    
}

}
}
// main function
int main(){
    string password1;
    cout<<"Enter a password"<<endl;
    cin>>password1;
    cout<<endl;
    //sends the password the the fucntion || calls the function
    getStrength(password1);
}
