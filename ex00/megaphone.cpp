#include <iostream>
#include <string>
#include <cstring>
#include <cctype>




int main(int argc, char *argv[])
{
    if(argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    else
    {
        int i;
        int j;
        
        j = 1;
        while (argv[j])
        {
            i = 0;
            while (argv[j][i])
            {
                
                std::cout << (char)toupper(argv[j][i]);// toupper() convert char to upper and return the asccii of this ascii and casting to char
                i++;
            }
            j++;
        }
        std::cout << "\n";
    }
    return 0;
}