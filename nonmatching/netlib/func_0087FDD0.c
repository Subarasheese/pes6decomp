/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA40(void);
s16 *func_008472D0();                               /* extern */
s64 func_00858B60(M2C_UNK *, M2C_UNK);              /* extern */
s32 func_009024B0(s8);                              /* extern */
extern char D_0058D7C0[];
extern char D_0058D7C4[];
extern char D_0058D7C5[];
extern char D_0058D7C6[];
extern char D_0058D7C7[];
extern char D_0058D7C8[];
extern char D_0058D7C9[];
extern char D_0058D7CA[];
extern char D_0058D7CB[];
extern char D_0058D7CC[];
extern char D_0058D7CD[];
extern char D_0058D7CE[];
extern char D_0058D7CF[];
extern char D_0058D7E4[];
extern char D_0058D7E8[];
extern char D_0058D7E9[];
extern char D_0058D7EA[];
extern char D_0058D7EB[];
extern char D_0058D7EC[];
extern char D_0058D7ED[];
extern char D_0058D7EE[];
extern char D_0058D7EF[];
extern char D_0058D7F0[];
extern char D_0058D7F1[];
extern char D_0058D7F2[];
extern char D_0058D7F3[];
extern char D_008B21C0[];

void func_0087FDD0(s8 arg0) {
    s16 temp_v1;
    s32 temp_v0;
    s8 var_a0;

    if (func_002DCA40() != 0) {
        (*(s32 *)D_0058D7C0) = (*(s32 *)D_0058D7E4);
        (*(u8 *)D_0058D7C4) = (*(u8 *)D_0058D7E8);
        (*(u8 *)D_0058D7C5) = (*(u8 *)D_0058D7E9);
        (*(u8 *)D_0058D7C6) = (*(u8 *)D_0058D7EA);
        (*(u8 *)D_0058D7C7) = (*(u8 *)D_0058D7EB);
        (*(u8 *)D_0058D7C8) = (*(u8 *)D_0058D7EC);
        (*(u8 *)D_0058D7C9) = (*(u8 *)D_0058D7ED);
        (*(u8 *)D_0058D7CA) = (*(u8 *)D_0058D7EE);
        (*(u8 *)D_0058D7CB) = (*(u8 *)D_0058D7EF);
        (*(u8 *)D_0058D7CC) = (*(u8 *)D_0058D7F0);
        (*(u8 *)D_0058D7CD) = (*(u8 *)D_0058D7F1);
        (*(u8 *)D_0058D7CE) = (*(u8 *)D_0058D7F2);
        (*(u8 *)D_0058D7CF) = (*(u8 *)D_0058D7F3);
    }
    temp_v1 = *func_008472D0();
    (*(s32 *)D_0058D7C0) = (s32) temp_v1;
    if ((((s64) (func_00858B60(((void *)D_008B21C0), 1) << 0x38) >> 0x38) - 1) >= (temp_v1 - 1)) {
        M2C_FIELD(&(((void *)D_0058D7C4))[temp_v1], s8 *, -1) = arg0;
        temp_v0 = func_009024B0(arg0);
        var_a0 = 0x7F;
        switch (temp_v0) {                          /* irregular */
        case 0xA005E:
            var_a0 = 2;
            break;
        case 0x1F90003:
            var_a0 = 3;
            break;
        case 0xC0013:
            var_a0 = 1;
            break;
        }
        M2C_FIELD(&(((void *)D_0058D7C8))[temp_v1], s8 *, -1) = var_a0;
    }
}
