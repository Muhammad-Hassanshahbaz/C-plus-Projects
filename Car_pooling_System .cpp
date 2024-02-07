#include<iostream>
#include<fstream>
#include <string>
#include <conio.h>
#include <bits/stdc++.h>
#include <iomanip>
#include <stdlib.h>
using namespace std;



void printMessageCenter(string message)
{
    int len = 0;
    int pos = 0;
    len = (96 - message.length()) / 2;
    cout << "\t\t\t";
    for (pos = 0; pos < len; pos++)
    {
        cout << " ";
    }
    cout << message;
}


void intro(string message)
{
	system("cls");
	cout<<"\t\t\t\t*********************************************************\t\n";
	cout<<"\t\t\t\t*********************************************************\t\n";
	cout<<"\t\t\t\t*****************   CAR POOLING SYSTEM  *****************\t";
	cout<<"\n\t\t\t\t*********************************************************\t";
	cout<<"\n\t\t\t\t*********************************************************\t";
	cout<<"\n\n";
	printMessageCenter(message);

}


void getChar()
{
	cout<<"\nEnter the key to continue:";
	getch();
}

int stringToInt(string s)
{
    int ans = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] - '0' >= 0 && s[i] - '0' <= 9)
        {
            ans = (ans * 10) + (s[i] - '0');
        }
        else
        {
            return -1;
        }
    }
    return ans;
}

void welcome(string message)
{
	
	intro( message);
	cout<<"\n\t\t\t\t\t\t   MAKE A TRIP EASY  \t\t\t\t\t\n";
	cout<<"\t\t\t\t\t\t******(CAR POOLING)******\t\t\t\t\t\n\n\n";
	
	cout<<left<<setw(5)<<"1-"<<left<<setw(20)<<"Register yourself:"<<endl;
	cout<<left<<setw(5)<<"2-"<<left<<setw(20)<<"Already registered:"<<endl;
	cout<<left<<setw(5)<<"3-"<<left<<setw(20)<<"About"<<endl;
	cout<<left<<setw(5)<<"4-"<<left<<setw(20)<<"Update your status"<<endl;
	cout<<left<<setw(5)<<"5-"<<left<<setw(20)<<"Exit:  "<<endl;
	
	
}

void already(string message)
{
	cout<<"\n"<<left<<setw(5)<<"1-"<<left<<setw(20)<<"Checkout carpool"<<endl;
			cout<<left<<setw(5)<<"2-"<<left<<setw(20)<<"setting: "<<endl;
			cout<<left<<setw(5)<<"3-"<<left<<setw(20)<<"back: "<<endl;
			cout<<left<<setw(5)<<"4-"<<left<<setw(20)<<"exit: "<<endl;
}

void menu(string message)
{
	int opt;
	string name,cnic,source,destination;
	string no;
	welcome(message);
	
//	intro(message);
	cout<<"\n\n\nEnter the desire key: ";
	cin>>opt;
	
	system("cls");
	if(opt == 1) //register yourself
		{
			ofstream fout;
			
			cout<<"\n"<<left<<setw(5)<<"1-"<<left<<setw(20)<<"Enter your name:"<<endl;
            fflush(stdin);
            getline(cin, name);
			cout<<left<<setw(5)<<"2-"<<left<<setw(20)<<"Cnic: "<<endl;
			fflush(stdin);
            getline(cin, cnic);
			
			cout<<left<<setw(5)<<"3-"<<left<<setw(20)<<"source: "<<endl;
            fflush(stdin);
            getline(cin, source);
            
			cout<<left<<setw(5)<<"3-"<<left<<setw(20)<<"destination: "<<endl;
            fflush(stdin);
            getline(cin, destination);
            
            cout<<left<<setw(5)<<"3-"<<left<<setw(20)<<"cellphone: "<<endl;
            fflush(stdin);
            cin>>no;
            fout.open("gadap3.csv",ios::ate|ios::app);
   
   	 if (fout.is_open())
    {
    	
		
        fout <<"\n"<< name << ", "
             << cnic<< ", "
             << source << ", "
             << destination << ", "
             << no << ", ";

        fout.close();
    }
    else
    {
        cout << "File missing." << endl;
    }
    
    	getChar();
    	menu(message);
	    fflush(stdin);
		}
	else if(opt == 2) //already regsitered
	{	
		int choice;
			
		already(message);	
		cout<<"\n\nEnter the key to continue: ";
		cin>>choice;
		
		if(choice==1)	//checkout carpool (main kam yahi krna h)
		{
				ifstream fin;
				string ch;
//				string line;
//				string name,source,destination;
				fin.open("gadap3.csv",ios::in);
				ch=fin.get();
	
				while(!fin.eof())
			{
				cout<<ch<<"";
				ch=fin.get();
			
			}
					
					fin.close();
				int press;	
				cout<<"do want to continue: \n*press 1 (already registered menu)\n*press 2(main menu)\npress any(exit)";
				cin>>press;
				if(press==1)
				{
					already(message);
				}		
				else if(press==2)
				{
					menu(message);
				}
				else
				{
					system("cls");
			cout<<"\n\n\t\t\tTHANK YOU FOR VISITING (PROJECT BY)\n Hassan Shahbaz\t\t\t";
				}
			}
	
	
		else if(choice==2) //setting
		{
			int ch;
			cout<<"\n"<<left<<setw(5)<<"1-"<<left<<setw(20)<<"Update your status"<<endl;
			
			cout<<"\nEnter the key to continue: ";
			cin>>ch;
			if(ch==1)
			{
				//file update of gadap3.csv
				
			}
			
		}	
		else if(choice==3)
		{
			menu(message);
	    	fflush(stdin);
		}
		
		else if(choice==4)
		{
			cout<<"\n\n\t\t\tTHANK YOU FOR VISITING \nPROJECT BY \nHassan Shahbaz: \t\t\t";
			
		}
			
	}
	
	else if(opt==3)
	{
		
	cout<<"\t\t\t\t\n\n\t\tAbout car pool: \t\n\n";
	cout<<"\t\t\t\tWe develop this project in order to reduce some problem factor\t\n";
	cout<<"\t\t\t\tregarding travelling and traffic in a city.Many peoples from the area goes\t";
	cout<<"\n\t\t\t\tsame destination on (work,business,school,colleges etc),so here we come with\t";
	cout<<"\n\t\t\t\ta solution in which peoples from the area can co-ordinate with each other and\t";
	cout<<"\n\t\t\t\ttravel together.In this way the following factor are produce.\t\n\n";
	
	cout<<"\n\t\t\t\t*Easy travel\t";
	cout<<"\n\t\t\t\t*Low traffic on road\t";
	cout<<"\n\t\t\t\t*Build strong relation(in area)\t";
	cout<<"\n\t\t\t\t*Fuel expense share\t"<<endl;
	
	getChar();
	
	menu(message);
	}
	
	else if(opt==4) //update your status
	{
		cout<<"\n"<<left<<setw(5)<<"1-"<<left<<setw(20)<<"Enter your name:"<<endl;
            fflush(stdin);
            getline(cin, name);
			cout<<left<<setw(5)<<"2-"<<left<<setw(20)<<"Cnic: "<<endl;
			fflush(stdin);
            getline(cin, cnic);
			
			cout<<left<<setw(5)<<"3-"<<left<<setw(20)<<"source: "<<endl;
            fflush(stdin);
            getline(cin, source);
            
			cout<<left<<setw(5)<<"3-"<<left<<setw(20)<<"destination: "<<endl;
            fflush(stdin);
            getline(cin, destination);
            
            cout<<left<<setw(5)<<"3-"<<left<<setw(20)<<"cellphone: "<<endl;
            fflush(stdin);
            getline(cin, no);
            
            ofstream fout;
            fout.open("jdc.csv",ios::out);
   
   	 if (fout.is_open())
    {
    	
		
        fout <<"\n"<< name << ", "
             << cnic<< ", "
             << source << ", "
             << destination << ", "
             << no << ", ";

        fout.close();
 	 }
        
        string line;
        string n;
        string c,s,d,num;
        ifstream fin;
        fin.open("jdc.csv");
        if (fin.is_open())
        {
            getline(fin, line, '\n');
            while (!fin.eof())
            {
                getline(fin, n, ',');
                getline(fin, c, ',');
                getline(fin, s, ',');
                getline(fin, d, ',');
                getline(fin, num, ',');
            }
            	if(name==n)
				{
					cout<<"hello";
				}
				else
				{
					cout<<"world";
				}	
    	}
    else
   		{
	        cout << "File missing." << endl;
	    }
	    		
	}
	else
	{
			cout<<"\n\n\t\t\tTHANK YOU FOR VISITING \nPROJECT BY \nHassan Shahbaz: \t\t\t";
		getchar();		
	}
}


int main()
{
	string msg;
	menu(msg);
}

