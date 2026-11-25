/* compiler: mwcc-3.0.1b151 */
#include "pes6/lobby_request.h"
#include "pes6/lobby_clock.h"

typedef struct {
    s32 reserved00, offset;
} ClockSettings;
extern ClockSettings D_008AA13C[];

static inline ClockSettings *get_ctx(void) {
    if (func_0082C2A0() == 0) {
        return 0;
    }
    return D_008AA13C;
}

static inline ClockSettings *get_ctx2(void) {
    ClockSettings *p = get_ctx();
    if (p == 0) {
        return 0;
    }
    return p;
}

void func_008320B0(void) {
    ClockSettings *p = get_ctx2();
    s32 v;

    if (p == 0) {
        v = 0;
    } else {
        v = p->offset;
    }
    func_00827C70(v - 300 + func_00828140());
}
