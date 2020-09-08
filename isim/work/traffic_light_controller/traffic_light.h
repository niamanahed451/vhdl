////////////////////////////////////////////////////////////////////////////////
//   ____  ____   
//  /   /\/   /  
// /___/  \  /   
// \   \   \/  
//  \   \        Copyright (c) 2003-2004 Xilinx, Inc.
//  /   /        All Right Reserved. 
// /---/   /\     
// \   \  /  \  
//  \___\/\___\
////////////////////////////////////////////////////////////////////////////////

#ifndef H_Work_traffic_light_controller_traffic_light_H
#define H_Work_traffic_light_controller_traffic_light_H
#ifdef __MINGW32__
#include "xsimMinGW.h"
#else
#include "xsim.h"
#endif


class Work_traffic_light_controller_traffic_light: public HSim__s6 {
public:

    HSim__s1 SE[5];

  HSimEnumType Fsm_states;
    HSim__s1 SA[11];
  char t0;
HSimConstraints *c1;
    Work_traffic_light_controller_traffic_light(const char * name);
    ~Work_traffic_light_controller_traffic_light();
    void constructObject();
    void constructPorts();
    void reset();
    void architectureInstantiate(HSimConfigDecl* cfg);
    virtual void vhdlArchImplement();
};



HSim__s6 *createWork_traffic_light_controller_traffic_light(const char *name);

#endif
