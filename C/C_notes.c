#include <stdio.h>         //input output library
#include <stdbool.h>       //for booleans
#include <string.h>        //extra functions for strings
#include <math.h>          //for math functions
#include <windows.h>       //for adding delay
#include <stdlib.h>        //for dyn mem alloc
//#include is preprocessor directive


/*
multiline comment
*/
/*KEYWORDS - 32 in C
auto       double       int       struct
break      else         long      switch
case       enum         register  typedef
char       extern       return    union
continue   for          signed    void
do         if           static    while
default    goto         sizeof    volatile
const      float        short     unsigned
*/


/*GOTO
a statement which jumps to a specific label and skips the code in between
<code1>;
goto label;
<code2>;  //code 2 is skipped
label:    // program jumps here
  <code3>;
<code4>;

usually used to break out of nested loops
*/


/*FUNCTIONS- 
defined by using a return data type with variable name followed by ()
void <func>(<parameters>)     void shows no return
{
  <command>;
  return <>;   for data types ther than void
}
*/


/*FUNCTION PROTOTYPES -
the function header can be written before 
the function is defined to make the code more organised.
NOT NEEDED IN HERE BUT STILL WRITTEN
*/

void Hello();
void Variables();
void FormatSpecifiers();
void IO();
void Loops();
void Arrays();
void MathsOperators();
void Conditions();
void ternaryOP();
void Enum();
void Struct();
void Pointers();
void Files();
void DynMemAlloc();
void Hanoi(int n, int start, int end);
void pm(int start, int end);

/*typedef - 
a keyword which gives nicknames to existing datatypes
typedef existing_datatype nickname;
*/



int main()
{
  Hanoi(3,1,3);
  return 0;              //an int function is supposed to return an integer '0' shows it ran successfully and gives an exit code   
}
  


void Hello(){
    //use of printf (double quotes always to print string)
    printf("Hello World"); //does not hv a new line character by default
}
    
    
void Variables(){
  //Variables
  //variables can hv same name as long as they are in different scopes
  //No symbol other than '_' is allowed in var name
  //const - to make any variable constant
  int age = 18;             //int - %d - 4 bytes
  float temp = 47.8967;       //float - %.2f (.2 shows 2 decimal place) - 4 bytes
  double pi = 3.141592583;     //double - %.3lf or long float and f can be used too - 8 bytes
  char letter = 'A';        //char - %c (single quotes) - 1 byte
  char string[] = "Hello";  //for strings we need char and '[]' and is called by %s (double quotes) - variable bytes
  bool status = true;       //bool - value can be saved as 'true/false' or '1/0' %d gives 1 or 0 - 1 byte
  //° - hold alt and type 0176
  
  printf("\nI am %d years old", age);  //'%' to show pos of var and 'd' or decimal is format specifier
  
  printf("\nTemperature is %.2f°C", temp);
  
  printf("\nValue of pi is %lf", pi);
  printf("  Value of pi is %f", pi);
  
  printf("\nThe letter is %c", letter);
  
  printf("\nMessage: %s", string);
  
  printf("\nValue of Bool is %d", status);

  /*TYPE CONVERSION
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
  (datatype_new) value;
  */
}


void FormatSpecifiers(){
  /*
  Format specifiers = after the % sign in this order
  flags(+,-,0)- using a - in front will leave spaces after the items
  - using + in front will add a + in front of positive items
  - using 0 in front adds 0 instead of spaces
  
  width(int) - space needed to print the items
  - by default prints spaces before the items
  
  precision(.int) - any number follwed by a decimal point denotes the number of decimal places
  */
  int num1 = 1;   
  int num2 = 10;
  int num3 = 100;
  printf("\n%3d", num1);
  printf("\n%3d", num2);
  printf("\n%3d", num3);
  printf("\n%03d", num1);
  printf("\n%03d", num2);
  printf("\n%03d", num3);
  printf("\n%+4d", num1);
  printf("\n%+4d", num2);
  printf("\n%+4d", num3);
  printf("\n%-3d", num1);
  printf("\n%-3d", num2);
  printf("\n%-3d", num3);
}


void IO(){
  //User Input
  int user_age = 0;     //its better to specify some value for user input too to prevent random values 
  char user_grade = '\0';  //'\0' is null eliminator so that empty char does give value as null
  char user_name[15] = "";
  printf("\nEnter your age: ");
  scanf("%d", &user_age);
  
  printf("\nEnter your grade: ");
  scanf(" %c", &user_grade);    // the space in front of % is to tell C that we can skip the new line char in the input buffer or fflush
  
  //printf("\nEnter your name: ");
  //scanf("%s", &user_name);
  //scanf cant read after encountering a space or enter
  //to encounter enter we can put a fflush(stdio.h)
  
  getchar();                         //does the same thing as adding a space for scanf
  printf("\nEnter your full name: ");
  fgets(user_name, sizeof(user_name), stdin);
  
  printf("\nDATA: %d, %c, %s\n", user_age, user_grade, user_name);
}


void Loops(){
  /*
  LOOPS

  while(<cond>)
  {
    <command>;
  }
     
  do
  {
    <command>;
  }while(<cond>);
      
      
  for(<initialisation>; <cond>; <update>){
    <command>;
  }
        
        
  break - exit the loop
  continue - skip current cycle of loop
  */
       
  for(int i=10; i>0; i--){
    printf("%d\n",i);
    Sleep(500);         //delay of 500 millisec
  }
  printf("Happy New Year");
}
      
      
void Arrays(){
    /*ARRAYS - fixed size collection of items of same data type
    int array[A]- int is data type of array and A is max items(opt)
    int array[5] = {0} - sets all items to 0
    array[a] - a is the index and if a is out of bounds it gives some random number but no error

    array[r][c] - 2d array
    */
    int numbers[] = {8, 10, 20, 30, 40, 50, 45};
    int size = sizeof(numbers)/sizeof(numbers[0]);  //To get the no of items we divide array size in bytes by size of each item
    printf("\n%d", size);    
    for(int i = 0; i < size; i++){
      printf("\n%d", numbers[i]);
    }

    printf("\n");
    int twoD[][3] = {{1, 2, 3},  //no of columns need to be specified always
                     {4, 5, 6},
                     {7, 8, 9}};
    for(int i = 0; i < 3; i++){
      for(int j = 0; j < 3; j++){
        printf("%d ", twoD[i][j]);
      }
      printf("\n");
    }

    //we need 2d array for storing strings
    char fruits[][10] = {"Apple", "Orange", "Banana"};
    int sizef = sizeof(fruits)/sizeof(fruits[0]);
    for (int i = 0; i < sizef; i++)
    {
      printf("\n%s",fruits[i]);
    }
    
}


void MathsOperators(){
    //Arithmetic Operators and augmented operators same as python
    //Increment operators are ++ and --
    /*k is int and a is float
    k = 2 / 9      0   a = 2 / 9       0.0  
    k = 2.0 / 9    0   a = 2.0 / 9     0.2222  
    k = 2 / 9.0    0   a = 2 / 9.0     0.2222  
    k = 2.0 / 9.0  0   a = 2.0 / 9.0   0.2222  
    k = 9 / 2      4   a = 9 / 2       4.0  
    k = 9.0 / 2    4   a = 9.0 / 2     4.5  
    k = 9 / 2.0    4   a = 9 / 2.0     4.5  
    k = 9.0 / 2.0  4   a = 9.0 / 2.0   4.5  
    */

    /*MATH FUNCTIONS
    sqrt(A)
    pow(base, power)
    round(A) - round using rules
    ceil(A) - round up
    floor(A) - round down
    abs(A)
    log(A) - natural log
    sin(A) - A in radians
    */
   
    /*LOGICAL OPERATORS
    && - AND
    || - OR
    ! - NOT
    */

    /*SHIFT OPERATORS
    \n - new line
    \t - tab
    \b - sends cursor one position to the left and in case of further printing overwrites the output ahead of cursor
    val1 >> val2 - divides val1 by 2^(val2)
    val1 << val2 - multiplies val1 by 2^(val2)
    */
  }


void Conditions(){
  /*IF STATEMENTS
  if (<cond>)
  {
    <command>;
  }
  else if (<cond>)
  {
    <command>;
  }
  else
  {
    <command>;
  }
  */
     
     
  /*SWITCHES - 
  efficient way for if else in some cases
  switch(<var>)
  {
    case <varvalue1>:
      <commmand>;
      break;                without break it will keep executing commands after a part case is satisfied
    case <varvalue2>:
      <commmand>;
      break;
    default:
      <commmand>;
      break;
  }
  */
}


void ternaryOP(){
  /*
  '?' is the ternary op and is short cut for if-else
  (<cond>) ? value_true : value_false;
  */
  int x = 8;
  int y = 11;
  (x > y) ? printf("%d", x) : printf("%d", y);
  //printf("%d", max);
}


void Enum(){
  /*
  Like a mix of lists and dictionary in python it is a set of same datatypes(keys) liked to integer contants(value)
  */
  enum Day{
    SUNDAY = 1, MONDAY = 2, TUESDAY = 3, WEDNESDAY = 4,
    THURSDAY = 5, FRIDAY = 6, SATURDAY = 7
  };  //if int value was not specified the default would be starting from 0 and increment by 1
  enum Day today = WEDNESDAY;
  printf("%d", today);
  
  /*alternate syntax
  typedef enum{
    SUNDAY = 1, MONDAY = 2, TUESDAY = 3, WEDNESDAY = 4,
    THURSDAY = 5, FRIDAY = 6, SATURDAY = 7
  }Day;
  Day today = SATURDAY;
  printf("%d", today);
  */
}


void Struct(){
  /*srtut - 
  like a class in other languages which specifies the variables 
  or set of values each object from that class must hv
  */
  struct Student{
    char name[50];
    int rno;
  };
  struct Student student1 = {"ABC", 120529};
  struct Student student2 = {0}; //to assign the values later
  strcpy(student2.name, "Sandy");
  student2.rno = 118724;
  printf("%s\n", student1.name);
  printf("%d\n", student1.rno);
  printf("%s\n", student2.name);
  printf("%d\n", student2.rno);

  //ARRAY OF STRUCTS
  struct Car{
    char model[20];
    int year;
  };
  struct Car cars[] = {{"Jesko", 2024},
                       {"Bugatti", 2021},
                       {"Corvette", 2025}};
  int sizecars = sizeof(cars)/ sizeof(cars[0]);
  for(int i = 0; i < sizecars; i++){
    printf("%s %d\n", cars[i].model, cars[i].year);
  }                   
}


void Unions(){
  /*UNIONS-
  same as struct but unlinke struct variables of a member of union share the same memory location
  size of union is decided by the biggest var
  change in any one var may reflect changes in other vars as they share the same memory address
  we can initialise 1 var at a time in union
  */

  union abc{
    int a;
    char b;
  };
  union abc test = {0};
  test.a = 60;
  printf("%d %c", test.a, test.b);
  test.b = 'H';
  printf("\n%d %c", test.a, test.b);

}


void Pointers(){
  /*a variable that stores the memory address of another variable
  help avoid wasting memory by passing the address of large data rather than copying the data
  */

  int num = 21;
  int *pNUM = &num; //pNUM now stores address of num
  // * is called dereference operator and tells C that we are storing a pointer
  printf("%p\n", &num); //to see the address without storing in var
  printf("%p\n", pNUM);   //same value as above

  /*when we pass a var as a parameter to a function we pass it by value that means we are making a copy so we cant change the orignal
  Pointers are used to pass by reference so we can change the orignal var
  */
  PointerTest(pNUM); //if the function accepts pointers as parameters we dont need to declare a pointer and just pass the address '&num'
  printf("%d", num);
}
void PointerTest(int *number){
  (*number) += 2;  //brakets to show precedence of first going to address and then increasing
}


void Files(){
  //Writing and Creating a file
  FILE *pfile = fopen("testing.txt", "w");  //FILE is a struct included with stdio.h
  char text[50] = "Hello World!\nFirst Program!";
  if(pfile == NULL){
    printf("Error opening the File");
    return;
  }
  fprintf(pfile, "%s", text);
  printf("File written successfully");
  fclose(pfile);

  //Reading a file
  fopen("testing.txt", "r");    //if pointer already created
  char buffer[1024] = {0};
  if(pfile == NULL){
    printf("Could not open file");
    return;
  }
  else{
    while (fgets(buffer, sizeof(buffer), pfile)){
      printf("%s", buffer);
    }
    
  }
  fclose(pfile);
  return;
}


void DynMemAlloc(){
  /*MALLOC - Memory Allocation
  a function that dynamically allocates a specified number of bytes in memory
  malloc(size)
  */

  int number_mall = 0;
  printf("How many grades: ");
  scanf("%d", &number_mall);

  char *pGrades = malloc(number_mall * sizeof(char));

  if (pGrades == NULL){
    printf("Memory Allocation Failed!\n");
    return;
  }

  for (int i = 0; i < number_mall; i++){
    printf("Entry #%d: ", i+1);
    scanf(" %c", &pGrades[i]);   //we can use the pointer as an array by storing data at diff indices
  }

  for (int i = 0; i < number_mall; i++){
    printf("%c ", pGrades[i]);
  }

  free(pGrades);     //returning the borrowed space in memory
  pGrades = NULL;   // avoids dangling pointer



  /*CALLOC - Contiguous Allocation
  same as malloc but sets all allocated bytes to 0
  malloc is faster but calloc leads to less bugs
  calloc(number_of items, size_of_each_item)
  */

  int number_cal = 0;
  printf("\nNo of Players: ");
  scanf("%d", &number_cal);

  int *scores = calloc(number_cal, sizeof(int));

  if(scores == NULL){
    printf("Memory Allocation Failed\n");
    return;
  }
  else{
    for(int i = 0; i < number_cal; i++){
      printf("Enter score #%d: ",i + 1);
      scanf(" %d", &scores[i]);
    }
    for(int i = 0; i < number_cal; i++){
      printf("%d ", scores[i]);
    }
  }
  free(scores);
  scores == NULL;



  /*REALLOC - Reallocation
  Resize previously allocated memory
  realloc(ptr, bytes)
  */

  int number_reall = 0;
  printf("\nEnter number of prices: ");
  scanf("%d", &number_reall);

  float *prices = malloc(number_reall * sizeof(float));
  if(prices == NULL){
    printf("Memory Allocation Failed!\n");
    return;
  }
  for(int i = 0; i < number_reall; i++){
    printf("Enter price #%d: ",i + 1);
    scanf(" %f", &prices[i]);
  }
  for(int i = 0; i < number_reall; i++){
    printf("%.2f ", prices[i]);
  }
  int newnum = 0;
  printf("\nEnter new number of prices: ");
  scanf("%d", &newnum);

  float *temp = realloc(prices, newnum * sizeof(float));
  if(temp == NULL){
    printf("Could not Reallocate Memory!\n");
  }
  else{
    prices = temp;
    temp = NULL;
    for(int i = number_reall; i < newnum; i++){
      printf("Enter price #%d: ",i + 1);
      scanf(" %f", &prices[i]);
    }

    for(int i = 0; i < newnum; i++){
      printf("%.2f ", prices[i]);
    }

  }
  free(prices);
  prices = NULL;
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
  printf("%d --> %d\n", start, end);
}
