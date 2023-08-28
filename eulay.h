// eulay.h

#pragma once

#include "artifacts/eulayUi.h"
//#include "artifacts/eulayData.h" Uncomment if you use some 'data' resources
#include "erb/erb.h"
#include "sonovolt/math.h"


struct eulay
{
   // The UI elements defined in eulay.erbui are in 'ui'
   eulayUi ui;

   // The data resources defined in eulay.erbb are in 'data'
   // Uncomment if you use some 'data' resources
   //eulayData data;

   void  init ();
   void  process ();

   // Put here your DSP objects
};
