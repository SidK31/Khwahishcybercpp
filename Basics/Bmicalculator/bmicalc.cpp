#include <iostream>
#include <string>
#include <iomanip> //for set precision

using namespace std;

//Function to calculate BMI using  metric units
float calculatemetricbmi(float weightkg, float heightcm){
  float heightm = heightcm /100; //
    return weightkg / (heightm*heightm);
}
float calculateusbmi(float weightlb , float heightin){
    return (703 * weightlb) / (heightin * heightin);
}

//Function to display BMI calculator
string getBMIcategory(float bmi){
    if (bmi < 18.5) {
        return "Underweight";
    } else if (bmi >= 18.5 && bmi < 24.9){
        return "Normal Weight";
    } else if (bmi >= 25 && bmi <29.9){
        return "Overweight";
    } else {
        return "Obesity";
    }
}

string getGender(int genderoption){
}
int main(){
    int unitChoice;
    float weight,height,bmi ;

    cout<<"----------*Welcome to BMI Calculator*-------------"<<endl;
    cout <<"select the unit systen for BMI calculator:" <<endl;
    cout <<" 1. Metric (kg , cm)" << endl;
    cout <<" 2. US (lb , ln)" << endl;
    cout << "Enter your choice (1 or 2):";
    cin >> unitChoice;
    while (unitChoice != 1 && unitChoice != 2){
        cout<< "Invalid Choice. Please enter 1 for metric or 2 for US:";
        cin >> unitChoice;
    }
    cout << "enter your weight: ";
    cin  >>weight;
    cout << "enter your height: ";
    cin >> height;
    if (unitChoice == 1){
        bmi = calculatemetricbmi(weight, height);
        cout <<"your BMI is: :" << fixed << setprecision(2) << bmi << endl;
        cout <<"you are classied as:" << getBMIcategory(bmi) << endl;
    }
    else{   
        bmi = calculateusbmi(weight, height);
        cout <<"your BMI is: :" << fixed << setprecision(2) << bmi << endl;
        cout <<"you are classied as:" << getBMIcategory(bmi) << endl;

    }
     cout << "Do you want to perform another BMI operation? (y/n): ";
                char choice;
                cin >> choice;
                if (choice == 'y' && choice == 'Y') {
                    cout << "reseting the BMI Calculator." << endl;
                    return main();
                 }else{
                    cout << "Continuing with the BMI calculator." << endl;
                    return 0;
                 }
        cout<< "thanks for calculation" << endl;         
    return 0;
    }
    
