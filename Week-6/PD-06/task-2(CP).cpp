#include <iostream>
using namespace std;

float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology);
string calculateGrade(float);

main()
{
    string name;
    float marksEnglish, marksMaths, marksChemistry, marksSocialScience, marksBiology;
    cout << "Enter student name : ";
    cin >> name;
    cout << "Enter the marks of English : ";
    cin >> marksEnglish;    
    cout << "Enter the marks of Math : ";
    cin >> marksMaths;
    cout << "Enter the marks of Chemistry : ";
    cin >> marksChemistry;
    cout << "Enter the marks of Social Science : ";
    cin >> marksSocialScience;
    cout << "Enter the marks of Biology : ";
    cin >> marksBiology;        
    cout << "Student Name : " << name << endl;
    float avr = calculateAverage(marksEnglish, marksMaths, marksChemistry, marksSocialScience, marksBiology);
    cout << "Percentage : " << avr << "%" << endl; 
    string grade = calculateGrade(avr);
    cout << "Grade : " << grade;
}

float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology)
{
    float average = (marksEnglish + marksBiology + marksChemistry + marksSocialScience + marksMaths) / 5;
    
}   
string calculateGrade(float avr)
{
    string finalGrade;
    if(avr >= 90 && avr <= 100)
    {
        finalGrade = "A+";
    }
    else if(avr >= 80 && avr < 90)
    {
        finalGrade = "A";
    }
    else if(avr >= 70 && avr < 80)
    {
        finalGrade = "B+";
    }
    else if(avr >= 60 && avr < 70)
    {
        finalGrade = "B";
    }
    else if(avr >= 50 && avr < 60)
    {
        finalGrade = "C";
    }
    else if(avr >= 40 && avr < 50)
    {
        finalGrade = "D";
    }
    else{
        finalGrade = "F";
    }
    return finalGrade;
} 
