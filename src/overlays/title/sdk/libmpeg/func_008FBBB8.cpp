/* compiler: ee-gcc-2.9-G0 */
/* Adapted from OpenThievius/sly2-decomp, src/sdk/sceMpegGetPicture.cpp. See THIRD_PARTY.md. */
// SPDX-License-Identifier: GPL-3.0-or-later
typedef struct MpegState {
    char pad0[0xC4];
    int field0C4;
    char pad0C8[0xEC - 0xC8];
    unsigned field0EC;
    unsigned field0F0;
    unsigned field0F4;
    unsigned field0F8;
} MpegState;
typedef struct MpegHandle {
    char pad0[0x40];
    MpegState *state;
} MpegHandle;
extern "C" int func_008FB318(MpegHandle *handle);
extern "C" int func_008FBBB8(MpegHandle *handle, unsigned destination, unsigned size) {
    MpegState *state = handle->state;
    state->field0C4 = 1;
    state->field0EC = (destination & 0xFFFFFFF) | 0x20000000;
    state->field0F8 = size;
    state->field0F4 = 0;
    state->field0F0 = 0;
    return func_008FB318(handle);
}
