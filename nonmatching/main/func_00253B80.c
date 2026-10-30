/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_0015CBF8(int, int);
extern int func_0015D668(int, int, int);
extern int func_0015DE78(int);
extern int func_0015D0B8(int);
extern int func_0015DC50(int);
M2C_UNK func_00251D60();                            /* extern */
M2C_UNK func_00252000();                            /* extern */
M2C_UNK func_00252880();                            /* extern */
M2C_UNK func_00253180();                            /* extern */
M2C_UNK func_002534E0();                            /* extern */
M2C_UNK func_00254590();                            /* extern */
extern s32 D_003E9B5C;
extern s32 D_003E9B60;
extern s32 D_003E9B64;
extern s32 D_003E9B70;
extern s32 D_003E9B98;
extern s32 D_003E9BB8;
extern char D_0058C5A0[];

void func_00253B80(void) {
    func_00254590();
    func_00252880();
    func_00251D60();
    func_00252000();
    func_00253180();
    func_002534E0();
    switch (D_003E9B5C) {                           /* irregular */
    case 3:
        if (func_0015DE78(D_003E9B70) != 2) {
            func_0015D0B8(D_003E9B70);
            D_003E9B5C = 0;
            D_003E9B98 = 1;
        }
        break;
    case 2:
        func_0015D668(D_003E9B70, func_0015DC50(D_003E9B70), D_003E9BB8);
        D_003E9B5C += 1;
        break;
    case 1:
        D_003E9B70 = func_0015CBF8((s32) ((void *)D_0058C5A0), 0);
        D_003E9B5C += 1;
        break;
    }
    if (D_003E9B60 < D_003E9B64) {
        D_003E9B60 = D_003E9B64;
    }
}
