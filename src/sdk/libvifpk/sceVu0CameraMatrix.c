/* compiler: ee-gcc-2.9-G0 */
/* Voicedrew11/kfiv-decomp, src/sce/libvu0/libvu0.c (sceVu0CameraMatrix). See THIRD_PARTY.md. */

extern void sceVu0InversMatrix(void *dst, void *src);
extern void sceVu0OuterProduct(void *dst, void *a, void *b);
extern void sceVu0Normalize(void *dst, void *src);
extern void sceVu0TransMatrix(void *dst, void *src, void *tv);
extern void sceVu0UnitMatrix(void *m);

void sceVu0CameraMatrix(void *m, void *p, void *zd, void *yd) {
    char buf[0x50];
    sceVu0UnitMatrix(buf);
    sceVu0OuterProduct(buf + 0x40, yd, zd);
    sceVu0Normalize(buf, buf + 0x40);
    sceVu0Normalize(buf + 0x20, zd);
    sceVu0OuterProduct(buf + 0x10, buf + 0x20, buf);
    sceVu0TransMatrix(buf, buf, p);
    sceVu0InversMatrix(m, buf);
}
