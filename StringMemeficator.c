#include <stdio.h>
#include <string.h>
#include <ctype.h>


void printHelp()
{
    printf("Usage:\n <style flag> string\n supported flags:\n");
    printf("\ts: sample text -> sAmPlE tExT\n");
    printf("\tw: sample text -> S A M P L E  T E X T\n");
}

void wideFont(int argc, char* argv[])
{
    printf("Chosen: W I D E  F O N T:\n");
    for(int c = 2; c < argc; c++)
    {
        size_t length = strlen(argv[c]);
        for(size_t it = 0; it < length; it++)
        {
            printf("%c ", toupper(argv[c][it]));
        }
        puts(" ");
    }
}
void sArCaSmFont(int argc, char* argv[])
{
    printf("Chosen: sArCaSm Font:\n");
    for(int c = 2; c < argc; c++)
    {
        size_t length = strlen(argv[c]);
        for(size_t it = 0; it < length; it++)
        {
            if((it & 1) == 0)
            {
                printf("%c", tolower(argv[c][it]));
            }
            else
            {
                printf("%c", toupper(argv[c][it]));
            }
        }
    }
    puts("");
}
int main (int argc, char* argv[])
{
    if(argc < 3)
    {
        printHelp();
        return 0;
    }
    const char flag = argv[1][0];
    
    switch(flag)
    {
        case 's':
        {
            sArCaSmFont(argc, argv);
            break;
        }
        case 'w':
        {
            wideFont(argc, argv);
            break;
        }
        default:
        {
            printHelp();
        }
    }
    return 0;
}
