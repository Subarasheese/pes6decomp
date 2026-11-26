#ifndef PES6_NTGUI_CONFIG_REQUEST_H
#define PES6_NTGUI_CONFIG_REQUEST_H
#include "types.h"

typedef struct {
    s32 status, option;
    s32 first, second;
    s32 device;
    u8 address[6];
    u8 reserved1A[6];
    s32 profileValue;
    u8 reserved24[12];
    char path[256];
    char secondPath[256];
    char profilePath[256];
    u8 reserved330[0x1000 - 0x330];
} NtguiConfigRequest;

extern char D_011E3980[];
extern NtguiConfigRequest D_011E3A00;
extern char *func_001B02B0(char *destination, const char *source);
extern void func_00158BD8(char *path, s32 *value, s32 profile);
extern s32 func_0019EE30(void *client, s32 command, s32 mode, void *send, s32 sendSize,
                         void *receive, s32 receiveSize, void (*finished)(void *), void *context);

static inline s32 sendConfigRequest(s32 command, NtguiConfigRequest *request) {
    return func_0019EE30(D_011E3980, command, 1, request, sizeof(*request),
                         request, sizeof(*request), 0, 0);
}
#endif
