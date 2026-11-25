/* compiler: mwcc-3.0.1b198 */
#include "types.h"

extern void func_0027C9C0(s32, s32), func_001A5C70(void), func_00909B50(s32, s32);
extern u8 D_0092F040[];
typedef struct {
    u32 current, pending, confirmed;
} Selection;
extern Selection D_0092F028[];
extern Selection D_0092F034[];
extern Selection D_0092F010[];
extern Selection D_0092F01C[];

static inline u16 clearPendingSelection(void) {
    if (!(D_0092F040[0] & 4))
        return 1;
    D_0092F040[0] &= ~4;
    return 1;
}

s32 func_0090DAF0(u32 changes) {
    if ((changes & 0x2000) && D_0092F028[0].confirmed &&
        D_0092F028[0].confirmed == D_0092F028[0].pending &&
        D_0092F028[0].confirmed != D_0092F028[0].current) {
        func_0027C9C0(0, 1);
        {
            u32 old = D_0092F028[0].current;
            D_0092F028[0].current = D_0092F028[0].pending;
            D_0092F028[0].pending = old;
            func_00909B50(D_0092F028[0].current, D_0092F028[0].pending);
        }
    }
    if ((changes & 0x4000) && D_0092F034[0].confirmed &&
        D_0092F034[0].confirmed == D_0092F034[0].pending &&
        D_0092F034[0].confirmed != D_0092F034[0].current) {
        func_0027C9C0(5, 6);
        {
            u32 old = D_0092F034[0].current;
            D_0092F034[0].current = D_0092F034[0].pending;
            D_0092F034[0].pending = old;
        }
    }
    if ((changes & 0x8000) && D_0092F010[0].confirmed &&
        D_0092F010[0].confirmed == D_0092F010[0].pending &&
        D_0092F010[0].confirmed != D_0092F010[0].current) {
        func_001A5C70();
        D_0092F010[0].current = D_0092F010[0].pending;
        D_0092F010[0].pending = 0;
    }
    if ((changes & 0x10000) && D_0092F01C[0].confirmed &&
        D_0092F01C[0].confirmed == D_0092F01C[0].pending &&
        D_0092F01C[0].confirmed != D_0092F01C[0].current) {
        func_0027C9C0(2, 3);
        {
            u32 old = D_0092F01C[0].current;
            D_0092F01C[0].current = D_0092F01C[0].pending;
            D_0092F01C[0].pending = old;
        }
    }
    if ((changes & 0xfc) && !clearPendingSelection())
        return 0;
    return 1;
}
