/* compiler: ee-gcc-2.96 */
/* Adapted from 3s-decomp, src/anniversary/cri/libadxe/adx_dcd.c (ADX_DecodeInfoExADPCM2).
 * licence: AGPL-3.0 (see THIRD_PARTY.md) */
typedef unsigned char Uint8;
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

Sint32 func_0015A250(ADXHeader *hdr, Sint32 arg1, Sint16 *high_pass_frequency) {
    Uint32 magic;
    if (arg1 < 0x12) {
        return -1;
    }
    if (((Uint16)(((hdr->magic & 0xFF00) >> 8) | ((hdr->magic << 8) & 0xFF00))) != 0x8000) {
        return -2;
    }
    if (((Sint16)(((hdr->copyright_offset & 0xFF00) >> 8) |
                  ((hdr->copyright_offset << 8) & 0xFF00))) < 0xE) {
        return -1;
    }
    *high_pass_frequency = (Sint16)(((hdr->high_pass_frequency & 0xFF00) >> 8) |
                                    ((hdr->high_pass_frequency << 8) & 0xFF00));
    return 0;
}
