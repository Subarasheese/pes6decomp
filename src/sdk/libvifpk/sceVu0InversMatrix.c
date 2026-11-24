/* compiler: ee-gcc-2.9-G0 */
/* Voicedrew11/kfiv-decomp, src/sce/libvu0/libvu0.c (sceVu0InversMatrix). See THIRD_PARTY.md. */
/* 128-bit lq/sq and MMI moves plus VU0 code: Sony writes the whole function in assembly: Sony's libvu0 writes it as assembly. */

#define VU0_MEM(insn) __asm__ __volatile__(insn : : : "memory")
#define VU0_REG(insn) __asm__ __volatile__(insn)
#define VU0_LSV(mnem, vf, off, base) VU0_MEM(#mnem " $vf" #vf ", " #off "($" #base ")")
#define VU0_LSGP(mnem, gp, off, base) VU0_MEM(#mnem " $" #gp ", " #off "($" #base ")")
#define VU0_V2OP(mnem, d, a) VU0_REG(#mnem " $vf" #d ", $vf" #a)
#define VU0_V3OP(mnem, d, a, b) VU0_REG(#mnem " $vf" #d ", $vf" #a ", $vf" #b)
#define VU0_V3OP_BC(mnem, d, a, b, bc) VU0_REG(#mnem " $vf" #d ", $vf" #a ", $vf" #b #bc)
#define VU0_V3OP_ACC(mnem, a, b) VU0_REG(#mnem " ACC, $vf" #a ", $vf" #b)
#define VU0_V3OP_ACC_BC(mnem, a, b, bc) VU0_REG(#mnem " ACC, $vf" #a ", $vf" #b #bc)
#define VU0_MFC1(gp, fp) VU0_REG("mfc1 $" #gp ", $f" #fp)
#define VU0_QMTC2_NI(gp, vf) VU0_REG("qmtc2.ni $" #gp ", $vf" #vf)
/* vwaitq: no memory effect, sequences later VU0 ops with prior compute. */
#define VU0_WAIT() __asm__ __volatile__("vwaitq")
/* Several COP2 transfer pairs have a load-delay or Q-pipeline interlock that
   gas's default `.set reorder` would fill with a nop; those runs are written
   noreorder. */
#define VU0_NOREORDER_BEGIN() __asm__ __volatile__(".set noreorder")
#define VU0_NOREORDER_END() __asm__ __volatile__(".set reorder")

__asm__(".section .text\n"
        "    .align 3\n"
        "    .set noat\n"
        "    .set noreorder\n"
        "    .global sceVu0InversMatrix\n"
        "    .type sceVu0InversMatrix, @function\n"
        "sceVu0InversMatrix:\n"
        "    lq    $8, 0x0($5)\n"
        "    lq    $9, 0x10($5)\n"
        "    lq    $10, 0x20($5)\n"
        "    lqc2  $vf4, 0x30($5)\n"
        "    vmove.xyzw $vf5, $vf4\n"
        "    vsub.xyz $vf4, $vf4, $vf4\n"
        "    vmove.xyzw $vf9, $vf4\n"
        "    qmfc2.ni $11, $vf4\n"
        "    pextlw $12, $9, $8\n"
        "    pextuw $13, $9, $8\n"
        "    pextlw $14, $11, $10\n"
        "    pextuw $15, $11, $10\n"
        "    pcpyld $8, $14, $12\n"
        "    pcpyud $9, $12, $14\n"
        "    pcpyld $10, $15, $13\n"
        "    qmtc2.ni $8, $vf6\n"
        "    qmtc2.ni $9, $vf7\n"
        "    qmtc2.ni $10, $vf8\n"
        "    vmulax.xyz ACC, $vf6, $vf5x\n"
        "    vmadday.xyz ACC, $vf7, $vf5y\n"
        "    vmaddz.xyz $vf4, $vf8, $vf5z\n"
        "    vsub.xyz $vf4, $vf9, $vf4\n"
        "    sq    $8, 0x0($4)\n"
        "    sq    $9, 0x10($4)\n"
        "    sq    $10, 0x20($4)\n"
        "    jr    $31\n"
        "    sqc2  $vf4, 0x30($4)\n"
        "    .size sceVu0InversMatrix, . - sceVu0InversMatrix\n"
        "    nop\n"
        "    .set reorder\n"
        "    .set at\n");
