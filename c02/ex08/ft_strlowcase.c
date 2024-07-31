char    *ft_strlowcase(char *str)
{
    int i;
    i = 0;
    while(str[i] != '\0')  // machi new line rah khaso ykoun null '\0'
    {
         if (str[i] >= 'A' && str[i] <= 'Z')  // hadi khasha detecter upercase bach n7awlohom L lowercase nta dayr L3aks
         {
            str = str + 32; // same hna
         }
    i++;
    }
}