/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001AAF40(void *, signed char);
extern void func_002727C0(s32);
extern s32 func_00152130(s32, s8);
extern int func_002DCA30(void);
extern int func_002727B0(void);
M2C_UNK func_001AAF50(void *, M2C_UNK);             /* extern */
s32 func_0084FBE0();                                /* extern */
M2C_UNK func_009A0B90();                            /* extern */
M2C_UNK func_009E1D30(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_009F2700();                            /* extern */
M2C_UNK func_00B26FA0();                            /* extern */
s32 func_00B29E20();                                /* extern */
s32 func_00B29E50();                                /* extern */
extern char D_0058FC30[];
extern char D_0058FE70[];
extern char D_005914F0[];
extern char D_00591730[];
extern char D_00591C09[];
extern char D_00591DD1[];
extern char D_00591E14[];
extern char D_00592743[];
extern char D_0059274E[];
extern char D_005E3A98[];
extern char D_00CBCC62[];

void func_00BE9F30(void) {
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;

    var_s1 = 0;
    if (((*(u8 *)D_00591C09) != 5) || (func_00B29E20() != 0)) {
        func_001AAF50(*M2C_FIELD(((void *)D_0058FC30), void ***, 4), 0);
        func_001AAF40(*M2C_FIELD(((void *)D_0058FC30), void ***, 4), 1);
        func_001AAF50(*M2C_FIELD(((void *)D_0058FE70), void ***, 4), 0);
        func_001AAF40(*M2C_FIELD(((void *)D_0058FE70), void ***, 4), 1);
        func_001AAF50(*M2C_FIELD(((void *)D_005914F0), void ***, 4), 0);
        func_001AAF40(*M2C_FIELD(((void *)D_005914F0), void ***, 4), 1);
        func_001AAF50(*M2C_FIELD(((void *)D_00591730), void ***, 4), 0);
        func_001AAF40(*M2C_FIELD(((void *)D_00591730), void ***, 4), 1);
    }
    if ((*(u8 *)D_00591DD1) != 0) {
        func_009A0B90();
    }
    if ((*(u8 *)D_00591C09) != 5) {
        goto block_5;
    }
    temp_v0 = func_00B29E50();
    switch (temp_v0) {                              /* irregular */
    case 1:
        func_00B26FA0();
        (*(s32 *)D_00591E14) = 0;
        func_009E1D30(2, 0x10);
        return;
    case 2:
        (*(s32 *)D_005E3A98) = 1;
        return;
    case 4:
        (*(s32 *)D_005E3A98) = 1;
block_5:
        var_s0 = 0;
        if ((*(u8 *)D_00592743) == 0xC) {
            var_s0 = 1;
        } else if ((*(u8 *)D_00CBCC62) == 0) {
            func_002727C0(1);
        } else if ((func_002727B0() & 0xFF) != 1) {
            var_s0 = 1;
        }
        if (func_002DCA30() != 0) {
            if (func_0084FBE0() == 1) {
                var_s0 = 1;
                var_s1 = 1;
            }
        }
        if (var_s0 != 0) {
            func_002727C0(2);
            (*(u8 *)D_0059274E) = 1;
        }
        if (var_s1 != 0) {
            goto block_14;
        }
        if (func_00152130(0, 0x10) != 0) {
block_14:
            if ((*(u8 *)D_0059274E) != 0) {
                func_00B26FA0();
                func_009F2700();
                func_009E1D30(2, 0x10);
                return;
            }
        } else {
            return;
        }
        break;
    }
}
