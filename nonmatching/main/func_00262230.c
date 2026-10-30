/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0058D388[];
extern char D_0058D38A[];
extern char D_0058D38C[];
extern char D_0058D38E[];
extern char D_0058D390[];
extern char D_0058D392[];
extern char D_0058D394[];
extern char D_0058D398[];
extern char D_0058D39C[];
extern char D_0058D39E[];
extern char D_0058D3A0[];
extern char D_0058D3A2[];

void func_00262230(void) {
    s64 temp_a4;
    s64 temp_t2;

    (*(s16 *)D_0058D390) = (M2C_FIELD(((void *)D_0058D38C), s16 *, 0) - M2C_FIELD(((void *)D_0058D388), s16 *, 0)) + 1;
    (*(s16 *)D_0058D39C) = M2C_FIELD(((void *)D_0058D388), s16 *, 0);
    (*(s16 *)D_0058D39E) = (*(s16 *)D_0058D38A);
    (*(s16 *)D_0058D392) = (M2C_FIELD(((void *)D_0058D38C), s16 *, 2) - M2C_FIELD(((void *)D_0058D388), s16 *, 2)) + 1;
    (*(s16 *)D_0058D3A2) = (*(s16 *)D_0058D38E);
    (*(s16 *)D_0058D3A0) = M2C_FIELD(((void *)D_0058D38C), s16 *, 0);
    temp_t2 = (s64) ((s64) ((s16) (*(s16 *)D_0058D390) >> 1) << 0x30) >> 0x30;
    temp_a4 = (s64) ((s64) ((s16) (*(s16 *)D_0058D392) >> 1) << 0x30) >> 0x30;
    M2C_FIELD(((void *)D_0058D394), s16 *, 0) = (s16) (((s64) ((M2C_FIELD(((void *)D_0058D388), s16 *, 0) + temp_t2) << 0x30) >> 0x30) - temp_a4);
    M2C_FIELD(((void *)D_0058D394), s16 *, 2) = (s16) (((s64) ((M2C_FIELD(((void *)D_0058D388), s16 *, 2) + temp_a4) << 0x30) >> 0x30) - temp_t2);
    M2C_FIELD(((void *)D_0058D398), s16 *, 0) = (s16) ((M2C_FIELD(((void *)D_0058D394), s16 *, 0) + (*(s16 *)D_0058D392)) - 1);
    M2C_FIELD(((void *)D_0058D398), s16 *, 2) = (s16) ((M2C_FIELD(((void *)D_0058D394), s16 *, 2) + (*(s16 *)D_0058D390)) - 1);
}
