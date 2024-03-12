int main() {
    char yourText[80];
    gets(yourText);
    system("cls");
    unsigned short length=strlen(yourText);
    printf(" ");
    for (unsigned short i=0; i<length; i++){
        printf("-");
    }
    printf("\n<%s>\n ",yourText);
    for (unsigned short i=0; i<length; i++){
        printf("-");
    }
    printf("\n\t\\   ^__^");
    printf("\n\t \\  (OO)\\_______");
    printf("\n\t    (__)\\       )\\/\\");
    printf("\n\t        ||----w |");
    printf("\n\t       _||     ||");
    return 0;
}