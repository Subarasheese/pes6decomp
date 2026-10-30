/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"
typedef int s128 __attribute__((mode(TI)));
typedef unsigned int u128 __attribute__((mode(TI)));
typedef char Check128Width[sizeof(s128)==16?1:-1];


extern char D_0065A9A0[];
extern char D_0065A9B0[];
extern char D_0065A9C0[];
extern char D_0065C2E0[];
extern char D_0065C2EC[];
extern char D_0065C2ED[];
extern char D_0065C2EE[];
extern char D_0065C2F0[];
extern char D_0065C2F1[];
extern char D_0065C2F5[];
extern char D_0065C2F6[];
extern char D_0065C300[];

void func_00629020(s32 arg0) {
    (*(s128 *)D_0065C2E0) = (*(s128 *)D_0065A9A0);
    (*(s128 *)D_0065C2F0) = (*(s128 *)D_0065A9B0);
    (*(s64 *)D_0065C300) = (*(s64 *)D_0065A9C0);
    switch (arg0) {                                 /* irregular */
    case 1:
        (*(s8 *)D_0065C2EC) = 1;
        (*(s8 *)D_0065C2EE) = 1;
block_8:
        (*(s8 *)D_0065C2F1) = 1;
        return;
    case 2:
        (*(s8 *)D_0065C2EC) = 1;
        (*(s8 *)D_0065C2ED) = 1;
        (*(s8 *)D_0065C2EE) = 1;
        (*(s8 *)D_0065C2F1) = 1;
        (*(s8 *)D_0065C2F5) = 1;
        (*(s8 *)D_0065C2F6) = 2;
        return;
    case 3:
        (*(s8 *)D_0065C2EC) = 1;
        (*(s8 *)D_0065C2EE) = 1;
        (*(s128 *)D_0065C2F0) = 1;
        goto block_8;
    }
}
