#include <iostream>
#include "Employee.h"
using namespace std;

Employee::Employee( const string &first, const string &last, const string &ssn ) : firstName( first ), lastName( last ), socialSecurityNumber( ssn )
{
}

Employee::~Employee()
{
    //dtor
}
