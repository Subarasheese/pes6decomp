/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001F85A0(void *, void *);
s32 func_0096F610();                                /* extern */
extern char D_00B34380[];
extern char D_00B43520[];

M2C_UNK *func_00AF7160(s32 arg0) {
    if (func_0096F610() != 0) {
        func_001F85A0(((void *)D_00B34380) + (((arg0 & 0xFFFF) - 0x1770) * 0x7C), ((void *)D_00B43520));
        return ((void *)D_00B43520);
    }
    return NULL;
}
