#include "ft_printf.h"
#include <string.h>
int    main(void)
{
    int        ft_rslt;
    int std_rslt;
    char    *str;

    str = NULL;
    printf("\n----------------------- Standard Output: ----------------------\n");
    /*ft_rslt = ft_printf("%%%");
    printf("\n");*/
    std_rslt = printf("%%%");
    printf("\n");
    printf("\n------------------------ Return Values: -----------------------\n");
        printf("\nReturn values matches\n");
    printf("STD return Values: %d\nFT_return Value: ", std_rslt);
    printf("\n---------------------------------------------------------------\n\n\n");
    return (0);
}
