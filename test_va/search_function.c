#include "pholberton.h"
/**
 * @brief 
 * 
 */
void (*search_function(char sf_char))(va_list)
{
        sp_format vsp_format[] = {
                {"c", f_c},
                {"s", f_s},
                {"i", f_i},
                {NULL, NULL}
        };
        int i_format = 0;

        while (vsp_format[i_format].sp_char != NULL)
        { 
                if (vsp_format[i_format].sp_char[0] == sf_char)
                        return(vsp_format[i_format].p_fun);
                i_format++;
        }
        return(NULL);
}
