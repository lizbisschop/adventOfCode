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
    int     k = 0;
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
    while (i < length)
    {
        j = 0;
        while (j < length)
        {
            k = 0;
            while (k < length)
            {
                if (array[i] + array[j] + array[k] == 2020)
                {
                    std::cout << array[i] << std::endl << array[j] << std::endl << array[k] << std::endl;
                    std::cout << array[i] * array[j] * array[k] << std::endl;
                }
                k++;
            }
            j++;
        }
        i++;
    }
}