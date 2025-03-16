// Alan Zamora
// 03/16/2025
// Database
// Description: Storing data and information

#include <iostream>
#include <string>

//main function is used to have a read, execute, print loop
int main(int argc, char *agc[])
{
    Input *input = new_input();

    while (true)
    {

        print_prompt();
        read_input();

        if (strcmp(input->buffer), "exit")
        {
            close(input);
            exit();
        }
        else
        {
            printf("input not recognized");

        }
    }
}