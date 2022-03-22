// ---------------------------------- SI RANA -------------------------------
#include<stdio.h>

int main(){

    printf(" ----------------- Print Character and Number ---------------\n");

    int c;
    c = getchar();

    while (c != EOF)
    {
        putchar(c);
        c=getchar();
    }
    
}

// EOF = End of File
