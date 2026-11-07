/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct { u8 pad[0x48]; u8 b[9]; u8 pad2[0x5C - 0x51]; } Row;

extern Row *func_00223A70(void);

static inline Row *get_row(s32 i) {
    if (i < 9) {
        return &func_00223A70()[i];
    }
    return 0;
}

static inline u8 *get_cell(s32 i, s32 j) {
    Row *r = get_row(i);
    if (r == 0) {
        return 0;
    }
    if (j < 9) {
        return &r->b[j];
    }
    return 0;
}

u8 func_002F7EA0(s32 i, s32 j) {
    u8 *p = get_cell(i, j);
    if (p == 0) {
        return 0;
    }
    return *p;
}
