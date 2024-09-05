int	ft_atoi(const char *str)
{
    int i = 0;
    int sign = 1;
    int res = 0;
    while(str[i])
    {
        while((str[i] <= 13 && str[i] >= 9) || str[i] == 32)
            i++;
        while(str[i] == '+' || str[i] == '-')
        {
            if(str[i] == '-')
                sign *= -1;
            i++;
        }
        while(str[i] <= '9' && str[i] >= '0' && str[i])
        {
            res = (str[i] - 48) + (res *10);
            i++;
        }
    }
    return(res * sign);
}
