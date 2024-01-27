// Write a program to check whether an entered character is a vowel or a consonant.

#include<stdio.h>
int main()
{
    char Character;
    printf("Enter Character: ");
    scanf("%c",&Character);

    char Vowel[]={'a','e','i','o','u'};
    
    for (int i = 0; i < 4; i++)
    {
        if(Character == Vowel[i]){
            printf("%c is Vowel.",Character);
            return 0;
        }
    }
    printf("%c is Consonant.",Character);
    
    return 0;
}
