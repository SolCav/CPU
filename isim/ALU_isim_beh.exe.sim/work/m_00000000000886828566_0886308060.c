/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/RM/Desktop/backup/CPU_05_fix_isz/CPU/ALU.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {6U, 0U};
static unsigned int ng10[] = {7U, 0U};
static int ng11[] = {7, 0};
static unsigned int ng12[] = {8U, 0U};
static unsigned int ng13[] = {9U, 0U};
static unsigned int ng14[] = {10U, 0U};
static unsigned int ng15[] = {11U, 0U};
static unsigned int ng16[] = {12U, 0U};
static unsigned int ng17[] = {13U, 0U};
static unsigned int ng18[] = {14U, 0U};
static unsigned int ng19[] = {15U, 0U};
static int ng20[] = {2, 0};



static void Initial_43_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(43, ng0);

LAB2:    xsi_set_current_line(44, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3368);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(45, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3528);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(46, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3688);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3848);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4008);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_52_1(char *t0)
{
    char t6[8];
    char t32[8];
    char t33[8];
    char t34[8];
    char t61[8];
    char t69[8];
    char t83[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    int t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    int t115;

LAB0:    t1 = (t0 + 5176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 5744);
    *((int *)t2) = 1;
    t3 = (t0 + 5208);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(52, ng0);

LAB5:    xsi_set_current_line(53, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 2888);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 8);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB9;

LAB6:    if (t16 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(225, ng0);

LAB263:    xsi_set_current_line(226, ng0);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t19 = (t2 + 4);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t19);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t19);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB267;

LAB264:    if (t16 != 0)
        goto LAB266;

LAB265:    *((unsigned int *)t6) = 1;

LAB267:    t26 = (t6 + 4);
    t21 = *((unsigned int *)t26);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB268;

LAB269:    xsi_set_current_line(232, ng0);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t19 = (t2 + 4);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t19);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t19);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB275;

LAB272:    if (t16 != 0)
        goto LAB274;

LAB273:    *((unsigned int *)t6) = 1;

LAB275:    t26 = (t6 + 4);
    t21 = *((unsigned int *)t26);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB276;

LAB277:
LAB278:
LAB270:
LAB12:    goto LAB2;

LAB8:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(55, ng0);

LAB13:    xsi_set_current_line(56, ng0);
    t26 = ((char*)((ng1)));
    t27 = (t0 + 2728);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 1);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    memcpy(t6, t3, 8);
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 8);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);

LAB14:    t2 = ((char*)((ng2)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t28 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng4)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t28 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng5)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t28 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng6)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t28 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng7)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t28 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng8)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t28 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng9)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t28 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng10)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t28 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng12)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t28 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng13)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t28 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng14)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t28 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng15)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t28 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng16)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t28 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng17)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t28 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng18)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t28 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng19)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t28 == 1)
        goto LAB45;

LAB46:
LAB48:
LAB47:
LAB49:    goto LAB12;

LAB15:    xsi_set_current_line(61, ng0);

LAB50:    xsi_set_current_line(62, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 1528U);
    t19 = *((char **)t4);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 8, t5, 8, t19, 8);
    t4 = (t0 + 3368);
    xsi_vlogvar_assign_value(t4, t6, 0, 0, 8);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t19 = (t6 + 4);
    t20 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 7);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t20);
    t11 = (t10 >> 7);
    t12 = (t11 & 1);
    *((unsigned int *)t19) = t12;
    t26 = (t0 + 3848);
    xsi_vlogvar_assign_value(t26, t6, 0, 0, 1);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 3368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t20 = (t5 + 4);
    t26 = (t19 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t19);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t20);
    t11 = *((unsigned int *)t26);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t20);
    t15 = *((unsigned int *)t26);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB54;

LAB51:    if (t16 != 0)
        goto LAB53;

LAB52:    *((unsigned int *)t6) = 1;

LAB54:    t29 = (t6 + 4);
    t21 = *((unsigned int *)t29);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB55;

LAB56:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 4008);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB57:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    t20 = (t0 + 3688);
    xsi_vlogvar_assign_value(t20, t6, 0, 0, 1);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    memset(t32, 0, 8);
    t2 = (t32 + 4);
    t5 = (t4 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 7);
    t9 = (t8 & 1);
    *((unsigned int *)t32) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 7);
    t12 = (t11 & 1);
    *((unsigned int *)t2) = t12;
    t19 = (t0 + 1528U);
    t20 = *((char **)t19);
    memset(t33, 0, 8);
    t19 = (t33 + 4);
    t26 = (t20 + 4);
    t13 = *((unsigned int *)t20);
    t14 = (t13 >> 7);
    t15 = (t14 & 1);
    *((unsigned int *)t33) = t15;
    t16 = *((unsigned int *)t26);
    t17 = (t16 >> 7);
    t18 = (t17 & 1);
    *((unsigned int *)t19) = t18;
    t21 = *((unsigned int *)t32);
    t22 = *((unsigned int *)t33);
    t23 = (t21 ^ t22);
    *((unsigned int *)t34) = t23;
    t27 = (t32 + 4);
    t29 = (t33 + 4);
    t30 = (t34 + 4);
    t24 = *((unsigned int *)t27);
    t25 = *((unsigned int *)t29);
    t35 = (t24 | t25);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t30);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB58;

LAB59:
LAB60:    memset(t6, 0, 8);
    t31 = (t34 + 4);
    t40 = *((unsigned int *)t31);
    t41 = (~(t40));
    t42 = *((unsigned int *)t34);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB64;

LAB62:    if (*((unsigned int *)t31) == 0)
        goto LAB61;

LAB63:    t45 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t45) = 1;

LAB64:    t46 = (t6 + 4);
    t47 = (t34 + 4);
    t48 = *((unsigned int *)t34);
    t49 = (~(t48));
    *((unsigned int *)t6) = t49;
    *((unsigned int *)t46) = 0;
    if (*((unsigned int *)t47) != 0)
        goto LAB66;

LAB65:    t54 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t54 & 1U);
    t55 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t55 & 1U);
    t56 = (t0 + 3848);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    t59 = (t0 + 1368U);
    t60 = *((char **)t59);
    memset(t61, 0, 8);
    t59 = (t61 + 4);
    t62 = (t60 + 4);
    t63 = *((unsigned int *)t60);
    t64 = (t63 >> 7);
    t65 = (t64 & 1);
    *((unsigned int *)t61) = t65;
    t66 = *((unsigned int *)t62);
    t67 = (t66 >> 7);
    t68 = (t67 & 1);
    *((unsigned int *)t59) = t68;
    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t61);
    t72 = (t70 ^ t71);
    *((unsigned int *)t69) = t72;
    t73 = (t58 + 4);
    t74 = (t61 + 4);
    t75 = (t69 + 4);
    t76 = *((unsigned int *)t73);
    t77 = *((unsigned int *)t74);
    t78 = (t76 | t77);
    *((unsigned int *)t75) = t78;
    t79 = *((unsigned int *)t75);
    t80 = (t79 != 0);
    if (t80 == 1)
        goto LAB67;

LAB68:
LAB69:    t84 = *((unsigned int *)t6);
    t85 = *((unsigned int *)t69);
    t86 = (t84 & t85);
    *((unsigned int *)t83) = t86;
    t87 = (t6 + 4);
    t88 = (t69 + 4);
    t89 = (t83 + 4);
    t90 = *((unsigned int *)t87);
    t91 = *((unsigned int *)t88);
    t92 = (t90 | t91);
    *((unsigned int *)t89) = t92;
    t93 = *((unsigned int *)t89);
    t94 = (t93 != 0);
    if (t94 == 1)
        goto LAB70;

LAB71:
LAB72:    t114 = (t0 + 3528);
    xsi_vlogvar_assign_value(t114, t83, 0, 0, 1);
    goto LAB49;

LAB17:    xsi_set_current_line(70, ng0);

LAB73:    xsi_set_current_line(71, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 1528U);
    t19 = *((char **)t4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t19);
    t9 = (t7 & t8);
    *((unsigned int *)t6) = t9;
    t4 = (t5 + 4);
    t20 = (t19 + 4);
    t26 = (t6 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t20);
    t12 = (t10 | t11);
    *((unsigned int *)t26) = t12;
    t13 = *((unsigned int *)t26);
    t14 = (t13 != 0);
    if (t14 == 1)
        goto LAB74;

LAB75:
LAB76:    t30 = (t0 + 3368);
    xsi_vlogvar_assign_value(t30, t6, 0, 0, 8);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 3368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t19 = (t6 + 4);
    t20 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 7);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t20);
    t11 = (t10 >> 7);
    t12 = (t11 & 1);
    *((unsigned int *)t19) = t12;
    t26 = (t0 + 3848);
    xsi_vlogvar_assign_value(t26, t6, 0, 0, 1);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 3368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t20 = (t5 + 4);
    t26 = (t19 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t19);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t20);
    t11 = *((unsigned int *)t26);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t20);
    t15 = *((unsigned int *)t26);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB80;

LAB77:    if (t16 != 0)
        goto LAB79;

LAB78:    *((unsigned int *)t6) = 1;

LAB80:    t29 = (t6 + 4);
    t21 = *((unsigned int *)t29);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB81;

LAB82:    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 4008);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB83:    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3688);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3528);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB49;

LAB19:    xsi_set_current_line(79, ng0);

LAB84:    xsi_set_current_line(80, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 1528U);
    t19 = *((char **)t4);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 8, t5, 8, t19, 8);
    t4 = (t0 + 3368);
    xsi_vlogvar_assign_value(t4, t6, 0, 0, 8);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 3368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t19 = (t6 + 4);
    t20 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 7);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t20);
    t11 = (t10 >> 7);
    t12 = (t11 & 1);
    *((unsigned int *)t19) = t12;
    t26 = (t0 + 3848);
    xsi_vlogvar_assign_value(t26, t6, 0, 0, 1);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 3368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t20 = (t5 + 4);
    t26 = (t19 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t19);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t20);
    t11 = *((unsigned int *)t26);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t20);
    t15 = *((unsigned int *)t26);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB88;

LAB85:    if (t16 != 0)
        goto LAB87;

LAB86:    *((unsigned int *)t6) = 1;

LAB88:    t29 = (t6 + 4);
    t21 = *((unsigned int *)t29);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB89;

LAB90:    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 4008);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB91:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 3368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    t20 = (t0 + 3688);
    xsi_vlogvar_assign_value(t20, t6, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    memset(t32, 0, 8);
    t2 = (t32 + 4);
    t5 = (t4 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 7);
    t9 = (t8 & 1);
    *((unsigned int *)t32) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 7);
    t12 = (t11 & 1);
    *((unsigned int *)t2) = t12;
    t19 = (t0 + 1528U);
    t20 = *((char **)t19);
    memset(t33, 0, 8);
    t19 = (t33 + 4);
    t26 = (t20 + 4);
    t13 = *((unsigned int *)t20);
    t14 = (t13 >> 7);
    t15 = (t14 & 1);
    *((unsigned int *)t33) = t15;
    t16 = *((unsigned int *)t26);
    t17 = (t16 >> 7);
    t18 = (t17 & 1);
    *((unsigned int *)t19) = t18;
    t21 = *((unsigned int *)t32);
    t22 = *((unsigned int *)t33);
    t23 = (t21 ^ t22);
    *((unsigned int *)t34) = t23;
    t27 = (t32 + 4);
    t29 = (t33 + 4);
    t30 = (t34 + 4);
    t24 = *((unsigned int *)t27);
    t25 = *((unsigned int *)t29);
    t35 = (t24 | t25);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t30);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB92;

LAB93:
LAB94:    memset(t6, 0, 8);
    t31 = (t34 + 4);
    t40 = *((unsigned int *)t31);
    t41 = (~(t40));
    t42 = *((unsigned int *)t34);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB98;

LAB96:    if (*((unsigned int *)t31) == 0)
        goto LAB95;

LAB97:    t45 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t45) = 1;

LAB98:    t46 = (t6 + 4);
    t47 = (t34 + 4);
    t48 = *((unsigned int *)t34);
    t49 = (~(t48));
    *((unsigned int *)t6) = t49;
    *((unsigned int *)t46) = 0;
    if (*((unsigned int *)t47) != 0)
        goto LAB100;

LAB99:    t54 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t54 & 1U);
    t55 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t55 & 1U);
    t56 = (t0 + 3848);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    t59 = (t0 + 1368U);
    t60 = *((char **)t59);
    memset(t61, 0, 8);
    t59 = (t61 + 4);
    t62 = (t60 + 4);
    t63 = *((unsigned int *)t60);
    t64 = (t63 >> 7);
    t65 = (t64 & 1);
    *((unsigned int *)t61) = t65;
    t66 = *((unsigned int *)t62);
    t67 = (t66 >> 7);
    t68 = (t67 & 1);
    *((unsigned int *)t59) = t68;
    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t61);
    t72 = (t70 ^ t71);
    *((unsigned int *)t69) = t72;
    t73 = (t58 + 4);
    t74 = (t61 + 4);
    t75 = (t69 + 4);
    t76 = *((unsigned int *)t73);
    t77 = *((unsigned int *)t74);
    t78 = (t76 | t77);
    *((unsigned int *)t75) = t78;
    t79 = *((unsigned int *)t75);
    t80 = (t79 != 0);
    if (t80 == 1)
        goto LAB101;

LAB102:
LAB103:    t84 = *((unsigned int *)t6);
    t85 = *((unsigned int *)t69);
    t86 = (t84 & t85);
    *((unsigned int *)t83) = t86;
    t87 = (t6 + 4);
    t88 = (t69 + 4);
    t89 = (t83 + 4);
    t90 = *((unsigned int *)t87);
    t91 = *((unsigned int *)t88);
    t92 = (t90 | t91);
    *((unsigned int *)t89) = t92;
    t93 = *((unsigned int *)t89);
    t94 = (t93 != 0);
    if (t94 == 1)
        goto LAB104;

LAB105:
LAB106:    t114 = (t0 + 3528);
    xsi_vlogvar_assign_value(t114, t83, 0, 0, 1);
    goto LAB49;

LAB21:    xsi_set_current_line(88, ng0);

LAB107:    xsi_set_current_line(89, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 1528U);
    t19 = *((char **)t4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t19);
    t9 = (t7 | t8);
    *((unsigned int *)t6) = t9;
    t4 = (t5 + 4);
    t20 = (t19 + 4);
    t26 = (t6 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t20);
    t12 = (t10 | t11);
    *((unsigned int *)t26) = t12;
    t13 = *((unsigned int *)t26);
    t14 = (t13 != 0);
    if (t14 == 1)
        goto LAB108;

LAB109:
LAB110:    t30 = (t0 + 3368);
    xsi_vlogvar_assign_value(t30, t6, 0, 0, 8);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 3368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t19 = (t6 + 4);
    t20 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 7);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t20);
    t11 = (t10 >> 7);
    t12 = (t11 & 1);
    *((unsigned int *)t19) = t12;
    t26 = (t0 + 3848);
    xsi_vlogvar_assign_value(t26, t6, 0, 0, 1);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 3368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t20 = (t5 + 4);
    t26 = (t19 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t19);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t20);
    t11 = *((unsigned int *)t26);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t20);
    t15 = *((unsigned int *)t26);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB114;

LAB111:    if (t16 != 0)
        goto LAB113;

LAB112:    *((unsigned int *)t6) = 1;

LAB114:    t29 = (t6 + 4);
    t21 = *((unsigned int *)t29);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB115;

LAB116:    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 4008);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB117:    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3688);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3528);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB49;

LAB23:    xsi_set_current_line(98, ng0);

LAB118:    xsi_set_current_line(99, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 1528U);
    t19 = *((char **)t4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t19);
    t9 = (t7 ^ t8);
    *((unsigned int *)t6) = t9;
    t4 = (t5 + 4);
    t20 = (t19 + 4);
    t26 = (t6 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t20);
    t12 = (t10 | t11);
    *((unsigned int *)t26) = t12;
    t13 = *((unsigned int *)t26);
    t14 = (t13 != 0);
    if (t14 == 1)
        goto LAB119;

LAB120:
LAB121:    t27 = (t0 + 3368);
    xsi_vlogvar_assign_value(t27, t6, 0, 0, 8);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 3368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t19 = (t6 + 4);
    t20 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 7);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t20);
    t11 = (t10 >> 7);
    t12 = (t11 & 1);
    *((unsigned int *)t19) = t12;
    t26 = (t0 + 3848);
    xsi_vlogvar_assign_value(t26, t6, 0, 0, 1);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 3368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t20 = (t5 + 4);
    t26 = (t19 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t19);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t20);
    t11 = *((unsigned int *)t26);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t20);
    t15 = *((unsigned int *)t26);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB125;

LAB122:    if (t16 != 0)
        goto LAB124;

LAB123:    *((unsigned int *)t6) = 1;

LAB125:    t29 = (t6 + 4);
    t21 = *((unsigned int *)t29);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB126;

LAB127:    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 4008);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB128:    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3688);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3528);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB49;

LAB25:    xsi_set_current_line(107, ng0);

LAB129:    xsi_set_current_line(108, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = (t0 + 3368);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 8);
    goto LAB49;

LAB27:    xsi_set_current_line(112, ng0);

LAB130:    xsi_set_current_line(113, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t19 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    *((unsigned int *)t6) = t8;
    *((unsigned int *)t4) = 0;
    if (*((unsigned int *)t19) != 0)
        goto LAB132;

LAB131:    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 255U);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 255U);
    t20 = (t0 + 3368);
    xsi_vlogvar_assign_value(t20, t6, 0, 0, 8);
    goto LAB49;

LAB29:    xsi_set_current_line(117, ng0);

LAB133:    xsi_set_current_line(118, ng0);
    t4 = (t0 + 2888);
    t5 = (t4 + 56U);
    t19 = *((char **)t5);
    memset(t6, 0, 8);
    t20 = (t6 + 4);
    t26 = (t19 + 4);
    t7 = *((unsigned int *)t19);
    t8 = (t7 >> 0);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t26);
    t11 = (t10 >> 0);
    t12 = (t11 & 1);
    *((unsigned int *)t20) = t12;
    t27 = (t0 + 3688);
    xsi_vlogvar_assign_value(t27, t6, 0, 0, 1);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 2888);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t19 = (t6 + 4);
    t20 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 7);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t20);
    t11 = (t10 >> 7);
    t12 = (t11 & 1);
    *((unsigned int *)t19) = t12;
    t26 = (t0 + 3848);
    xsi_vlogvar_assign_value(t26, t6, 0, 0, 1);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3528);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 2888);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = (t0 + 3048);
    t20 = (t19 + 56U);
    t26 = *((char **)t20);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_rshift(t6, 8, t5, 8, t26, 8);
    t27 = (t0 + 3368);
    xsi_vlogvar_assign_value(t27, t6, 0, 0, 8);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 3848);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = (t0 + 3368);
    t20 = (t0 + 3368);
    t26 = (t20 + 72U);
    t27 = *((char **)t26);
    t29 = ((char*)((ng11)));
    xsi_vlog_generic_convert_bit_index(t6, t27, 2, t29, 32, 1);
    t30 = (t6 + 4);
    t7 = *((unsigned int *)t30);
    t28 = (!(t7));
    if (t28 == 1)
        goto LAB134;

LAB135:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 3368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t20 = (t5 + 4);
    t26 = (t19 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t19);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t20);
    t11 = *((unsigned int *)t26);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t20);
    t15 = *((unsigned int *)t26);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB139;

LAB136:    if (t16 != 0)
        goto LAB138;

LAB137:    *((unsigned int *)t6) = 1;

LAB139:    t29 = (t6 + 4);
    t21 = *((unsigned int *)t29);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB140;

LAB141:    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 4008);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB142:    goto LAB49;

LAB31:    xsi_set_current_line(128, ng0);

LAB143:    xsi_set_current_line(129, ng0);
    t4 = (t0 + 2888);
    t5 = (t4 + 56U);
    t19 = *((char **)t5);
    memset(t6, 0, 8);
    t20 = (t6 + 4);
    t26 = (t19 + 4);
    t7 = *((unsigned int *)t19);
    t8 = (t7 >> 7);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t26);
    t11 = (t10 >> 7);
    t12 = (t11 & 1);
    *((unsigned int *)t20) = t12;
    t27 = (t0 + 3688);
    xsi_vlogvar_assign_value(t27, t6, 0, 0, 1);
    xsi_set_current_line(130, ng0);
    t2 = (t0 + 2888);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t19 = (t6 + 4);
    t20 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 7);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t20);
    t11 = (t10 >> 7);
    t12 = (t11 & 1);
    *((unsigned int *)t19) = t12;
    t26 = (t0 + 3848);
    xsi_vlogvar_assign_value(t26, t6, 0, 0, 1);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 2888);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = (t0 + 3048);
    t20 = (t19 + 56U);
    t26 = *((char **)t20);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_lshift(t6, 8, t5, 8, t26, 8);
    t27 = (t0 + 3368);
    xsi_vlogvar_assign_value(t27, t6, 0, 0, 8);
    xsi_set_current_line(132, ng0);
    t2 = (t0 + 3848);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = (t0 + 3368);
    t20 = (t0 + 3368);
    t26 = (t20 + 72U);
    t27 = *((char **)t26);
    t29 = ((char*)((ng11)));
    xsi_vlog_generic_convert_bit_index(t6, t27, 2, t29, 32, 1);
    t30 = (t6 + 4);
    t7 = *((unsigned int *)t30);
    t28 = (!(t7));
    if (t28 == 1)
        goto LAB144;

LAB145:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 3368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t20 = (t5 + 4);
    t26 = (t19 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t19);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t20);
    t11 = *((unsigned int *)t26);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t20);
    t15 = *((unsigned int *)t26);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB149;

LAB146:    if (t16 != 0)
        goto LAB148;

LAB147:    *((unsigned int *)t6) = 1;

LAB149:    t29 = (t6 + 4);
    t21 = *((unsigned int *)t29);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB150;

LAB151:    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 4008);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB152:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 3848);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = (t0 + 3368);
    t20 = (t19 + 56U);
    t26 = *((char **)t20);
    memset(t6, 0, 8);
    t27 = (t6 + 4);
    t29 = (t26 + 4);
    t7 = *((unsigned int *)t26);
    t8 = (t7 >> 7);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t29);
    t11 = (t10 >> 7);
    t12 = (t11 & 1);
    *((unsigned int *)t27) = t12;
    memset(t32, 0, 8);
    t30 = (t5 + 4);
    t31 = (t6 + 4);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t6);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t30);
    t17 = *((unsigned int *)t31);
    t18 = (t16 ^ t17);
    t21 = (t15 | t18);
    t22 = *((unsigned int *)t30);
    t23 = *((unsigned int *)t31);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t35 = (t21 & t25);
    if (t35 != 0)
        goto LAB156;

LAB153:    if (t24 != 0)
        goto LAB155;

LAB154:    *((unsigned int *)t32) = 1;

LAB156:    t46 = (t32 + 4);
    t36 = *((unsigned int *)t46);
    t37 = (~(t36));
    t38 = *((unsigned int *)t32);
    t39 = (t38 & t37);
    t40 = (t39 != 0);
    if (t40 > 0)
        goto LAB157;

LAB158:    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3528);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB159:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 3368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t19 = (t6 + 4);
    t20 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 7);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t20);
    t11 = (t10 >> 7);
    t12 = (t11 & 1);
    *((unsigned int *)t19) = t12;
    t26 = (t0 + 3848);
    xsi_vlogvar_assign_value(t26, t6, 0, 0, 1);
    goto LAB49;

LAB33:    xsi_set_current_line(140, ng0);

LAB160:    xsi_set_current_line(141, ng0);
    t4 = (t0 + 2888);
    t5 = (t4 + 56U);
    t19 = *((char **)t5);
    memset(t6, 0, 8);
    t20 = (t6 + 4);
    t26 = (t19 + 4);
    t7 = *((unsigned int *)t19);
    t8 = (t7 >> 0);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t26);
    t11 = (t10 >> 0);
    t12 = (t11 & 1);
    *((unsigned int *)t20) = t12;
    t27 = (t0 + 3688);
    xsi_vlogvar_assign_value(t27, t6, 0, 0, 1);
    xsi_set_current_line(142, ng0);
    t2 = (t0 + 2888);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t19 = (t6 + 4);
    t20 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 7);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t20);
    t11 = (t10 >> 7);
    t12 = (t11 & 1);
    *((unsigned int *)t19) = t12;
    t26 = (t0 + 3848);
    xsi_vlogvar_assign_value(t26, t6, 0, 0, 1);
    xsi_set_current_line(143, ng0);
    t2 = (t0 + 2888);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = (t0 + 3048);
    t20 = (t19 + 56U);
    t26 = *((char **)t20);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_rshift(t6, 8, t5, 8, t26, 8);
    t27 = (t0 + 3368);
    xsi_vlogvar_assign_value(t27, t6, 0, 0, 8);
    xsi_set_current_line(144, ng0);
    t2 = (t0 + 3368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t20 = (t5 + 4);
    t26 = (t19 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t19);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t20);
    t11 = *((unsigned int *)t26);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t20);
    t15 = *((unsigned int *)t26);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB164;

LAB161:    if (t16 != 0)
        goto LAB163;

LAB162:    *((unsigned int *)t6) = 1;

LAB164:    t29 = (t6 + 4);
    t21 = *((unsigned int *)t29);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB165;

LAB166:    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 4008);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB167:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 3848);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = (t0 + 3368);
    t20 = (t19 + 56U);
    t26 = *((char **)t20);
    memset(t6, 0, 8);
    t27 = (t6 + 4);
    t29 = (t26 + 4);
    t7 = *((unsigned int *)t26);
    t8 = (t7 >> 7);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t29);
    t11 = (t10 >> 7);
    t12 = (t11 & 1);
    *((unsigned int *)t27) = t12;
    memset(t32, 0, 8);
    t30 = (t5 + 4);
    t31 = (t6 + 4);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t6);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t30);
    t17 = *((unsigned int *)t31);
    t18 = (t16 ^ t17);
    t21 = (t15 | t18);
    t22 = *((unsigned int *)t30);
    t23 = *((unsigned int *)t31);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t35 = (t21 & t25);
    if (t35 != 0)
        goto LAB171;

LAB168:    if (t24 != 0)
        goto LAB170;

LAB169:    *((unsigned int *)t32) = 1;

LAB171:    t46 = (t32 + 4);
    t36 = *((unsigned int *)t46);
    t37 = (~(t36));
    t38 = *((unsigned int *)t32);
    t39 = (t38 & t37);
    t40 = (t39 != 0);
    if (t40 > 0)
        goto LAB172;

LAB173:    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3528);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB174:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 3368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t19 = (t6 + 4);
    t20 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 7);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t20);
    t11 = (t10 >> 7);
    t12 = (t11 & 1);
    *((unsigned int *)t19) = t12;
    t26 = (t0 + 3848);
    xsi_vlogvar_assign_value(t26, t6, 0, 0, 1);
    goto LAB49;

LAB35:    xsi_set_current_line(152, ng0);

LAB175:    xsi_set_current_line(153, ng0);
    t4 = (t0 + 2888);
    t5 = (t4 + 56U);
    t19 = *((char **)t5);
    memset(t6, 0, 8);
    t20 = (t6 + 4);
    t26 = (t19 + 4);
    t7 = *((unsigned int *)t19);
    t8 = (t7 >> 7);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t26);
    t11 = (t10 >> 7);
    t12 = (t11 & 1);
    *((unsigned int *)t20) = t12;
    t27 = (t0 + 3688);
    xsi_vlogvar_assign_value(t27, t6, 0, 0, 1);
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 2888);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t19 = (t6 + 4);
    t20 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 7);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t20);
    t11 = (t10 >> 7);
    t12 = (t11 & 1);
    *((unsigned int *)t19) = t12;
    t26 = (t0 + 3848);
    xsi_vlogvar_assign_value(t26, t6, 0, 0, 1);
    xsi_set_current_line(155, ng0);
    t2 = (t0 + 2888);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = (t0 + 3048);
    t20 = (t19 + 56U);
    t26 = *((char **)t20);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_lshift(t6, 8, t5, 8, t26, 8);
    t27 = (t0 + 3368);
    xsi_vlogvar_assign_value(t27, t6, 0, 0, 8);
    xsi_set_current_line(156, ng0);
    t2 = (t0 + 3368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t20 = (t5 + 4);
    t26 = (t19 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t19);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t20);
    t11 = *((unsigned int *)t26);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t20);
    t15 = *((unsigned int *)t26);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB179;

LAB176:    if (t16 != 0)
        goto LAB178;

LAB177:    *((unsigned int *)t6) = 1;

LAB179:    t29 = (t6 + 4);
    t21 = *((unsigned int *)t29);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB180;

LAB181:    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 4008);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB182:    xsi_set_current_line(157, ng0);
    t2 = (t0 + 3848);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = (t0 + 3368);
    t20 = (t19 + 56U);
    t26 = *((char **)t20);
    memset(t6, 0, 8);
    t27 = (t6 + 4);
    t29 = (t26 + 4);
    t7 = *((unsigned int *)t26);
    t8 = (t7 >> 7);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t29);
    t11 = (t10 >> 7);
    t12 = (t11 & 1);
    *((unsigned int *)t27) = t12;
    memset(t32, 0, 8);
    t30 = (t5 + 4);
    t31 = (t6 + 4);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t6);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t30);
    t17 = *((unsigned int *)t31);
    t18 = (t16 ^ t17);
    t21 = (t15 | t18);
    t22 = *((unsigned int *)t30);
    t23 = *((unsigned int *)t31);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t35 = (t21 & t25);
    if (t35 != 0)
        goto LAB186;

LAB183:    if (t24 != 0)
        goto LAB185;

LAB184:    *((unsigned int *)t32) = 1;

LAB186:    t46 = (t32 + 4);
    t36 = *((unsigned int *)t46);
    t37 = (~(t36));
    t38 = *((unsigned int *)t32);
    t39 = (t38 & t37);
    t40 = (t39 != 0);
    if (t40 > 0)
        goto LAB187;

LAB188:    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3528);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB189:    xsi_set_current_line(158, ng0);
    t2 = (t0 + 3368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t19 = (t6 + 4);
    t20 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 7);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t20);
    t11 = (t10 >> 7);
    t12 = (t11 & 1);
    *((unsigned int *)t19) = t12;
    t26 = (t0 + 3848);
    xsi_vlogvar_assign_value(t26, t6, 0, 0, 1);
    goto LAB49;

LAB37:    xsi_set_current_line(164, ng0);

LAB190:    xsi_set_current_line(165, ng0);
    t4 = (t0 + 2888);
    t5 = (t4 + 56U);
    t19 = *((char **)t5);
    memset(t6, 0, 8);
    t20 = (t6 + 4);
    t26 = (t19 + 4);
    t7 = *((unsigned int *)t19);
    t8 = (t7 >> 7);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t26);
    t11 = (t10 >> 7);
    t12 = (t11 & 1);
    *((unsigned int *)t20) = t12;
    t27 = (t0 + 3688);
    xsi_vlogvar_assign_value(t27, t6, 0, 0, 1);
    xsi_set_current_line(166, ng0);
    t2 = (t0 + 2888);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t19 = (t6 + 4);
    t20 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 7);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t20);
    t11 = (t10 >> 7);
    t12 = (t11 & 1);
    *((unsigned int *)t19) = t12;
    t26 = (t0 + 3848);
    xsi_vlogvar_assign_value(t26, t6, 0, 0, 1);
    xsi_set_current_line(167, ng0);
    t2 = (t0 + 2888);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = (t0 + 3368);
    xsi_vlogvar_assign_value(t19, t5, 0, 0, 8);
    xsi_set_current_line(168, ng0);
    t2 = (t0 + 3048);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t20 = (t5 + 4);
    t26 = (t19 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t19);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t20);
    t11 = *((unsigned int *)t26);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t20);
    t15 = *((unsigned int *)t26);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB192;

LAB191:    if (t16 != 0)
        goto LAB193;

LAB194:    t29 = (t6 + 4);
    t21 = *((unsigned int *)t29);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB195;

LAB196:
LAB197:    xsi_set_current_line(175, ng0);
    t2 = (t0 + 3368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t20 = (t5 + 4);
    t26 = (t19 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t19);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t20);
    t11 = *((unsigned int *)t26);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t20);
    t15 = *((unsigned int *)t26);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB213;

LAB210:    if (t16 != 0)
        goto LAB212;

LAB211:    *((unsigned int *)t6) = 1;

LAB213:    t29 = (t6 + 4);
    t21 = *((unsigned int *)t29);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB214;

LAB215:    xsi_set_current_line(175, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 4008);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB216:    xsi_set_current_line(176, ng0);
    t2 = (t0 + 3848);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = (t0 + 3368);
    t20 = (t19 + 56U);
    t26 = *((char **)t20);
    memset(t6, 0, 8);
    t27 = (t6 + 4);
    t29 = (t26 + 4);
    t7 = *((unsigned int *)t26);
    t8 = (t7 >> 7);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t29);
    t11 = (t10 >> 7);
    t12 = (t11 & 1);
    *((unsigned int *)t27) = t12;
    memset(t32, 0, 8);
    t30 = (t5 + 4);
    t31 = (t6 + 4);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t6);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t30);
    t17 = *((unsigned int *)t31);
    t18 = (t16 ^ t17);
    t21 = (t15 | t18);
    t22 = *((unsigned int *)t30);
    t23 = *((unsigned int *)t31);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t35 = (t21 & t25);
    if (t35 != 0)
        goto LAB220;

LAB217:    if (t24 != 0)
        goto LAB219;

LAB218:    *((unsigned int *)t32) = 1;

LAB220:    t46 = (t32 + 4);
    t36 = *((unsigned int *)t46);
    t37 = (~(t36));
    t38 = *((unsigned int *)t32);
    t39 = (t38 & t37);
    t40 = (t39 != 0);
    if (t40 > 0)
        goto LAB221;

LAB222:    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3528);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB223:    xsi_set_current_line(177, ng0);
    t2 = (t0 + 3368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t19 = (t6 + 4);
    t20 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 7);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t20);
    t11 = (t10 >> 7);
    t12 = (t11 & 1);
    *((unsigned int *)t19) = t12;
    t26 = (t0 + 3848);
    xsi_vlogvar_assign_value(t26, t6, 0, 0, 1);
    goto LAB49;

LAB39:    xsi_set_current_line(182, ng0);

LAB224:    xsi_set_current_line(183, ng0);
    t4 = (t0 + 2888);
    t5 = (t4 + 56U);
    t19 = *((char **)t5);
    memset(t6, 0, 8);
    t20 = (t6 + 4);
    t26 = (t19 + 4);
    t7 = *((unsigned int *)t19);
    t8 = (t7 >> 0);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t26);
    t11 = (t10 >> 0);
    t12 = (t11 & 1);
    *((unsigned int *)t20) = t12;
    t27 = (t0 + 3688);
    xsi_vlogvar_assign_value(t27, t6, 0, 0, 1);
    xsi_set_current_line(184, ng0);
    t2 = (t0 + 2888);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t19 = (t6 + 4);
    t20 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 7);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t20);
    t11 = (t10 >> 7);
    t12 = (t11 & 1);
    *((unsigned int *)t19) = t12;
    t26 = (t0 + 3848);
    xsi_vlogvar_assign_value(t26, t6, 0, 0, 1);
    xsi_set_current_line(185, ng0);
    t2 = (t0 + 2888);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = (t0 + 3368);
    xsi_vlogvar_assign_value(t19, t5, 0, 0, 8);
    xsi_set_current_line(186, ng0);
    t2 = (t0 + 3048);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t20 = (t5 + 4);
    t26 = (t19 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t19);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t20);
    t11 = *((unsigned int *)t26);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t20);
    t15 = *((unsigned int *)t26);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB226;

LAB225:    if (t16 != 0)
        goto LAB227;

LAB228:    t29 = (t6 + 4);
    t21 = *((unsigned int *)t29);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB229;

LAB230:
LAB231:    xsi_set_current_line(195, ng0);
    t2 = (t0 + 3368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t20 = (t5 + 4);
    t26 = (t19 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t19);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t20);
    t11 = *((unsigned int *)t26);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t20);
    t15 = *((unsigned int *)t26);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB247;

LAB244:    if (t16 != 0)
        goto LAB246;

LAB245:    *((unsigned int *)t6) = 1;

LAB247:    t29 = (t6 + 4);
    t21 = *((unsigned int *)t29);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB248;

LAB249:    xsi_set_current_line(195, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 4008);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB250:    xsi_set_current_line(196, ng0);
    t2 = (t0 + 3848);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = (t0 + 3368);
    t20 = (t19 + 56U);
    t26 = *((char **)t20);
    memset(t6, 0, 8);
    t27 = (t6 + 4);
    t29 = (t26 + 4);
    t7 = *((unsigned int *)t26);
    t8 = (t7 >> 7);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t29);
    t11 = (t10 >> 7);
    t12 = (t11 & 1);
    *((unsigned int *)t27) = t12;
    memset(t32, 0, 8);
    t30 = (t5 + 4);
    t31 = (t6 + 4);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t6);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t30);
    t17 = *((unsigned int *)t31);
    t18 = (t16 ^ t17);
    t21 = (t15 | t18);
    t22 = *((unsigned int *)t30);
    t23 = *((unsigned int *)t31);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t35 = (t21 & t25);
    if (t35 != 0)
        goto LAB254;

LAB251:    if (t24 != 0)
        goto LAB253;

LAB252:    *((unsigned int *)t32) = 1;

LAB254:    t46 = (t32 + 4);
    t36 = *((unsigned int *)t46);
    t37 = (~(t36));
    t38 = *((unsigned int *)t32);
    t39 = (t38 & t37);
    t40 = (t39 != 0);
    if (t40 > 0)
        goto LAB255;

LAB256:    xsi_set_current_line(196, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3528);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB257:    xsi_set_current_line(197, ng0);
    t2 = (t0 + 3368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t19 = (t6 + 4);
    t20 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 7);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t20);
    t11 = (t10 >> 7);
    t12 = (t11 & 1);
    *((unsigned int *)t19) = t12;
    t26 = (t0 + 3848);
    xsi_vlogvar_assign_value(t26, t6, 0, 0, 1);
    goto LAB49;

LAB41:    xsi_set_current_line(204, ng0);

LAB258:    xsi_set_current_line(205, ng0);
    t4 = (t0 + 2888);
    t5 = (t4 + 56U);
    t19 = *((char **)t5);
    t20 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t19, 8, t20, 32);
    t26 = (t0 + 3368);
    xsi_vlogvar_assign_value(t26, t6, 0, 0, 8);
    goto LAB49;

LAB43:    xsi_set_current_line(210, ng0);

LAB259:    xsi_set_current_line(211, ng0);
    t4 = (t0 + 2888);
    t5 = (t4 + 56U);
    t19 = *((char **)t5);
    t20 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t19, 8, t20, 32);
    t26 = (t0 + 3368);
    xsi_vlogvar_assign_value(t26, t6, 0, 0, 8);
    goto LAB49;

LAB45:    xsi_set_current_line(215, ng0);

LAB260:    xsi_set_current_line(216, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t19 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    *((unsigned int *)t6) = t8;
    *((unsigned int *)t4) = 0;
    if (*((unsigned int *)t19) != 0)
        goto LAB262;

LAB261:    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 255U);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 255U);
    t20 = (t0 + 3368);
    xsi_vlogvar_assign_value(t20, t6, 0, 0, 8);
    xsi_set_current_line(217, ng0);
    t2 = (t0 + 3368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t5, 8, t19, 32);
    t20 = (t0 + 3368);
    xsi_vlogvar_assign_value(t20, t6, 0, 0, 8);
    goto LAB49;

LAB53:    t27 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB54;

LAB55:    xsi_set_current_line(64, ng0);
    t30 = ((char*)((ng3)));
    t31 = (t0 + 4008);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 1);
    goto LAB57;

LAB58:    t38 = *((unsigned int *)t34);
    t39 = *((unsigned int *)t30);
    *((unsigned int *)t34) = (t38 | t39);
    goto LAB60;

LAB61:    *((unsigned int *)t6) = 1;
    goto LAB64;

LAB66:    t50 = *((unsigned int *)t6);
    t51 = *((unsigned int *)t47);
    *((unsigned int *)t6) = (t50 | t51);
    t52 = *((unsigned int *)t46);
    t53 = *((unsigned int *)t47);
    *((unsigned int *)t46) = (t52 | t53);
    goto LAB65;

LAB67:    t81 = *((unsigned int *)t69);
    t82 = *((unsigned int *)t75);
    *((unsigned int *)t69) = (t81 | t82);
    goto LAB69;

LAB70:    t95 = *((unsigned int *)t83);
    t96 = *((unsigned int *)t89);
    *((unsigned int *)t83) = (t95 | t96);
    t97 = (t6 + 4);
    t98 = (t69 + 4);
    t99 = *((unsigned int *)t6);
    t100 = (~(t99));
    t101 = *((unsigned int *)t97);
    t102 = (~(t101));
    t103 = *((unsigned int *)t69);
    t104 = (~(t103));
    t105 = *((unsigned int *)t98);
    t106 = (~(t105));
    t28 = (t100 & t102);
    t107 = (t104 & t106);
    t108 = (~(t28));
    t109 = (~(t107));
    t110 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t110 & t108);
    t111 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t111 & t109);
    t112 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t112 & t108);
    t113 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t113 & t109);
    goto LAB72;

LAB74:    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t26);
    *((unsigned int *)t6) = (t15 | t16);
    t27 = (t5 + 4);
    t29 = (t19 + 4);
    t17 = *((unsigned int *)t5);
    t18 = (~(t17));
    t21 = *((unsigned int *)t27);
    t22 = (~(t21));
    t23 = *((unsigned int *)t19);
    t24 = (~(t23));
    t25 = *((unsigned int *)t29);
    t35 = (~(t25));
    t107 = (t18 & t22);
    t115 = (t24 & t35);
    t36 = (~(t107));
    t37 = (~(t115));
    t38 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t38 & t36);
    t39 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t39 & t37);
    t40 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t40 & t36);
    t41 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t41 & t37);
    goto LAB76;

LAB79:    t27 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB80;

LAB81:    xsi_set_current_line(73, ng0);
    t30 = ((char*)((ng3)));
    t31 = (t0 + 4008);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 1);
    goto LAB83;

LAB87:    t27 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB88;

LAB89:    xsi_set_current_line(82, ng0);
    t30 = ((char*)((ng3)));
    t31 = (t0 + 4008);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 1);
    goto LAB91;

LAB92:    t38 = *((unsigned int *)t34);
    t39 = *((unsigned int *)t30);
    *((unsigned int *)t34) = (t38 | t39);
    goto LAB94;

LAB95:    *((unsigned int *)t6) = 1;
    goto LAB98;

LAB100:    t50 = *((unsigned int *)t6);
    t51 = *((unsigned int *)t47);
    *((unsigned int *)t6) = (t50 | t51);
    t52 = *((unsigned int *)t46);
    t53 = *((unsigned int *)t47);
    *((unsigned int *)t46) = (t52 | t53);
    goto LAB99;

LAB101:    t81 = *((unsigned int *)t69);
    t82 = *((unsigned int *)t75);
    *((unsigned int *)t69) = (t81 | t82);
    goto LAB103;

LAB104:    t95 = *((unsigned int *)t83);
    t96 = *((unsigned int *)t89);
    *((unsigned int *)t83) = (t95 | t96);
    t97 = (t6 + 4);
    t98 = (t69 + 4);
    t99 = *((unsigned int *)t6);
    t100 = (~(t99));
    t101 = *((unsigned int *)t97);
    t102 = (~(t101));
    t103 = *((unsigned int *)t69);
    t104 = (~(t103));
    t105 = *((unsigned int *)t98);
    t106 = (~(t105));
    t28 = (t100 & t102);
    t107 = (t104 & t106);
    t108 = (~(t28));
    t109 = (~(t107));
    t110 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t110 & t108);
    t111 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t111 & t109);
    t112 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t112 & t108);
    t113 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t113 & t109);
    goto LAB106;

LAB108:    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t26);
    *((unsigned int *)t6) = (t15 | t16);
    t27 = (t5 + 4);
    t29 = (t19 + 4);
    t17 = *((unsigned int *)t27);
    t18 = (~(t17));
    t21 = *((unsigned int *)t5);
    t107 = (t21 & t18);
    t22 = *((unsigned int *)t29);
    t23 = (~(t22));
    t24 = *((unsigned int *)t19);
    t115 = (t24 & t23);
    t25 = (~(t107));
    t35 = (~(t115));
    t36 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t36 & t25);
    t37 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t37 & t35);
    goto LAB110;

LAB113:    t27 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB114;

LAB115:    xsi_set_current_line(91, ng0);
    t30 = ((char*)((ng3)));
    t31 = (t0 + 4008);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 1);
    goto LAB117;

LAB119:    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t26);
    *((unsigned int *)t6) = (t15 | t16);
    goto LAB121;

LAB124:    t27 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB125;

LAB126:    xsi_set_current_line(101, ng0);
    t30 = ((char*)((ng3)));
    t31 = (t0 + 4008);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 1);
    goto LAB128;

LAB132:    t9 = *((unsigned int *)t6);
    t10 = *((unsigned int *)t19);
    *((unsigned int *)t6) = (t9 | t10);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t19);
    *((unsigned int *)t4) = (t11 | t12);
    goto LAB131;

LAB134:    xsi_vlogvar_assign_value(t19, t5, 0, *((unsigned int *)t6), 1);
    goto LAB135;

LAB138:    t27 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB139;

LAB140:    xsi_set_current_line(123, ng0);
    t30 = ((char*)((ng3)));
    t31 = (t0 + 4008);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 1);
    goto LAB142;

LAB144:    xsi_vlogvar_assign_value(t19, t5, 0, *((unsigned int *)t6), 1);
    goto LAB145;

LAB148:    t27 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB149;

LAB150:    xsi_set_current_line(133, ng0);
    t30 = ((char*)((ng3)));
    t31 = (t0 + 4008);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 1);
    goto LAB152;

LAB155:    t45 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB156;

LAB157:    xsi_set_current_line(134, ng0);
    t47 = ((char*)((ng1)));
    t56 = (t0 + 3528);
    xsi_vlogvar_assign_value(t56, t47, 0, 0, 1);
    goto LAB159;

LAB163:    t27 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB164;

LAB165:    xsi_set_current_line(144, ng0);
    t30 = ((char*)((ng3)));
    t31 = (t0 + 4008);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 1);
    goto LAB167;

LAB170:    t45 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB171;

LAB172:    xsi_set_current_line(145, ng0);
    t47 = ((char*)((ng1)));
    t56 = (t0 + 3528);
    xsi_vlogvar_assign_value(t56, t47, 0, 0, 1);
    goto LAB174;

LAB178:    t27 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB179;

LAB180:    xsi_set_current_line(156, ng0);
    t30 = ((char*)((ng3)));
    t31 = (t0 + 4008);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 1);
    goto LAB182;

LAB185:    t45 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB186;

LAB187:    xsi_set_current_line(157, ng0);
    t47 = ((char*)((ng1)));
    t56 = (t0 + 3528);
    xsi_vlogvar_assign_value(t56, t47, 0, 0, 1);
    goto LAB189;

LAB192:    *((unsigned int *)t6) = 1;
    goto LAB194;

LAB193:    t27 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB194;

LAB195:    xsi_set_current_line(168, ng0);

LAB198:    xsi_set_current_line(169, ng0);
    xsi_set_current_line(169, ng0);
    t30 = ((char*)((ng1)));
    t31 = (t0 + 3208);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 8);

LAB199:    t2 = (t0 + 3208);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = (t0 + 3048);
    t20 = (t19 + 56U);
    t26 = *((char **)t20);
    memset(t6, 0, 8);
    t27 = (t5 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB201;

LAB200:    t29 = (t26 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB201;

LAB204:    if (*((unsigned int *)t5) < *((unsigned int *)t26))
        goto LAB202;

LAB203:    t31 = (t6 + 4);
    t7 = *((unsigned int *)t31);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB205;

LAB206:    goto LAB197;

LAB201:    t30 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB203;

LAB202:    *((unsigned int *)t6) = 1;
    goto LAB203;

LAB205:    xsi_set_current_line(169, ng0);

LAB207:    xsi_set_current_line(170, ng0);
    t45 = (t0 + 3368);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    memset(t32, 0, 8);
    t56 = (t32 + 4);
    t57 = (t47 + 4);
    t12 = *((unsigned int *)t47);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t32) = t14;
    t15 = *((unsigned int *)t57);
    t16 = (t15 >> 0);
    t17 = (t16 & 1);
    *((unsigned int *)t56) = t17;
    t58 = (t0 + 3688);
    xsi_vlogvar_assign_value(t58, t32, 0, 0, 1);
    xsi_set_current_line(171, ng0);
    t2 = (t0 + 3368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_rshift(t6, 8, t5, 8, t19, 32);
    t20 = (t0 + 3368);
    xsi_vlogvar_assign_value(t20, t6, 0, 0, 8);
    xsi_set_current_line(172, ng0);
    t2 = (t0 + 3688);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = (t0 + 3368);
    t20 = (t0 + 3368);
    t26 = (t20 + 72U);
    t27 = *((char **)t26);
    t29 = ((char*)((ng11)));
    xsi_vlog_generic_convert_bit_index(t6, t27, 2, t29, 32, 1);
    t30 = (t6 + 4);
    t7 = *((unsigned int *)t30);
    t28 = (!(t7));
    if (t28 == 1)
        goto LAB208;

LAB209:    xsi_set_current_line(169, ng0);
    t2 = (t0 + 3208);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t5, 8, t19, 32);
    t20 = (t0 + 3208);
    xsi_vlogvar_assign_value(t20, t6, 0, 0, 8);
    goto LAB199;

LAB208:    xsi_vlogvar_assign_value(t19, t5, 0, *((unsigned int *)t6), 1);
    goto LAB209;

LAB212:    t27 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB213;

LAB214:    xsi_set_current_line(175, ng0);
    t30 = ((char*)((ng3)));
    t31 = (t0 + 4008);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 1);
    goto LAB216;

LAB219:    t45 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB220;

LAB221:    xsi_set_current_line(176, ng0);
    t47 = ((char*)((ng1)));
    t56 = (t0 + 3528);
    xsi_vlogvar_assign_value(t56, t47, 0, 0, 1);
    goto LAB223;

LAB226:    *((unsigned int *)t6) = 1;
    goto LAB228;

LAB227:    t27 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB228;

LAB229:    xsi_set_current_line(186, ng0);

LAB232:    xsi_set_current_line(188, ng0);
    xsi_set_current_line(188, ng0);
    t30 = ((char*)((ng1)));
    t31 = (t0 + 3208);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 8);

LAB233:    t2 = (t0 + 3208);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = (t0 + 3048);
    t20 = (t19 + 56U);
    t26 = *((char **)t20);
    memset(t6, 0, 8);
    t27 = (t5 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB235;

LAB234:    t29 = (t26 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB235;

LAB238:    if (*((unsigned int *)t5) < *((unsigned int *)t26))
        goto LAB236;

LAB237:    t31 = (t6 + 4);
    t7 = *((unsigned int *)t31);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB239;

LAB240:    goto LAB231;

LAB235:    t30 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB237;

LAB236:    *((unsigned int *)t6) = 1;
    goto LAB237;

LAB239:    xsi_set_current_line(188, ng0);

LAB241:    xsi_set_current_line(189, ng0);
    t45 = (t0 + 3368);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    memset(t32, 0, 8);
    t56 = (t32 + 4);
    t57 = (t47 + 4);
    t12 = *((unsigned int *)t47);
    t13 = (t12 >> 7);
    t14 = (t13 & 1);
    *((unsigned int *)t32) = t14;
    t15 = *((unsigned int *)t57);
    t16 = (t15 >> 7);
    t17 = (t16 & 1);
    *((unsigned int *)t56) = t17;
    t58 = (t0 + 3688);
    xsi_vlogvar_assign_value(t58, t32, 0, 0, 1);
    xsi_set_current_line(190, ng0);
    t2 = (t0 + 3368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_lshift(t6, 8, t5, 8, t19, 32);
    t20 = (t0 + 3368);
    xsi_vlogvar_assign_value(t20, t6, 0, 0, 8);
    xsi_set_current_line(191, ng0);
    t2 = (t0 + 3688);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = (t0 + 3368);
    t20 = (t0 + 3368);
    t26 = (t20 + 72U);
    t27 = *((char **)t26);
    t29 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t6, t27, 2, t29, 32, 1);
    t30 = (t6 + 4);
    t7 = *((unsigned int *)t30);
    t28 = (!(t7));
    if (t28 == 1)
        goto LAB242;

LAB243:    xsi_set_current_line(188, ng0);
    t2 = (t0 + 3208);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t5, 8, t19, 32);
    t20 = (t0 + 3208);
    xsi_vlogvar_assign_value(t20, t6, 0, 0, 8);
    goto LAB233;

LAB242:    xsi_vlogvar_assign_value(t19, t5, 0, *((unsigned int *)t6), 1);
    goto LAB243;

LAB246:    t27 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB247;

LAB248:    xsi_set_current_line(195, ng0);
    t30 = ((char*)((ng3)));
    t31 = (t0 + 4008);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 1);
    goto LAB250;

LAB253:    t45 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB254;

LAB255:    xsi_set_current_line(196, ng0);
    t47 = ((char*)((ng1)));
    t56 = (t0 + 3528);
    xsi_vlogvar_assign_value(t56, t47, 0, 0, 1);
    goto LAB257;

LAB262:    t9 = *((unsigned int *)t6);
    t10 = *((unsigned int *)t19);
    *((unsigned int *)t6) = (t9 | t10);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t19);
    *((unsigned int *)t4) = (t11 | t12);
    goto LAB261;

LAB266:    t20 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB267;

LAB268:    xsi_set_current_line(226, ng0);

LAB271:    xsi_set_current_line(227, ng0);
    t27 = (t0 + 1368U);
    t29 = *((char **)t27);
    t27 = (t0 + 3368);
    xsi_vlogvar_assign_value(t27, t29, 0, 0, 8);
    xsi_set_current_line(228, ng0);
    t2 = (t0 + 2008U);
    t4 = *((char **)t2);
    memcpy(t6, t4, 8);
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 8);
    xsi_set_current_line(229, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB270;

LAB274:    t20 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB275;

LAB276:    xsi_set_current_line(232, ng0);

LAB279:    xsi_set_current_line(233, ng0);
    t27 = ((char*)((ng3)));
    t29 = (t0 + 2728);
    xsi_vlogvar_assign_value(t29, t27, 0, 0, 1);
    xsi_set_current_line(234, ng0);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t4, 8, t2, 32);
    t5 = (t0 + 3368);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 8);
    xsi_set_current_line(235, ng0);
    t2 = (t0 + 3368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t20 = (t5 + 4);
    t26 = (t19 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t19);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t20);
    t11 = *((unsigned int *)t26);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t20);
    t15 = *((unsigned int *)t26);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB283;

LAB280:    if (t16 != 0)
        goto LAB282;

LAB281:    *((unsigned int *)t6) = 1;

LAB283:    t29 = (t6 + 4);
    t21 = *((unsigned int *)t29);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB284;

LAB285:    xsi_set_current_line(239, ng0);

LAB288:    xsi_set_current_line(240, ng0);
    t2 = (t0 + 1848U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 8, t2, 32);
    t5 = (t0 + 2568);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 8);

LAB286:    goto LAB278;

LAB282:    t27 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB283;

LAB284:    xsi_set_current_line(235, ng0);

LAB287:    xsi_set_current_line(236, ng0);
    t30 = (t0 + 1848U);
    t31 = *((char **)t30);
    t30 = ((char*)((ng20)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_add(t32, 32, t31, 8, t30, 32);
    t45 = (t0 + 2568);
    xsi_vlogvar_assign_value(t45, t32, 0, 0, 8);
    goto LAB286;

}

static void Cont_249_2(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 5424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(249, ng0);
    t2 = (t0 + 3368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 255U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 255U);
    t14 = (t0 + 5840);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 63U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 5);
    t27 = (t0 + 5760);
    *((int *)t27) = 1;

LAB1:    return;
}


extern void work_m_00000000000886828566_0886308060_init()
{
	static char *pe[] = {(void *)Initial_43_0,(void *)Always_52_1,(void *)Cont_249_2};
	xsi_register_didat("work_m_00000000000886828566_0886308060", "isim/ALU_isim_beh.exe.sim/work/m_00000000000886828566_0886308060.didat");
	xsi_register_executes(pe);
}
