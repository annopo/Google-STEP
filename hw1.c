#include <stdbool.h>
#include <stdio.h>

static const int INPUT_LENGTH = 17;
static const int ALPHABET_LENGTH = 26;

bool is_anagram(char *str1, char *str2)
{
    int i, letter1[ALPHABET_LENGTH]={0}, letter2[ALPHABET_LENGTH]={0};

    i=0;
    while (str1[i] != '\0')
        letter1[str1[i++]-'a']++;

    i=0;
    while (str2[i] != '\0')
        letter2[str2[i++]-'a']++;

    for(i=0; i<ALPHABET_LENGTH; i++)
        if(letter1[i] != letter2[i])
            return false;

    return true;
}

int main()
{
    char input1[INPUT_LENGTH], input2[INPUT_LENGTH];
    
    printf("Enter a first input:");
    scanf("%s", input1);

    printf("Enter a second input:");
    scanf("%s", input2);

    if (is_anagram(input1, input2))
        printf("These strings are anagrams.\n");
    else
        printf("The strings aren't anagrams.\n");

    return 0;
}