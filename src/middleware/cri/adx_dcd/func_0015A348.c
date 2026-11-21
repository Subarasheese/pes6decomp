/* compiler: ee-gcc-2.96 */
/* Adapted from 3s-decomp, src/anniversary/cri/libadxe/adx_dcd.c (ADX_DecodeInfoExIdly).
 * licence: AGPL-3.0 (see THIRD_PARTY.md) */
typedef unsigned char Uint8;
typedef char Sint8;
typedef unsigned short Uint16;
typedef signed short Sint16;
typedef unsigned int Uint32;
typedef signed int Sint32;
typedef struct {
    union {
        Uint16 magic;
        struct {
            Uint8 magic_0;
            Uint8 magic_1;
        };
    };
    union {
        Sint16 copyright_offset;
        struct {
            Uint8 copyright_offset_0;
            Uint8 copyright_offset_1;
        };
    };
    Uint8 encoding_type;
    Uint8 block_size;
    Uint8 sample_bitdepth;
    Uint8 channel_count;
    Uint8 sample_rate_0;
    Uint8 sample_rate_1;
    Uint8 sample_rate_2;
    Uint8 sample_rate_3;
    Uint8 total_samples_0;
    Uint8 total_samples_1;
    Uint8 total_samples_2;
    Uint8 total_samples_3;
    union {
        Uint16 high_pass_frequency;
        struct {
            Uint8 high_pass_frequency_0;
            Uint8 high_pass_frequency_1;
        };
    };
    Uint8 version;
    Uint8 flags;
    char pad14[4];
    Uint16 unk18;
    Uint16 unk1A;
    Uint16 unk1C;
    Uint16 unk1E;
} ADXHeader;
extern Sint32 func_0015A2D0(ADXHeader *hdr, Sint32 arg1, Sint8 *version, Sint8 *flags);

Sint32 func_0015A348(ADXHeader *hdr, Sint32 arg1, Sint16 *arg2, Sint16 *arg3) {
    Uint8 version;
    Sint8 flags;
    Uint32 magic;
    if (func_0015A2D0(hdr, arg1, &version, &flags) != 0) {
        return -1;
    }
    if (version >= 4) {
        if (arg1 < 0x20) {
            return -1;
        }
        if (((Uint16)(((hdr->magic & 0xFF00) >> 8) | ((hdr->magic << 8) & 0xFF00))) != 0x8000) {
            return -2;
        }
        if (((Sint16)(((hdr->copyright_offset & 0xFF00) >> 8) |
                      ((hdr->copyright_offset << 8) & 0xFF00))) < 0x1C) {
            return -1;
        }
        arg2[0] = (Sint16)(((hdr->unk18 & 0xFF00) >> 8) | ((hdr->unk18 << 8) & 0xFF00));
        arg3[0] = (Sint16)(((hdr->unk1A & 0xFF00) >> 8) | ((hdr->unk1A << 8) & 0xFF00));
        arg2[1] = (Sint16)(((hdr->unk1C & 0xFF00) >> 8) | ((hdr->unk1C << 8) & 0xFF00));
        arg3[1] = (Sint16)(((hdr->unk1E & 0xFF00) >> 8) | ((hdr->unk1E << 8) & 0xFF00));
    } else {
        arg3[1] = 0;
        arg2[1] = 0;
        arg3[0] = 0;
        arg2[0] = 0;
    }
    return 0;
}
