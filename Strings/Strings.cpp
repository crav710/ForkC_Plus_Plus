#include <iostream>
#include <string.h>
using namespace std;
void IntroToStrings()
{
	/*
	define string 
	char vs class string
	single Quotes for char and double quotes for string'
	string delimeter = '\0' -> nullchar 
	you can stop string with nullchar
	*/
	char x         ='A';
	char s[10]     ="Hello";
	char sx[]      ="Hello";
	char sxo[]     ={'H','e','l','l','o','\0'};
	char sxAscii[] ={65,66,67,68,'\0'};
	char *S        ="Hello"; // Warning 
	cout<<x<<" "<<s<<" "<<sx<<" "<<sxo<<" "<<sxAscii<<" "<<S<<endl; 

}
void Reading_writing_strings()
{
	/*
	Different ways to read string.
	*/
	// method 1 
	char s[20];
	cin>>s; // Problem it just takes the first word. not the entire line 
	cout<<s;
	// method 2 
	char y[50];
	cin.get(y,50);// Will take maximum of 50 alphabets it can take. 
	cout<<y<<endl;
	cin.ignore();
	cin.get(y,50);
	cout<<y<<endl;
	//issue if you use it consecutively because of \n entry from keyboard . To fix it use cin.ignore();
	//
	cin.getline(y,50); // Will take maximum of 50 alphabets it can take.
	cout<<y<<endl;
	cin.getline(y,50); // Will take maximum of 50 alphabets it can take.
	cout<<y<<endl;
}
void string_Functions()
{
	// strlen func -> calculates the size of string 
	char s[50] ="james Bond";
	cout<<strlen(s)<<endl;
	char *ptr=s;
	//cout<<"Enter name: ";
	//cin.getline(ptr,100);
	cout<<ptr<<" length :: "<<strlen(ptr)<<endl; // Does not work??? Why ?

	// strcat(destination,source) -> concatenating strings 
	// strncat(destination,source,length) -> concat lenght source concat to destination
	char s1[20] = "Good";
	char s2[10] = "Morning";
	strcat(s1,s2);
	cout<<s1<<endl;

	strncat(s1,s2,5);
	cout<<s1<<endl;

	// strcpy (destination,source)   -> copy source to destination;
	// strncpy(destination,source,n) -> copy source to dest n letters;
	char ss1[20] = "Good";
	char ss2[10] = "";
	char ss3[10] = "";
	strcpy(ss2,ss1);
	cout<<ss2<<endl;

	strncpy(ss3,ss1,2);
	cout<<ss3<<endl;

	// strstr(main,sub) -> give the substring starting from sub . 
	char x1[20] ="Programming";
	char x2[10] ="gram";
	// cout<<strstr(x1,x2)<<endl;
	// strchr(main,char) -> find the occurance from the character 
	// strrchr(main,char) -> find the occurance of character from rear
	char y1[20] ="Programming";
	char y2='r';
	char y3='m';
	cout<<strchr(y1,y2)<<endl;
	cout<<strrchr(y1,y2)<<endl;
	cout<<strrchr(y1,y3)<<endl;
	char z1[10]="234.1";
	char z2[10]="gfg";
	// strcmp(str1,str2) -> compare two string in dictionary order
	int res =strcmp(z1,z2); 
	cout<<res<<endl;
//	String to long and string to float 
	long int  lx= strtol(z1,NULL,10);
	float 	  fx= strtof(z1,NULL);
	cout<<lx<<" "<<fx<<endl; 
// String tokenizer  strtok(string,Delimeter)
	char tk[100]="Hey:how:are:you";
	char *tkn=strtok(tk,":");
	while(tkn!=NULL)
	{
		cout<<tkn<<endl;
		tkn = strtok(NULL,":");
	}
}

/*
String Class 
*/
void FunctionsStringClass()
{
	string s ="Heyllo";
	cout<<s.length()<<endl;
	cout<<s.size()<<endl;
	cout<<s.capacity()<<endl;
	// s.resize(30);
	cout<<s.max_size()<<endl;
// /	s.clear();

	// Append and swap functions ;
	s.append("a");
	cout<<s<<endl;
	s.insert(2,"2");
	cout<<s<<endl;
	s.replace(3,2,"aa");// start,num of chars , string to replace 
	cout<<s<<endl;
	// s.erase();
	cout<<s<<endl;
	s.push_back('q');
	cout<<s<<endl;
	s.pop_back();
	cout<<s<<endl;
	s.swap(s);
	cout<<s<<endl;
	// copy and find funcs;
	char str[10];
	s.copy(str,s.length());
	str[s.length()]='\0';
	cout<<str<<endl;
	// s.find(str) or char; returns the index of first occurance of string or char .
	cout<<s.find('a')<<endl;
	//find from riaght side 
	cout<<s.rfind('a')<<endl;
	// find first off  and last off ,string can also be given ,starting index can also be given 
	cout<<s.find_first_of('a',4)<<endl;
	cout<<s.find_last_of('a')<<endl;
	// substr(start,number) -> returns new string object  
	cout<<s.substr(1,4)<<endl;
	// str compare 
	cout<<s.compare("hha")<<endl;

}
void StringOperator()
{
	string str="Holiday";
	// str at()
	cout<<str.at(4)<<endl;
	// str front()

	// str back()
	// []
	// + 
	// =
	// Iterator 
	string::iterator itr;
	for(itr= str.begin();itr!=str.end();itr++)
	{
		cout<<*itr;
	}
	cout<<endl;
	// reverse iterator 
	string::reverse_iterator it;
	for(it= str.rbegin();it!=str.rend();it++)
	{
		cout<<*it;
	}
	cout<<endl;
	

}

int main(int argc, char const *argv[])
{
	// IntroToStrings();
	// Reading_writing_strings();
	// string_Functions();
	// FunctionsStringClass();
	StringOperator();
	return 0;
}