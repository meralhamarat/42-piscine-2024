int count_words(char *str)
{
    int i = 0;
    int count = 0;
    if(str[i] != '\0')
    {
        if(str[i] != ' ')
            count = 1;
        while(str[i] != '\0')
        {
            if((str[i] == ' ' || str[i] == '\t') && (str[i +1 ] != '\0' && str[i + 1] != ' '))
                count += 1;
            i++;
        }
    }
    return(count);
}