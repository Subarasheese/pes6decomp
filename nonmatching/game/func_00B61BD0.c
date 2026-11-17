/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_00CBCB32[];
extern char D_00CBCB34[];
extern char D_00591BE4[];
extern s32 func_009E1C90(s32 a0);
extern void func_009E1CB0(s32 a0);
extern void func_00B5D540(void);
extern void func_00B5C240(void);
extern void func_00B5D280(void);
extern void func_00B5C9E0(void);
extern void func_00AD0A20(void);
extern void func_00286A60(void);
extern void func_00B5C550(void);
extern s32 func_00152130(s32 a0, s32 a1);
extern void func_009B43E0(void);
void func_00B61BD0(void) {
    u32 s = func_009E1C90(3) & 0xFF;
    if (s == 0) {
        func_00B5D540();
    } else {
        if (s == 1) {
            func_00B5C240();
            if (*(u16 *)D_00CBCB32 == 6) func_009E1CB0(3);
        } else if (s == 2) {
            func_00B5D280();
        } else if (s == 3) {
            func_00B5C9E0();
        } else if (s == 4) {
            func_00AD0A20();
            if ((*(u16 *)D_00CBCB34 & 2) == 0) func_00286A60();
            if (func_00152130(1, ((60 / *(u8 *)D_00591BE4) << 5) & 0xFF) == 1) func_009E1CB0(3);
        } else if (s == 5) {
            func_00B5C550();
        }
    }
    if ((func_009E1C90(3) & 0xFF) > 0) func_009B43E0();
}
