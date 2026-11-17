/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
extern char D_00CBD7A0[];
extern char D_00CBD7A4[];
extern char D_00CBD7A8[];

void func_00BF9A50(void) {
    s32 (*fn)(void);
    s32 a1;
    s32 s1;
    s32 s0;
    s32 *node;

    fn = *(s32 (**)(void))D_00CBD7A4;
    if (fn != 0) {
        if (fn() == 1) {
            *(s32 *)D_00CBD7A4 = 0;
            a1 = *(s32 *)D_00CBD7A4;
            s1 = 0;
            if (a1 == 0) {
                node = *(s32 **)D_00CBD7A8;
                if (node != 0) {
                    s0 = node[1];
                    s1 = node[0];
                    func_00153FA0(node);
                    *(s32 *)D_00CBD7A8 = s0;
                }
                a1 = s1;
            }
            *(s32 *)D_00CBD7A4 = a1;
            *(s8 *)D_00CBD7A0 = 2;
        } else {
            *(s8 *)D_00CBD7A0 = 1;
        }
    } else {
        *(s8 *)D_00CBD7A0 = 0;
    }
}
