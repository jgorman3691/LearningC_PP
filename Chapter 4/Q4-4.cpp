#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
   const int minage = {21};
   const int maxage = {35};
   char sex = {'a'};
   int age = {0};
   enum AcademicDegree {none, associate, bachelor, professional, master, doctor};
   AcademicDegree degree = {none};
   bool married = {true};
   bool speaksHindi = {false};
   bool speaksUrdu = {false};
   cout << "Good afternoon, I was wondering, are you male or female?  You can just type in 'm' or 'f'.\n" << endl;
   cin >> sex;
   if(sex == 'm')
   {
      cout << "I'm sorry, but you're not what I'm looking for.  Have a great day!\n" << endl;
      return 0;
   }
   cout << "How old are you?\n" << endl;
   cin >> age;
   if(age < minage)
   {
      cout << "Wow!  You're just a baby!  I hope you do well!\n" << endl;
      return 0;
   }
   if(age > maxage)
   {
      cout << "You're old enough to be my mother!  I'm sorry to have bothered you!\n" << endl;
      return 0;
   }
   cout << "What kind of degree do you have?\n" << endl;
   cin >> degree;
   if(degree != bachelor || degree != master)
   {
      cout << "Sorry, I'm looking for someone with either a Bachelor's or a Master's degree...\n" << endl;
      return 0;
   }
   cout << "Are you married?  True or False.\n" << endl;
   cin >> married;
   if(married == true)
   {
      cout << "I'm sorry, I'm looking for someone single.\n" << endl;
      return 0;
   }
   cout << "Do you speak Hindi? True or False.\n" << endl;
   cin >> speaksHindi;
   if(speaksHindi == false)
   {
      cout << "I'm sorry, I need someone that can speak Hindi.\n" << endl;
      return 0;
   }
   cout << "Do you speak Urdu?  True or False.\n" << endl;
   cin >> speaksUrdu;
   if(speaksUrdu == false)
   {
      cout << "I'm sorry, but I'm looking for someone that also speaks Urdu\n" << endl;
      return 0;
   }
   cout << "Holy Moly, I've found my perfect dream woman!\n" << endl;
   return 0;
}