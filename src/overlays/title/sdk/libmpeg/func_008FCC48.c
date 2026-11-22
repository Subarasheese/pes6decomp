/* compiler: ee-gcc-2.9-G0 */
/* MPEG decoder source adapted from OpenRAC/rac-deadlocked-decomp, src/core/00143040.c.
 * See THIRD_PARTY.md for provenance and terms. */
#include "types.h"

typedef struct State {
    u8 prefix[0x108];
    s32 status;
    u8 unknown10C[0x54];
    s32 kind;
    u8 unknown164[0x20];
    s32 format;
    u8 unknown188[0x40];
    void *block1C8;
    void *block1CC;
    void *block1D0;
    void *block1D4;
    void *block1D8;
    void *block1DC;
    void *block1E0;
    void *block1E4;
    void *block1E8;
    void *block1EC;
    void *block1F0;
    void *block1F4;
} State;

extern void func_008FC4A8(State *state, void *block, s32 index);
extern void func_008FC768(State *state, void *first, void *second, s32 index);

void func_008FCC48(State *state, s32 index, s32 enabled) {
    if (enabled) {
        if (state->format == 3) {
            void *block = state->kind == 3 ? state->block1D4 : state->block1C8;
            func_008FC4A8(state, block, (s32)((u32)index - 1u));
        } else {
            void *first;
            void *second;

            if (state->kind == 3) {
                first = state->block1E4;
                second = state->block1F4;
            } else {
                first = state->block1D8;
                second = state->block1E8;
            }
            func_008FC768(state, first, second, (s32)((u32)index - 1u));
        }
    }
    if (state->status == 1) {
        state->status = 2;
    }
}
