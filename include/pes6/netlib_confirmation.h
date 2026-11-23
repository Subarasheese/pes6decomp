#ifndef PES6_NETLIB_CONFIRMATION_H
#define PES6_NETLIB_CONFIRMATION_H
#include "pes6/netlib_dialog.h"
typedef struct {
    s8 status;
    u8 reserved[7];
    char text[1];
} NetworkDialogEvent;
extern void *func_001C48E8(void *destination, s32 byte, u32 size);
extern s32 sprintf(char *, const char *, ...);
extern s32 func_0082C8A0(s32 event);
extern s32 func_008183F0(const char *text, float, float, s32 firstLabel, s32 secondLabel, s32, s32,
                         float, float, s32, s32, s32, s32, s32, s32, s32, s32, s32);
static inline void releaseNetworkConfirmation(void) {
    if (func_00818740() == 1)
        func_00818750();
    if (func_00817B70() == 1)
        func_00817B80();
}
static inline void releaseRemoteConfirmation(void) {
    if (func_00818740() == 1)
        func_008187D0();
    if (func_00817B70() == 1)
        func_00817C00();
}
static inline s32 displayConfirmation(const char *text, s32 layout, s32 toggle, s32 local) {
    s32 firstLabel = func_001F08B0(0x6c0006);
    s32 secondLabel = func_001F08B0(0x6c0007);
    return func_008183F0(text, 4.0f, 8.0f, firstLabel, secondLabel, 0, 0, 4.0f, 1062.5f, 1, 0, 0, 1,
                         1, layout, toggle, local, 1);
}
#endif
