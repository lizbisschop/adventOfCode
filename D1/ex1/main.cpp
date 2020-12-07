#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <cstring>
#include <string>

int     main(void)
{
    std::ifstream input;
    int     array[200];
    int     i = 0;
    int     j = 0;
    int     length;
    std::string buffer;
    input.open("file.txt");
    while (getline(input, buffer))
    {
        array[i] = std::stoi(buffer);
        i++;
    }
    length = i;
    i = 0;
    while (i < 200)
    {
        j = 0;
        while (j < 200)
        {
            if (array[i] + array[j] == 2020)
            {
                std::cout << array[i] * array[j] << std::endl;
            }
            j++;
        }
        i++;
    }
}