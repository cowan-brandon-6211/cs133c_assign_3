//strings

#include <stdio.h>

int main()
{
    int size = 10;
    char word[size];
    char extra_characters[100];

    printf("please enter a word of 9 characters or less...: \n");
    //scanf("%s", word);
    fgets(word, size, stdin);

    /*
    for(int i = 0; i < size; ++i)
    {
        word[i] = 'a' + (i % 26);
    }
    */
    printf("you entered: \"%s\" \n", word);
    printf("your string is a length of: %d \n", strlen(word));
    printf("the extra characters: \"%s\" \n", extra_characters);

    for(int i = size - 1; i >= 0; --i)
    {
        printf("%c", word[i]);
    }

    return 0;
}