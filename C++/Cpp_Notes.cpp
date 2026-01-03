#include <iostream>
#include <string>
#include <iomanip> //for using manipulators(format specifiers) 
#include <cmath>
#include <limits>
#include <ctime>


/*KEYWORDS - 32 in C
C++ includes all 32 C keywords and adds many more
(e.g., class, new, delete, bool, true, false, try, catch, 
public, private, protected, namespace, using, template, virtual)
*/

/*GOTO
(Same in C++)
a statement which jumps to a specific label and skips the code in between
<code1>;
goto label;
<code2>;  //code 2 is skipped
label:    // program jumps here
  <code3>;
<code4>;

usually used to break out of nested loops (but generally discouraged)
*/

/*FUNCTIONS- 
(Same in C++)
defined by using a return data type with variable name followed by ()
void <func>(<parameters>)    // void shows no return
{
  <command>;
  return <>;  // for data types ther than void
}

OVERLOADED FUNCTIONS - functions with same name but different arguments
*/


/*FUNCTION PROTOTYPES -
(Same in C++)
the function header can be written before 
the function is defined to make the code more organised.
*/

void Hello();
void Variables();
void FormatSpecifiers();
void IO();
void Strings();
void RandomNum();
void Arrays();
void DynMemAlloc();
void Hanoi(int n, int start, int end);
void pm(int start, int end);


int main(){
    Hanoi(3,1,3);
    return 0;
}


void Hello(){
    std::cout << "Hello World!" << std::endl;   //standard character output
    std::cout << "First Program!" << '\n';      //endl is better because it clears output buffer but \n is better performance wise
}

namespace first{
    int age = 20;
}
namespace second{
    int age = 25;
}
void Variables(){
  //Variables
  //variables can hv same name as long as they are in different scopes
  //or using different namespaces
  //No symbol other than '_' is allowed in var name
  //const - to make any variable constant (same as C)
  int age = 18;
  float temp = 47.8967;       //float - 4 bytes
  double pi = 3.141592583;    //double - 8 bytes
  char letter = 'A';        //char - 1 byte
  std::string message = "Hello"; //C++ string class (replaces char string[]) - variable bytes
  bool status = true;         //bool - 1 byte (built-in type)
  //° - hold alt and type 0176
  

  std::cout << "\nI am " << age << " years old";
  std:: cout << "\nI am " << first::age << " years old";
  
  // To format, we use manipulators from <iomanip>
  std::cout << "\nTemperature is " << std::fixed << std::setprecision(2) << temp << "°C";
  std::cout << '\n' << static_cast<int>(temp); //type casting

  std::cout << "\nValue of pi is " << pi;

  std::cout << "\nThe letter is " << letter;
  
  std::cout << "\nMessage: " << message;
  
  std::cout << "\nValue of Bool is " << status; // Prints 1 for true, 0 for false
  // std::cout << std::boolalpha << status; // This would print "true" or "false"

  /*TYPE CONVERSION
  (Same in C++)
  When we store a value of another data type in a variable of another data type the variable undergoes type conversion
  by either promotion or demotion
  example- 
  int   i ; 
  float   b ; 
  i = 3.5 ; 
  b = 30 ;
  here 3.5 float is demoted to 3 int
  30 int is promoted to 30.0000 float
  for mathematical operations line 260
  */

  /*TYPE CASTING
  (datatype_new) value; // C-style (discouraged in C++)
  static_cast<datatype_new>(value); // C++ style (preferred)
  */
}

void FormatSpecifiers(){
  /*
  Format specifiers = C++ uses "manipulators" from <iomanip>
  
  std::setw(int) - sets width
  std::setfill('char') - sets fill character (default is space)
  std::left / std::right - sets justification
  std::showpos / std::noshowpos - to show/hide + sign
  */
  int num1 = 1;   
  int num2 = 10;
  int num3 = 100;

  // C: printf("\n%3d", num1);
  std::cout << "\n--- Width 3 ---";
  std::cout << '\n' << std::setw(3) << num1;
  std::cout << '\n' << std::setw(3) << num2;
  std::cout << '\n' << std::setw(3) << num3;

  // C: printf("\n%03d", num1);
  std::cout << "\n--- Width 3, Fill 0 ---";
  std::cout << '\n' << std::setw(3) << std::setfill('0') << num1;
  std::cout << '\n' << std::setw(3) << std::setfill('0') << num2;
  std::cout << '\n' << std::setw(3) << std::setfill('0') << num3;
  std::cout << std::setfill(' '); // Reset fill character

  // C: printf("\n%+4d", num1);
  std::cout << "\n--- Width 4, Show Pos ---";
  std::cout << std::showpos; // Turn on + sign
  std::cout << '\n' << std::setw(4) << num1;
  std::cout << '\n' << std::setw(4) << num2;
  std::cout << '\n' << std::setw(4) << num3;
  std::cout << std::noshowpos; // Turn off + sign

  // C: printf("\n%-3d", num1);
  std::cout << "\n--- Width 3, Left Justify ---";
  std::cout << std::left; // Left justification
  std::cout << '\n' << std::setw(3) << num1;
  std::cout << '\n' << std::setw(3) << num2;
  std::cout << '\n' << std::setw(3) << num3;
  std::cout << std::right; // Reset to right justification
}


/*MATHS OPERATORS
same but need <cmath> and std:: prefix
INBUILT-
std::max(a,b)
std::min(a,b)
*/


void IO(){
    int age = 0;
    char grade = '\0';
    std::string name;

    std::cout << "Enter Age: ";
    std::cin >> age;

    std::cout << "Enter Grade: ";
    std::cin >> grade;    //std::cin automatically skips \n in input buffer

    //std::cin.ignore(std::numeric_limits<std::streamsize::max(), '\n');     //to remove \n from input buffer
    std::cout << "Enter name: ";          //getline cant remove \n so 2 methods- 1.ignore and 2. std::ws manipulator
    std::getline(std::cin >> std::ws, name);

    std::cout << "DATA:" << age << ", " << grade << ", " << name << std::endl;
}


//Conditional Statements and ternary op -same as C

/*LOOPS- syntax is same as C
we can use transpose of a collection in for loops
int arr[] = {1,2,3};
for(int x : arr){
    std::cout << x;
}
*/


void Strings(){
    std::string name;

    std::cout << "Enter your Name: ";
    std::getline(std::cin, name);

    if(name.empty()){
        std::cout << "You didnt enter your name";
    }
    else if(name.length() > 12){
        std::cout << "Name cant be more than 12 characters";
    }
    else{
        std::cout << "\nHello " << name;
        std::cout << "\nFirst Letter: " << name.at(0); 
        std:: cout << "\nYour usernames is: " << name.append("@gmail.com");
        name.erase(2,1);
        std::cout << "\nYour email is: " << name.insert(0, "12");
        int position = name.find("1");
    }
}


void RandomNum(){
    srand(time(NULL));

    int num = (rand() % 6) + 1;

    std::cout << num;
}


void Arrays(){
    //same as C and one more iteration is added
    int A[] = {1, 2, 3, 4, 5};
    for(int i : A){
        std::cout << i << '\n';
    }
    //when we pass an array to a function we need to pass size along if needed 
    //because after passing the array becomes a pointer and size cant be calculated
    int B[10];
    std::fill(B, B + 5, 1);       //to fill an array with values
    std::fill(B + 5, B+10, 0);
    for(int i : B){
        std::cout << i << ' ';
    }
}


/*pointers same as C
uses references & which are safer
uses nullptr instead of NULL
*/


void DynMemAlloc(){
    //MALLOC
    int number_mal = 0;
    std::cout << "How many grades: ";
    std::cin >> number_mal;

    // char *grades = malloc(number_mal * sizeof(char));
    char *grades = new char[number_mal]; // Allocate array

    if (grades == nullptr){ // Use nullptr, not NULL
      std::cout << "Memory Allocation Failed!\n";
      return;
    }
    for (int i = 0; i < number_mal; i++){
        std::cout << "Entry #" << i+1 << ": ";
        std::cin >> grades[i]; 
    }

    for (int i = 0; i < number_mal; i++){
      std::cout << grades[i] << ' ';
    }

    // free(grades);
    delete[] grades; // Use delete[] for arrays
    grades = nullptr;


    /*CALLOC -> new[] with initialization */
    int number_cal = 0;
    std::cout << "\nNo of Players: ";
    std::cin >> number_cal;

    // int *scores = calloc(number_cal, sizeof(int));
    int *scores = new int[number_cal](); // The '()' initializes all elements to 0

    if(scores == nullptr){
      std::cout << "Memory Allocation Failed\n";
      return;
    }
    else{
      for(int i = 0; i < number_cal; i++){
        std::cout << "Enter score #" << i + 1 << ": ";
        std::cin >> scores[i];
      }
      for(int i = 0; i < number_cal; i++){
        std::cout << scores[i] << ' ';
      }
    }
    delete[] scores;
    scores = nullptr;
}


void Hanoi(int n, int start, int end){
  if(n==1){
    pm(start,end);
  }
  else{
    int other = 6 - (start + end);
    Hanoi(n-1, start, other);
    pm(start,end);
    Hanoi(n-1, other, end);
  }
}
void pm(int start, int end){
  std::cout << start << " --> " << end << '\n';
}