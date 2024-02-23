#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
#include "MMsystem.h"


using namespace std;
int Guess;
int Total;
class Question
{
private:
string Question_Text; 
string Answer_1; 
string Answer_2; 
string Answer_3; 
string Answer_4;

int Correct_Answer;
int Question_Score;

public:
void setValues (string, string, string, string, string, int, int);
void askQuestion();

};
void Question::setValues (string q,string a1,string a2,string a3,string a4,int ca,int pa)
{
    Question_Text = q;
    Answer_1 = a1;
    Answer_2 = a2;
    Answer_3 = a3;
    Answer_4 = a4;
    Correct_Answer = ca;
    Question_Score = pa;
}

void Question::askQuestion()
{   cout<<"========================================================\n";
    cout << Question_Text<<endl;
    cout << "1. " << Answer_1<<endl;
    cout << "2. " << Answer_2<<endl;
    cout << "3. " << Answer_3<<endl;
    cout << "4. " << Answer_4<<endl;
    cout<<"========================================================\n";
    cout<<endl;

    cout << "Enter Your Answer Here: ";
    cin >> Guess;
    cout<<endl;

    if (Guess == Correct_Answer)
    {
    	PlaySound("coin.wav", NULL, SND_ASYNC);
        cout << "\n\t\t\tGreat! You are correct.\n\n";
        system("Pause");
        Total = Total + Question_Score;
        system("CLS");

    }
    else
    {
    	PlaySound("pipe.wav", NULL, SND_ASYNC);
        cout << "\n\t\t\tOh No! You are Wrong.\n\n";
        cout << "\t\t\tThe correct answer is " << Correct_Answer << ".\n\n";
        system("Pause");
        system("CLS");

    }

}


int main(){
	string fschool,mschool, lschool, ffather, fmother, lfather, lmother;
        string name,fname, lname; 
    int age, response;
    int resp;

g:{
cout<<"\t\t ===========================================================\n";
cout<<"\t\t *****                                                 *****\n";
cout<<"\t\t *****                   [ C++ Project ]               *****\n";
cout<<"\t\t *****               Created and Designed By           *****\n";
cout<<"\t\t *****                ______________________           *****\n";
cout<<"\t\t *****              *| Sandaldeep Choudhary |*         *****\n";
cout<<"\t\t *****              *|    Roll No. 22205    |*         *****\n";
cout<<"\t\t *****              *|  Class MCA: 1st SEM  |*         *****\n";
cout<<"\t\t *****              ^^^^^^^^^^^^^^^^^^^^^^^^^^         *****\n";
cout<<"\t\t *****                     GroupMates:                 *****\n";
cout<<"\t\t *****                    -^^^^^^^^^^^-                *****\n";
cout<<"\t\t *****                 2) Anand (22228)                *****\n";
cout<<"\t\t *****                 3) Akanksha (22232)             *****\n";
cout<<"\t\t *****                                                 *****\n";
cout<<"\t\t *****      Submitted to: <Prof. Sachin Awasthi>       *****\n";
cout<<"\t\t ===========================================================\n";
cout<<"\n";
cout<<"\n";
cout<<"\n";


 
    
    cout<<"                                        Enter 1 to Sign-UP!  \n";
    cout<<"                                        Enter 2 to Sign-IN!  \n";

    cin>>resp;  PlaySound("gtabutton.wav", NULL, SND_ASYNC);
}


    switch (resp){
	case 1: {
		string username, password, uid, pass;
	cout<<"Create Your UserName: ";
    cin>>username;
    cout<<"Create Your Password: ";
    cin>>password;

    ofstream f1("record.txt", ios :: app);
    f1<<username<<" "<<password<<endl;
    cout<<"\t\t\tRegistration Successfull";
    f1.close();
    system("cls");
    system("pause");
   goto g;
    break;
}

    case 2:
    {
    	string username, password, uid, pass;
    cout<<"Enter Your UserName: ";
    cin>>username; PlaySound("gtabutton.wav", NULL, SND_ASYNC);
    cout<<"Enter Your Password: ";
    cin>>password; PlaySound("gtabutton.wav", NULL, SND_ASYNC);
    ifstream input("record.txt");
    while (input>>uid>>pass){
        if(uid==username && pass==password){
        	system("CLS");
            cout<<"\t\t\t------You Have Been Successfully Logged-IN ------\n\n";
            system("pause");
            system("cls");
            goto m;
            
        }
        else {cout<<"!!! Invalid Username and Password !!!\n\n";
        PlaySound("aahshit.wav", NULL, SND_ASYNC);
        system("pause");
        system("cls");
        goto g;
		}

    }
    input.close();
}
system("cls");
    break;


}




m:{
	
	
    cout<<"\n\n                                   [Main Menu]                      ";
    cout<<"\n                         ).___________________________.(             \n";
    cout<<"                          |1) Play a Quiz Game        |                \n";
    cout<<"                          |2) Report Card Generator   |              \n";
    cout<<"                          |3) Leap Year Calculator    |                \n";
    cout<<"                          |4) Numeric Table Generator |                \n";
    cout<<"                          |5) Credits                 |                \n";
    cout<<"                          |6) Exit                    |                \n";
    cout<<"                         )*___________________________*(                \n\n";
    
    
    n:{
    	PlaySound("musicbg.wav", NULL, SND_ASYNC|SND_LOOP);

    cout<<"                              Enter Your Response: ";
    cin>>response; 
    cout<<endl;
    }
    }
    
    switch(response){
        case 1: PlaySound("decide.wav", NULL, SND_ASYNC); 
        cout<<"========================================================"<<endl;
        system("CLS");
		cout<<"Enter Your Name: "; cin>>name;cout<<endl; cout<<endl;
                cout<<"How Old Are You "<<name<<" ?"<<endl;	
                cin>>age; cout<<endl; cout<<endl;
if (age>=18){
    cout<<"Great! You are eligible to play this game!\n";
    system("Pause");
    system("CLS");
    
    
    cout<<"========================================================"<<endl;
    cout<<endl;
    }
    else if(age<18)
    {
        cout<<"You Are Not Eligible to Play this game!";
        system("CLS");
        goto m;
    }
    break;

    case 3: PlaySound("gtabutton.wav", NULL, SND_ASYNC); 
    int year;
    cout<<"========================================================"<<endl;
cout << "Enter a Year in 'YYYY' Format: ";
cin >> year;

if (year % 400 == 0 || year % 4==0) {
  cout << year << " is a Leap Year. \n";
}
else if ( year % 100 == 0 || year % 4 == 0 ) {
  cout << year << " is NOT a Leap Year. \n";
}

else {
  cout << year << " is NOT a Leap Year\n\n\n";
}

system("pause");
system("CLS");
    goto m;
    case 2: PlaySound("gtabutton.wav", NULL, SND_ASYNC);
    int sroll; float sub1, sub2, sub3, sub4, sub5, avg, sum;
	 
	 system("CLS");
	 cout<<"========================================================"<<endl;
    cout<<"Enter the First Name of the Student: "; cin>>fname;
    cout<<endl;
    cout<<"Enter the Last Name of the Student: "; cin>>lname;
    cout<<endl;
    cout<<"Enter the Roll No. of "<<fname<<": "; cin>>sroll;
    cout<<endl;
    cout<<"Enter the First Name of School: "; cin>>fschool;
    cout<<endl;
    cout<<"Enter the Middle Name of School: "; cin>>mschool;
    cout<<endl;
    cout<<"Enter the Last Name of School: "; cin>>lschool;
    cout<<endl;
    cout<<"Enter the First Name of Father: "; cin>>ffather;
    cout<<endl;
    cout<<"Enter the Last Name of Father: "; cin>>lfather;
    cout<<endl;
    cout<<"Enter the First Name of Mother: "; cin>>fmother;
    cout<<endl;
    cout<<"Enter the Last Name of Mother: "; cin>>lmother;
    cout<<endl;
cout<<"Enter the marks obtained by "<<fname<<" in ENGLISH: ";
cin>>sub1;
cout<<endl;
cout<<"Enter the marks obtained by "<<fname<<" in PHYSICS: ";
cin>>sub2;
cout<<endl;
cout<<"Enter the marks obtained by "<<fname<<" in CHEMISTRY: ";
cin>>sub3;
cout<<endl;
cout<<"Enter the marks obtained by "<<fname<<" in MATHS: ";
cin>>sub4;
cout<<endl;
cout<<"Enter the marks obtained by "<<fname<<" in PHY. EDUCATION/ITs: ";
cin>>sub5;
cout<<endl;
sum=sub1+sub2+sub3+sub4+sub5;
avg=((sum)/500)*100;
system("cls");
cout<<" \nTotal Marks Obtained by "<<fname<<" are: "<<sum<<"/500"<<endl<<endl;
cout<<"Total Percentage: "<<avg<<" %"<<endl<<endl;
  
if(avg>50)
{
  cout<<"\t\t ======================================================\n";
cout<<"\t\t *****                                            *****\n";
cout<<"\t\t *****                !!!CONGRATULATIONS!!        *****\n";
cout<<"\t\t *****                   [ YOU PASSED]            *****\n";
cout<<"\t\t ======================================================\n\n\n";
cout<<"\t\t****************************************************************************************\n";
cout<<"\t\t**                                                                                    **\n";
cout<<"\t\t**                                         "<<fschool<<    "                                     \n";
cout<<"\t\t**                                         "<<mschool<<    "                                     \n";
cout<<"\t\t**                                         "<<lschool<<    "                                     \n";
cout<<"\t\t**                                                                                               \n";
cout<<"\t\t**       Student's Name: "<<fname<<" "<<lname<<"                                                  \n";
cout<<"\t\t**       Father's Name: "<<ffather<<" "<<lfather<<"                                   \n";
cout<<"\t\t**       Mother's Name: "<<fmother<<" "<<lmother<<"                                   \n";
cout<<"\t\t**       Class : 10+2                                                                 \n";
cout<<"\t\t**                                                                                    **\n";
cout<<"\t\t**                                                                                    **\n";
cout<<"\t\t**___________________________________________________________________________________\n";
cout<<"\t\t**|       SUBJECT	               Marks Obtained                Maximum Marks  | \n";
cout<<"\t\t**|       English                            "<<sub1<<"                        100          | \n";
cout<<"\t\t**|       Physics                            "<<sub2<<"                        100          | \n";
cout<<"\t\t**|       Chemistry                          "<<sub3<<"                        100          | \n";
cout<<"\t\t**|       Maths                              "<<sub4<<"                        100          | \n";
cout<<"\t\t**|       PH. Edu/IT                         "<<sub5<<"                        100          | \n";
cout<<"\t\t**|                                                                                   \n";
cout<<"\t\t**|               Total Marks Obtained: "<<sum<<"/500                                \n";
cout<<"\t\t**|               Total Percentage: "<<avg<<" %                                      \n";
cout<<"\t\t**|_________________________________________________________________________________|\n";
cout<<"\t\t**                                                                                    **\n";
cout<<"\t\t**                                                                                    **\n";
cout<<"\t\t**                                                                                    **\n";
cout<<"\t\t****************************************************************************************\n";
}

  else {
    cout<<"\n\n\t\tYOU FAILED!";
   cout<<"\n\n\t\t!!STUDY HARD!!\n\n\n";
   }      

    
system("Pause");
system("CLS");
goto m;
break;

    case 4: PlaySound("gtabutton.wav", NULL, SND_ASYNC);  
	int input,i;
    cout<<"Enter a Number:  ";
    cin>>input;
    cout<<endl;
    cout<<"Table of "<<input<<" :\n";
    for (i=1; i<=20; i++)
    {cout<<"              "<<input<<" * "<<i<<" = "<<input*i<<endl;}
    system("Pause");
    system("CLS");
    goto m;
    break;
    case 5: 
	system("CLS");
	 PlaySound("gtabutton.wav", NULL, SND_ASYNC);
    PlaySound("credits.wav", NULL, SND_ASYNC);
    cout<<"\t\t ======================================================\n";
cout<<"\t\t *****                 [ C++ Project ]            *****\n";
cout<<"\t\t *****               Created and Designed By      *****\n";
cout<<"\t\t *****                                            *****\n";
cout<<"\t\t *****              *| Sandaldeep Choudhary |*    *****\n";
cout<<"\t\t *****              *|    Roll No. 22205    |*    *****\n";
cout<<"\t\t *****              *|  Class MCA: 1st SEM  |*    *****\n";
cout<<"\t\t *****                                            *****\n";
cout<<"\t\t *****                     GroupMates:            *****\n";
cout<<"\t\t *****                 2) Anand (22228)           *****\n";
cout<<"\t\t *****                 3) Akanksha (22232)        *****\n";
cout<<"\t\t *****                                            *****\n";
cout<<"\t\t *****      Submitted to: <Prof. Sachin Awasthi>  *****\n";
cout<<"\t\t ======================================================\n";
cout<<"\n";
cout<<"\n";
cout<<"\n";
system("Pause");
system("CLS");
goto m;
break;



    case 6: 
	PlaySound("gtabutton.wav", NULL, SND_ASYNC);
	exit(0);
    break;
    default: cout<<"Invalid Input.\n";
    goto n;
    
    break;

    }

    Question q1;
    Question q2;
    Question q3;
    Question q4;
    Question q5;
    Question q6;
    Question q7;
    Question q8;
    Question q9;
    Question q10;

    q1.setValues("What is the only function that all C++ programs must contain?",
     "system()",
      "start()",
      "main()",
      "program()", 3, 10);
    q2.setValues("Which is the most common header file used in C++?",
     "<conio.h>",
      "<stdio.h>",
      "<iostream.h>",
      "<windows.h>", 3, 10);
    q3.setValues("Who was the first programmer?",
     "Charles Babbage",
      "Ada Lovelace",
      "John Cena",
      "Doubeck", 2, 10);
      q4.setValues("What is the full form of Computer?",
      "Common Machine Used For Programming and Research",
      "Common Machine Technically Used of Research",
      "Common Operating Machine Used for Teaching and Research",
      "Common Operating Machine Purposely Used for Technological and Educational Research", 4,10);
      q5.setValues("What is the data type for words? Hint: 'Dharamshala' ",
      "Char",
      "String",
      "word",
      "Getch",2,10);
      q6.setValues("Why is a class useful in programming?",
      "are removed from memory when not in use.",
      "permit data to be hidden from other classes.",
      "bring together all aspects of an entity in one place.",
      "can closely model objects in the real world.",3,10);
      q7.setValues("Which one of the following is a keyword?","Size","Key","Jump","Switch",4,10);
      q8.setValues("______is the smallest individual unit in a program.","Variable","Control","Character","Token",4,10);
      q9.setValues("What is a constant that contains a single character enclosed within single quotes?",
      "Character","Numeric","Fixed","Floating point",1,10);
      q10.setValues("The modulus operator uses ___ character.","+","*","/","%",4,10);

      q1.askQuestion();
      q2.askQuestion();
      q3.askQuestion();
      q4.askQuestion();
      q5.askQuestion();
      q6.askQuestion();
      q7.askQuestion();
      q8.askQuestion();
      q9.askQuestion();
      q10.askQuestion();

      cout<<"Your Total Score is "<<Total<<" out of 100.\n\n";

      if (Total>=70){
      	
cout<<"\t\t ======================================================\n";
cout<<"\t\t *****          Winner! Winner! Chicken Dinner!   *****\n";
cout<<"\t\t *****                !!!CONGRATULATIONS!!        *****\n";
cout<<"\t\t *****                   [ YOU WON ]              *****\n";
cout<<"\t\t ======================================================\n\n\n";
PlaySound("stage_clear.wav", NULL, SND_ASYNC);
system("Pause");
system("CLS");
      }
      else if (Total<70){ 
      	cout<<"\t\t ======================================================\n";
cout<<"\t\t *****                                            *****\n";
cout<<"\t\t *****                  !!!GAME OVER!!!           *****\n";
cout<<"\t\t *****               Better Luck Next Time!       *****\n";
cout<<"\t\t ======================================================\n\n\n";
        PlaySound("gameover.wav", NULL, SND_ASYNC);
      
        system("Pause");
        system("CLS");
      }
      
      goto m;
      return 0;
}





