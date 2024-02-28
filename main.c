#include <unistd.h>
#include <stdio.h>

//function prototypes
void ft_ft(int *nbr);
void ft_ultimate_ft(int *********nbr);
void ft_swap(int *a, int *b);
void ft_div_mod(int a, int b, int *div, int *mod);
void ft_ultimate_div_mod(int *a, int *b);
void ft_putstr(char *str);
int ft_strlen(char *str);
void ft_rev_int_tab(int *tab, int size);
void ft_sort_int_tab(int *tab, int size);

void print_array(int *array, int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", array[i]);
        if (i < size - 1) printf(", ");
    }
    printf("]\n");
}

int main(void)
{
    // Exercise 00: ft_ft
    int a = 0;
    ft_ft(&a);
    printf("ft_ft: %d\n", a);

    // Exercise 01: ft_ultimate_ft
    int b;
    int *ptr1 = &b;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;
    int ****ptr4 = &ptr3;
    int *****ptr5 = &ptr4;
    int ******ptr6 = &ptr5;
    int *******ptr7 = &ptr6;
    int ********ptr8 = &ptr7;
    int *********ptr9 = &ptr8;
    ft_ultimate_ft(ptr9);
    printf("ft_ultimate_ft: %d\n", b);

    // Exercise 02: ft_swap
    int c = 3, d = 42;
    ft_swap(&c, &d);
    printf("ft_swap: c = %d, d = %d\n", c, d);

    // Exercise 03: ft_div_mod
    int e = 42, f = 10, div, mod;
    ft_div_mod(e, f, &div, &mod);
    printf("ft_div_mod: div = %d, mod = %d\n", div, mod);

    // Exercise 04: ft_ultimate_div_mod
    int g = 42, h = 10;
    ft_ultimate_div_mod(&g, &h);
    printf("ft_ultimate_div_mod: g = %d, h = %d\n", g, h);

    // Exercise 05: ft_putstr
    char *str = "Hello, World!";
    printf("ft_putstr: ");
    ft_putstr(str);
    printf("\n");

    // Exercise 06: ft_strlen
    int str_length = ft_strlen(str);
    printf("ft_strlen: Length of string = %d\n", str_length);

    // Exercise 07: ft_rev_int_tab
    int tab[] = {1, 2, 3, 4, 5};
    int size = sizeof(tab) / sizeof(tab[0]);
    ft_rev_int_tab(tab, size);
    printf("ft_rev_int_tab: ");
    print_array(tab, size);

    // Exercise 08: ft_sort_int_tab
    int tab_to_sort[] = {5, 3, 4, 2, 1};
    int sort_size = sizeof(tab_to_sort) / sizeof(tab_to_sort[0]);
    ft_sort_int_tab(tab_to_sort, sort_size);
    printf("ft_sort_int_tab: ");
    print_array(tab_to_sort, sort_size);

    return 0;
}