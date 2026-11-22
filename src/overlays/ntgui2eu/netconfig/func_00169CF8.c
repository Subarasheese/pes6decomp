/* compiler: ee-gcc-2.9 */
#include "types.h"

extern s32 func_00163C30(void *, s32);
extern s32 *func_00169F88(void *, s32 *);
extern void *func_00165B00(void *);
extern void func_00167DA8(s32, s32);
extern s32 D_005BFE2C[];

void func_00169CF8(int arg0) {
    int value;
    int *arg1;
    void *pvVar2;

    if (*(void **)arg0 != 0) {
        value = func_00163C30(*(void **)arg0, D_005BFE2C[0]);
        if (value != 0) {
            for (arg1 = func_00169F88(*(void **)arg0, (int *)0x0); arg1 != (int *)0x0;
                 arg1 = func_00169F88(pvVar2, arg1)) {
                pvVar2 = *(void **)arg0;
                if (arg1[4] == *(int *)((int)pvVar2 + 0x864)) {
                    func_00169CF8((int)pvVar2 + 0x864);
                    break;
                }
            }
        }
        pvVar2 = func_00165B00(*(void **)arg0);
        func_00167DA8((int)pvVar2, *(int *)arg0);
        *(u32 *)arg0 = 0;
    }
}
