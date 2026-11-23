/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef struct Packet Packet;
typedef struct {
    u8 reserved00[8];
    void *texture;
    u8 reserved0c[4];
    s64 packetKey;
    u8 reserved18, mode;
} TextureBinding;
typedef struct RenderItem RenderItem;
struct RenderItem {
    u8 reserved00[8];
    RenderItem *next;
    u8 reserved0c[0xc4];
    TextureBinding *binding;
    u8 reservedD4[0x48];
    u8 enabled, flags;
};
typedef struct {
    u8 reserved00[0x1c];
    Packet *packet;
} RenderContext;
typedef struct {
    RenderItem *head;
    u8 reserved04[8];
    RenderContext *context;
    u32 mode;
    u8 reserved14[0x20];
    u16 count;
} RenderPass;
extern s32 func_001ECBF0(RenderPass *);
extern s32 Pes6Texture_GetCacheKey(void *);
extern s64 func_00138C10(Packet *, s32);
extern void func_00103538(Packet *, u32), func_001E6360(Packet *, s32, s32),
    func_001E6310(Packet *, s32);
extern void func_001ECC80(Packet *, RenderPass *);
void func_001ECAA0(RenderPass *pass) {
    Packet *packet;
    RenderItem *item;
    u32 mode;
    u8 kind;
    TextureBinding *binding;
    TextureBinding *previous;
    packet = pass->context->packet;
    if (pass && pass->count && func_001ECBF0(pass)) {
        mode = pass->mode;
        if (mode & 1) {
            previous = 0;
            if (mode == 1 || mode == 3) {
                item = pass->head;
                do {
                    if (item->enabled && !((item->flags >> 1) & 1)) {
                        binding = item->binding;
                        kind = binding->mode;
                        if (kind != 1 && kind != 2 && previous != binding) {
                            previous = binding;
                            binding->packetKey =
                                func_00138C10(packet, Pes6Texture_GetCacheKey(binding->texture));
                        }
                    }
                    item = item->next;
                } while (item);
            }
            func_00103538(packet, 0);
        }
        func_001E6360(packet, pass->mode, 1);
        func_001ECC80(packet, pass);
        func_001E6310(packet, pass->mode);
    }
}
