/* compiler: mwcc-3.0.1b198 */
#include "pes6/m2c.h"

extern void func_001DF460(void *, void *);

extern char D_00AFFA90[];
extern char D_00AFFA94[];
extern char D_00AFFA98[];

void func_00AEDF50(void *arg0, s32 arg1) {
    s32 *entry;

    if (arg1 != 3) {
        if (arg1 != 1) {
            if (arg1 != 2) {
                entry = ((void *)D_00AFFA90);
            } else {
                entry = ((void *)D_00AFFA98);
            }
        } else {
            goto finish;
        }
    } else {
    finish:
        entry = ((void *)D_00AFFA94);
    }
    if (arg0 == NULL) {
        return;
    }
    func_001DF460(M2C_FIELD(arg0, void **, 8), entry);
}
