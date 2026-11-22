/* compiler: ee-gcc-2.9-G0 */
/* SPDX-License-Identifier: GPL-3.0-or-later */
/* Adapted from OpenThievius/sly2-decomp, src/sdk/scePadInit.cpp. See THIRD_PARTY.md. */
extern "C" {
struct PadClient { char pad0[0x24]; int serverReady; };
int func_0019EC50(PadClient *client, int serverId, int mode);
int func_00195768();
int func_00194438(int arg);
int func_0019DBD0(const char *format, ...);
extern int D_005CA9E0;
extern int D_005CA9E4;
extern PadClient D_011FD4C0[2];
int func_001942B0(int arg) {
    int delay;
    int version;
    int major;
    D_005CA9E0 = 1;
    for (;;) {
        func_0019EC50(&D_011FD4C0[0], 0x80000100, 0);
        if (D_011FD4C0[0].serverReady != 0) {
            break;
        }
        for (delay = 0x10000; delay != -1; delay--) {
        }
    }
    for (;;) {
        func_0019EC50(&D_011FD4C0[1], 0x80000101, 0);
        if (D_011FD4C0[1].serverReady != 0) {
            break;
        }
        for (delay = 0x10000; delay != -1; delay--) {
        }
    }
    version = func_00195768();
    major = version >> 8;
    if (major != 4) {
        if (D_005CA9E4 != 0) {
            func_0019DBD0("libpad: Module version mismatch ");
            func_0019DBD0("[libpad.a = %d.%d, padman.irx = %d.%d]\n", 4, 0, major, version & 0xFF);
        }
        return 0;
    }
    return func_00194438(arg);
}
}
