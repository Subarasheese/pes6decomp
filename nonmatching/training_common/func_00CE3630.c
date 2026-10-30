/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001BC300();                            /* extern */
s32 func_001BC370(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *, void *); /* extern */
M2C_UNK func_002F38E0(s32, void *);                 /* extern */
M2C_UNK func_002F3A00(s32);                         /* extern */
M2C_UNK func_002F3C30(s32, M2C_UNK);                /* extern */
M2C_UNK func_002F3C70(s32, M2C_UNK);                /* extern */
M2C_UNK func_002F4980(s32, void *);                 /* extern */
M2C_UNK func_002F4CE0(s32, s32);                    /* extern */
M2C_UNK func_002F4D80(s32, M2C_UNK);                /* extern */
M2C_UNK func_002F4DA0(s32, M2C_UNK);                /* extern */
s32 func_002F4E90(M2C_UNK);                         /* extern */
M2C_UNK func_00363C40();                            /* extern */
extern char D_00CFEF80[];
extern char D_00CFEF84[];
extern char D_00CFEF88[];
extern char D_00CFEF8C[];
extern M2C_UNK func_00CE3880;
extern M2C_UNK func_00CE38B0;
extern M2C_UNK func_00CE3900;
extern M2C_UNK func_00CE3950;

void func_00CE3630(void *arg0) {
    s32 temp_v0;

    if (arg0 != NULL) {
        temp_v0 = func_002F4E90(0x17);
        func_002F4DA0(temp_v0, 0);
        if (temp_v0 != 0) {
            M2C_FIELD(arg0, s32 *, 0) = temp_v0;
            func_002F3C30(temp_v0, 1);
            func_002F3C70(temp_v0, 0);
            M2C_FIELD(arg0, s32 *, 0x18) = 0x1700AE;
            M2C_FIELD(arg0, s32 *, 0x10) = 2;
            M2C_FIELD(arg0, s32 *, 0x14) = 0;
            M2C_FIELD(arg0, s32 *, 0x78) = 0x6C0006;
            M2C_FIELD(arg0, s32 *, 0x70) = 2;
            M2C_FIELD(arg0, s32 *, 0x74) = 0;
            M2C_FIELD(arg0, s32 *, 0x84) = 0x6C0007;
            M2C_FIELD(arg0, s32 *, 0x7C) = 2;
            M2C_FIELD(arg0, s32 *, 0x80) = 0;
            func_002F4CE0(temp_v0, M2C_FIELD(arg0, s32 *, 0x110));
            func_002F4980(temp_v0, arg0 + 4);
            func_002F3A00(temp_v0);
            func_002F4D80(temp_v0, 1);
            func_002F38E0(temp_v0, arg0 + 4);
            func_001BC300();
            func_00363C40();
            (*(s32 *)D_00CFEF80) = func_001BC370(0, 0, 1, &func_00CE3950, arg0);
            (*(s32 *)D_00CFEF84) = func_001BC370(0, 1, 1, &func_00CE3900, arg0);
            (*(s32 *)D_00CFEF88) = func_001BC370(0, 5, 0, &func_00CE38B0, arg0);
            (*(s32 *)D_00CFEF8C) = func_001BC370(0, 6, 0, &func_00CE3880, arg0);
        }
    }
}
