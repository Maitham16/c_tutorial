void ft_ultimate_div_mod(int *a, int *b)
{
    int temp_a;

    temp_a = *a;
    if (*b != 0)
    {
        *a = temp_a / *b;
        *b = temp_a % *b;
    }
}
