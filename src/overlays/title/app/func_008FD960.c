/* compiler: ee-gcc-2.9-as210-G0 */
/* libmpeg pack header, adapted from ico/sce/libmpeg/pack.c. See LICENSES/ico-MIT.txt. */
#include "pes6/mpeg_bit_reader.h"

typedef struct {
    s32 scrExt;
    u32 scrBase, scrBase32;
    s32 hasSysHdr;
} PackHeader;
extern s32 func_008FD790(MpegBitReader *bs, PackHeader *pkt);
int func_008FD960(MpegBitReader *bs, PackHeader *pkt) {
    unsigned int i = 0;
    unsigned int a, b, c, n;
    int last;

    read_bits(bs, 0x22);
    a = read_bits(bs, 0x3);
    read_bits(bs, 1);
    b = read_bits(bs, 0xF);
    read_bits(bs, 1);
    c = read_bits(bs, 0xF);
    read_bits(bs, 1);
    pkt->scrExt = read_bits(bs, 0x9);
    read_bits(bs, 0x1E);
    n = read_bits(bs, 0x3);
    pkt->scrBase = (a << 30) | (b << 15) | c;
    pkt->scrBase32 = (a >> 2) & 1;
    for (i = 0; i < n; i++) {
        read_bits(bs, 0x8);
    }
    last = (u32)((u64)bs->bits >> 32);
    if (last == 0x1BB) {
        pkt->hasSysHdr = 1;
        func_008FD790(bs, pkt);
    } else {
        pkt->hasSysHdr = 0;
    }
    return 1;
}
