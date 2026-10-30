/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"
typedef int s128 __attribute__((mode(TI)));
typedef unsigned int u128 __attribute__((mode(TI)));
typedef char Check128Width[sizeof(s128)==16?1:-1];

extern void func_00143170(void);
extern void func_00143140(void);
extern void func_00143160(void);
M2C_UNK func_00141470(void *, s32);                 /* extern */
s32 func_001420F0(void *, s32);                     /* extern */
M2C_UNK func_00142320(void *, s32);                 /* extern */
M2C_UNK func_001423D0(void *, s32, s32, s128, s128, s128, s128, s128); /* extern */
M2C_UNK func_001424E0(M2C_UNK);                     /* extern */
M2C_UNK func_00142630();                            /* extern */
M2C_UNK func_001426C0();                            /* extern */
M2C_UNK func_00144470(void *, s32);                 /* extern */
extern void *D_003E97FC;
extern s32 D_003E9800;
extern s32 D_003E9804;
extern char D_004FDFD0[];
extern char D_004FDFE0[];
extern char D_004FDFF0[];
extern char D_004FE000[];
extern char D_004FE010[];
extern char D_004FE020[];
extern char D_004FE030[];
extern char D_004FE040[];
extern char D_004FE050[];
extern char D_004FE060[];
extern char D_004FE070[];

void func_001428B0(void *arg0, s32 arg1, s32 arg2) {
    func_001426C0();
    M2C_FIELD(D_003E97FC, s128 *, 0xD0) = (s128) (*(s128 *)D_004FDFD0);
    M2C_FIELD(D_003E97FC, s128 *, 0xE0) = (s128) (*(s128 *)D_004FDFE0);
    M2C_FIELD(D_003E97FC, s128 *, 0x90) = (s128) (*(s128 *)D_004FE030);
    M2C_FIELD(D_003E97FC, s128 *, 0xA0) = (s128) (*(s128 *)D_004FE040);
    M2C_FIELD(D_003E97FC, s128 *, 0xB0) = (s128) (*(s128 *)D_004FE050);
    M2C_FIELD(D_003E97FC, s128 *, 0xC0) = (s128) (*(s128 *)D_004FE060);
    M2C_FIELD(D_003E97FC, s128 *, 0xF0) = (s128) (*(s128 *)D_004FDFF0);
    M2C_FIELD(D_003E97FC, s128 *, 0x100) = (s128) (*(s128 *)D_004FE000);
    M2C_FIELD(D_003E97FC, s128 *, 0x110) = (s128) (*(s128 *)D_004FE010);
    M2C_FIELD(D_003E97FC, s128 *, 0x120) = (s128) (*(s128 *)D_004FE020);
    M2C_FIELD(D_003E97FC, s64 *, 0x138) = (s64) (*(s64 *)D_004FE070);
    func_001423D0(arg0, arg1, arg2, (*(s128 *)D_004FE020), (*(s128 *)D_004FE010), (*(s128 *)D_004FE000), (*(s128 *)D_004FDFF0), (*(s128 *)D_004FE060));
    if (func_001420F0(arg0, arg1) == 0) {
        D_003E9800 = 1;
        func_00142320(arg0, arg1);
        func_00143140();
        if (M2C_FIELD(arg0, s32 *, 0x44) != 0) {
            func_00141470(arg0, arg1);
        }
        func_001424E0(0);
        D_003E9804 = 0;
        func_00143170();
        func_00144470(arg0, arg1);
        func_00143160();
        return;
    }
    func_00142630();
}
