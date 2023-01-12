#include <iostream>
using namespace std;

/*
Templates are evaluated at compile time
Syntax: template<typename T> (or, template<class T> can also be used)
Here, 
keyword: template 
type of template parameter: typename
parameter name: T

*/

template <typename t>
void print(t value)
{
    cout << value << endl;
}

template <typename T>
class Weight
{
private: 
    T kg; // declaring a variable kg of type T
public:
    void setdata(T x)
    {
        kg = x;        
    }
    T getdata() // defining a function that returns type T
    {
        return kg; // kg is of type T
    }
};








int main()
{
  Weight <int> obj1; // datatype int is passed to object obj1 defined under class Weight
  obj1.setdata(10);
  cout << "Weight is " << obj1.getdata() << endl;

  Weight <string> obj2;
  obj2.setdata("hello");
  cout << "String entered is " << obj2.getdata() << endl;

  // the following function calls are made to template t
  /*
  The function print(), since linked to a template is created only when the function call is made
  Hence, the print() is created depending on the type of argument passed to it during function call
  Instead of specifying the argument datatype in print() body each time a different datatype is passed
  explicitly, the template parameter name t takes the type of variable passed during compile time.
  The datatype can also explicitly specified during function call as well:
  print<int>(100); or print<string>("This is string");

  Since the function print() is created during compile time (when it is called), print() doesn't
  exist when it is not called. Hence, the code doesn't report any syntax error in print() if the 
  function is not called by the main(). 
  g++ (or gcc) compiler doesn't detect these errors, however, klang does report errors
  */
  print(100);
  print("This is string");
  print(3.1415);

  /*
  Templates can also be used to dynamically allocate array sizes

  */
  
    
    
    
    return 0;
}




















