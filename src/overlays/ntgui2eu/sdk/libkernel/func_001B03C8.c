/* compiler: ee-gcc-2.96 */
/* Adapted from newlib 1.9.0, libc/string/strcspn.c (strcspn).
 * licence: newlib (see THIRD_PARTY.md) */
#include "newlib/pal_reent_types.h"

size_t func_001B03C8(const char *s1, const char *s2) {
    const char *s = s1;
    const char *c;
    while (*s1) {
        for (c = s2; *c; c++) {
            if ((*s1) == (*c))
                break;
        }

        if (*c)
            break;
        s1++;
    }

    return s1 - s;
}
