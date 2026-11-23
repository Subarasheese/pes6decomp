/* compiler: ee-gcc-2.96-G0 */
#include "pes6/https/multiprecision.h"
extern void *func_00BF5D40(u32);
extern void func_00BF5C98(void *, s32, u32), func_00BF5CC0(void *, const void *, u32),
    func_00BF5DD0(void *);
void func_00BEF4E8(HttpsMagnitude *v) {
    if (v->digits) {
        func_00BF5C98(v->digits, 0, v->capacity * sizeof(*v->digits));
        func_00BF5DD0(v->digits);
        v->digits = 0;
    }
    v->length = v->capacity = 0;
}
