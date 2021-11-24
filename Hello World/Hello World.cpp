#include <iostream> //Library (Input Output stream)
using namespace std; // So we dont need to use it every that you'll be using this namespace

int main() // beggining of the program
{
    std::cout << "Hello World!\n"; 
    // std => namespaces provide scope for the identifiers to avoid collisions when using multiple libraries
    
    cout << "Input your annual salary:\n";

    float annualSalary;
    cin >> annualSalary;

    float monthlySalary = annualSalary / 12;


    cout << "Your mothly salary is " << monthlySalary << endl;
    cout << "In ten years you will earn " << annualSalary * 10;

    char character = 'a'; // character variable is used with single ' '

    system("pause>0"); // gets rid of junk messages after the hello world
}
