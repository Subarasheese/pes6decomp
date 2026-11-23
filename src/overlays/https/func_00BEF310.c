/* compiler: ee-gcc-2.96-G0 */
#include "pes6/https/multiprecision.h"
extern void *func_00BF5D40(u32);
extern void func_00BF5C98(void *, s32, u32), func_00BF5CC0(void *, const void *, u32),
    func_00BF5DD0(void *);
s32 func_00BEF310(s32 capacity, HttpsMagnitude *v) {
    u64 *next;
    s32 bytes = capacity * sizeof(*next);
    if (v->capacity >= capacity)
        return 0;
    if (!v->digits) {
        v->capacity = capacity;
        v->digits = func_00BF5D40(bytes);
        if (!v->digits) {
            v->capacity = 0;
            return 0x100;
        }
        return 0;
    }
    next = func_00BF5D40(bytes);
    if (next) {
        func_00BF5CC0(next, v->digits, v->length * sizeof(*next));
        func_00BF5C98(v->digits, 0, v->capacity * sizeof(*next));
        func_00BF5DD0(v->digits);
        v->capacity = capacity;
        v->digits = next;
        return 0;
    }
    func_00BF5C98(v->digits, 0, v->capacity * sizeof(*next));
    func_00BF5DD0(v->digits);
    v->length = v->capacity = 0;
    v->digits = 0;
    return 0x100;
}
