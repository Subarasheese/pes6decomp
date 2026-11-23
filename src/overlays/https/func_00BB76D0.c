/* compiler: ee-gcc-2.9-as210-G0 */
/* OpenSSL_0_9_1c, crypto/objects/o_names.c, OBJ_NAME_new_index. See THIRD_PARTY.md. */
#include "pes6/https/object_names.h"

extern int strcmp(const char *, const char *);
extern unsigned long func_00BB6818(char *c);
extern STACK *func_00BD9A70(int (*cmp)());
extern int func_00BD9E98(STACK *st, char *data);
extern int D_00C3DAC4;
extern STACK *D_00C3DAC8;
extern STACK *D_00C3DACC;
extern STACK *D_00C3DAD0;
int func_00BB76D0(unsigned long (*hash_func)(), int (*cmp_func)(), void (*free_func)()) {
    int ret;
    int i;
    if (D_00C3DAD0 == ((void *)0)) {
        D_00C3DACC = func_00BD9A70((void *)0);
        D_00C3DAC8 = func_00BD9A70((void *)0);
        D_00C3DAD0 = func_00BD9A70((void *)0);
    }
    if (((D_00C3DAD0 == ((void *)0)) || (D_00C3DACC == ((void *)0))) ||
        (D_00C3DAC8 == ((void *)0))) {
        return 0;
    }
    ret = D_00C3DAC4;
    D_00C3DAC4++;
    for (i = D_00C3DAD0->num; i < D_00C3DAC4; i++) {
        func_00BD9E98(D_00C3DACC, (char *)strcmp);
        func_00BD9E98(D_00C3DAC8, (char *)func_00BB6818);
        func_00BD9E98(D_00C3DAD0, (void *)0);
    }

    if (hash_func != ((void *)0))
        D_00C3DACC->data[ret] = (char *)hash_func;
    if (cmp_func != ((void *)0))
        D_00C3DAC8->data[ret] = (char *)cmp_func;
    if (free_func != ((void *)0))
        D_00C3DAD0->data[ret] = (char *)free_func;
    return ret;
}
