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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000002879780762_1733832700_init();
    work_m_00000000003957317444_2591091608_init();
    work_m_00000000001937666437_2035480523_init();
    work_m_00000000003068317384_2937920168_init();
    work_m_00000000002562761339_0886308060_init();
    work_m_00000000001388170600_1949555310_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001388170600_1949555310");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
