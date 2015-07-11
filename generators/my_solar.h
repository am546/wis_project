// This file generated by staff_codegen
// For more information please visit: http://code.google.com/p/staff/

#ifndef _my_solar_h_
#define _my_solar_h_

#include <staff/common/IService.h>

// *interface.targetNamespace: http://tempui.org/
// *interface.url: http://10.96.12.48:9090/axis2/services/staff.wsdl.Wsdl/get/my_solar/my_solar.wsdl



  //! my_solar service
  // *serviceUri: http://10.96.12.48:9090/axis2/services/my_solar
  // *soapVersion: 1.1
  // *targetNamespace: http://tempui.org/
  class my_solar: public staff::IService
  {
  public:
    // *requestElement: solarcreate
    // *responseElement: solarcreateResult
    virtual double solarcreate() = 0;

    // *requestElement: solarinit
    // *responseElement: solarinitResult
    virtual int solarinit(int gen_mode_v, int gen_status_v, int panel_type_v) = 0;

    // *requestElement: solarsync
    // *responseElement: solarsyncResult
    virtual double solarsync(int t0, int t1) = 0;
  };


#endif // _my_solar_h_
