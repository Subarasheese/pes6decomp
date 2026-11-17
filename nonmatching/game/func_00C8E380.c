/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
extern void func_001D4E00(void *);
extern void func_001F1EA0(void *);
extern void func_001C48E8(char *, s32, s32);
extern void func_002DC1D0(s32);
extern void func_002DF960(s32);
extern char D_00CCD570[];
extern char D_00CCD888[];
extern char D_00CCD898[];
extern char D_00CCD89C[];

void func_00C8E380(void) {
    char *var_s0;
    char *var_s1;
    s32 var_s2;
    s32 var_s3;

    var_s3 = 0;
    var_s1 = D_00CCD570;
    do {
        func_002DF960(*(s32 *)(var_s1 + 0xB4));
        func_002DF960(*(s32 *)(var_s1 + 0xB8));
        func_002DC1D0(*(s32 *)(var_s1 + 0x174));
        var_s2 = 0;
        var_s0 = var_s1;
        do {
            func_001D7F10(*(void **)(var_s0 + 0x180));
            var_s2 += 1;
            var_s0 += 4;
        } while (var_s2 < 3);
        func_001C48E8(var_s1, 0, 0x18C);
        var_s3 += 1;
        var_s1 += 0x18C;
    } while (var_s3 < 2);
    func_001D7F10(*(void **)D_00CCD89C);
    *(void **)D_00CCD89C = NULL;
    func_001D4E00(*(void **)D_00CCD898);
    *(void **)D_00CCD898 = NULL;
    func_001F1EA0(*(void **)D_00CCD888);
    *(void **)D_00CCD888 = NULL;
}
