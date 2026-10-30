/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002F3C70(void *);
extern s32 func_002F38E0(void *, s32);
extern void func_001BC300(void);
extern s32 func_001BC370(s32, s32, s32, s32, s32);
extern void func_002F4D80(s32);
extern void func_002F4CE0(void *, s8);
extern void func_002F3C30(void *);
extern s32 func_002F3A00(void *);
M2C_UNK func_002F4980(void *, void *);              /* extern */
M2C_UNK func_002F4DA0(void *, M2C_UNK);             /* extern */
void *func_002F4E90(M2C_UNK);                       /* extern */
M2C_UNK func_00363C40();                            /* extern */
s32 func_00CDCC70();                                /* extern */
extern char D_00CFEF80[];
extern char D_00CFEF84[];
extern char D_00CFEF88[];
extern char D_00CFEF8C[];
extern M2C_UNK func_00CE3880;
extern M2C_UNK func_00CE38B0;
extern M2C_UNK func_00CE3900;
extern M2C_UNK func_00CE3950;

void func_00CE3480(void *arg0) {
    s32 var_v0;
    void *temp_s0;
    void *temp_v0;

    if (arg0 != NULL) {
        temp_v0 = func_002F4E90(0x17);
        func_002F4DA0(temp_v0, 0);
        if (temp_v0 != NULL) {
            M2C_FIELD(arg0, void **, 0) = temp_v0;
            func_002F3C30(temp_v0);
            func_002F3C70(temp_v0);
            temp_s0 = arg0 + 0x10;
            if (func_00CDCC70() == 0) {
                var_v0 = 0xDF0000;
            } else {
                var_v0 = 0xDF00A5;
            }
            M2C_FIELD(temp_s0, s32 *, 8) = var_v0;
            M2C_FIELD(arg0, s32 *, 0x10) = 2;
            M2C_FIELD(temp_s0, s32 *, 4) = 0;
            M2C_FIELD(arg0, s32 *, 0x24) = 0x6C001A;
            M2C_FIELD(arg0, s32 *, 0x1C) = 2;
            M2C_FIELD(arg0, s32 *, 0x20) = 0;
            M2C_FIELD(arg0, s32 *, 0x78) = 0x6C0006;
            M2C_FIELD(arg0, s32 *, 0x70) = 2;
            M2C_FIELD(arg0, s32 *, 0x74) = 0;
            M2C_FIELD(arg0, s32 *, 0x84) = 0x6C0007;
            M2C_FIELD(arg0, s32 *, 0x7C) = 2;
            M2C_FIELD(arg0, s32 *, 0x80) = 0;
            func_002F4CE0(temp_v0, (s8) M2C_FIELD(arg0, s32 *, 0x110));
            func_002F4980(temp_v0, arg0 + 4);
            func_002F3A00(temp_v0);
            func_002F4D80((s32) temp_v0);
            func_002F38E0(temp_v0, (s32) (arg0 + 4));
            func_001BC300();
            func_00363C40();
            (*(s32 *)D_00CFEF80) = func_001BC370(0, 0, 1, (s32) &func_00CE3950, (s32) arg0);
            (*(s32 *)D_00CFEF84) = func_001BC370(0, 1, 1, (s32) &func_00CE3900, (s32) arg0);
            (*(s32 *)D_00CFEF88) = func_001BC370(0, 5, 0, (s32) &func_00CE38B0, (s32) arg0);
            (*(s32 *)D_00CFEF8C) = func_001BC370(0, 6, 0, (s32) &func_00CE3880, (s32) arg0);
        }
    }
}
