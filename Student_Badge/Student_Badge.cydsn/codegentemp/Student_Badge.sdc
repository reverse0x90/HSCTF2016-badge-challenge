# THIS FILE IS AUTOMATICALLY GENERATED
# Project: C:\Users\Admin\Desktop\Student Badge\Student_Badge\Student_Badge.cydsn\Student_Badge.cyprj
# Date: Tue, 15 Nov 2016 05:43:14 GMT
#set_units -time ns
create_clock -name {CyHFCLK} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/hfclk}]]
create_generated_clock -name {clk_4kHz} -source [get_pins {ClockBlock/hfclk}] -edges {1 6001 12001} [list [get_pins {ClockBlock/udb_div_0}]]
create_clock -name {CyIMO} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CySYSCLK} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/sysclk}]]
create_clock -name {CyILO} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/ilo}]]
create_clock -name {CyLFCLK} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/lfclk}]]
create_clock -name {CyRouted1} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/dsi_in_0}]]


# Component constraints for C:\Users\Admin\Desktop\Student Badge\Student_Badge\Student_Badge.cydsn\TopDesign\TopDesign.cysch
# Project: C:\Users\Admin\Desktop\Student Badge\Student_Badge\Student_Badge.cydsn\Student_Badge.cyprj
# Date: Tue, 15 Nov 2016 05:43:05 GMT
