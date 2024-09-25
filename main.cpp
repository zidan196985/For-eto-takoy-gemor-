#include <iostream>
using namespace std;

int main() {


////Problem1
//
//
//
//for (int i=1; i<10; i++) {
//    cout<<i<<" ";
//}
//Problem2
//int a=0;
//for (int i=1; i<10; i++) {
//    cout << i << " ";
//    a=a+i;
//
//}
//    cout<<endl<<a;
//Problem 3
//for(int i=1; i<=100;i++ ) {
//    if (i%5!=0)
//        cout<<i<<" ";}
//Problem4
//int n; cin>>n;
//for(int i=1; i<=n; i++) {
//    if (i%10==0)
//        cout<<i<<" ";
//}
//Problem5
//    int count = 0;
//    for (char i = 65; i <= 90; i++) {
//        cout << i << " ";
//    count++;
//
//    if (count % 5==0) {
//        cout << endl; } }
//PRoblem6
//    int credits;
//    float grade, gpaSum, classesSum, gpa;
//
//
//    cout << "Enter the number of classes: ";
//    int NumClasses;
//    cin >> NumClasses;
//
//    for (int i = 0; i < NumClasses; i++) {
//        cout << "Enter the credits and grade";
//        cin >> credits >> grade;
//        gpaSum += credits * grade;
//        classesSum += credits;
//    }
//    gpa = gpaSum / classesSum;
//    cout<<gpa;


//Oriblem 7
int count=0;
int a; cin>>a;
for(int i=2; i<a; i++ )
    if (a%i==0) {
        cout << "not prime";
    break;}
    else { cout<<"Prime";
        break;
    }



        return 0;

}