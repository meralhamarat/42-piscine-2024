int ft_strlen(char *str)
{
    int i;
    i = 0;
    while(str[i] != '\0')
        i++;
    return(i);
}
char *ft_strrev(char *str)
{
    int size;
    int tmp;

    int i = 0;
    size = ft_strlen(str);
    while(i < size / 2)
    {
        tmp = str[i];
        str[i] = str[size -1 -i];
        str[size -1 -i] = str[i];
        i++;
    }
    return(str);
}