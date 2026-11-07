/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void * func_00228960(void);
extern void * strstr(void *, void *);
void *func_0095C390(s32);                           /* extern */
s32 func_00B275D0(M2C_UNK);                         /* extern */

s32 func_00B26C10(s32 arg0) {
    s32 temp_v0;
    void *temp_s1;
    void *temp_s0;

    if (func_00228960() == NULL) {
        return 0;
    }
    temp_s0 = func_00228960();
    temp_s1 = func_0095C390(arg0);
    temp_v0 = func_00B275D0(0);
    switch (temp_v0) {                              /* irregular */
    case 0:
    case 1:
        return strstr(temp_s1, temp_s0) != NULL;
    case 2:
        return 1;
    default:
        return 0;
    }
}
