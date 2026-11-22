/* compiler: ee-gcc-2.9-as210-G0 */
/* kira-502/dotr-decomp, src/sdk/libvu0_1.c (sceVif1PkOpenDirectHLCode). See THIRD_PARTY.md. */
#include "types.h"
typedef struct {
    u32 *cursor;
    u32 reserved04[2];
    u32 *direct;
} VifPacket;
extern void func_00103850(VifPacket *, s32, s32);
void func_00103B00(VifPacket *packet, s32 interrupt) {
    u32 *code;
    func_00103850(packet, 2, 3);
    code = packet->cursor;
    packet->direct = code;
    packet->cursor = code + 1;
    *code = interrupt ? 0xd1000000U : 0x51000000U;
}
