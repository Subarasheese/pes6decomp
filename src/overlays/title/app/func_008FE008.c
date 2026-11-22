/* compiler: ee-gcc-2.9-as210-G0 */
/* The pack parser follows the libmpeg reconstruction in ico/sce/libmpeg/pack.c.
 * See LICENSES/ico-MIT.txt. */
#include "pes6/mpeg_bit_reader.h"

typedef struct {
    s64 id;
    s32 length, scramble;
    s64 pts, dts;
    s32 pos, datalen, startpos;
} PesPkt;
extern void func_00900500(void *mpeg, const char *message);
extern char D_00902200[];

static inline void skip_bytes(MpegBitReader *bs, s32 bytes) {
    bs->bits = 0;
    bs->remaining = 0;
    bs->position += bytes << 3;
    bs->next = bs->base + (s32)(bs->position >> 3);
    if (bs->next >= bs->end)
        bs->next -= bs->ringSize;
    flush_bits(bs, 0);
}

s32 func_008FE008(void *mpeg, MpegBitReader *bs, PesPkt *pkt) {

    const u8 headerBits[16] = {0, 16, 8, 24, 8, 24, 16, 32, 24, 40, 32, 48, 32, 48, 40, 56};
    int payload, remaining;
    int ptsdts;
    int escr;
    int optionalFields;
    int ext;
    int headerLength;
    int optionalHeaderStart;

    pkt->startpos = (s32)bs->position;
    read_bits(bs, 0x18);
    pkt->id = (long long)read_bits(bs, 8) << 32;
    pkt->length = read_bits(bs, 0x10);
    pkt->pts = pkt->dts = -1;
    if (pkt->id != 0xBC00000000 && pkt->id != 0xBE00000000 && pkt->id != 0xBF00000000 &&
        pkt->id != 0xF000000000 && pkt->id != 0xF100000000 && pkt->id != 0xFF00000000 &&
        pkt->id != 0xF200000000 && pkt->id != 0xF800000000) {
        read_bits(bs, 2);
        pkt->scramble = read_bits(bs, 2);
        read_bits(bs, 4);
        ptsdts = read_bits(bs, 2);
        escr = read_bits(bs, 1);
        optionalFields = read_bits(bs, 4);
        ext = read_bits(bs, 1);
        headerLength = read_bits(bs, 8);
        optionalHeaderStart = (int)bs->position;
        if (ptsdts & 2) {
            unsigned int a;
            int b;
            int c;
            unsigned int low;

            read_bits(bs, 4);
            a = read_bits(bs, 3);
            read_bits(bs, 1);
            b = read_bits(bs, 0xF);
            read_bits(bs, 1);
            c = read_bits(bs, 0xF);
            read_bits(bs, 1);
            low = (a << 30) | (b << 15) | c;
            pkt->pts = ((long long)((a >> 2) & 1) << 32) | low;
        }
        if (ptsdts == 3) {
            unsigned int a;
            int b;
            int c;
            unsigned int low;

            read_bits(bs, 4);
            a = read_bits(bs, 3);
            read_bits(bs, 1);
            b = read_bits(bs, 0xF);
            read_bits(bs, 1);
            c = read_bits(bs, 0xF);
            read_bits(bs, 1);
            low = (a << 30) | (b << 15) | c;
            pkt->dts = ((long long)((a >> 2) & 1) << 32) | low;
        }
        if (escr == 1) {
            read_bits(bs, 0x30);
        }
        if (optionalFields != 0) {
            read_bits(bs, headerBits[optionalFields]);
        }
        if (ext == 1) {
            int priv;
            int pack;
            int seq;
            int pstd;
            int ext2;
            unsigned int i;
            unsigned int cnt;

            priv = read_bits(bs, 1);
            pack = read_bits(bs, 1);
            seq = read_bits(bs, 1);
            pstd = read_bits(bs, 1);
            read_bits(bs, 3);
            ext2 = read_bits(bs, 1);
            if (priv == 1) {
                read_bits(bs, 0x30);
                read_bits(bs, 0x30);
                read_bits(bs, 0x20);
            }
            if (pack == 1) {
                func_00900500(mpeg, D_00902200);
                return 0;
            }
            if (seq == 1) {
                read_bits(bs, 0x10);
            }
            if (pstd == 1) {
                read_bits(bs, 0x10);
            }
            if (ext2 == 1) {
                read_bits(bs, 1);
                cnt = read_bits(bs, 7);
                for (i = 0; i < cnt; i++) {
                    read_bits(bs, 8);
                }
            }
        }
        {
            int delta = headerLength - (s32)((bs->position - optionalHeaderStart) >> 3);
            if (delta != 0)
                skip_bytes(bs, delta);
        }
        payload = pkt->length - headerLength;
        remaining = payload - 3;
        pkt->datalen = remaining;
        pkt->pos = (s32)bs->position;
        if (pkt->id == 0xbd00000000LL) {
            pkt->id |= (u32)read_bits(bs, 32);
            remaining = payload - 7;
        }
        if (remaining != 0)
            skip_bytes(bs, remaining);
    } else if (pkt->id == 0xbc00000000LL || pkt->id == 0xbf00000000LL ||
               pkt->id == 0xf000000000LL || pkt->id == 0xf100000000LL ||
               pkt->id == 0xff00000000LL || pkt->id == 0xf200000000LL ||
               pkt->id == 0xf800000000LL) {
        int length = pkt->length;
        if (pkt->id == 0xbf00000000LL) {
            pkt->id |= (u32)read_bits(bs, 32);
            length -= 4;
        }
        if (length)
            skip_bytes(bs, length);
    } else if (pkt->id == 0xbe00000000LL) {
        if (pkt->length != 0)
            skip_bytes(bs, pkt->length);
    }
    return 1;
}
