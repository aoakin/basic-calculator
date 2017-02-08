/*
  Calculator: takes in one or two numbers depending on the function
              and produces the appropriate result based on the
              provided numbers
  
  Author: Ayomikun Akinrinade
*/

#include <iostream> // cout, cin
#include <cmath> // sqrt, pwr, sin, cos, tan, log, log10

using namespace std;

int menu_choice;

// addition function
void add(){
  double first_num;
  double second_num;

  cout << "First number: ";
  cin >> first_num;
  cout << "Second number: ";
  cin >> second_num;

  double final_num = first_num+second_num;
  cout << "\n\n" << first_num << " + " << second_num << " = " << final_num;
}
// subtraction function
void subtract(){
  double first_num;
  double second_num;
  
  cout << "First number: ";
  cin >> first_num;
  cout << "Second number: ";
  cin >> second_num;

  double final_num = first_num-second_num;
  cout << "\n\n" << first_num << " - " << second_num << " = " << final_num;
}
// multiply function
void multiply(){
  double first_num;
  double second_num;
  
  cout << "First number: ";
  cin >> first_num;
  cout << "Second number: ";
  cin >> second_num;

  double final_num = first_num*second_num;
  cout << "\n\n" << first_num << " * " << second_num << " = " << final_num;
}
// division function
void divide(){
  double first_num;
  double second_num;

  cout << "First number: ";
  cin >> first_num;
  cout << "Second number: ";
  cin >> second_num;

  double final_num = first_num/second_num;
  cout << "\n\n" << first_num << " / " << second_num << " = " << final_num;
}
// square root function
void square_root(){
  double first_num;

  cout << "Number: ";
  cin >> first_num;

  double final_num = sqrt(first_num);
  cout << "\n\n" << "sqrt("<< first_num << ")" << " = " << final_num;
}
// power function
void power(){
  double base;
  double exponent;

  cout << "Base: ";
  cin >> base;
  cout << "Exponent: ";
  cin >> exponent;
  double final_num = pow(base , exponent);
  cout << "\n\n" << base << "^" << exponent << " = " << final_num;
}
// sine function
void sin_f(){
  double angle;
  
  cout << "Angle in radians: ";
  cin >> angle;
  
  double result = sin(angle);
  cout << "\n\nsin(" << angle << ") = " << result;
}
// inverse sine function
void inv_sin(){
 double angle;
  
  cout << "Angle in radians: ";
  cin >> angle;
  
  double result = 1/(sin(angle));
  cout << "\n\ninverse sin(" << angle << ") = " << result; 
}
// cosine function
void cos_f(){
  double angle;
  
  cout << "Angle in radians: ";
  cin >> angle;
  
  double result = cos(angle);
  cout << "\n\ncos(" << angle << ") = " << result;
}
// inverse cosine function
void inv_cos(){
 double angle;
  
  cout << "Angle in radians: ";
  cin >> angle;
  
  double result = 1/(cos(angle));
  cout << "inverse cos(" << angle << ") = " << result; 
}
// tangent function
void tan_f(){
  double angle;
  cout << "Angle in radians: ";
  cin >> angle;
  
  double result = tan(angle);
  cout << "\ntan(" << angle << ") = " << result;
}
// inverse tangent function
void inv_tan(){
  double angle;
  cout << "Angle in radians: ";
  cin >> angle;
  
  double result = 1/(tan(angle));
  cout << "\n\n inverse tan(" << angle << ") = " << result;
}
// natural logarithm function (ln)
void nat_log(){
  double x_value;
  
  cout << "X (x must be greater zero) = ";
  cin >> x_value;
  if (x_value >= 0) {
    double result = log(x_value);
    cout << "ln(" << x_value << ") = " << result;
  }
  else {
    "\nTry again...\n";
    nat_log();
  }
}
// common logarithm function (log10)
void com_log(){
  double x_value;
  
  cout << "X (x must be greater than zero) = ";
  cin >> x_value;
  if (x_value >= 0) {
    double result = log10(x_value);
    cout << "log(" << x_value << ") = " << result;
  }
  else {
    "\nTry again...\n";
    com_log();
  }
}
void menu(){
  cout << "Calculator\n";
  cout << "==========\n";
  cout << "1.  Add\n2.  Subtract\n3.  Multiply\n4.  Divide\n5.  Power\n6.  Square Root\n7.  Sine\n8.  Inv. Sine\n9.  Cosine\n10. Inv. Cosine\n11. Tangent\n12. Inv. Tangent\n13. Common Logarithm\n14. Natural logarithm\n15. Exit\n";
  cout << "Choice: ";
  cin >> menu_choice;
  }
int main(){
  
  menu();  
  switch(menu_choice){
    case 1: {
      add();
      break;
    }
    case 2: {
      subtract();
      break;
    }
    case 3: {
      multiply();
      break;
    }
    case 4: {
      divide();
      break;
    }
    case 5: {
      power();
      break;
    }
    case 6: {
      square_root();
      break;
    }
    case 7: {
      sin_f();
      break;
    }
    case 8: {
      inv_sin();
      break;
    }
    case 9: {
      cos_f();
      break;
    }
    case 10: {
      inv_cos();
      break;
    }
    case 11: {
      tan_f();
      break;
    }
    case 12: {
      inv_tan();
      break;
    }
    case 13: {
      com_log();
      break;
    }
    case 14: {
      nat_log();
      break;
    }
    case 15: {
      break;
    }
    default: {
      cout << "You have to choose one of the options, try again. \n";
      menu();
    }
  }
  return 0;
}
