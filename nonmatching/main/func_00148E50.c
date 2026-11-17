/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern void func_001299A0(u8 *p);
extern s32 func_001299B0(s32 a, s32 b);
extern u8 *func_00129A10(s32 n);
extern void func_00146C70(void *a, void *b, s32 c, void *d, void *e);
extern s32 func_001493F0(s32 a, s32 b);
extern void func_001C4730(void *d, s32 s, s32 n);
extern char D_003C6A70[], D_003C6A90[], D_003C6AB0[], D_003C6C30[], D_003C6E18[], D_003C6E30[];
extern char D_003C70E0[], D_003C70F0[], D_003C7130[], D_003C7160[], D_003C7190[];
extern char D_0050AD90[], D_0050ADE8[];

s32 func_00148E50(s32 arg0, s32 arg1, s32 *arg2, s32 arg3, void *arg4, s32 arg5) {
    u8 *flags;
    s32 *node;
    s32 *p;
    s32 *q;
    s32 i, cnt, j, off;
    s32 *list;
    s32 *buf;
    s32 *dst;

    if (arg1 == 0 || arg2 == 0) {
        func_00146C70(D_003C7130, D_003C6AB0, arg1, arg2, arg4);
        return 0;
    }
    if (*(u8 *)(D_0050ADE8 + arg0 * 0x44) == 0) {
        func_00146C70(D_003C7190, D_003C6AB0, arg0, (void *)arg3, arg4);
        return 0;
    }
    flags = func_00129A10(arg1);
    if (flags == 0) {
        func_00146C70(D_003C6C30, D_003C6A70, 0xCB, D_003C6E18, D_003C6E30);
        while (1) {}
    }
    i = 0;
    cnt = 0;
    if (arg1 > 0) {
        p = arg2;
        do {
            if (func_001493F0(0, *p) == 0 && func_001493F0(1, *p) == 0) {
                flags[i] = 1;
                cnt++;
            } else {
                func_00146C70(D_003C7160, D_003C6AB0, *p, 0, 0);
                flags[i] = 0;
            }
            i++;
            p++;
        } while (i < arg1);
    }
    if (cnt == 0) {
        func_001299A0(flags);
        func_00146C70(D_003C6C30, D_003C6AB0, 0x1DD, D_003C70E0, D_003C70F0);
        while (1) {}
    }
    node = (s32 *)func_00129A10(0x18);
    if (node == 0) {
        func_00146C70(D_003C6C30, D_003C6A70, 0xCB, D_003C6E18, D_003C6E30);
        while (1) {}
    }
    node[1] = cnt;
    buf = (s32 *)func_001299B0(node[1], 4);
    if (buf == 0) {
        func_00146C70(D_003C6C30, D_003C6A90, 0xD5, D_003C6E18, D_003C6E30);
        while (1) {}
    }
    node[2] = (s32)buf;
    if (arg1 > 0) {
        j = 0;
        off = 0;
        p = arg2;
        do {
            if (flags[j] != 0) {
                *(s32 *)((u8 *)node[2] + off) = *p;
                off += 4;
            }
            j++;
            p++;
        } while (j < arg1);
    }
    node[3] = arg3;
    *(u8 *)((u8 *)node + 0x14) = arg0;
    if (arg4 != 0 && arg5 != 0) {
        u8 *c = func_00129A10(arg5);
        if (c == 0) {
            func_00146C70(D_003C6C30, D_003C6A70, 0xCB, D_003C6E18, D_003C6E30);
            while (1) {}
        }
        node[4] = (s32)c;
        func_001C4730((void *)node[4], (s32)arg4, arg5);
    } else {
        node[4] = 0;
    }
    if (*(s32 *)D_0050AD90 != 0) {
        **(s32 **)(D_0050AD90 + 4) = (s32)node;
    } else {
        *(s32 *)D_0050AD90 = (s32)node;
    }
    node[0] = 0;
    *(s32 *)(D_0050AD90 + 4) = (s32)node;
    *(u8 *)(D_0050AD90 + 8) = *(u8 *)(D_0050AD90 + 8) + 1;
    *(u8 *)(D_0050AD90 + 9) = *(u8 *)(D_0050AD90 + 9) + (arg1 & 0xFF);
    func_001299A0(flags);
    return 1;
}
