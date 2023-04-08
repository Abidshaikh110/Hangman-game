#include <iostream>
#include <cstring>
#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
void start(){
	cout<<"\t\t\t\t\tSave My Life By Guess The word "<<endl;
	cout<<"\t\t\t\t\t__________________"<<endl;
	cout<<"\t\t\t\t\t         |       |"<<endl;
	cout<<"\t\t\t\t\t         O       |            You can save his file."<<endl;
	cout<<"\t\t\t\t\t        / \\      |           /"<<endl;
	cout<<"\t\t\t\t\t         |       |          O"<<endl;
	cout<<"\t\t\t\t\t        / \\      |         / \\"<<endl;
	cout<<"\t\t\t\t\t     =========   |          |  "<<endl; 
	cout<<"\t\t\t\t\t       |    |    |         / \\"<<endl;
	cout<<"\t\t\t\t\t   ----------------------------"<<endl;
}
void free(){
	cout<<"\t\t\t\t\t__________________"<<endl;
	cout<<"\t\t\t\t\t                 |"<<endl;
	cout<<"\t\t\t\t\t         O       |            You are free."<<endl;
	cout<<"\t\t\t\t\t        / \\      |           /"<<endl;
	cout<<"\t\t\t\t\t         |       |          O"<<endl;
	cout<<"\t\t\t\t\t        / \\      |         / \\"<<endl;
	cout<<"\t\t\t\t\t     =========   |          |  "<<endl; 
	cout<<"\t\t\t\t\t       |    |    |         / \\"<<endl;
	cout<<"\t\t\t\t\t   ----------------------------"<<endl;
}
void hangman(){
	cout<<"\t\t\t\t\t__________________"<<endl;
	cout<<"\t\t\t\t\t         |       |"<<endl;
	cout<<"\t\t\t\t\t         O       |            You are hanged."<<endl;
	cout<<"\t\t\t\t\t        / \\      |           /"<<endl;
	cout<<"\t\t\t\t\t         |       |          O"<<endl;
	cout<<"\t\t\t\t\t        / \\      |         / \\"<<endl;
	cout<<"\t\t\t\t\t     ==     ==   |          |  "<<endl; 
	cout<<"\t\t\t\t\t       |    |    |         / \\"<<endl;
	cout<<"\t\t\t\t\t   ----------------------------"<<endl;
}
//first level funtion
int i;
int chance =3;          /* Guess chances*/
char array[5]={"july"}; /*Original word*/

int find( char key){   /*searching funtion for guess*/
	
	
	for(i=0; i<5;i++){
		if(array[i]==key){
			cout<<"WELLDONE!"<<endl;
			return i;
			break;}

	
	}
	
	chance--;
	
}
int main(){
	system("color f0");
	string titlename="||      ||  ||=====  ||       *******  ooooooo  ||\\\\  //|| ||=====\n"
                     "||      ||  ||       ||       **       oo   oo  || \\\\// || ||\n"
                     "||      ||  ||=====  ||       **       oo   oo  ||      || ||=====\n"
                     "|| //\\\\ ||  ||       ||       **       oo   oo  ||      || ||\n"
                     "||//  \\\\||  ||=====  ||====== *******  ooooooo  ||      || ||=====\n";
    for(int j=0;j<titlename.length(); j++){
    	Sleep(4);
    	cout<<titlename[j];
	}
char hidword[5]={"XXlX"};
cout<<"\n|------|"<<endl;
cout<<"| "<<hidword<<" |"<<endl;
cout<<"|------|"<<endl;
while(strcmp(hidword,array)!=0 ){
	cout<<"Hint:It is name of month"<<endl;
	cout<<"chances:"<<chance<<endl;
	if(chance==0)
	{ 
	hangman();
	break;
	}

	start();
char key;
cout<<"Guess here please"<<endl;
cin>>key;
i=find(key );
hidword[i]=key;
system("cls");
cout<<"|------|"<<endl;
cout<<"| "<<hidword<<" |"<<endl;
cout<<"|------|"<<endl;
if(strcmp(hidword,array)==0){
free();	
}
}

}
