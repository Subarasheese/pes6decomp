/* compiler: ee-gcc-2.96 */
/* Adapted from 3s-decomp, src/anniversary/cri/libadxe/adx_dcd.c (ADX_DecodeInfoExLoop).
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

Sint32 func_0015A548(Uint8 *hdr, Sint32 arg1, Sint32 *arg2, Sint16 *arg3, Sint16 *arg4,
                     Sint32 *arg5, Sint32 *arg6, Sint32 *arg7, Sint32 *arg8) {
    Uint8 version;
    Sint8 flags;
    Sint32 err;
    Uint32 magic;
    Uint16 *p;
    Sint32 temp_t5;
    Sint32 temp_a2;
    *arg3 = 0;
    err = func_0015A2D0(hdr, arg1, &version, &flags);
    if (err != 0) {
        return err;
    }
    temp_a2 = 0x30;
    if (version == 4) {
        temp_a2 = 0x3C;
    }
    if (arg1 < temp_a2) {
        return -1;
    }
    if (((Uint16)(((((Uint16 *)hdr)[0] & 0xFF00) >> 8) | ((((Uint16 *)hdr)[0] << 8) & 0xFF00))) !=
        0x8000) {
        return -2;
    }
    if (((Sint16)(((((Sint16 *)hdr)[1] & 0xFF00) >> 8) | ((((Sint16 *)hdr)[1] << 8) & 0xFF00))) <
        (temp_a2 - 4)) {
        return -1;
    }
    temp_t5 = (version != 4) ? (0x14) : (0x20);
    *arg2 = (Sint16)(((((Sint16 *)(hdr + temp_t5))[0] & 0xFF00) >> 8) |
                     ((((Sint16 *)(hdr + temp_t5))[0] << 8) & 0xFF00));
    temp_t5 += 2;
    *arg3 = (Sint16)(((((Sint16 *)(hdr + temp_t5))[0] & 0xFF00) >> 8) |
                     ((((Sint16 *)(hdr + temp_t5))[0] << 8) & 0xFF00));
    temp_t5 += 2;
    if ((*arg3) != 1) {
        return -2;
    }
    temp_t5 += 2;
    *arg4 = (Sint16)(((((Sint16 *)(hdr + temp_t5))[0] & 0xFF00) >> 8) |
                     ((((Sint16 *)(hdr + temp_t5))[0] << 8) & 0xFF00));
    temp_t5 += 2;
    *arg5 = (Sint32)((((((Sint32 *)(hdr + temp_t5))[0] & 0xFF000000) >> 24) |
                      ((((Sint32 *)(hdr + temp_t5))[0] << 24) & 0xFF000000)) |
                     (((((Sint32 *)(hdr + temp_t5))[0] << 8) & 0xFF0000) |
                      ((((Sint32 *)(hdr + temp_t5))[0] >> 8) & 0xFF00)));
    temp_t5 += 4;
    *arg6 = (Sint32)((((((Sint32 *)(hdr + temp_t5))[0] & 0xFF000000) >> 24) |
                      ((((Sint32 *)(hdr + temp_t5))[0] << 24) & 0xFF000000)) |
                     (((((Sint32 *)(hdr + temp_t5))[0] << 8) & 0xFF0000) |
                      ((((Sint32 *)(hdr + temp_t5))[0] >> 8) & 0xFF00)));
    temp_t5 += 4;
    *arg7 = (Sint32)((((((Sint32 *)(hdr + temp_t5))[0] & 0xFF000000) >> 24) |
                      ((((Sint32 *)(hdr + temp_t5))[0] << 24) & 0xFF000000)) |
                     (((((Sint32 *)(hdr + temp_t5))[0] << 8) & 0xFF0000) |
                      ((((Sint32 *)(hdr + temp_t5))[0] >> 8) & 0xFF00)));
    temp_t5 += 4;
    *arg8 = (Sint32)((((((Sint32 *)(hdr + temp_t5))[0] & 0xFF000000) >> 24) |
                      ((((Sint32 *)(hdr + temp_t5))[0] << 24) & 0xFF000000)) |
                     (((((Sint32 *)(hdr + temp_t5))[0] << 8) & 0xFF0000) |
                      ((((Sint32 *)(hdr + temp_t5))[0] >> 8) & 0xFF00)));
    return 0;
}
