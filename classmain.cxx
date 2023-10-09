//not finished yet

#include "scuclass.h"

using namespace std;
using namespace coen79_hw3;
int main(int argc, char *argv[])
{
    scuclass coen79;
    ifstream data(argv[1]);
    
    if (data.is_open())
    {
        
        if(getline(data, students[0].name));
        cout << students[0].name <<endl;
    }
}
