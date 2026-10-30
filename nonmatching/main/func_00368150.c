/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_003680B0(void *);                          /* extern */
s32 func_00C5B610(s32, s32, s32);                   /* extern */
s32 func_00C5B730(s32, s32, s32);                   /* extern */
s32 func_00C5B830(s32, s32, s32);                   /* extern */
s32 func_00C5B930(s32, s32, u8);                    /* extern */
s32 func_00C5B9F0(s32, s32, u8);                    /* extern */
s32 func_00C5BC90(s32, s32, s32, M2C_UNK *);        /* extern */
s32 func_00C5BDC0(s32, s32, s32, M2C_UNK *);        /* extern */
s32 func_00C5BEE0(s32, s32, s32, M2C_UNK *);        /* extern */
s32 func_00C5BF80(s32, s32, u8);                    /* extern */
s32 func_00C5C070(s32, s32, u8, M2C_UNK *);         /* extern */
s32 func_00C5C340(s32, s32, u8, M2C_UNK *);         /* extern */
s32 func_00C5C460(s32, s32, u8, M2C_UNK *);         /* extern */
s32 func_00C5C590(s32, s32, u8, M2C_UNK *);         /* extern */
s32 func_00C5C690(s32, s32, u8, M2C_UNK *);         /* extern */
s32 func_00C5C970(s32, s32, u8, M2C_UNK *);         /* extern */
s32 func_00C5CB00(s32, s32, u8, M2C_UNK *);         /* extern */
s32 func_00C5D1F0(s32, s32, u8, M2C_UNK *);         /* extern */
s32 func_00C5D4D0(s32, s32, u8);                    /* extern */
s32 func_00C5D5B0(s32, s32, u8, M2C_UNK *);         /* extern */
s32 func_00C5DAF0(s32, s32, u8);                    /* extern */
s32 func_00C5DB10(s32, s32, u8, M2C_UNK *);         /* extern */
s32 func_00C5DE20(s32, s32, u8);                    /* extern */
s32 func_00C5DFD0(s32, s32, u8);                    /* extern */
s32 func_00C5E140(s32, s32, u8);                    /* extern */
s32 func_00C5E2B0(s32, s32, u8, M2C_UNK *);         /* extern */
extern M2C_UNK func_0036FE20;
extern M2C_UNK func_0036FE60;
extern M2C_UNK func_00370030;
extern M2C_UNK func_00370060;
extern M2C_UNK func_00370090;
extern M2C_UNK func_003700A0;
extern M2C_UNK func_00370170;
extern M2C_UNK func_003701A0;
extern M2C_UNK func_003701D0;
extern M2C_UNK func_00370230;
extern M2C_UNK func_00370260;
extern M2C_UNK func_00370290;
extern M2C_UNK func_003702E0;
extern M2C_UNK func_00370320;

s32 func_00368150(void *arg0, s32 arg1, s32 arg2, u8 arg3, s32 arg4) {
    s32 temp_s6;
    s32 temp_v1;
    s32 var_s5;
    s32 var_s5_2;
    s32 var_s5_3;

    if (arg1 != -1) {
        if (arg2 != -1) {
            M2C_FIELD(arg0, s8 *, 0x31) = 0;
            M2C_FIELD(arg0, u8 *, 0x1B) = 0U;
            M2C_FIELD(arg0, s32 *, 0x34) = 0;
            temp_s6 = M2C_FIELD(arg0, u8 *, 3) != 0xFF;
            if (func_00C5E2B0(arg1, arg2, arg3, &func_00370320) != 0) {
                M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) | 1);
            }
            if (func_00C5E140(arg1, arg2, arg3) != 0) {
                M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) | 2);
            }
            if (func_00C5DFD0(arg1, arg2, arg3) != 0) {
                M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) | 4);
            }
            if (func_00C5DE20(arg1, arg2, arg3) != 0) {
                M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) | 8);
            }
            var_s5 = temp_s6 != 0;
            if (var_s5 != 0) {
                var_s5 = func_00C5DB10(arg1, arg2, M2C_FIELD(arg0, u8 *, 3), &func_003702E0) != 0;
            }
            if ((var_s5 != 0) || (func_00C5DB10(arg1, arg2, arg3, &func_003702E0) != 0)) {
                M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) | 0x10);
            }
            var_s5_2 = temp_s6 != 0;
            M2C_FIELD(arg0, u8 *, 0x1B) = (u8) (M2C_FIELD(arg0, u8 *, 0x1B) | (var_s5 & 0xFF));
            if (var_s5_2 != 0) {
                var_s5_2 = func_00C5DAF0(arg1, arg2, M2C_FIELD(arg0, u8 *, 3)) != 0;
            }
            if ((var_s5_2 != 0) || (func_00C5DAF0(arg1, arg2, arg3) != 0)) {
                M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) | 0x20);
            }
            M2C_FIELD(arg0, u8 *, 0x1B) = (u8) (M2C_FIELD(arg0, u8 *, 0x1B) | (var_s5_2 & 0xFF));
            if (func_00C5D5B0(arg1, arg2, arg3, &func_00370290) != 0) {
                M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) | 0x40);
            }
            if (func_00C5D4D0(arg1, arg2, arg3) != 0) {
                M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) | 0x80);
            }
            var_s5_3 = temp_s6 != 0;
            if (var_s5_3 != 0) {
                var_s5_3 = func_00C5D1F0(arg1, arg2, M2C_FIELD(arg0, u8 *, 3), &func_0036FE60) != 0;
            }
            if ((var_s5_3 != 0) || (func_00C5D1F0(arg1, arg2, arg3, &func_0036FE60) != 0)) {
                M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) | 0x100);
            }
            M2C_FIELD(arg0, u8 *, 0x1B) = (u8) (M2C_FIELD(arg0, u8 *, 0x1B) | (var_s5_3 & 0xFF));
            if (func_00C5CB00(arg1, arg2, arg3, &func_00370260) != 0) {
                M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) | 0x400);
            }
            if (func_00C5C970(arg1, arg2, arg3, &func_00370230) != 0) {
                M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) | 0x800);
            }
            if (func_00C5C690(arg1, arg2, arg3, &func_003701D0) != 0) {
                M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) | 0x1000);
            }
            temp_v1 = M2C_FIELD(arg0, s32 *, 0x34);
            if (temp_v1 & 0x1C00) {
                M2C_FIELD(arg0, s32 *, 0x34) = (s32) (temp_v1 | 0x200);
            }
            if (M2C_FIELD(arg0, s32 *, 0x2C) & 1) {
                M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) | 0x2000);
            }
            if (func_00C5C590(arg1, arg2, arg3, &func_003701A0) != 0) {
                M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) | 0x4000);
            }
            if (func_00C5C460(arg1, arg2, arg3, &func_00370170) != 0) {
                M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) | 0x8000);
            }
            if (func_00C5C340(arg1, arg2, arg3, &func_003700A0) != 0) {
                M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) | 0x10000);
            }
            if (func_00C5C070(arg1, arg2, arg3, &func_0036FE20) != 0) {
                M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) | 0x20000);
            }
            if (func_00C5BF80(arg1, arg2, arg3) != 0) {
                M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) | 0x40000);
            }
            if (func_00C5BEE0(arg1, arg2, arg4, &func_00370090) != 0) {
                M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) | 0x80000);
            }
            if (func_00C5BDC0(arg1, arg2, arg4, &func_00370060) != 0) {
                M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) | 0x100000);
            }
            if (func_00C5BC90(arg1, arg2, arg4, &func_00370030) != 0) {
                M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) | 0x200000);
            }
            if (M2C_FIELD(arg0, s32 *, 0xC) == 2) {
                M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) | 0x400000);
            }
            if (func_00C5BEE0(arg1, arg2, arg4, &func_00370090) != 0) {
                M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) | 0x800000);
            }
            if ((func_00C5B9F0(arg1, arg2, arg3) != 0) || (func_00C5B930(arg1, arg2, arg3) != 0)) {
                M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) | 0x01000000);
            }
            if ((func_00C5B830(arg1, arg2, arg4) != 0) || (func_00C5B730(arg1, arg2, arg4) != 0)) {
                M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) | 0x02000000);
            }
            if (func_00C5B610(arg1, arg2, arg4) != 0) {
                M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) | 0x04000000);
            }
            if (M2C_FIELD(arg0, s32 *, 0xC) == 1) {
                M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) | 0x08000000);
            }
            if ((M2C_FIELD(arg0, s32 *, 0x14) == 3) && (M2C_FIELD(arg0, s32 *, 0x10) == 2) && (M2C_FIELD(arg0, s32 *, 0x24) == 6)) {
                M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) | 0x10000000);
            }
            if (func_003680B0(arg0) != 0) {
                M2C_FIELD(arg0, s8 *, 0x31) = 1;
            }
            return 1;
        }
        goto block_4;
    }
block_4:
    return 0;
}
