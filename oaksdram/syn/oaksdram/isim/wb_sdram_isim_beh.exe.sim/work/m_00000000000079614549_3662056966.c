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

/* This file is designed for use with ISim build 0x2f7eec00 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/jessb/Projects/hdl/oaksdram/sdram.v";
static unsigned int ng1[] = {0U, 65535U};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {7U, 0U};
static unsigned int ng5[] = {8U, 0U};
static unsigned int ng6[] = {9U, 0U};
static unsigned int ng7[] = {0U, 0U};
static int ng8[] = {10, 0};
static const char *ng9 = "sdram: RESET";
static unsigned int ng10[] = {1U, 0U};
static const char *ng11 = "sdram: INIT";
static int ng12[] = {11000, 0};
static unsigned int ng13[] = {2U, 0U};
static const char *ng14 = "sdram: CKE_HIGH";
static unsigned int ng15[] = {3U, 0U};
static const char *ng16 = "sdram: PRECHARGE";
static int ng17[] = {2, 0};
static unsigned int ng18[] = {4U, 0U};
static const char *ng19 = "sdram: AUTO_RFRSH1";
static int ng20[] = {7, 0};
static unsigned int ng21[] = {5U, 0U};
static const char *ng22 = "sdram: AUTO_RFRSH2";
static unsigned int ng23[] = {6U, 0U};
static const char *ng24 = "sdram: LMR";
static unsigned int ng25[] = {49U, 0U};
static const char *ng26 = "sdram: WRITE";
static const char *ng27 = "sdram: READ";
static const char *ng28 = "sdram: in undefined state";
static int ng29[] = {6000000, 0};



static void Cont_124_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char *t1;
    char *t2;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
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
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;

LAB0:    t1 = (t0 + 7568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(124, ng0);
    t2 = (t0 + 4344U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t6 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t12 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t12) = 1;

LAB7:    memset(t4, 0, 8);
    t13 = (t5 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t5);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t13) != 0)
        goto LAB10;

LAB11:    t20 = (t4 + 4);
    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t20);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB12;

LAB13:    t26 = *((unsigned int *)t4);
    t27 = (~(t26));
    t28 = *((unsigned int *)t20);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t20) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t24, 8);

LAB20:    t30 = (t0 + 9664);
    t31 = (t30 + 32U);
    t32 = *((char **)t31);
    t33 = (t32 + 32U);
    t34 = *((char **)t33);
    memset(t34, 0, 8);
    t35 = 65535U;
    t36 = t35;
    t37 = (t3 + 4);
    t38 = *((unsigned int *)t3);
    t35 = (t35 & t38);
    t39 = *((unsigned int *)t37);
    t36 = (t36 & t39);
    t40 = (t34 + 4);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t41 | t35);
    t42 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t42 | t36);
    xsi_driver_vfirst_trans(t30, 0, 15);
    t43 = (t0 + 9516);
    *((int *)t43) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB11;

LAB12:    t24 = (t0 + 3332U);
    t25 = *((char **)t24);
    goto LAB13;

LAB14:    t24 = ((char*)((ng1)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 16, t25, 16, t24, 16);
    goto LAB20;

LAB18:    memcpy(t3, t25, 8);
    goto LAB20;

}

static void Cont_125_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t26[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;

LAB0:    t1 = (t0 + 7704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 5860);
    t5 = (t2 + 36U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    t21 = *((unsigned int *)t14);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t26, 8);

LAB16:    t27 = (t0 + 9700);
    t28 = (t27 + 32U);
    t29 = *((char **)t28);
    t30 = (t29 + 32U);
    t31 = *((char **)t30);
    memset(t31, 0, 8);
    t32 = 1U;
    t33 = t32;
    t34 = (t3 + 4);
    t35 = *((unsigned int *)t3);
    t32 = (t32 & t35);
    t36 = *((unsigned int *)t34);
    t33 = (t33 & t36);
    t37 = (t31 + 4);
    t38 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t38 | t32);
    t39 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t39 | t33);
    xsi_driver_vfirst_trans(t27, 0, 0);
    t40 = (t0 + 9524);
    *((int *)t40) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = ((char*)((ng2)));
    goto LAB9;

LAB10:    t23 = (t0 + 5952);
    t24 = (t23 + 36U);
    t25 = *((char **)t24);
    memcpy(t26, t25, 8);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t18, 32, t26, 32);
    goto LAB16;

LAB14:    memcpy(t3, t18, 8);
    goto LAB16;

}

static void Cont_126_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t26[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;

LAB0:    t1 = (t0 + 7840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 5860);
    t5 = (t2 + 36U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    t21 = *((unsigned int *)t14);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t26, 8);

LAB16:    t27 = (t0 + 9736);
    t28 = (t27 + 32U);
    t29 = *((char **)t28);
    t30 = (t29 + 32U);
    t31 = *((char **)t30);
    memset(t31, 0, 8);
    t32 = 1U;
    t33 = t32;
    t34 = (t3 + 4);
    t35 = *((unsigned int *)t3);
    t32 = (t32 & t35);
    t36 = *((unsigned int *)t34);
    t33 = (t33 & t36);
    t37 = (t31 + 4);
    t38 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t38 | t32);
    t39 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t39 | t33);
    xsi_driver_vfirst_trans(t27, 0, 0);
    t40 = (t0 + 9532);
    *((int *)t40) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = ((char*)((ng3)));
    goto LAB9;

LAB10:    t23 = (t0 + 6044);
    t24 = (t23 + 36U);
    t25 = *((char **)t24);
    memcpy(t26, t25, 8);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t18, 32, t26, 32);
    goto LAB16;

LAB14:    memcpy(t3, t18, 8);
    goto LAB16;

}

static void Cont_147_3(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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

LAB0:    t1 = (t0 + 7976U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 6596);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 2);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 2);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 9772);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 32U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 9540);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_148_4(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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

LAB0:    t1 = (t0 + 8112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(148, ng0);
    t2 = (t0 + 6596);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 1);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 9808);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 32U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 9548);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_149_5(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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

LAB0:    t1 = (t0 + 8248U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(149, ng0);
    t2 = (t0 + 6596);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 9844);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 32U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 9556);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Always_158_6(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    t1 = (t0 + 8384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(158, ng0);
    t2 = (t0 + 9564);
    *((int *)t2) = 1;
    t3 = (t0 + 8408);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(164, ng0);

LAB5:    xsi_set_current_line(166, ng0);
    t5 = (t0 + 2596U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(169, ng0);

LAB14:    xsi_set_current_line(170, ng0);
    t2 = (t0 + 3792U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB18;

LAB16:    if (*((unsigned int *)t2) == 0)
        goto LAB15;

LAB17:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;

LAB18:    t6 = (t4 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(173, ng0);
    t2 = (t0 + 4344U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB26;

LAB24:    if (*((unsigned int *)t2) == 0)
        goto LAB23;

LAB25:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;

LAB26:    t6 = (t4 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(176, ng0);

LAB31:    xsi_set_current_line(177, ng0);
    t2 = (t0 + 6504);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = (t0 + 6596);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 3, 0LL);

LAB29:
LAB21:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(166, ng0);

LAB13:    xsi_set_current_line(167, ng0);
    t19 = (t0 + 6504);
    t20 = (t19 + 36U);
    t21 = *((char **)t20);
    t22 = (t0 + 6596);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 3, 0LL);
    goto LAB12;

LAB15:    *((unsigned int *)t4) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(170, ng0);

LAB22:    xsi_set_current_line(171, ng0);
    t12 = (t0 + 3424U);
    t13 = *((char **)t12);
    t12 = (t0 + 6596);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 3, 0LL);
    goto LAB21;

LAB23:    *((unsigned int *)t4) = 1;
    goto LAB26;

LAB27:    xsi_set_current_line(173, ng0);

LAB30:    xsi_set_current_line(174, ng0);
    t12 = (t0 + 3976U);
    t13 = *((char **)t12);
    t12 = (t0 + 6596);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 3, 0LL);
    goto LAB29;

}

static void Always_182_7(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    t1 = (t0 + 8520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(182, ng0);
    t2 = (t0 + 9572);
    *((int *)t2) = 1;
    t3 = (t0 + 8544);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(193, ng0);

LAB5:    xsi_set_current_line(195, ng0);
    t5 = (t0 + 2596U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(200, ng0);

LAB14:    xsi_set_current_line(201, ng0);
    t2 = (t0 + 2412U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(206, ng0);
    t2 = (t0 + 2320U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(211, ng0);

LAB23:    xsi_set_current_line(212, ng0);
    t2 = (t0 + 6688);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = (t0 + 5584);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 12, 0LL);
    xsi_set_current_line(213, ng0);
    t2 = (t0 + 6780);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = (t0 + 5676);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 2, 0LL);
    xsi_set_current_line(214, ng0);
    t2 = (t0 + 4252U);
    t3 = *((char **)t2);
    t2 = (t0 + 5768);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);

LAB21:
LAB17:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(195, ng0);

LAB13:    xsi_set_current_line(196, ng0);
    t19 = (t0 + 6688);
    t20 = (t19 + 36U);
    t21 = *((char **)t20);
    t22 = (t0 + 5584);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 12, 0LL);
    xsi_set_current_line(197, ng0);
    t2 = (t0 + 6780);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = (t0 + 5676);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 2, 0LL);
    xsi_set_current_line(198, ng0);
    t2 = (t0 + 4252U);
    t3 = *((char **)t2);
    t2 = (t0 + 5768);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    goto LAB12;

LAB15:    xsi_set_current_line(201, ng0);

LAB18:    xsi_set_current_line(202, ng0);
    t5 = (t0 + 3516U);
    t6 = *((char **)t5);
    t5 = (t0 + 5584);
    xsi_vlogvar_wait_assign_value(t5, t6, 0, 0, 12, 0LL);
    xsi_set_current_line(203, ng0);
    t2 = (t0 + 3608U);
    t3 = *((char **)t2);
    t2 = (t0 + 5676);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(204, ng0);
    t2 = (t0 + 3700U);
    t3 = *((char **)t2);
    t2 = (t0 + 5768);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    goto LAB17;

LAB19:    xsi_set_current_line(206, ng0);

LAB22:    xsi_set_current_line(207, ng0);
    t5 = (t0 + 4068U);
    t6 = *((char **)t5);
    t5 = (t0 + 5584);
    xsi_vlogvar_wait_assign_value(t5, t6, 0, 0, 12, 0LL);
    xsi_set_current_line(208, ng0);
    t2 = (t0 + 4160U);
    t3 = *((char **)t2);
    t2 = (t0 + 5676);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(209, ng0);
    t2 = (t0 + 4252U);
    t3 = *((char **)t2);
    t2 = (t0 + 5768);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    goto LAB21;

}

static void Cont_241_8(char *t0)
{
    char t3[16];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 8656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(241, ng0);
    t2 = (t0 + 1676U);
    t4 = *((char **)t2);
    t2 = (t0 + 1768U);
    t5 = *((char **)t2);
    xsi_vlogtype_concat(t3, 36, 36, 2U, t5, 4, t4, 32);
    t2 = (t0 + 9880);
    t6 = (t2 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    xsi_vlog_bit_copy(t9, 0, t3, 0, 36);
    xsi_driver_vfirst_trans(t2, 0, 35);
    t10 = (t0 + 9580);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_337_9(char *t0)
{
    char t3[8];
    char t17[8];
    char t33[8];
    char t69[8];
    char t85[8];
    char t102[8];
    char t118[8];
    char t126[8];
    char t154[8];
    char t171[8];
    char t187[8];
    char t195[8];
    char t223[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    int t57;
    int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    char *t100;
    char *t101;
    char *t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    char *t131;
    char *t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    char *t140;
    char *t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    char *t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    char *t161;
    char *t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    char *t167;
    char *t168;
    char *t169;
    char *t170;
    char *t172;
    char *t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    char *t186;
    char *t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    char *t194;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    char *t199;
    char *t200;
    char *t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    char *t209;
    char *t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    int t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    int t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    unsigned int t222;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    char *t227;
    char *t228;
    char *t229;
    unsigned int t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    char *t237;
    char *t238;
    unsigned int t239;
    unsigned int t240;
    unsigned int t241;
    unsigned int t242;
    unsigned int t243;
    unsigned int t244;
    unsigned int t245;
    unsigned int t246;
    int t247;
    int t248;
    unsigned int t249;
    unsigned int t250;
    unsigned int t251;
    unsigned int t252;
    unsigned int t253;
    unsigned int t254;
    char *t255;
    char *t256;
    char *t257;
    char *t258;
    char *t259;
    unsigned int t260;
    unsigned int t261;
    char *t262;
    unsigned int t263;
    unsigned int t264;
    char *t265;
    unsigned int t266;
    unsigned int t267;
    char *t268;

LAB0:    t1 = (t0 + 8792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(337, ng0);
    t2 = (t0 + 5860);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t6) == 0)
        goto LAB4;

LAB6:    t12 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t12) = 1;

LAB7:    t13 = (t0 + 6412);
    t14 = (t13 + 36U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng2)));
    memset(t17, 0, 8);
    t18 = (t15 + 4);
    t19 = (t16 + 4);
    t20 = *((unsigned int *)t15);
    t21 = *((unsigned int *)t16);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t18);
    t24 = *((unsigned int *)t19);
    t25 = (t23 ^ t24);
    t26 = (t22 | t25);
    t27 = *((unsigned int *)t18);
    t28 = *((unsigned int *)t19);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB11;

LAB8:    if (t29 != 0)
        goto LAB10;

LAB9:    *((unsigned int *)t17) = 1;

LAB11:    t34 = *((unsigned int *)t3);
    t35 = *((unsigned int *)t17);
    t36 = (t34 & t35);
    *((unsigned int *)t33) = t36;
    t37 = (t3 + 4);
    t38 = (t17 + 4);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t37);
    t41 = *((unsigned int *)t38);
    t42 = (t40 | t41);
    *((unsigned int *)t39) = t42;
    t43 = *((unsigned int *)t39);
    t44 = (t43 != 0);
    if (t44 == 1)
        goto LAB12;

LAB13:
LAB14:    t65 = (t0 + 6320);
    t66 = (t65 + 36U);
    t67 = *((char **)t66);
    t68 = ((char*)((ng4)));
    memset(t69, 0, 8);
    t70 = (t67 + 4);
    t71 = (t68 + 4);
    t72 = *((unsigned int *)t67);
    t73 = *((unsigned int *)t68);
    t74 = (t72 ^ t73);
    t75 = *((unsigned int *)t70);
    t76 = *((unsigned int *)t71);
    t77 = (t75 ^ t76);
    t78 = (t74 | t77);
    t79 = *((unsigned int *)t70);
    t80 = *((unsigned int *)t71);
    t81 = (t79 | t80);
    t82 = (~(t81));
    t83 = (t78 & t82);
    if (t83 != 0)
        goto LAB18;

LAB15:    if (t81 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t69) = 1;

LAB18:    memset(t85, 0, 8);
    t86 = (t69 + 4);
    t87 = *((unsigned int *)t86);
    t88 = (~(t87));
    t89 = *((unsigned int *)t69);
    t90 = (t89 & t88);
    t91 = (t90 & 1U);
    if (t91 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t86) != 0)
        goto LAB21;

LAB22:    t93 = (t85 + 4);
    t94 = *((unsigned int *)t85);
    t95 = (!(t94));
    t96 = *((unsigned int *)t93);
    t97 = (t95 || t96);
    if (t97 > 0)
        goto LAB23;

LAB24:    memcpy(t126, t85, 8);

LAB25:    memset(t154, 0, 8);
    t155 = (t126 + 4);
    t156 = *((unsigned int *)t155);
    t157 = (~(t156));
    t158 = *((unsigned int *)t126);
    t159 = (t158 & t157);
    t160 = (t159 & 1U);
    if (t160 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t155) != 0)
        goto LAB39;

LAB40:    t162 = (t154 + 4);
    t163 = *((unsigned int *)t154);
    t164 = (!(t163));
    t165 = *((unsigned int *)t162);
    t166 = (t164 || t165);
    if (t166 > 0)
        goto LAB41;

LAB42:    memcpy(t195, t154, 8);

LAB43:    t224 = *((unsigned int *)t33);
    t225 = *((unsigned int *)t195);
    t226 = (t224 & t225);
    *((unsigned int *)t223) = t226;
    t227 = (t33 + 4);
    t228 = (t195 + 4);
    t229 = (t223 + 4);
    t230 = *((unsigned int *)t227);
    t231 = *((unsigned int *)t228);
    t232 = (t230 | t231);
    *((unsigned int *)t229) = t232;
    t233 = *((unsigned int *)t229);
    t234 = (t233 != 0);
    if (t234 == 1)
        goto LAB55;

LAB56:
LAB57:    t255 = (t0 + 9916);
    t256 = (t255 + 32U);
    t257 = *((char **)t256);
    t258 = (t257 + 32U);
    t259 = *((char **)t258);
    memset(t259, 0, 8);
    t260 = 1U;
    t261 = t260;
    t262 = (t223 + 4);
    t263 = *((unsigned int *)t223);
    t260 = (t260 & t263);
    t264 = *((unsigned int *)t262);
    t261 = (t261 & t264);
    t265 = (t259 + 4);
    t266 = *((unsigned int *)t259);
    *((unsigned int *)t259) = (t266 | t260);
    t267 = *((unsigned int *)t265);
    *((unsigned int *)t265) = (t267 | t261);
    xsi_driver_vfirst_trans(t255, 0, 0);
    t268 = (t0 + 9588);
    *((int *)t268) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB10:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB11;

LAB12:    t45 = *((unsigned int *)t33);
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t33) = (t45 | t46);
    t47 = (t3 + 4);
    t48 = (t17 + 4);
    t49 = *((unsigned int *)t3);
    t50 = (~(t49));
    t51 = *((unsigned int *)t47);
    t52 = (~(t51));
    t53 = *((unsigned int *)t17);
    t54 = (~(t53));
    t55 = *((unsigned int *)t48);
    t56 = (~(t55));
    t57 = (t50 & t52);
    t58 = (t54 & t56);
    t59 = (~(t57));
    t60 = (~(t58));
    t61 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t61 & t59);
    t62 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t62 & t60);
    t63 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t63 & t59);
    t64 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t64 & t60);
    goto LAB14;

LAB17:    t84 = (t69 + 4);
    *((unsigned int *)t69) = 1;
    *((unsigned int *)t84) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t85) = 1;
    goto LAB22;

LAB21:    t92 = (t85 + 4);
    *((unsigned int *)t85) = 1;
    *((unsigned int *)t92) = 1;
    goto LAB22;

LAB23:    t98 = (t0 + 6320);
    t99 = (t98 + 36U);
    t100 = *((char **)t99);
    t101 = ((char*)((ng5)));
    memset(t102, 0, 8);
    t103 = (t100 + 4);
    t104 = (t101 + 4);
    t105 = *((unsigned int *)t100);
    t106 = *((unsigned int *)t101);
    t107 = (t105 ^ t106);
    t108 = *((unsigned int *)t103);
    t109 = *((unsigned int *)t104);
    t110 = (t108 ^ t109);
    t111 = (t107 | t110);
    t112 = *((unsigned int *)t103);
    t113 = *((unsigned int *)t104);
    t114 = (t112 | t113);
    t115 = (~(t114));
    t116 = (t111 & t115);
    if (t116 != 0)
        goto LAB29;

LAB26:    if (t114 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t102) = 1;

LAB29:    memset(t118, 0, 8);
    t119 = (t102 + 4);
    t120 = *((unsigned int *)t119);
    t121 = (~(t120));
    t122 = *((unsigned int *)t102);
    t123 = (t122 & t121);
    t124 = (t123 & 1U);
    if (t124 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t119) != 0)
        goto LAB32;

LAB33:    t127 = *((unsigned int *)t85);
    t128 = *((unsigned int *)t118);
    t129 = (t127 | t128);
    *((unsigned int *)t126) = t129;
    t130 = (t85 + 4);
    t131 = (t118 + 4);
    t132 = (t126 + 4);
    t133 = *((unsigned int *)t130);
    t134 = *((unsigned int *)t131);
    t135 = (t133 | t134);
    *((unsigned int *)t132) = t135;
    t136 = *((unsigned int *)t132);
    t137 = (t136 != 0);
    if (t137 == 1)
        goto LAB34;

LAB35:
LAB36:    goto LAB25;

LAB28:    t117 = (t102 + 4);
    *((unsigned int *)t102) = 1;
    *((unsigned int *)t117) = 1;
    goto LAB29;

LAB30:    *((unsigned int *)t118) = 1;
    goto LAB33;

LAB32:    t125 = (t118 + 4);
    *((unsigned int *)t118) = 1;
    *((unsigned int *)t125) = 1;
    goto LAB33;

LAB34:    t138 = *((unsigned int *)t126);
    t139 = *((unsigned int *)t132);
    *((unsigned int *)t126) = (t138 | t139);
    t140 = (t85 + 4);
    t141 = (t118 + 4);
    t142 = *((unsigned int *)t140);
    t143 = (~(t142));
    t144 = *((unsigned int *)t85);
    t145 = (t144 & t143);
    t146 = *((unsigned int *)t141);
    t147 = (~(t146));
    t148 = *((unsigned int *)t118);
    t149 = (t148 & t147);
    t150 = (~(t145));
    t151 = (~(t149));
    t152 = *((unsigned int *)t132);
    *((unsigned int *)t132) = (t152 & t150);
    t153 = *((unsigned int *)t132);
    *((unsigned int *)t132) = (t153 & t151);
    goto LAB36;

LAB37:    *((unsigned int *)t154) = 1;
    goto LAB40;

LAB39:    t161 = (t154 + 4);
    *((unsigned int *)t154) = 1;
    *((unsigned int *)t161) = 1;
    goto LAB40;

LAB41:    t167 = (t0 + 6320);
    t168 = (t167 + 36U);
    t169 = *((char **)t168);
    t170 = ((char*)((ng6)));
    memset(t171, 0, 8);
    t172 = (t169 + 4);
    t173 = (t170 + 4);
    t174 = *((unsigned int *)t169);
    t175 = *((unsigned int *)t170);
    t176 = (t174 ^ t175);
    t177 = *((unsigned int *)t172);
    t178 = *((unsigned int *)t173);
    t179 = (t177 ^ t178);
    t180 = (t176 | t179);
    t181 = *((unsigned int *)t172);
    t182 = *((unsigned int *)t173);
    t183 = (t181 | t182);
    t184 = (~(t183));
    t185 = (t180 & t184);
    if (t185 != 0)
        goto LAB47;

LAB44:    if (t183 != 0)
        goto LAB46;

LAB45:    *((unsigned int *)t171) = 1;

LAB47:    memset(t187, 0, 8);
    t188 = (t171 + 4);
    t189 = *((unsigned int *)t188);
    t190 = (~(t189));
    t191 = *((unsigned int *)t171);
    t192 = (t191 & t190);
    t193 = (t192 & 1U);
    if (t193 != 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t188) != 0)
        goto LAB50;

LAB51:    t196 = *((unsigned int *)t154);
    t197 = *((unsigned int *)t187);
    t198 = (t196 | t197);
    *((unsigned int *)t195) = t198;
    t199 = (t154 + 4);
    t200 = (t187 + 4);
    t201 = (t195 + 4);
    t202 = *((unsigned int *)t199);
    t203 = *((unsigned int *)t200);
    t204 = (t202 | t203);
    *((unsigned int *)t201) = t204;
    t205 = *((unsigned int *)t201);
    t206 = (t205 != 0);
    if (t206 == 1)
        goto LAB52;

LAB53:
LAB54:    goto LAB43;

LAB46:    t186 = (t171 + 4);
    *((unsigned int *)t171) = 1;
    *((unsigned int *)t186) = 1;
    goto LAB47;

LAB48:    *((unsigned int *)t187) = 1;
    goto LAB51;

LAB50:    t194 = (t187 + 4);
    *((unsigned int *)t187) = 1;
    *((unsigned int *)t194) = 1;
    goto LAB51;

LAB52:    t207 = *((unsigned int *)t195);
    t208 = *((unsigned int *)t201);
    *((unsigned int *)t195) = (t207 | t208);
    t209 = (t154 + 4);
    t210 = (t187 + 4);
    t211 = *((unsigned int *)t209);
    t212 = (~(t211));
    t213 = *((unsigned int *)t154);
    t214 = (t213 & t212);
    t215 = *((unsigned int *)t210);
    t216 = (~(t215));
    t217 = *((unsigned int *)t187);
    t218 = (t217 & t216);
    t219 = (~(t214));
    t220 = (~(t218));
    t221 = *((unsigned int *)t201);
    *((unsigned int *)t201) = (t221 & t219);
    t222 = *((unsigned int *)t201);
    *((unsigned int *)t201) = (t222 & t220);
    goto LAB54;

LAB55:    t235 = *((unsigned int *)t223);
    t236 = *((unsigned int *)t229);
    *((unsigned int *)t223) = (t235 | t236);
    t237 = (t33 + 4);
    t238 = (t195 + 4);
    t239 = *((unsigned int *)t33);
    t240 = (~(t239));
    t241 = *((unsigned int *)t237);
    t242 = (~(t241));
    t243 = *((unsigned int *)t195);
    t244 = (~(t243));
    t245 = *((unsigned int *)t238);
    t246 = (~(t245));
    t247 = (t240 & t242);
    t248 = (t244 & t246);
    t249 = (~(t247));
    t250 = (~(t248));
    t251 = *((unsigned int *)t229);
    *((unsigned int *)t229) = (t251 & t249);
    t252 = *((unsigned int *)t229);
    *((unsigned int *)t229) = (t252 & t250);
    t253 = *((unsigned int *)t223);
    *((unsigned int *)t223) = (t253 & t249);
    t254 = *((unsigned int *)t223);
    *((unsigned int *)t223) = (t254 & t250);
    goto LAB57;

}

static void Always_341_10(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 8928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(341, ng0);
    t2 = (t0 + 9596);
    *((int *)t2) = 1;
    t3 = (t0 + 8952);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(341, ng0);

LAB5:    xsi_set_current_line(342, ng0);
    t4 = (t0 + 1492U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(345, ng0);

LAB10:    xsi_set_current_line(347, ng0);
    t2 = (t0 + 4620U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:
LAB13:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(342, ng0);

LAB9:    xsi_set_current_line(343, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 5860);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB8;

LAB11:    xsi_set_current_line(347, ng0);

LAB14:    xsi_set_current_line(349, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 5860);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    goto LAB13;

}

static void Always_357_11(char *t0)
{
    char t7[8];
    char t22[8];
    char t29[8];
    char t65[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;

LAB0:    t1 = (t0 + 9064U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(357, ng0);
    t2 = (t0 + 9604);
    *((int *)t2) = 1;
    t3 = (t0 + 9088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(357, ng0);

LAB5:    xsi_set_current_line(358, ng0);
    t4 = (t0 + 5860);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t8) != 0)
        goto LAB8;

LAB9:    t15 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t17 = (!(t16));
    t18 = *((unsigned int *)t15);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB10;

LAB11:    memcpy(t29, t7, 8);

LAB12:    t57 = (t29 + 4);
    t58 = *((unsigned int *)t57);
    t59 = (~(t58));
    t60 = *((unsigned int *)t29);
    t61 = (t60 & t59);
    t62 = (t61 != 0);
    if (t62 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(371, ng0);

LAB24:    xsi_set_current_line(372, ng0);
    t2 = (t0 + 6320);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t7, 0, 8);
    t6 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t8);
    t16 = (t12 ^ t13);
    t17 = (t11 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t8);
    t23 = (t18 | t19);
    t24 = (~(t23));
    t25 = (t17 & t24);
    if (t25 != 0)
        goto LAB28;

LAB25:    if (t23 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t7) = 1;

LAB28:    memset(t22, 0, 8);
    t15 = (t7 + 4);
    t26 = *((unsigned int *)t15);
    t27 = (~(t26));
    t30 = *((unsigned int *)t7);
    t31 = (t30 & t27);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t15) != 0)
        goto LAB31;

LAB32:    t21 = (t22 + 4);
    t36 = *((unsigned int *)t22);
    t37 = *((unsigned int *)t21);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB33;

LAB34:    memcpy(t65, t22, 8);

LAB35:    t77 = (t65 + 4);
    t78 = *((unsigned int *)t77);
    t79 = (~(t78));
    t80 = *((unsigned int *)t65);
    t81 = (t80 & t79);
    t82 = (t81 != 0);
    if (t82 > 0)
        goto LAB43;

LAB44:
LAB45:    xsi_set_current_line(375, ng0);
    t2 = (t0 + 6412);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t7, 0, 8);
    t6 = (t4 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB48;

LAB47:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB48;

LAB51:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB49;

LAB50:    t15 = (t7 + 4);
    t9 = *((unsigned int *)t15);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB52;

LAB53:    xsi_set_current_line(379, ng0);

LAB56:    xsi_set_current_line(380, ng0);
    t2 = (t0 + 6320);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);

LAB57:    t5 = ((char*)((ng7)));
    t48 = xsi_vlog_unsigned_case_compare(t4, 8, t5, 8);
    if (t48 == 1)
        goto LAB58;

LAB59:    t2 = ((char*)((ng10)));
    t48 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t48 == 1)
        goto LAB60;

LAB61:    t2 = ((char*)((ng13)));
    t48 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t48 == 1)
        goto LAB62;

LAB63:    t2 = ((char*)((ng15)));
    t48 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t48 == 1)
        goto LAB64;

LAB65:    t2 = ((char*)((ng18)));
    t48 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t48 == 1)
        goto LAB66;

LAB67:    t2 = ((char*)((ng21)));
    t48 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t48 == 1)
        goto LAB68;

LAB69:    t2 = ((char*)((ng23)));
    t48 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t48 == 1)
        goto LAB70;

LAB71:    t2 = ((char*)((ng4)));
    t48 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t48 == 1)
        goto LAB72;

LAB73:    t2 = ((char*)((ng5)));
    t48 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t48 == 1)
        goto LAB74;

LAB75:    t2 = ((char*)((ng6)));
    t48 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t48 == 1)
        goto LAB76;

LAB77:
LAB79:
LAB78:    xsi_set_current_line(478, ng0);

LAB180:    xsi_set_current_line(479, ng0);
    xsi_vlogfile_write(1, 0, 0, ng28, 1, t0);
    xsi_set_current_line(480, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 6320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);

LAB80:
LAB54:
LAB22:    goto LAB2;

LAB6:    *((unsigned int *)t7) = 1;
    goto LAB9;

LAB8:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB9;

LAB10:    t20 = (t0 + 1492U);
    t21 = *((char **)t20);
    memset(t22, 0, 8);
    t20 = (t21 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t20) != 0)
        goto LAB15;

LAB16:    t30 = *((unsigned int *)t7);
    t31 = *((unsigned int *)t22);
    t32 = (t30 | t31);
    *((unsigned int *)t29) = t32;
    t33 = (t7 + 4);
    t34 = (t22 + 4);
    t35 = (t29 + 4);
    t36 = *((unsigned int *)t33);
    t37 = *((unsigned int *)t34);
    t38 = (t36 | t37);
    *((unsigned int *)t35) = t38;
    t39 = *((unsigned int *)t35);
    t40 = (t39 != 0);
    if (t40 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB12;

LAB13:    *((unsigned int *)t22) = 1;
    goto LAB16;

LAB15:    t28 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB16;

LAB17:    t41 = *((unsigned int *)t29);
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t29) = (t41 | t42);
    t43 = (t7 + 4);
    t44 = (t22 + 4);
    t45 = *((unsigned int *)t43);
    t46 = (~(t45));
    t47 = *((unsigned int *)t7);
    t48 = (t47 & t46);
    t49 = *((unsigned int *)t44);
    t50 = (~(t49));
    t51 = *((unsigned int *)t22);
    t52 = (t51 & t50);
    t53 = (~(t48));
    t54 = (~(t52));
    t55 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t55 & t53);
    t56 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t56 & t54);
    goto LAB19;

LAB20:    xsi_set_current_line(358, ng0);

LAB23:    xsi_set_current_line(360, ng0);
    t63 = ((char*)((ng2)));
    t64 = (t0 + 5952);
    xsi_vlogvar_wait_assign_value(t64, t63, 0, 0, 1, 0LL);
    xsi_set_current_line(361, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6044);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(362, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6504);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(363, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 6688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 12, 0LL);
    xsi_set_current_line(364, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 6780);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(365, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 6320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(366, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 6412);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 25, 0LL);
    xsi_set_current_line(367, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6136);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(368, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6228);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(369, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6964);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB22;

LAB27:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB28;

LAB29:    *((unsigned int *)t22) = 1;
    goto LAB32;

LAB31:    t20 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB32;

LAB33:    t28 = (t0 + 6872);
    t33 = (t28 + 36U);
    t34 = *((char **)t33);
    memset(t29, 0, 8);
    t35 = (t34 + 4);
    t39 = *((unsigned int *)t35);
    t40 = (~(t39));
    t41 = *((unsigned int *)t34);
    t42 = (t41 & t40);
    t45 = (t42 & 1U);
    if (t45 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t35) != 0)
        goto LAB38;

LAB39:    t46 = *((unsigned int *)t22);
    t47 = *((unsigned int *)t29);
    t49 = (t46 & t47);
    *((unsigned int *)t65) = t49;
    t44 = (t22 + 4);
    t57 = (t29 + 4);
    t63 = (t65 + 4);
    t50 = *((unsigned int *)t44);
    t51 = *((unsigned int *)t57);
    t53 = (t50 | t51);
    *((unsigned int *)t63) = t53;
    t54 = *((unsigned int *)t63);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB40;

LAB41:
LAB42:    goto LAB35;

LAB36:    *((unsigned int *)t29) = 1;
    goto LAB39;

LAB38:    t43 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB39;

LAB40:    t56 = *((unsigned int *)t65);
    t58 = *((unsigned int *)t63);
    *((unsigned int *)t65) = (t56 | t58);
    t64 = (t22 + 4);
    t66 = (t29 + 4);
    t59 = *((unsigned int *)t22);
    t60 = (~(t59));
    t61 = *((unsigned int *)t64);
    t62 = (~(t61));
    t67 = *((unsigned int *)t29);
    t68 = (~(t67));
    t69 = *((unsigned int *)t66);
    t70 = (~(t69));
    t48 = (t60 & t62);
    t52 = (t68 & t70);
    t71 = (~(t48));
    t72 = (~(t52));
    t73 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t73 & t71);
    t74 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t74 & t72);
    t75 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t75 & t71);
    t76 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t76 & t72);
    goto LAB42;

LAB43:    xsi_set_current_line(372, ng0);

LAB46:    xsi_set_current_line(373, ng0);
    t83 = ((char*)((ng3)));
    t84 = (t0 + 6964);
    xsi_vlogvar_wait_assign_value(t84, t83, 0, 0, 1, 0LL);
    goto LAB45;

LAB48:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB50;

LAB49:    *((unsigned int *)t7) = 1;
    goto LAB50;

LAB52:    xsi_set_current_line(375, ng0);

LAB55:    xsi_set_current_line(376, ng0);
    t20 = (t0 + 6412);
    t21 = (t20 + 36U);
    t28 = *((char **)t21);
    t33 = ((char*)((ng3)));
    memset(t22, 0, 8);
    xsi_vlog_unsigned_minus(t22, 32, t28, 25, t33, 32);
    t34 = (t0 + 6412);
    xsi_vlogvar_wait_assign_value(t34, t22, 0, 0, 25, 0LL);
    xsi_set_current_line(377, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6504);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB54;

LAB58:    xsi_set_current_line(381, ng0);

LAB81:    xsi_set_current_line(382, ng0);
    xsi_vlogfile_write(1, 0, 0, ng9, 1, t0);
    xsi_set_current_line(384, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(385, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6044);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(388, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 6320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB80;

LAB60:    xsi_set_current_line(391, ng0);

LAB82:    xsi_set_current_line(392, ng0);
    xsi_vlogfile_write(1, 0, 0, ng11, 1, t0);
    xsi_set_current_line(393, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(394, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 6412);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 25, 0LL);
    xsi_set_current_line(395, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 6320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB80;

LAB62:    xsi_set_current_line(397, ng0);

LAB83:    xsi_set_current_line(398, ng0);
    xsi_vlogfile_write(1, 0, 0, ng14, 1, t0);
    xsi_set_current_line(400, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6044);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(401, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 6412);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 25, 0LL);
    xsi_set_current_line(402, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 6320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB80;

LAB64:    xsi_set_current_line(404, ng0);

LAB84:    xsi_set_current_line(405, ng0);
    xsi_vlogfile_write(1, 0, 0, ng16, 1, t0);
    xsi_set_current_line(406, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 6504);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(408, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6688);
    t5 = (t0 + 6688);
    t6 = (t5 + 44U);
    t8 = *((char **)t6);
    t14 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t7, t8, 2, t14, 32, 1);
    t15 = (t7 + 4);
    t9 = *((unsigned int *)t15);
    t48 = (!(t9));
    if (t48 == 1)
        goto LAB85;

LAB86:    xsi_set_current_line(409, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 6412);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 25, 0LL);
    xsi_set_current_line(410, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 6320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB80;

LAB66:    xsi_set_current_line(412, ng0);

LAB87:    xsi_set_current_line(413, ng0);
    xsi_vlogfile_write(1, 0, 0, ng19, 1, t0);
    xsi_set_current_line(414, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 6504);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(415, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 6412);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 25, 0LL);
    xsi_set_current_line(416, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 6320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB80;

LAB68:    xsi_set_current_line(418, ng0);

LAB88:    xsi_set_current_line(419, ng0);
    xsi_vlogfile_write(1, 0, 0, ng22, 1, t0);
    xsi_set_current_line(420, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 6504);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(421, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 6412);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 25, 0LL);
    xsi_set_current_line(422, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 6320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB80;

LAB70:    xsi_set_current_line(424, ng0);

LAB89:    xsi_set_current_line(425, ng0);
    xsi_vlogfile_write(1, 0, 0, ng24, 1, t0);
    xsi_set_current_line(426, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 6504);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(427, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(428, ng0);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 6688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 12, 0LL);
    xsi_set_current_line(429, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 6412);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 25, 0LL);
    goto LAB80;

LAB72:    xsi_set_current_line(431, ng0);

LAB90:    xsi_set_current_line(433, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 6688);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 12, 0LL);
    xsi_set_current_line(434, ng0);
    t2 = (t0 + 6964);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = (t5 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB91;

LAB92:
LAB93:    xsi_set_current_line(439, ng0);
    t2 = (t0 + 2320U);
    t3 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB95;

LAB96:    if (*((unsigned int *)t2) != 0)
        goto LAB97;

LAB98:    t6 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t17 = (!(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB99;

LAB100:    memcpy(t65, t7, 8);

LAB101:    t44 = (t65 + 4);
    t67 = *((unsigned int *)t44);
    t68 = (~(t67));
    t69 = *((unsigned int *)t65);
    t70 = (t69 & t68);
    t71 = (t70 != 0);
    if (t71 > 0)
        goto LAB113;

LAB114:    xsi_set_current_line(444, ng0);
    t2 = (t0 + 2412U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB117;

LAB118:
LAB119:
LAB115:    goto LAB80;

LAB74:    xsi_set_current_line(450, ng0);

LAB121:    xsi_set_current_line(452, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 6228);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(455, ng0);
    t2 = (t0 + 2412U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB122;

LAB123:
LAB124:    xsi_set_current_line(459, ng0);
    t2 = (t0 + 2412U);
    t3 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB129;

LAB127:    if (*((unsigned int *)t2) == 0)
        goto LAB126;

LAB128:    t5 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t5) = 1;

LAB129:    t6 = (t7 + 4);
    t8 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (~(t16));
    *((unsigned int *)t7) = t17;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB131;

LAB130:    t25 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t25 & 1U);
    t26 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t26 & 1U);
    t14 = (t0 + 3792U);
    t15 = *((char **)t14);
    t27 = *((unsigned int *)t7);
    t30 = *((unsigned int *)t15);
    t31 = (t27 & t30);
    *((unsigned int *)t22) = t31;
    t14 = (t7 + 4);
    t20 = (t15 + 4);
    t21 = (t22 + 4);
    t32 = *((unsigned int *)t14);
    t36 = *((unsigned int *)t20);
    t37 = (t32 | t36);
    *((unsigned int *)t21) = t37;
    t38 = *((unsigned int *)t21);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB132;

LAB133:
LAB134:    t34 = (t22 + 4);
    t61 = *((unsigned int *)t34);
    t62 = (~(t61));
    t67 = *((unsigned int *)t22);
    t68 = (t67 & t62);
    t69 = (t68 != 0);
    if (t69 > 0)
        goto LAB135;

LAB136:
LAB137:    goto LAB80;

LAB76:    xsi_set_current_line(464, ng0);

LAB139:    xsi_set_current_line(465, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 6136);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(466, ng0);
    t2 = (t0 + 2320U);
    t3 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB140;

LAB141:    if (*((unsigned int *)t2) != 0)
        goto LAB142;

LAB143:    t6 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t17 = (!(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB144;

LAB145:    memcpy(t65, t7, 8);

LAB146:    t44 = (t65 + 4);
    t67 = *((unsigned int *)t44);
    t68 = (~(t67));
    t69 = *((unsigned int *)t65);
    t70 = (t69 & t68);
    t71 = (t70 != 0);
    if (t71 > 0)
        goto LAB158;

LAB159:
LAB160:    xsi_set_current_line(472, ng0);
    t2 = (t0 + 4344U);
    t3 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB162;

LAB163:    if (*((unsigned int *)t2) != 0)
        goto LAB164;

LAB165:    t6 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t6);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB166;

LAB167:    memcpy(t29, t7, 8);

LAB168:    t35 = (t29 + 4);
    t61 = *((unsigned int *)t35);
    t62 = (~(t61));
    t67 = *((unsigned int *)t29);
    t68 = (t67 & t62);
    t69 = (t68 != 0);
    if (t69 > 0)
        goto LAB176;

LAB177:
LAB178:    goto LAB80;

LAB85:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t7), 1, 0LL);
    goto LAB86;

LAB91:    xsi_set_current_line(434, ng0);

LAB94:    xsi_set_current_line(435, ng0);
    t8 = ((char*)((ng10)));
    t14 = (t0 + 6504);
    xsi_vlogvar_wait_assign_value(t14, t8, 0, 0, 3, 0LL);
    xsi_set_current_line(436, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 6412);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 25, 0LL);
    xsi_set_current_line(437, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6964);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB93;

LAB95:    *((unsigned int *)t7) = 1;
    goto LAB98;

LAB97:    t5 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB98;

LAB99:    t8 = (t0 + 4896U);
    t14 = *((char **)t8);
    memset(t22, 0, 8);
    t8 = (t14 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t14);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB105;

LAB103:    if (*((unsigned int *)t8) == 0)
        goto LAB102;

LAB104:    t15 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t15) = 1;

LAB105:    memset(t29, 0, 8);
    t20 = (t22 + 4);
    t30 = *((unsigned int *)t20);
    t31 = (~(t30));
    t32 = *((unsigned int *)t22);
    t36 = (t32 & t31);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB106;

LAB107:    if (*((unsigned int *)t20) != 0)
        goto LAB108;

LAB109:    t38 = *((unsigned int *)t7);
    t39 = *((unsigned int *)t29);
    t40 = (t38 | t39);
    *((unsigned int *)t65) = t40;
    t28 = (t7 + 4);
    t33 = (t29 + 4);
    t34 = (t65 + 4);
    t41 = *((unsigned int *)t28);
    t42 = *((unsigned int *)t33);
    t45 = (t41 | t42);
    *((unsigned int *)t34) = t45;
    t46 = *((unsigned int *)t34);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB110;

LAB111:
LAB112:    goto LAB101;

LAB102:    *((unsigned int *)t22) = 1;
    goto LAB105;

LAB106:    *((unsigned int *)t29) = 1;
    goto LAB109;

LAB108:    t21 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB109;

LAB110:    t49 = *((unsigned int *)t65);
    t50 = *((unsigned int *)t34);
    *((unsigned int *)t65) = (t49 | t50);
    t35 = (t7 + 4);
    t43 = (t29 + 4);
    t51 = *((unsigned int *)t35);
    t53 = (~(t51));
    t54 = *((unsigned int *)t7);
    t48 = (t54 & t53);
    t55 = *((unsigned int *)t43);
    t56 = (~(t55));
    t58 = *((unsigned int *)t29);
    t52 = (t58 & t56);
    t59 = (~(t48));
    t60 = (~(t52));
    t61 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t61 & t59);
    t62 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t62 & t60);
    goto LAB112;

LAB113:    xsi_set_current_line(439, ng0);

LAB116:    xsi_set_current_line(440, ng0);
    xsi_vlogfile_write(1, 0, 0, ng26, 1, t0);
    xsi_set_current_line(441, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6136);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(442, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 6320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB115;

LAB117:    xsi_set_current_line(444, ng0);

LAB120:    xsi_set_current_line(445, ng0);
    xsi_vlogfile_write(1, 0, 0, ng27, 1, t0);
    xsi_set_current_line(446, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6228);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(447, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 6320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB119;

LAB122:    xsi_set_current_line(455, ng0);

LAB125:    xsi_set_current_line(456, ng0);
    t5 = ((char*)((ng3)));
    t6 = (t0 + 6228);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    goto LAB124;

LAB126:    *((unsigned int *)t7) = 1;
    goto LAB129;

LAB131:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t18 | t19);
    t23 = *((unsigned int *)t6);
    t24 = *((unsigned int *)t8);
    *((unsigned int *)t6) = (t23 | t24);
    goto LAB130;

LAB132:    t40 = *((unsigned int *)t22);
    t41 = *((unsigned int *)t21);
    *((unsigned int *)t22) = (t40 | t41);
    t28 = (t7 + 4);
    t33 = (t15 + 4);
    t42 = *((unsigned int *)t7);
    t45 = (~(t42));
    t46 = *((unsigned int *)t28);
    t47 = (~(t46));
    t49 = *((unsigned int *)t15);
    t50 = (~(t49));
    t51 = *((unsigned int *)t33);
    t53 = (~(t51));
    t48 = (t45 & t47);
    t52 = (t50 & t53);
    t54 = (~(t48));
    t55 = (~(t52));
    t56 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t56 & t54);
    t58 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t58 & t55);
    t59 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t59 & t54);
    t60 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t60 & t55);
    goto LAB134;

LAB135:    xsi_set_current_line(459, ng0);

LAB138:    xsi_set_current_line(461, ng0);
    t35 = ((char*)((ng4)));
    t43 = (t0 + 6320);
    xsi_vlogvar_wait_assign_value(t43, t35, 0, 0, 8, 0LL);
    goto LAB137;

LAB140:    *((unsigned int *)t7) = 1;
    goto LAB143;

LAB142:    t5 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB143;

LAB144:    t8 = (t0 + 4896U);
    t14 = *((char **)t8);
    memset(t22, 0, 8);
    t8 = (t14 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t14);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB150;

LAB148:    if (*((unsigned int *)t8) == 0)
        goto LAB147;

LAB149:    t15 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t15) = 1;

LAB150:    memset(t29, 0, 8);
    t20 = (t22 + 4);
    t30 = *((unsigned int *)t20);
    t31 = (~(t30));
    t32 = *((unsigned int *)t22);
    t36 = (t32 & t31);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB151;

LAB152:    if (*((unsigned int *)t20) != 0)
        goto LAB153;

LAB154:    t38 = *((unsigned int *)t7);
    t39 = *((unsigned int *)t29);
    t40 = (t38 | t39);
    *((unsigned int *)t65) = t40;
    t28 = (t7 + 4);
    t33 = (t29 + 4);
    t34 = (t65 + 4);
    t41 = *((unsigned int *)t28);
    t42 = *((unsigned int *)t33);
    t45 = (t41 | t42);
    *((unsigned int *)t34) = t45;
    t46 = *((unsigned int *)t34);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB155;

LAB156:
LAB157:    goto LAB146;

LAB147:    *((unsigned int *)t22) = 1;
    goto LAB150;

LAB151:    *((unsigned int *)t29) = 1;
    goto LAB154;

LAB153:    t21 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB154;

LAB155:    t49 = *((unsigned int *)t65);
    t50 = *((unsigned int *)t34);
    *((unsigned int *)t65) = (t49 | t50);
    t35 = (t7 + 4);
    t43 = (t29 + 4);
    t51 = *((unsigned int *)t35);
    t53 = (~(t51));
    t54 = *((unsigned int *)t7);
    t48 = (t54 & t53);
    t55 = *((unsigned int *)t43);
    t56 = (~(t55));
    t58 = *((unsigned int *)t29);
    t52 = (t58 & t56);
    t59 = (~(t48));
    t60 = (~(t52));
    t61 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t61 & t59);
    t62 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t62 & t60);
    goto LAB157;

LAB158:    xsi_set_current_line(466, ng0);

LAB161:    xsi_set_current_line(467, ng0);
    t57 = ((char*)((ng3)));
    t63 = (t0 + 6136);
    xsi_vlogvar_wait_assign_value(t63, t57, 0, 0, 1, 0LL);
    goto LAB160;

LAB162:    *((unsigned int *)t7) = 1;
    goto LAB165;

LAB164:    t5 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB165;

LAB166:    t8 = (t0 + 4896U);
    t14 = *((char **)t8);
    memset(t22, 0, 8);
    t8 = (t14 + 4);
    t19 = *((unsigned int *)t8);
    t23 = (~(t19));
    t24 = *((unsigned int *)t14);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB169;

LAB170:    if (*((unsigned int *)t8) != 0)
        goto LAB171;

LAB172:    t27 = *((unsigned int *)t7);
    t30 = *((unsigned int *)t22);
    t31 = (t27 & t30);
    *((unsigned int *)t29) = t31;
    t20 = (t7 + 4);
    t21 = (t22 + 4);
    t28 = (t29 + 4);
    t32 = *((unsigned int *)t20);
    t36 = *((unsigned int *)t21);
    t37 = (t32 | t36);
    *((unsigned int *)t28) = t37;
    t38 = *((unsigned int *)t28);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB173;

LAB174:
LAB175:    goto LAB168;

LAB169:    *((unsigned int *)t22) = 1;
    goto LAB172;

LAB171:    t15 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB172;

LAB173:    t40 = *((unsigned int *)t29);
    t41 = *((unsigned int *)t28);
    *((unsigned int *)t29) = (t40 | t41);
    t33 = (t7 + 4);
    t34 = (t22 + 4);
    t42 = *((unsigned int *)t7);
    t45 = (~(t42));
    t46 = *((unsigned int *)t33);
    t47 = (~(t46));
    t49 = *((unsigned int *)t22);
    t50 = (~(t49));
    t51 = *((unsigned int *)t34);
    t53 = (~(t51));
    t48 = (t45 & t47);
    t52 = (t50 & t53);
    t54 = (~(t48));
    t55 = (~(t52));
    t56 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t56 & t54);
    t58 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t58 & t55);
    t59 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t59 & t54);
    t60 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t60 & t55);
    goto LAB175;

LAB176:    xsi_set_current_line(472, ng0);

LAB179:    xsi_set_current_line(475, ng0);
    t43 = ((char*)((ng4)));
    t44 = (t0 + 6320);
    xsi_vlogvar_wait_assign_value(t44, t43, 0, 0, 8, 0LL);
    goto LAB178;

}

static void Always_496_12(char *t0)
{
    char t15[8];
    char t20[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;

LAB0:    t1 = (t0 + 9200U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(496, ng0);
    t2 = (t0 + 9612);
    *((int *)t2) = 1;
    t3 = (t0 + 9224);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(496, ng0);

LAB5:    xsi_set_current_line(497, ng0);
    t4 = (t0 + 5860);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(500, ng0);

LAB10:    xsi_set_current_line(502, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6872);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(503, ng0);
    t2 = (t0 + 7056);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t15, 0, 8);
    t6 = (t4 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB12;

LAB11:    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB12;

LAB15:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB13;

LAB14:    t14 = (t15 + 4);
    t8 = *((unsigned int *)t14);
    t9 = (~(t8));
    t10 = *((unsigned int *)t15);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(506, ng0);

LAB20:    xsi_set_current_line(507, ng0);
    t2 = ((char*)((ng29)));
    t3 = (t0 + 7056);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(508, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6872);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(497, ng0);

LAB9:    xsi_set_current_line(498, ng0);
    t13 = ((char*)((ng29)));
    t14 = (t0 + 7056);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 32, 0LL);
    goto LAB8;

LAB12:    t13 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB14;

LAB13:    *((unsigned int *)t15) = 1;
    goto LAB14;

LAB16:    xsi_set_current_line(503, ng0);

LAB19:    xsi_set_current_line(504, ng0);
    t16 = (t0 + 7056);
    t17 = (t16 + 36U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng3)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_minus(t20, 32, t18, 32, t19, 32);
    t21 = (t0 + 7056);
    xsi_vlogvar_wait_assign_value(t21, t20, 0, 0, 32, 0LL);
    goto LAB18;

}

static void implSig1_execute(char *t0)
{
    char t5[8];
    char t20[8];
    char t27[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;

LAB0:    t1 = (t0 + 9336U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 5860);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t4 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t6) != 0)
        goto LAB6;

LAB7:    t13 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (!(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    memcpy(t27, t5, 8);

LAB10:    t55 = (t0 + 9952);
    t56 = (t55 + 32U);
    t57 = *((char **)t56);
    t58 = (t57 + 32U);
    t59 = *((char **)t58);
    memset(t59, 0, 8);
    t60 = 1U;
    t61 = t60;
    t62 = (t27 + 4);
    t63 = *((unsigned int *)t27);
    t60 = (t60 & t63);
    t64 = *((unsigned int *)t62);
    t61 = (t61 & t64);
    t65 = (t59 + 4);
    t66 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t66 | t60);
    t67 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t67 | t61);
    xsi_driver_vfirst_trans(t55, 0, 0);
    t68 = (t0 + 9620);
    *((int *)t68) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB6:    t12 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 2228U);
    t19 = *((char **)t18);
    memset(t20, 0, 8);
    t18 = (t19 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (~(t21));
    t23 = *((unsigned int *)t19);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t18) != 0)
        goto LAB13;

LAB14:    t28 = *((unsigned int *)t5);
    t29 = *((unsigned int *)t20);
    t30 = (t28 | t29);
    *((unsigned int *)t27) = t30;
    t31 = (t5 + 4);
    t32 = (t20 + 4);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t32);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB10;

LAB11:    *((unsigned int *)t20) = 1;
    goto LAB14;

LAB13:    t26 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB14;

LAB15:    t39 = *((unsigned int *)t27);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t27) = (t39 | t40);
    t41 = (t5 + 4);
    t42 = (t20 + 4);
    t43 = *((unsigned int *)t41);
    t44 = (~(t43));
    t45 = *((unsigned int *)t5);
    t46 = (t45 & t44);
    t47 = *((unsigned int *)t42);
    t48 = (~(t47));
    t49 = *((unsigned int *)t20);
    t50 = (t49 & t48);
    t51 = (~(t46));
    t52 = (~(t50));
    t53 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t53 & t51);
    t54 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t54 & t52);
    goto LAB17;

}


extern void work_m_00000000000079614549_3662056966_init()
{
	static char *pe[] = {(void *)Cont_124_0,(void *)Cont_125_1,(void *)Cont_126_2,(void *)Cont_147_3,(void *)Cont_148_4,(void *)Cont_149_5,(void *)Always_158_6,(void *)Always_182_7,(void *)Cont_241_8,(void *)Cont_337_9,(void *)Always_341_10,(void *)Always_357_11,(void *)Always_496_12,(void *)implSig1_execute};
	xsi_register_didat("work_m_00000000000079614549_3662056966", "isim/wb_sdram_isim_beh.exe.sim/work/m_00000000000079614549_3662056966.didat");
	xsi_register_executes(pe);
}
