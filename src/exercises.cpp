
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1, string s2, string s3) {
  // TODO: YOUR CODE HERE
  if (s1 < s2 && s1 < s3){
    cout << s1;
  } else if(s2 < s1 && s2 < s3) {
    cout << s2;
  } else {
    cout << s3;
  }
}

void exercise_2(double A, double B, double C) {
  // TODO: YOUR CODE HERE
   double D = B * B - 4 * A * C;
   if (D > 0 && A != 0)
   {
       double d_sqrt = sqrt (D);
       double x1 = (-B + d_sqrt) / (2*A);
       double x2 = (-B - d_sqrt) / (2*A); 
       cout<<x1<<" "<<x2<<endl;
   }
   else if (D==0 && A != 0)
   {
   double d_sqrt = sqrt (D);
   double x1 = (-B + d_sqrt) / (2*A); 
   cout<<x1<<endl;
   }
   else if (A==0&& B!=0)
   { 
       cout<< (-1*(C))/B <<endl;
   }
   else if (A!=0 && B==0)
   {
     cout<< sqrt (C/A) <<endl;
   }
   else
   {
       cout<<"";
   } 
}
void exercise_3(int a, int b) {
  // TODO: YOUR CODE HER
 if (b==0){
  cout << "Impossible" << endl;
 }
 else {
   cout << a/b << endl; 
 }
}

void exercise_4(double n, double a, double b, double x, double y) {
  // TODO: YOUR CODE HERE
    double porc;
    double desc;
    if (n > a && n < b){
      porc = x/100 * n;
      desc = n - porc;
    }
    else if (n > b){
      porc = y/100 * n;
      desc = n - porc;
    }
    else{
      desc = n;
    }
    cout << desc << endl;
}

void exercise_5(char character) {
  // TODO: YOUR CODE HERE
  int res = character;
  if (res >= 97 && res < 123){
    cout << "lower-case alphabet" << endl;
  }
  else if (res >= 65 && res < 91){
    cout << "upper-case alphabet" << endl;
  }
  else{
    cout << "not an alphabet" << endl;
  }
}

void exercise_6(int number) {
  // TODO: YOUR CODE HERE

}

void exercise_7(double r) {
  // TODO: YOUR CODE HERE
}

void exercise_8(long int seconds) {
  // TODO: YOUR CODE HERE
}

string exercise_9(string s1, string s2, string s3, string s4, string s5) {
  // TODO: YOUR CODE HERE
  return "";
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
}

string exercise_11(int number) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_12(string color1, int numb1,
                 string color2, int numb2,
                 string color3, int numb3,
                 string color4, int numb4) {
  // TODO: YOUR CODE HERE
}

string exercise_13(int age, int years_of_experience) {
  // TODO: YOUR CODE HERE
  return "";
}

string exercise_14(int number_of_docs) {
  // TODO: YOUR CODE HERE
  if(number_of_docs <= 0){
    return "No se encontraron documentos";
  }
  else if (number_of_docs == 1) {
    return "Se encontro un documento";
  }
  else if (number_of_docs > 1){
    return to_string (number_of_docs) + " documentos encontrados";
  }
  return "";
}

void exercise_15(int a, int b, int c) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int debut, int fin) {
  // TODO: YOUR CODE HERE
}