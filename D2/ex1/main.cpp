#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <cstring>
#include <string>

char* ft_substr(char* arr, int begin, int len)
{
    char* res = new char[len];
    for (int i = 0; i < len; i++)
        res[i] = *(arr + begin + i);
    res[len] = 0;
    return res;
}

int        main(void)
{
    std::ifstream input;
    std::string buffer;
    char *array[2000];
    int i = 0;
    int j = 0;
    int old_j = 0;
    int in_it = 0;
    int length;
    int valid = 0;
    int min, max;
    char   c;

    input.open("file.txt");
    while (getline(input, buffer))
    {
        array[i] = strdup(buffer.c_str());
        i++;
    }
    length = i;
    i = 0;
    while(i < length)
    {
        j = 0;
        in_it = 0;
        while (array[i][j] != '\0')
        {
            old_j = j;
            while (std::isdigit(array[i][j]))
                j++;
            
            min = atoi(ft_substr(array[i],  old_j, j - old_j)); 
            j++;
            old_j = j;
            while (isdigit(array[i][j]))
                j++;
            max = atoi(ft_substr(array[i],  old_j, j - old_j));
            j++;
            c = array[i][j];
            j++;
            array[i] = ft_substr(array[i], j, 100);
            j = 0;
            while (array[i][j] != '\0')
            {
                if (array[i][j] == c)
                {

                    in_it++;
                }
                j++;
            }
            if (in_it >= min && in_it <= max)
            {
                
                valid++;
            }
        }
        i++;
    }
    std::cout << valid << std::endl;
}
