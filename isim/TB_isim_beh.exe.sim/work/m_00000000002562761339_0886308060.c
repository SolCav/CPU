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
static const char *ng0 = "C:/Users/RM/Desktop/backup/CPU_06/CPU_05_fix_isz/CPU/ALU.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {7U, 0U};
static int ng10[] = {7, 0};
static unsigned int ng11[] = {8U, 0U};
static unsigned int ng12[] = {9U, 0U};
static unsigned int ng13[] = {10U, 0U};
static unsigned int ng14[] = {11U, 0U};
static int ng15[] = {1, 0};
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
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_50_1(char *t0)
{
    char t6[8];
    char t44[8];
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
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    char *t47;

LAB0:    t1 = (t0 + 4856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 5424);
    *((int *)t2) = 1;
    t3 = (t0 + 4888);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(50, ng0);

LAB5:    xsi_set_current_line(51, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 2888);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 8);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    xsi_set_current_line(53, ng0);
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

LAB11:    xsi_set_current_line(193, ng0);

LAB121:    xsi_set_current_line(194, ng0);
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
        goto LAB125;

LAB122:    if (t16 != 0)
        goto LAB124;

LAB123:    *((unsigned int *)t6) = 1;

LAB125:    t26 = (t6 + 4);
    t21 = *((unsigned int *)t26);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB126;

LAB127:    xsi_set_current_line(200, ng0);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng3)));
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
        goto LAB133;

LAB130:    if (t16 != 0)
        goto LAB132;

LAB131:    *((unsigned int *)t6) = 1;

LAB133:    t26 = (t6 + 4);
    t21 = *((unsigned int *)t26);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB134;

LAB135:
LAB136:
LAB128:
LAB12:    goto LAB2;

LAB8:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(53, ng0);

LAB13:    xsi_set_current_line(54, ng0);
    t26 = ((char*)((ng1)));
    t27 = (t0 + 2728);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);

LAB14:    t2 = ((char*)((ng2)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t28 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng3)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t28 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng4)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t28 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng5)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t28 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng6)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t28 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng7)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t28 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng8)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t28 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng9)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t28 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng11)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t28 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng12)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t28 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng13)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t28 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng14)));
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

LAB15:    xsi_set_current_line(59, ng0);

LAB50:    xsi_set_current_line(60, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 1528U);
    t19 = *((char **)t4);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 8, t5, 8, t19, 8);
    t4 = (t0 + 3368);
    xsi_vlogvar_assign_value(t4, t6, 0, 0, 8);
    goto LAB49;

LAB17:    xsi_set_current_line(66, ng0);

LAB51:    xsi_set_current_line(67, ng0);
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
        goto LAB52;

LAB53:
LAB54:    t39 = (t0 + 3368);
    xsi_vlogvar_assign_value(t39, t6, 0, 0, 8);
    goto LAB49;

LAB19:    xsi_set_current_line(72, ng0);

LAB55:    xsi_set_current_line(73, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 1528U);
    t19 = *((char **)t4);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 8, t5, 8, t19, 8);
    t4 = (t0 + 3368);
    xsi_vlogvar_assign_value(t4, t6, 0, 0, 8);
    goto LAB49;

LAB21:    xsi_set_current_line(78, ng0);

LAB56:    xsi_set_current_line(79, ng0);
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
        goto LAB57;

LAB58:
LAB59:    t39 = (t0 + 3368);
    xsi_vlogvar_assign_value(t39, t6, 0, 0, 8);
    goto LAB49;

LAB23:    xsi_set_current_line(84, ng0);

LAB60:    xsi_set_current_line(85, ng0);
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
        goto LAB61;

LAB62:
LAB63:    t27 = (t0 + 3368);
    xsi_vlogvar_assign_value(t27, t6, 0, 0, 8);
    goto LAB49;

LAB25:    xsi_set_current_line(89, ng0);

LAB64:    xsi_set_current_line(90, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = (t0 + 3368);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 8);
    goto LAB49;

LAB27:    xsi_set_current_line(94, ng0);

LAB65:    xsi_set_current_line(95, ng0);
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
        goto LAB67;

LAB66:    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 255U);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 255U);
    t20 = (t0 + 3368);
    xsi_vlogvar_assign_value(t20, t6, 0, 0, 8);
    goto LAB49;

LAB29:    xsi_set_current_line(99, ng0);

LAB68:    xsi_set_current_line(100, ng0);
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
    t27 = (t0 + 3528);
    xsi_vlogvar_assign_value(t27, t6, 0, 0, 1);
    xsi_set_current_line(101, ng0);
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
    t26 = (t0 + 3688);
    xsi_vlogvar_assign_value(t26, t6, 0, 0, 1);
    xsi_set_current_line(102, ng0);
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
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 3688);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = (t0 + 3368);
    t20 = (t0 + 3368);
    t26 = (t20 + 72U);
    t27 = *((char **)t26);
    t29 = ((char*)((ng10)));
    xsi_vlog_generic_convert_bit_index(t6, t27, 2, t29, 32, 1);
    t39 = (t6 + 4);
    t7 = *((unsigned int *)t39);
    t28 = (!(t7));
    if (t28 == 1)
        goto LAB69;

LAB70:    goto LAB49;

LAB31:    xsi_set_current_line(109, ng0);

LAB71:    xsi_set_current_line(110, ng0);
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
    t27 = (t0 + 3528);
    xsi_vlogvar_assign_value(t27, t6, 0, 0, 1);
    xsi_set_current_line(111, ng0);
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
    t26 = (t0 + 3688);
    xsi_vlogvar_assign_value(t26, t6, 0, 0, 1);
    xsi_set_current_line(112, ng0);
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
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 3688);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = (t0 + 3368);
    t20 = (t0 + 3368);
    t26 = (t20 + 72U);
    t27 = *((char **)t26);
    t29 = ((char*)((ng10)));
    xsi_vlog_generic_convert_bit_index(t6, t27, 2, t29, 32, 1);
    t39 = (t6 + 4);
    t7 = *((unsigned int *)t39);
    t28 = (!(t7));
    if (t28 == 1)
        goto LAB72;

LAB73:    goto LAB49;

LAB33:    xsi_set_current_line(119, ng0);

LAB74:    xsi_set_current_line(121, ng0);
    t4 = (t0 + 2888);
    t5 = (t4 + 56U);
    t19 = *((char **)t5);
    t20 = (t0 + 3048);
    t26 = (t20 + 56U);
    t27 = *((char **)t26);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_rshift(t6, 8, t19, 8, t27, 8);
    t29 = (t0 + 3368);
    xsi_vlogvar_assign_value(t29, t6, 0, 0, 8);
    goto LAB49;

LAB35:    xsi_set_current_line(128, ng0);

LAB75:    xsi_set_current_line(130, ng0);
    t4 = (t0 + 2888);
    t5 = (t4 + 56U);
    t19 = *((char **)t5);
    t20 = (t0 + 3048);
    t26 = (t20 + 56U);
    t27 = *((char **)t26);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_lshift(t6, 8, t19, 8, t27, 8);
    t29 = (t0 + 3368);
    xsi_vlogvar_assign_value(t29, t6, 0, 0, 8);
    goto LAB49;

LAB37:    xsi_set_current_line(137, ng0);

LAB76:    xsi_set_current_line(138, ng0);
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
    t27 = (t0 + 3528);
    xsi_vlogvar_assign_value(t27, t6, 0, 0, 1);
    xsi_set_current_line(139, ng0);
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
    t26 = (t0 + 3688);
    xsi_vlogvar_assign_value(t26, t6, 0, 0, 1);
    xsi_set_current_line(140, ng0);
    t2 = (t0 + 2888);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = (t0 + 3368);
    xsi_vlogvar_assign_value(t19, t5, 0, 0, 8);
    xsi_set_current_line(141, ng0);
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
        goto LAB78;

LAB77:    if (t16 != 0)
        goto LAB79;

LAB80:    t29 = (t6 + 4);
    t21 = *((unsigned int *)t29);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB81;

LAB82:
LAB83:    goto LAB49;

LAB39:    xsi_set_current_line(152, ng0);

LAB96:    xsi_set_current_line(153, ng0);
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
    t27 = (t0 + 3528);
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
    t26 = (t0 + 3688);
    xsi_vlogvar_assign_value(t26, t6, 0, 0, 1);
    xsi_set_current_line(155, ng0);
    t2 = (t0 + 2888);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = (t0 + 3368);
    xsi_vlogvar_assign_value(t19, t5, 0, 0, 8);
    xsi_set_current_line(156, ng0);
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
        goto LAB98;

LAB97:    if (t16 != 0)
        goto LAB99;

LAB100:    t29 = (t6 + 4);
    t21 = *((unsigned int *)t29);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB101;

LAB102:
LAB103:    goto LAB49;

LAB41:    xsi_set_current_line(170, ng0);

LAB116:    xsi_set_current_line(171, ng0);
    t4 = (t0 + 2888);
    t5 = (t4 + 56U);
    t19 = *((char **)t5);
    t20 = ((char*)((ng15)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t19, 8, t20, 32);
    t26 = (t0 + 3368);
    xsi_vlogvar_assign_value(t26, t6, 0, 0, 8);
    goto LAB49;

LAB43:    xsi_set_current_line(176, ng0);

LAB117:    xsi_set_current_line(177, ng0);
    t4 = (t0 + 2888);
    t5 = (t4 + 56U);
    t19 = *((char **)t5);
    t20 = ((char*)((ng15)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t19, 8, t20, 32);
    t26 = (t0 + 3368);
    xsi_vlogvar_assign_value(t26, t6, 0, 0, 8);
    goto LAB49;

LAB45:    xsi_set_current_line(181, ng0);

LAB118:    xsi_set_current_line(182, ng0);
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
        goto LAB120;

LAB119:    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 255U);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 255U);
    t20 = (t0 + 3368);
    xsi_vlogvar_assign_value(t20, t6, 0, 0, 8);
    xsi_set_current_line(183, ng0);
    t2 = (t0 + 3368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = ((char*)((ng15)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t5, 8, t19, 32);
    t20 = (t0 + 3368);
    xsi_vlogvar_assign_value(t20, t6, 0, 0, 8);
    goto LAB49;

LAB52:    t15 = *((unsigned int *)t6);
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
    t30 = (~(t25));
    t31 = (t18 & t22);
    t32 = (t24 & t30);
    t33 = (~(t31));
    t34 = (~(t32));
    t35 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t35 & t33);
    t36 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t36 & t34);
    t37 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t37 & t33);
    t38 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t38 & t34);
    goto LAB54;

LAB57:    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t26);
    *((unsigned int *)t6) = (t15 | t16);
    t27 = (t5 + 4);
    t29 = (t19 + 4);
    t17 = *((unsigned int *)t27);
    t18 = (~(t17));
    t21 = *((unsigned int *)t5);
    t31 = (t21 & t18);
    t22 = *((unsigned int *)t29);
    t23 = (~(t22));
    t24 = *((unsigned int *)t19);
    t32 = (t24 & t23);
    t25 = (~(t31));
    t30 = (~(t32));
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 & t25);
    t34 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t34 & t30);
    goto LAB59;

LAB61:    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t26);
    *((unsigned int *)t6) = (t15 | t16);
    goto LAB63;

LAB67:    t9 = *((unsigned int *)t6);
    t10 = *((unsigned int *)t19);
    *((unsigned int *)t6) = (t9 | t10);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t19);
    *((unsigned int *)t4) = (t11 | t12);
    goto LAB66;

LAB69:    xsi_vlogvar_assign_value(t19, t5, 0, *((unsigned int *)t6), 1);
    goto LAB70;

LAB72:    xsi_vlogvar_assign_value(t19, t5, 0, *((unsigned int *)t6), 1);
    goto LAB73;

LAB78:    *((unsigned int *)t6) = 1;
    goto LAB80;

LAB79:    t27 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB80;

LAB81:    xsi_set_current_line(141, ng0);

LAB84:    xsi_set_current_line(142, ng0);
    xsi_set_current_line(142, ng0);
    t39 = ((char*)((ng1)));
    t40 = (t0 + 3208);
    xsi_vlogvar_assign_value(t40, t39, 0, 0, 8);

LAB85:    t2 = (t0 + 3208);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = (t0 + 3048);
    t20 = (t19 + 56U);
    t26 = *((char **)t20);
    memset(t6, 0, 8);
    t27 = (t5 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB87;

LAB86:    t29 = (t26 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB87;

LAB90:    if (*((unsigned int *)t5) < *((unsigned int *)t26))
        goto LAB88;

LAB89:    t40 = (t6 + 4);
    t7 = *((unsigned int *)t40);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB91;

LAB92:    goto LAB83;

LAB87:    t39 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB89;

LAB88:    *((unsigned int *)t6) = 1;
    goto LAB89;

LAB91:    xsi_set_current_line(142, ng0);

LAB93:    xsi_set_current_line(143, ng0);
    t41 = (t0 + 3368);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    memset(t44, 0, 8);
    t45 = (t44 + 4);
    t46 = (t43 + 4);
    t12 = *((unsigned int *)t43);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t44) = t14;
    t15 = *((unsigned int *)t46);
    t16 = (t15 >> 0);
    t17 = (t16 & 1);
    *((unsigned int *)t45) = t17;
    t47 = (t0 + 3528);
    xsi_vlogvar_assign_value(t47, t44, 0, 0, 1);
    xsi_set_current_line(144, ng0);
    t2 = (t0 + 3368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = ((char*)((ng15)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_rshift(t6, 8, t5, 8, t19, 32);
    t20 = (t0 + 3368);
    xsi_vlogvar_assign_value(t20, t6, 0, 0, 8);
    xsi_set_current_line(145, ng0);
    t2 = (t0 + 3528);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = (t0 + 3368);
    t20 = (t0 + 3368);
    t26 = (t20 + 72U);
    t27 = *((char **)t26);
    t29 = ((char*)((ng10)));
    xsi_vlog_generic_convert_bit_index(t6, t27, 2, t29, 32, 1);
    t39 = (t6 + 4);
    t7 = *((unsigned int *)t39);
    t28 = (!(t7));
    if (t28 == 1)
        goto LAB94;

LAB95:    xsi_set_current_line(142, ng0);
    t2 = (t0 + 3208);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = ((char*)((ng15)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t5, 8, t19, 32);
    t20 = (t0 + 3208);
    xsi_vlogvar_assign_value(t20, t6, 0, 0, 8);
    goto LAB85;

LAB94:    xsi_vlogvar_assign_value(t19, t5, 0, *((unsigned int *)t6), 1);
    goto LAB95;

LAB98:    *((unsigned int *)t6) = 1;
    goto LAB100;

LAB99:    t27 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB100;

LAB101:    xsi_set_current_line(156, ng0);

LAB104:    xsi_set_current_line(158, ng0);
    xsi_set_current_line(158, ng0);
    t39 = ((char*)((ng1)));
    t40 = (t0 + 3208);
    xsi_vlogvar_assign_value(t40, t39, 0, 0, 8);

LAB105:    t2 = (t0 + 3208);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = (t0 + 3048);
    t20 = (t19 + 56U);
    t26 = *((char **)t20);
    memset(t6, 0, 8);
    t27 = (t5 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB107;

LAB106:    t29 = (t26 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB107;

LAB110:    if (*((unsigned int *)t5) < *((unsigned int *)t26))
        goto LAB108;

LAB109:    t40 = (t6 + 4);
    t7 = *((unsigned int *)t40);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB111;

LAB112:    goto LAB103;

LAB107:    t39 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB109;

LAB108:    *((unsigned int *)t6) = 1;
    goto LAB109;

LAB111:    xsi_set_current_line(158, ng0);

LAB113:    xsi_set_current_line(159, ng0);
    t41 = (t0 + 3368);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    memset(t44, 0, 8);
    t45 = (t44 + 4);
    t46 = (t43 + 4);
    t12 = *((unsigned int *)t43);
    t13 = (t12 >> 7);
    t14 = (t13 & 1);
    *((unsigned int *)t44) = t14;
    t15 = *((unsigned int *)t46);
    t16 = (t15 >> 7);
    t17 = (t16 & 1);
    *((unsigned int *)t45) = t17;
    t47 = (t0 + 3528);
    xsi_vlogvar_assign_value(t47, t44, 0, 0, 1);
    xsi_set_current_line(160, ng0);
    t2 = (t0 + 3368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = ((char*)((ng15)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_lshift(t6, 8, t5, 8, t19, 32);
    t20 = (t0 + 3368);
    xsi_vlogvar_assign_value(t20, t6, 0, 0, 8);
    xsi_set_current_line(161, ng0);
    t2 = (t0 + 3528);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = (t0 + 3368);
    t20 = (t0 + 3368);
    t26 = (t20 + 72U);
    t27 = *((char **)t26);
    t29 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t6, t27, 2, t29, 32, 1);
    t39 = (t6 + 4);
    t7 = *((unsigned int *)t39);
    t28 = (!(t7));
    if (t28 == 1)
        goto LAB114;

LAB115:    xsi_set_current_line(158, ng0);
    t2 = (t0 + 3208);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = ((char*)((ng15)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t5, 8, t19, 32);
    t20 = (t0 + 3208);
    xsi_vlogvar_assign_value(t20, t6, 0, 0, 8);
    goto LAB105;

LAB114:    xsi_vlogvar_assign_value(t19, t5, 0, *((unsigned int *)t6), 1);
    goto LAB115;

LAB120:    t9 = *((unsigned int *)t6);
    t10 = *((unsigned int *)t19);
    *((unsigned int *)t6) = (t9 | t10);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t19);
    *((unsigned int *)t4) = (t11 | t12);
    goto LAB119;

LAB124:    t20 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB125;

LAB126:    xsi_set_current_line(194, ng0);

LAB129:    xsi_set_current_line(195, ng0);
    t27 = (t0 + 1368U);
    t29 = *((char **)t27);
    t27 = (t0 + 3368);
    xsi_vlogvar_assign_value(t27, t29, 0, 0, 8);
    xsi_set_current_line(196, ng0);
    t2 = (t0 + 2008U);
    t4 = *((char **)t2);
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 8);
    xsi_set_current_line(197, ng0);
    t2 = ((char*)((ng15)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB128;

LAB132:    t20 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB133;

LAB134:    xsi_set_current_line(200, ng0);

LAB137:    xsi_set_current_line(201, ng0);
    t27 = ((char*)((ng15)));
    t29 = (t0 + 2728);
    xsi_vlogvar_assign_value(t29, t27, 0, 0, 1);
    xsi_set_current_line(202, ng0);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng15)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t4, 8, t2, 32);
    t5 = (t0 + 3368);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 8);
    xsi_set_current_line(203, ng0);
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
        goto LAB141;

LAB138:    if (t16 != 0)
        goto LAB140;

LAB139:    *((unsigned int *)t6) = 1;

LAB141:    t29 = (t6 + 4);
    t21 = *((unsigned int *)t29);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB142;

LAB143:    xsi_set_current_line(207, ng0);

LAB146:    xsi_set_current_line(208, ng0);
    t2 = (t0 + 1848U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng15)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 8, t2, 32);
    t5 = (t0 + 2568);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 8);

LAB144:    goto LAB136;

LAB140:    t27 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB141;

LAB142:    xsi_set_current_line(203, ng0);

LAB145:    xsi_set_current_line(204, ng0);
    t39 = (t0 + 1848U);
    t40 = *((char **)t39);
    t39 = ((char*)((ng20)));
    memset(t44, 0, 8);
    xsi_vlog_unsigned_add(t44, 32, t40, 8, t39, 32);
    t41 = (t0 + 2568);
    xsi_vlogvar_assign_value(t41, t44, 0, 0, 8);
    goto LAB144;

}

static void Cont_217_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 5104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(217, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5520);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 255U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 7);
    t18 = (t0 + 5440);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000002562761339_0886308060_init()
{
	static char *pe[] = {(void *)Initial_43_0,(void *)Always_50_1,(void *)Cont_217_2};
	xsi_register_didat("work_m_00000000002562761339_0886308060", "isim/TB_isim_beh.exe.sim/work/m_00000000002562761339_0886308060.didat");
	xsi_register_executes(pe);
}
