#include <iostream>
#include <string>
using namespace ::std;
int number;
int counter=1;
int cont=1;
string text = "";
int main(){
    while (cont){
        cout << "Please enter a number" << endl;
        cout << "Enter 0 to exit" << endl;
        cin >> number;
        if(number==0){
            return 0;
        }
        while(counter<=number){
            text = "";
            if(counter%3==0){
                text = text + "fizz";
            }
            if(counter%5==0){
                text = text + "buzz";
            }if(text.length()==0){
                text = to_string(counter);
            }
            cout << text << endl;
            counter=counter+1;
        }
    }
}