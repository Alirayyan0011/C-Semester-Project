#include<iostream>
#include<string>

using namespace std;

// Declaring Global Variable

	int totalStudent;
	int ICTMarks[50], PhysicsMarks[50], EngMarks[50], PFMarks[50], PakMarks[50]; 
	string studentFirstName[50];
	string studentLastName[50];
	int studentMarks[50];
	int percentage[50];
	int totalNumbers[50];
	string registrationNumber[50];

void addStudentsData(){
    cout << "Enter Number Of Students: ";
    cin >> totalStudent;
    
    
    for (int i = 0; i < totalStudent; i++)

    {
        cout << "-------------------------------------------" << endl;
        cout << "Enter Marks of " << i+1 << " Student"<<endl; 
        cout << "-------------------------------------------"<<endl;
        cout << "Enter Student First Name: ";
        cin >> studentFirstName[i];
        cout << "Enter Student Last Name: ";
        cin >> studentLastName[i];

        cout << "Enter Registration Number: ";
        cin >> registrationNumber[i];
        
        cout << "Enter Marks Of ICT: ";
        cin >> ICTMarks[i];
        cout << "Enter Marks Of Physics: ";
        cin >> PhysicsMarks[i];
        cout << "Enter Marks Of English: ";
        cin >> EngMarks[i];
        cout << "Enter Marks Of PF: ";
        cin >> PFMarks[50];
        cout << "Enter Marks Of Pak Studies: ";
        cin >> PakMarks[i];
        

        totalNumbers[i] = ICTMarks[i] + PhysicsMarks[i] + EngMarks[i] + PFMarks[50] + PakMarks[i];

        percentage[i] = 100*totalNumbers[i]/500;
        
    }
}

void printDetailsOfStudent() {
    for (int i = 0; i < totalStudent; i++)

        {
            cout << "-----------------------------------------------------------------------"<<endl;
            cout << "\t\t\tREPORT CARD " << i+1 << " Student are:\n\n "<< endl; 
            cout << "-------------------------------------------------------------------------"<<endl;
            cout << "\t\t Student Name:\t " << studentFirstName[i] << " " <<studentLastName[i] <<endl << endl;
            cout<<"\t\t Registration number:\t"<< registrationNumber[i] <<endl;
             cout << "-----------------------------------------------------------------------"<<endl;
            cout << "\n\n\t\tMarks Of ICT:\t\t " << ICTMarks[i] << endl << endl;
            cout << "\t\tMarks Of Physics:\t " << PhysicsMarks[i] << endl << endl;
            cout << "\t\tMarks Of English:\t " << EngMarks[i] << endl << endl;
            cout << "\t\tMarks Of PF:\t\t " <<PFMarks[50] << endl << endl;
            cout << "\t\tMarks Of Pak Studies:\t " << PakMarks[i] << endl << endl;
            cout << "-----------------------------------------------------------------------"<<endl;
            cout << "\n\n\t\tTotal Marks: 500"<<endl << endl;
            cout << "\t\tTotal Number Of " << i+1 << " Student are: " << totalNumbers[i]<<endl << endl;
            cout << "\t\tPercentage Of " << i+1 << " Student Is: "<<percentage[i]<<"%"<<endl << endl;
            cout << "\t\tGrade Status:"<<endl << endl;
           
            if(percentage[i]>=90)
			{
				
				cout<<"\t\tGRADE A+"<<endl;
			}
			else if(percentage[i]>=80&&percentage[i]<=90)
			{
				cout<<"\t\tGRADE A"<<endl;
			}
			else if(percentage[i]>=70&&percentage[i]<=80)
			{
				cout<<"\t\tGRADE B"<<endl;
			}
			else if(percentage[i]>=60&&percentage[i]<=70)
			{
				cout<<"\t\tGRADE C"<<endl;
			}
			else if(percentage[i]>=50&&percentage[i]<=60)
			{
				cout<<"\t\tGRADE D"<<endl;
			}
			else if(percentage[i]<50)
			{
				cout<<"\t\tYOU ARE FAILED"<<endl; 
		   }
		   cout<< "-----------------------------------------------------------------------"<<endl;	
	
        }
}

int main()
{   
    

    addStudentsData();
    
    bool start = true;
    while (start)
    {
    
    int option;

    cout<<"\nClick 1 For Details" << endl;
	cout<<"\nEnter 2 To Find Data Of Specific Student" << endl;
	cout<<"\nEnter 3 to exit"<<endl;
    cin >> option;

    switch (option)
    {
    case 1:
        printDetailsOfStudent();
        break;

    case 2: {
        cout << "Enter 1 For Registration Number\nEnter 2 For Name"<<endl;
        cin >> option;
        if (option == 1)
        {
        string answer;
        cout << "Enter Registration Number: ";
        cin >> answer;
        int i = 0;
        while (i < totalStudent)
        {
            if (registrationNumber[i] == answer)
            {
                break;
            }
            i++;
        }
        if (i < totalStudent){
            
            printDetailsOfStudent();
            break;
        }
        else{
            cout << "Record Not Found" << endl;
        }
        break;
        }
        else if (option == 2)
        {     
        string answer;
        cout << "Enter Student First Name: ";
        cin >> answer;
        int i = 0;
        while (i < totalStudent)
        {
            if (studentFirstName[i] == answer)
            {
                break;
            }
            i++;
        }
        if (i < totalStudent){
            printDetailsOfStudent();
            break;
        }
        else{
            cout << "Record Not Found" << endl;
        }
        break;
        } 
        
    }
    case 3: {
        start = false;
        break;
    }
      }
      
    }
    return 0;
}


