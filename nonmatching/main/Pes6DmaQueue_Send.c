/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern void func_0010F420(void);
extern void func_0010F470(void);
extern void func_00145200(void *);
extern char D_00500F80[];
extern char D_00503028[];

void Pes6DmaQueue_Send(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *temp_s0;
    u32 *node;

    temp_s0 = (u8 *)D_00500F80 + (arg0 * 0xC) + 0x2000;
    func_0010F420();
    for (;;) {
        node = *(u32 **)D_00503028;
        if (node != NULL) {
            *(u32 *)D_00503028 = *node;
        }
        if (node != NULL) {
            break;
        }
        func_0010F470();
        func_0010F420();
    }
    node[0] = 0;
    *(u8 *)((u8 *)node + 4) = 1;
    *(u8 *)((u8 *)node + 5) = arg0;
    *(u8 *)((u8 *)node + 6) = arg1;
    *(u8 *)((u8 *)node + 7) = arg3;
    *(s32 *)((u8 *)node + 8) = arg2;
    if (*(u32 **)(temp_s0 + 4) == NULL) {
        *(u32 **)temp_s0 = node;
    } else {
        **(u32 **)(temp_s0 + 4) = (u32)node;
    }
    *(u32 **)(temp_s0 + 4) = node;
    if (node == *(u32 **)temp_s0) {
        func_00145200(temp_s0);
    }
    func_0010F470();
}
