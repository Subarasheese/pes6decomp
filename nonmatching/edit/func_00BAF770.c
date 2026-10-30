/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B7B20(void);
extern void func_001B6860(void);
extern void func_00BB00B0(void *);
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00B91440(M2C_UNK);                     /* extern */
s32 func_00B9FD10();                                /* extern */
s32 func_00BA3A30(M2C_UNK *, M2C_UNK, M2C_UNK);     /* extern */
s32 func_00BA5B20();                                /* extern */
M2C_UNK func_00BA5DF0();                            /* extern */
s32 func_00BA6020(M2C_UNK);                         /* extern */
s32 func_00BAF9C0(M2C_UNK *);                       /* extern */
s32 func_00BC16F0(M2C_UNK *);                       /* extern */
extern char D_00CB6750[];
extern char D_00CE4800[];
extern char D_00CE4804[];

s32 func_00BAF770(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s0;
    s8 temp_v1;

    var_s0 = 0;
    switch ((*(s8 *)D_00CE4804)) {                           /* switch 1; irregular */
    case 11:                                        /* switch 1 */
        if (func_00BA6020(4) != 0) {
            temp_v1 = M2C_FIELD(((void *)D_00CE4800), s8 *, 5);
            M2C_FIELD(((void *)D_00CE4800), s8 *, 5) = (s8) M2C_FIELD(((void *)D_00CE4800), s8 *, 4);
            M2C_FIELD(((void *)D_00CE4800), s8 *, 4) = temp_v1;
        }
        break;
    case 8:                                         /* switch 1 */
        func_00BB00B0(((void *)D_00CE4800));
        break;
    case 2:                                         /* switch 1 */
        temp_v0 = func_00BC16F0(((void *)D_00CE4800));
        switch (temp_v0) {                          /* switch 3; irregular */
        case 5:                                     /* switch 3 */
            M2C_FIELD(((void *)D_00CE4800), s8 *, 5) = (s8) M2C_FIELD(((void *)D_00CE4800), s8 *, 4);
            M2C_FIELD(((void *)D_00CE4800), s8 *, 4) = 1;
            break;
        case 1:                                     /* switch 3 */
            M2C_FIELD(((void *)D_00CE4800), s8 *, 5) = (s8) M2C_FIELD(((void *)D_00CE4800), s8 *, 4);
            M2C_FIELD(((void *)D_00CE4800), s8 *, 4) = 8;
            break;
        }
        break;
    case 1:                                         /* switch 1 */
        temp_v0_2 = func_00BAF9C0(((void *)D_00CE4800));
        switch (temp_v0_2) {                        /* switch 2; irregular */
        case 1:                                     /* switch 2 */
            M2C_FIELD(((void *)D_00CE4800), s8 *, 5) = (s8) M2C_FIELD(((void *)D_00CE4800), s8 *, 4);
            M2C_FIELD(((void *)D_00CE4800), s8 *, 4) = 0xA;
            break;
        case 0:                                     /* switch 2 */
            M2C_FIELD(((void *)D_00CE4800), s32 *, 0) = func_00BA5B20();
            M2C_FIELD(((void *)D_00CE4800), s8 *, 5) = (s8) M2C_FIELD(((void *)D_00CE4800), s8 *, 4);
            M2C_FIELD(((void *)D_00CE4800), s8 *, 4) = 2;
            break;
        case 3:                                     /* switch 2 */
            func_001B6860();
            M2C_FIELD(((void *)D_00CE4800), s8 *, 5) = (s8) M2C_FIELD(((void *)D_00CE4800), s8 *, 4);
            M2C_FIELD(((void *)D_00CE4800), s8 *, 4) = 0xC;
            break;
        }
        break;
    case 0:                                         /* switch 1 */
        if (func_00BA3A30(((void *)D_00CB6750), 3, 0) != 0) {
            func_00B91440(3);
            func_001C48E8(((void *)D_00CE4800), 0, 0x20);
            M2C_FIELD(((void *)D_00CE4800), s8 *, 8) = 1;
            M2C_FIELD(((void *)D_00CE4800), s8 *, 5) = (s8) M2C_FIELD(((void *)D_00CE4800), s8 *, 4);
            M2C_FIELD(((void *)D_00CE4800), s8 *, 4) = 1;
        }
        break;
    case 10:                                        /* switch 1 */
        temp_v0_3 = func_00B9FD10();
        if ((temp_v0_3 != 2) && (temp_v0_3 != 1)) {

        } else {
            M2C_FIELD(((void *)D_00CE4800), s8 *, 5) = (s8) M2C_FIELD(((void *)D_00CE4800), s8 *, 4);
            M2C_FIELD(((void *)D_00CE4800), s8 *, 4) = 1;
        }
        break;
    case 12:                                        /* switch 1 */
        func_001B7B20();
        func_00BA5DF0();
        func_001C48E8(((void *)D_00CE4800), 0, 0x20);
        func_00BA3A30(((void *)D_00CB6750), 3, 1);
        var_s0 = 1;
        break;
    }
    return var_s0;
}
