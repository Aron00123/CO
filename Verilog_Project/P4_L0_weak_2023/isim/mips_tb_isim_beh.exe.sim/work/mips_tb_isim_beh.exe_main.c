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
    work_m_00000000003528545275_4144471541_init();
    work_m_00000000003827365018_1785967555_init();
    work_m_00000000003313920438_3224323566_init();
    work_m_00000000002260595802_3834800616_init();
    work_m_00000000000475018637_0886308060_init();
    work_m_00000000002896797624_3675853999_init();
    work_m_00000000002343906712_2476038526_init();
    work_m_00000000000434744705_1621229167_init();
    work_m_00000000004121000500_2924402094_init();
    work_m_00000000000334500556_0757879789_init();
    work_m_00000000001433797814_3877310806_init();
    work_m_00000000002047498008_0258635663_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002047498008_0258635663");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
