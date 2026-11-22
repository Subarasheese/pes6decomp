/* compiler: ee-gcc-2.96-G0-g */
/* g-guthrie/mvc2-port-and-decomp src/nq26_c.c (func_0040AE10). See THIRD_PARTY.md. */
#include "types.h"
typedef struct {
    s8 a, b;
} T2;
extern s8 D_00387260[];
extern s8 D_003CA780[];

extern void func_00121430(s8 *, s8 *);
extern s32 func_001C80F0(s8 *);

void func_00170248(s8 *s) {
    if (s == 0) {
        D_00387260[0] = 0;
        return;
    }
    if (s[0] != '/' && s[0] != '\\') {
        *(T2 *)D_00387260 = *(T2 *)D_003CA780;
    } else {
        D_00387260[0] = 0;
    }
    func_00121430(D_00387260, s);
    {
        s8 c = s[func_001C80F0(s) - 1];
        if (c == '/' || c == '\\') {
            D_00387260[func_001C80F0(D_00387260) - 1] = 0;
        }
    }
}
