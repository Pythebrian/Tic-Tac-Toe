#include <iostream>
#include <stdlib.h>
#include <vector>
#include <algorithm>

using namespace std;
vector <string> user_input {"1","2","3","4","5","6","7","8","9",""};
string choice;
int location;
string insert = " ";
int player=0;
string r;
int count=0;
string num[]={"1","2","3","4","5","6","7","8","9"};


	
int win_condition(){
	if (user_input[0] == "O" && user_input[4]=="O" && user_input[8]== "O"){
		return 0;
	}
	else if(user_input[0] == "X" && user_input[4]=="X" && user_input[8]== "X"){
		return 1;
	}
	else if(user_input[0] == "X" && user_input[1]=="X" && user_input[2]== "X"){
		return 0;
	}
	else if(user_input[0] == "X" && user_input[3]=="X" && user_input[6]== "X"){
		return 0;
	}
	else if(user_input[1] == "X" && user_input[4]=="X" && user_input[7]== "X"){
		return 0;
	}
	else if(user_input[2] == "X" && user_input[5]=="X" && user_input[8]== "X"){
		return 0;
	}
	else if(user_input[2] == "X" && user_input[4]=="X" && user_input[6]== "X"){
		return 0;
	}
	else if(user_input[0] == "O" && user_input[1]=="O" && user_input[2]== "O"){
		return 1;
	}
	else if(user_input[0] == "O" && user_input[3]=="O" && user_input[6]== "O"){
		return 1;
	}
	else if(user_input[1] == "O" && user_input[4]=="O" && user_input[7]== "O"){
		return 1;
	}
	else if(user_input[2] == "O" && user_input[5]=="O" && user_input[8]== "O"){
		return 1;
	}
	else if(user_input[2] == "O" && user_input[4]=="O" && user_input[6]== "O"){
		return 1;
	}
	else{
		return 2;
	}	  
		  
}
int bot(){
	cout<<"Are you playing alone?(Yes/No)\n";
	cin>>r;
	if (r=="Yes"){
		return 10;
	}
	else {
		return 15;
	}
}




void grid(){
	cout<<"   |   "<<user_input[0]<<"  |   "<<user_input[1]<<"  |   "<<user_input[2]<<"  |   \n";
	cout<<"___|___"<<"___|___"<<"___|___"<<"___|___\n";
	cout<<"   |   "<<user_input[3]<<"  |   "<<user_input[4]<<"  |   "<<user_input[5]<<"  |   \n";
	cout<<"___|___"<<"___|___"<<"___|___"<<"___|___\n";
	cout<<"   |   "<<user_input[6]<<"  |   "<<user_input[7]<<"  |   "<<user_input[8]<<"  |   \n";
	cout<<"___|___"<<"___|___"<<"___|___"<<"___|___\n";
	cout<<"   |   "<<"   |   "<<"   |   "<<"   |   \n";
}
int main(){
	
	cout<<"Tic Tac Toe\n\n\n";
	cout<<"Player 1(O) -------------- Player 2(X)\n\n"<<"Each player take turn to select a location to insert\n\n\n\n";
	grid();
    /*
	bot();
    if(bot()==10){
        cout<<"A bot has challenge you to a game of Tic Tac Toe!\n";
        random_shuffle(begin(num), end(num));
        for(int i=0; i<10; i++){
        cout<<"Please enter a location to insert\n";
        cin>>location;
        user_input[location-1]=insert;
        grid();
       for (int x=0; x<10; x++){
            num[x]=user_input[x];
        
            if (x%2==0){
                insert = "O";
        }
            else{
                insert = "X";
        }
        }
    grid();
    }
    }
    else{
        cout<<"";
    }
	
    *///
    for (int i=0; i<user_input.size(); i++){

	if (i%2==0){
		player=1;
	}
	else {
		player=2;
	}
	cout<<"Player "<<player <<" enter a location to insert\n\n\n";

	if (i%2==0){
	 insert = "O";
	}
	else{
		insert = "X";
	}
	cin>>location;
	user_input[location-1]=insert;
	grid();
	win_condition();
    if (win_condition()==1){
		//cout<<"Player 2 wins!\n";
		cout<<"End of game!"<<endl;
		break;
	}
	else if (win_condition()==0){
		//cout<<"Player 1 wins!\n";
		cout<<"End of game!"<<endl;
		break;
	}
	else if(win_condition()==2 && i==8){
		cout<<"Draw Game!\n\n";
		break;

	}
	else{
		cout<<"";
	}


    }





}


