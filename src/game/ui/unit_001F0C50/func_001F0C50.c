/* compiler: mwcc-3.0.1b151 */
#pragma opt_repositioncode off
#include "types.h"

typedef struct sceVifPacket sceVifPacket;
typedef struct {
    u8 reserved00[0x1c];
    sceVifPacket *packet;
} RenderContext;

typedef struct RenderNode RenderNode;
struct RenderNode {
    u8 reserved00[2];
    u8 enabled;
    u8 reserved03[0x19];
    RenderContext *context;
    u8 reserved20[0x0c];
    RenderNode *firstChild;
    u8 reserved30[8];
    RenderNode *next;
    u8 reserved3c[4];
    void (*draw)(RenderNode *);
};

extern void func_001F3AE0(s32 packetAddress);
extern void func_00103538(sceVifPacket *packet, u32 flag);
extern void func_001E6360(void *packet, s32 mode, s32 enabled);
extern void func_001F0D10(sceVifPacket *packet, RenderNode *node);
extern void func_001E6310(s32 packetAddress, s32 mode);

void func_001F0C50(RenderNode *node) {
    RenderContext *context = node->context;
    sceVifPacket *packet = context->packet;
    RenderNode *child;

    if (node->enabled) {
        func_001F3AE0((s32)packet);
        func_00103538(packet, 0);
        func_001E6360(packet, 1, 1);
        func_001F0D10(packet, node);
        func_001E6310((s32)packet, 1);
        child = node->firstChild;
        if (child) {
            do {
                child->context->packet = packet;
                child->draw(child);
                child = child->next;
            } while (child);
        }
    }
}
