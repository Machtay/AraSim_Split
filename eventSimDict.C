// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME eventSimDict
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// The generated code does not explicitly qualifies STL entities
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "Trigger.h"
#include "Detector.h"
#include "Settings.h"
#include "Spectra.h"
#include "IceModel.h"
#include "Primaries.h"
#include "Report.h"
#include "Event.h"
#include "RawIcrrStationHeader.h"
#include "RawIcrrStationEvent.h"
#include "RawAraStationEvent.h"
#include "FullIcrrHkEvent.h"
#include "AraEventCalibrator.h"
#include "IcrrTriggerMonitor.h"
#include "IcrrHkData.h"
#include "AraRawIcrrRFChannel.h"
#include "AraAntennaInfo.h"
#include "AraGeomTool.h"
#include "UsefulAraStationEvent.h"
#include "UsefulIcrrStationEvent.h"
#include "araIcrrStructures.h"
#include "AtriEventHkData.h"
#include "AtriSensorHkData.h"
#include "araAtriStructures.h"
#include "araSoft.h"
#include "araIcrrDefines.h"
#include "RawAtriSimpleStationEvent.h"
#include "RawAtriStationBlock.h"
#include "RawAraGenericHeader.h"
#include "RawAtriStationEvent.h"
#include "UsefulAtriStationEvent.h"
#include "AraStationInfo.h"

// Header files passed via #pragma extra_include

namespace AraCalType {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *AraCalType_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("AraCalType", 0 /*version*/, "AraEventCalibrator.h", 30,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &AraCalType_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *AraCalType_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace AraAntType {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *AraAntType_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("AraAntType", 0 /*version*/, "AraAntennaInfo.h", 20,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &AraAntType_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *AraAntType_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace AraAntPol {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *AraAntPol_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("AraAntPol", 0 /*version*/, "AraAntennaInfo.h", 33,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &AraAntPol_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *AraAntPol_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace AraDaqChanType {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *AraDaqChanType_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("AraDaqChanType", 0 /*version*/, "AraAntennaInfo.h", 43,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &AraDaqChanType_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *AraDaqChanType_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace AraLabChip {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *AraLabChip_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("AraLabChip", 0 /*version*/, "AraAntennaInfo.h", 50,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &AraLabChip_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *AraLabChip_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace AraAntDir {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *AraAntDir_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("AraAntDir", 0 /*version*/, "AraAntennaInfo.h", 59,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &AraAntDir_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *AraAntDir_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace ROOT {
   static void *new_Trigger(void *p = 0);
   static void *newArray_Trigger(Long_t size, void *p);
   static void delete_Trigger(void *p);
   static void deleteArray_Trigger(void *p);
   static void destruct_Trigger(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Trigger*)
   {
      ::Trigger *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Trigger >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Trigger", ::Trigger::Class_Version(), "Trigger.h", 18,
                  typeid(::Trigger), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Trigger::Dictionary, isa_proxy, 4,
                  sizeof(::Trigger) );
      instance.SetNew(&new_Trigger);
      instance.SetNewArray(&newArray_Trigger);
      instance.SetDelete(&delete_Trigger);
      instance.SetDeleteArray(&deleteArray_Trigger);
      instance.SetDestructor(&destruct_Trigger);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Trigger*)
   {
      return GenerateInitInstanceLocal((::Trigger*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Trigger*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_Vector(void *p = 0);
   static void *newArray_Vector(Long_t size, void *p);
   static void delete_Vector(void *p);
   static void deleteArray_Vector(void *p);
   static void destruct_Vector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Vector*)
   {
      ::Vector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Vector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Vector", ::Vector::Class_Version(), "Vector.h", 19,
                  typeid(::Vector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Vector::Dictionary, isa_proxy, 4,
                  sizeof(::Vector) );
      instance.SetNew(&new_Vector);
      instance.SetNewArray(&newArray_Vector);
      instance.SetDelete(&delete_Vector);
      instance.SetDeleteArray(&deleteArray_Vector);
      instance.SetDestructor(&destruct_Vector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Vector*)
   {
      return GenerateInitInstanceLocal((::Vector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Vector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_Position(void *p = 0);
   static void *newArray_Position(Long_t size, void *p);
   static void delete_Position(void *p);
   static void deleteArray_Position(void *p);
   static void destruct_Position(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Position*)
   {
      ::Position *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Position >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Position", ::Position::Class_Version(), "Position.h", 29,
                  typeid(::Position), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Position::Dictionary, isa_proxy, 4,
                  sizeof(::Position) );
      instance.SetNew(&new_Position);
      instance.SetNewArray(&newArray_Position);
      instance.SetDelete(&delete_Position);
      instance.SetDeleteArray(&deleteArray_Position);
      instance.SetDestructor(&destruct_Position);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Position*)
   {
      return GenerateInitInstanceLocal((::Position*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Position*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_Parameters(void *p = 0);
   static void *newArray_Parameters(Long_t size, void *p);
   static void delete_Parameters(void *p);
   static void deleteArray_Parameters(void *p);
   static void destruct_Parameters(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Parameters*)
   {
      ::Parameters *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Parameters >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Parameters", ::Parameters::Class_Version(), "Detector.h", 30,
                  typeid(::Parameters), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Parameters::Dictionary, isa_proxy, 4,
                  sizeof(::Parameters) );
      instance.SetNew(&new_Parameters);
      instance.SetNewArray(&newArray_Parameters);
      instance.SetDelete(&delete_Parameters);
      instance.SetDeleteArray(&deleteArray_Parameters);
      instance.SetDestructor(&destruct_Parameters);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Parameters*)
   {
      return GenerateInitInstanceLocal((::Parameters*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Parameters*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_Surface_antenna(void *p = 0);
   static void *newArray_Surface_antenna(Long_t size, void *p);
   static void delete_Surface_antenna(void *p);
   static void deleteArray_Surface_antenna(void *p);
   static void destruct_Surface_antenna(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Surface_antenna*)
   {
      ::Surface_antenna *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Surface_antenna >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Surface_antenna", ::Surface_antenna::Class_Version(), "Detector.h", 103,
                  typeid(::Surface_antenna), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Surface_antenna::Dictionary, isa_proxy, 4,
                  sizeof(::Surface_antenna) );
      instance.SetNew(&new_Surface_antenna);
      instance.SetNewArray(&newArray_Surface_antenna);
      instance.SetDelete(&delete_Surface_antenna);
      instance.SetDeleteArray(&deleteArray_Surface_antenna);
      instance.SetDestructor(&destruct_Surface_antenna);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Surface_antenna*)
   {
      return GenerateInitInstanceLocal((::Surface_antenna*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Surface_antenna*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_Antenna(void *p = 0);
   static void *newArray_Antenna(Long_t size, void *p);
   static void delete_Antenna(void *p);
   static void deleteArray_Antenna(void *p);
   static void destruct_Antenna(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Antenna*)
   {
      ::Antenna *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Antenna >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Antenna", ::Antenna::Class_Version(), "Detector.h", 121,
                  typeid(::Antenna), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Antenna::Dictionary, isa_proxy, 4,
                  sizeof(::Antenna) );
      instance.SetNew(&new_Antenna);
      instance.SetNewArray(&newArray_Antenna);
      instance.SetDelete(&delete_Antenna);
      instance.SetDeleteArray(&deleteArray_Antenna);
      instance.SetDestructor(&destruct_Antenna);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Antenna*)
   {
      return GenerateInitInstanceLocal((::Antenna*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Antenna*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_Antenna_string(void *p = 0);
   static void *newArray_Antenna_string(Long_t size, void *p);
   static void delete_Antenna_string(void *p);
   static void deleteArray_Antenna_string(void *p);
   static void destruct_Antenna_string(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Antenna_string*)
   {
      ::Antenna_string *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Antenna_string >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Antenna_string", ::Antenna_string::Class_Version(), "Detector.h", 146,
                  typeid(::Antenna_string), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Antenna_string::Dictionary, isa_proxy, 4,
                  sizeof(::Antenna_string) );
      instance.SetNew(&new_Antenna_string);
      instance.SetNewArray(&newArray_Antenna_string);
      instance.SetDelete(&delete_Antenna_string);
      instance.SetDeleteArray(&deleteArray_Antenna_string);
      instance.SetDestructor(&destruct_Antenna_string);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Antenna_string*)
   {
      return GenerateInitInstanceLocal((::Antenna_string*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Antenna_string*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ARA_station(void *p = 0);
   static void *newArray_ARA_station(Long_t size, void *p);
   static void delete_ARA_station(void *p);
   static void deleteArray_ARA_station(void *p);
   static void destruct_ARA_station(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ARA_station*)
   {
      ::ARA_station *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ARA_station >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ARA_station", ::ARA_station::Class_Version(), "Detector.h", 157,
                  typeid(::ARA_station), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ARA_station::Dictionary, isa_proxy, 4,
                  sizeof(::ARA_station) );
      instance.SetNew(&new_ARA_station);
      instance.SetNewArray(&newArray_ARA_station);
      instance.SetDelete(&delete_ARA_station);
      instance.SetDeleteArray(&deleteArray_ARA_station);
      instance.SetDestructor(&destruct_ARA_station);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ARA_station*)
   {
      return GenerateInitInstanceLocal((::ARA_station*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ARA_station*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_InstalledStation(void *p = 0);
   static void *newArray_InstalledStation(Long_t size, void *p);
   static void delete_InstalledStation(void *p);
   static void deleteArray_InstalledStation(void *p);
   static void destruct_InstalledStation(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::InstalledStation*)
   {
      ::InstalledStation *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::InstalledStation >(0);
      static ::ROOT::TGenericClassInfo 
         instance("InstalledStation", ::InstalledStation::Class_Version(), "Detector.h", 175,
                  typeid(::InstalledStation), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::InstalledStation::Dictionary, isa_proxy, 4,
                  sizeof(::InstalledStation) );
      instance.SetNew(&new_InstalledStation);
      instance.SetNewArray(&newArray_InstalledStation);
      instance.SetDelete(&delete_InstalledStation);
      instance.SetDeleteArray(&deleteArray_InstalledStation);
      instance.SetDestructor(&destruct_InstalledStation);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::InstalledStation*)
   {
      return GenerateInitInstanceLocal((::InstalledStation*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::InstalledStation*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_IdealStation(void *p = 0);
   static void *newArray_IdealStation(Long_t size, void *p);
   static void delete_IdealStation(void *p);
   static void deleteArray_IdealStation(void *p);
   static void destruct_IdealStation(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::IdealStation*)
   {
      ::IdealStation *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::IdealStation >(0);
      static ::ROOT::TGenericClassInfo 
         instance("IdealStation", ::IdealStation::Class_Version(), "Detector.h", 195,
                  typeid(::IdealStation), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::IdealStation::Dictionary, isa_proxy, 4,
                  sizeof(::IdealStation) );
      instance.SetNew(&new_IdealStation);
      instance.SetNewArray(&newArray_IdealStation);
      instance.SetDelete(&delete_IdealStation);
      instance.SetDeleteArray(&deleteArray_IdealStation);
      instance.SetDestructor(&destruct_IdealStation);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::IdealStation*)
   {
      return GenerateInitInstanceLocal((::IdealStation*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::IdealStation*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_Detector(void *p = 0);
   static void *newArray_Detector(Long_t size, void *p);
   static void delete_Detector(void *p);
   static void deleteArray_Detector(void *p);
   static void destruct_Detector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Detector*)
   {
      ::Detector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Detector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Detector", ::Detector::Class_Version(), "Detector.h", 215,
                  typeid(::Detector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Detector::Dictionary, isa_proxy, 4,
                  sizeof(::Detector) );
      instance.SetNew(&new_Detector);
      instance.SetNewArray(&newArray_Detector);
      instance.SetDelete(&delete_Detector);
      instance.SetDeleteArray(&deleteArray_Detector);
      instance.SetDestructor(&destruct_Detector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Detector*)
   {
      return GenerateInitInstanceLocal((::Detector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Detector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_Settings(void *p = 0);
   static void *newArray_Settings(Long_t size, void *p);
   static void delete_Settings(void *p);
   static void deleteArray_Settings(void *p);
   static void destruct_Settings(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Settings*)
   {
      ::Settings *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Settings >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Settings", ::Settings::Class_Version(), "Settings.h", 13,
                  typeid(::Settings), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Settings::Dictionary, isa_proxy, 4,
                  sizeof(::Settings) );
      instance.SetNew(&new_Settings);
      instance.SetNewArray(&newArray_Settings);
      instance.SetDelete(&delete_Settings);
      instance.SetDeleteArray(&deleteArray_Settings);
      instance.SetDestructor(&destruct_Settings);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Settings*)
   {
      return GenerateInitInstanceLocal((::Settings*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Settings*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_Spectra(void *p = 0);
   static void *newArray_Spectra(Long_t size, void *p);
   static void delete_Spectra(void *p);
   static void deleteArray_Spectra(void *p);
   static void destruct_Spectra(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Spectra*)
   {
      ::Spectra *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Spectra >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Spectra", ::Spectra::Class_Version(), "Spectra.h", 12,
                  typeid(::Spectra), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Spectra::Dictionary, isa_proxy, 4,
                  sizeof(::Spectra) );
      instance.SetNew(&new_Spectra);
      instance.SetNewArray(&newArray_Spectra);
      instance.SetDelete(&delete_Spectra);
      instance.SetDeleteArray(&deleteArray_Spectra);
      instance.SetDestructor(&destruct_Spectra);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Spectra*)
   {
      return GenerateInitInstanceLocal((::Spectra*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Spectra*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EarthModel(void *p = 0);
   static void *newArray_EarthModel(Long_t size, void *p);
   static void delete_EarthModel(void *p);
   static void deleteArray_EarthModel(void *p);
   static void destruct_EarthModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EarthModel*)
   {
      ::EarthModel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EarthModel >(0);
      static ::ROOT::TGenericClassInfo 
         instance("EarthModel", ::EarthModel::Class_Version(), "EarthModel.h", 41,
                  typeid(::EarthModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EarthModel::Dictionary, isa_proxy, 4,
                  sizeof(::EarthModel) );
      instance.SetNew(&new_EarthModel);
      instance.SetNewArray(&newArray_EarthModel);
      instance.SetDelete(&delete_EarthModel);
      instance.SetDeleteArray(&deleteArray_EarthModel);
      instance.SetDestructor(&destruct_EarthModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EarthModel*)
   {
      return GenerateInitInstanceLocal((::EarthModel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::EarthModel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_IceModel(void *p = 0);
   static void *newArray_IceModel(Long_t size, void *p);
   static void delete_IceModel(void *p);
   static void deleteArray_IceModel(void *p);
   static void destruct_IceModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::IceModel*)
   {
      ::IceModel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::IceModel >(0);
      static ::ROOT::TGenericClassInfo 
         instance("IceModel", ::IceModel::Class_Version(), "IceModel.h", 20,
                  typeid(::IceModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::IceModel::Dictionary, isa_proxy, 4,
                  sizeof(::IceModel) );
      instance.SetNew(&new_IceModel);
      instance.SetNewArray(&newArray_IceModel);
      instance.SetDelete(&delete_IceModel);
      instance.SetDeleteArray(&deleteArray_IceModel);
      instance.SetDestructor(&destruct_IceModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::IceModel*)
   {
      return GenerateInitInstanceLocal((::IceModel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::IceModel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_Y(void *p = 0);
   static void *newArray_Y(Long_t size, void *p);
   static void delete_Y(void *p);
   static void deleteArray_Y(void *p);
   static void destruct_Y(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Y*)
   {
      ::Y *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Y >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Y", ::Y::Class_Version(), "Primaries.h", 47,
                  typeid(::Y), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Y::Dictionary, isa_proxy, 4,
                  sizeof(::Y) );
      instance.SetNew(&new_Y);
      instance.SetNewArray(&newArray_Y);
      instance.SetDelete(&delete_Y);
      instance.SetDeleteArray(&deleteArray_Y);
      instance.SetDestructor(&destruct_Y);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Y*)
   {
      return GenerateInitInstanceLocal((::Y*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Y*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_Primaries(void *p = 0);
   static void *newArray_Primaries(Long_t size, void *p);
   static void delete_Primaries(void *p);
   static void deleteArray_Primaries(void *p);
   static void destruct_Primaries(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Primaries*)
   {
      ::Primaries *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Primaries >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Primaries", ::Primaries::Class_Version(), "Primaries.h", 85,
                  typeid(::Primaries), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Primaries::Dictionary, isa_proxy, 4,
                  sizeof(::Primaries) );
      instance.SetNew(&new_Primaries);
      instance.SetNewArray(&newArray_Primaries);
      instance.SetDelete(&delete_Primaries);
      instance.SetDeleteArray(&deleteArray_Primaries);
      instance.SetDestructor(&destruct_Primaries);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Primaries*)
   {
      return GenerateInitInstanceLocal((::Primaries*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Primaries*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_Interaction(void *p = 0);
   static void *newArray_Interaction(Long_t size, void *p);
   static void delete_Interaction(void *p);
   static void deleteArray_Interaction(void *p);
   static void destruct_Interaction(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Interaction*)
   {
      ::Interaction *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Interaction >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Interaction", ::Interaction::Class_Version(), "Primaries.h", 171,
                  typeid(::Interaction), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Interaction::Dictionary, isa_proxy, 4,
                  sizeof(::Interaction) );
      instance.SetNew(&new_Interaction);
      instance.SetNewArray(&newArray_Interaction);
      instance.SetDelete(&delete_Interaction);
      instance.SetDeleteArray(&deleteArray_Interaction);
      instance.SetDestructor(&destruct_Interaction);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Interaction*)
   {
      return GenerateInitInstanceLocal((::Interaction*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Interaction*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_Surface_antenna_r(void *p = 0);
   static void *newArray_Surface_antenna_r(Long_t size, void *p);
   static void delete_Surface_antenna_r(void *p);
   static void deleteArray_Surface_antenna_r(void *p);
   static void destruct_Surface_antenna_r(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Surface_antenna_r*)
   {
      ::Surface_antenna_r *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Surface_antenna_r >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Surface_antenna_r", ::Surface_antenna_r::Class_Version(), "Report.h", 40,
                  typeid(::Surface_antenna_r), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Surface_antenna_r::Dictionary, isa_proxy, 4,
                  sizeof(::Surface_antenna_r) );
      instance.SetNew(&new_Surface_antenna_r);
      instance.SetNewArray(&newArray_Surface_antenna_r);
      instance.SetDelete(&delete_Surface_antenna_r);
      instance.SetDeleteArray(&deleteArray_Surface_antenna_r);
      instance.SetDestructor(&destruct_Surface_antenna_r);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Surface_antenna_r*)
   {
      return GenerateInitInstanceLocal((::Surface_antenna_r*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Surface_antenna_r*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_Antenna_r(void *p = 0);
   static void *newArray_Antenna_r(Long_t size, void *p);
   static void delete_Antenna_r(void *p);
   static void deleteArray_Antenna_r(void *p);
   static void destruct_Antenna_r(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Antenna_r*)
   {
      ::Antenna_r *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Antenna_r >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Antenna_r", ::Antenna_r::Class_Version(), "Report.h", 46,
                  typeid(::Antenna_r), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Antenna_r::Dictionary, isa_proxy, 4,
                  sizeof(::Antenna_r) );
      instance.SetNew(&new_Antenna_r);
      instance.SetNewArray(&newArray_Antenna_r);
      instance.SetDelete(&delete_Antenna_r);
      instance.SetDeleteArray(&deleteArray_Antenna_r);
      instance.SetDestructor(&destruct_Antenna_r);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Antenna_r*)
   {
      return GenerateInitInstanceLocal((::Antenna_r*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Antenna_r*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_String_r(void *p = 0);
   static void *newArray_String_r(Long_t size, void *p);
   static void delete_String_r(void *p);
   static void deleteArray_String_r(void *p);
   static void destruct_String_r(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::String_r*)
   {
      ::String_r *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::String_r >(0);
      static ::ROOT::TGenericClassInfo 
         instance("String_r", ::String_r::Class_Version(), "Report.h", 151,
                  typeid(::String_r), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::String_r::Dictionary, isa_proxy, 4,
                  sizeof(::String_r) );
      instance.SetNew(&new_String_r);
      instance.SetNewArray(&newArray_String_r);
      instance.SetDelete(&delete_String_r);
      instance.SetDeleteArray(&deleteArray_String_r);
      instance.SetDestructor(&destruct_String_r);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::String_r*)
   {
      return GenerateInitInstanceLocal((::String_r*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::String_r*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_Station_r(void *p = 0);
   static void *newArray_Station_r(Long_t size, void *p);
   static void delete_Station_r(void *p);
   static void deleteArray_Station_r(void *p);
   static void destruct_Station_r(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Station_r*)
   {
      ::Station_r *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Station_r >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Station_r", ::Station_r::Class_Version(), "Report.h", 161,
                  typeid(::Station_r), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Station_r::Dictionary, isa_proxy, 4,
                  sizeof(::Station_r) );
      instance.SetNew(&new_Station_r);
      instance.SetNewArray(&newArray_Station_r);
      instance.SetDelete(&delete_Station_r);
      instance.SetDeleteArray(&deleteArray_Station_r);
      instance.SetDestructor(&destruct_Station_r);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Station_r*)
   {
      return GenerateInitInstanceLocal((::Station_r*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Station_r*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_Report(void *p = 0);
   static void *newArray_Report(Long_t size, void *p);
   static void delete_Report(void *p);
   static void deleteArray_Report(void *p);
   static void destruct_Report(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Report*)
   {
      ::Report *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Report >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Report", ::Report::Class_Version(), "Report.h", 191,
                  typeid(::Report), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Report::Dictionary, isa_proxy, 4,
                  sizeof(::Report) );
      instance.SetNew(&new_Report);
      instance.SetNewArray(&newArray_Report);
      instance.SetDelete(&delete_Report);
      instance.SetDeleteArray(&deleteArray_Report);
      instance.SetDestructor(&destruct_Report);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Report*)
   {
      return GenerateInitInstanceLocal((::Report*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Report*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_Event(void *p = 0);
   static void *newArray_Event(Long_t size, void *p);
   static void delete_Event(void *p);
   static void deleteArray_Event(void *p);
   static void destruct_Event(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Event*)
   {
      ::Event *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Event >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Event", ::Event::Class_Version(), "Event.h", 24,
                  typeid(::Event), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Event::Dictionary, isa_proxy, 4,
                  sizeof(::Event) );
      instance.SetNew(&new_Event);
      instance.SetNewArray(&newArray_Event);
      instance.SetDelete(&delete_Event);
      instance.SetDeleteArray(&deleteArray_Event);
      instance.SetDestructor(&destruct_Event);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Event*)
   {
      return GenerateInitInstanceLocal((::Event*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Event*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr Trigger::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Trigger::Class_Name()
{
   return "Trigger";
}

//______________________________________________________________________________
const char *Trigger::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Trigger*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Trigger::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Trigger*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Trigger::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Trigger*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Trigger::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Trigger*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Vector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Vector::Class_Name()
{
   return "Vector";
}

//______________________________________________________________________________
const char *Vector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Vector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Vector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Vector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Vector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Vector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Vector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Vector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Position::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Position::Class_Name()
{
   return "Position";
}

//______________________________________________________________________________
const char *Position::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Position*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Position::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Position*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Position::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Position*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Position::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Position*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Parameters::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Parameters::Class_Name()
{
   return "Parameters";
}

//______________________________________________________________________________
const char *Parameters::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Parameters*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Parameters::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Parameters*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Parameters::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Parameters*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Parameters::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Parameters*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Surface_antenna::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Surface_antenna::Class_Name()
{
   return "Surface_antenna";
}

//______________________________________________________________________________
const char *Surface_antenna::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Surface_antenna*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Surface_antenna::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Surface_antenna*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Surface_antenna::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Surface_antenna*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Surface_antenna::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Surface_antenna*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Antenna::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Antenna::Class_Name()
{
   return "Antenna";
}

//______________________________________________________________________________
const char *Antenna::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Antenna*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Antenna::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Antenna*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Antenna::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Antenna*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Antenna::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Antenna*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Antenna_string::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Antenna_string::Class_Name()
{
   return "Antenna_string";
}

//______________________________________________________________________________
const char *Antenna_string::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Antenna_string*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Antenna_string::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Antenna_string*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Antenna_string::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Antenna_string*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Antenna_string::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Antenna_string*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ARA_station::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ARA_station::Class_Name()
{
   return "ARA_station";
}

//______________________________________________________________________________
const char *ARA_station::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ARA_station*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ARA_station::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ARA_station*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ARA_station::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ARA_station*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ARA_station::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ARA_station*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr InstalledStation::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *InstalledStation::Class_Name()
{
   return "InstalledStation";
}

//______________________________________________________________________________
const char *InstalledStation::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::InstalledStation*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int InstalledStation::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::InstalledStation*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *InstalledStation::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::InstalledStation*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *InstalledStation::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::InstalledStation*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr IdealStation::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *IdealStation::Class_Name()
{
   return "IdealStation";
}

//______________________________________________________________________________
const char *IdealStation::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::IdealStation*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int IdealStation::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::IdealStation*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *IdealStation::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::IdealStation*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *IdealStation::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::IdealStation*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Detector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Detector::Class_Name()
{
   return "Detector";
}

//______________________________________________________________________________
const char *Detector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Detector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Detector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Detector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Detector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Detector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Detector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Detector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Settings::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Settings::Class_Name()
{
   return "Settings";
}

//______________________________________________________________________________
const char *Settings::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Settings*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Settings::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Settings*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Settings::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Settings*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Settings::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Settings*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Spectra::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Spectra::Class_Name()
{
   return "Spectra";
}

//______________________________________________________________________________
const char *Spectra::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Spectra*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Spectra::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Spectra*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Spectra::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Spectra*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Spectra::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Spectra*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EarthModel::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *EarthModel::Class_Name()
{
   return "EarthModel";
}

//______________________________________________________________________________
const char *EarthModel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EarthModel*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int EarthModel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EarthModel*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EarthModel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EarthModel*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EarthModel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EarthModel*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr IceModel::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *IceModel::Class_Name()
{
   return "IceModel";
}

//______________________________________________________________________________
const char *IceModel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::IceModel*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int IceModel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::IceModel*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *IceModel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::IceModel*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *IceModel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::IceModel*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Y::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Y::Class_Name()
{
   return "Y";
}

//______________________________________________________________________________
const char *Y::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Y*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Y::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Y*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Y::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Y*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Y::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Y*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Primaries::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Primaries::Class_Name()
{
   return "Primaries";
}

//______________________________________________________________________________
const char *Primaries::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Primaries*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Primaries::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Primaries*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Primaries::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Primaries*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Primaries::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Primaries*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Interaction::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Interaction::Class_Name()
{
   return "Interaction";
}

//______________________________________________________________________________
const char *Interaction::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Interaction*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Interaction::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Interaction*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Interaction::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Interaction*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Interaction::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Interaction*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Surface_antenna_r::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Surface_antenna_r::Class_Name()
{
   return "Surface_antenna_r";
}

//______________________________________________________________________________
const char *Surface_antenna_r::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Surface_antenna_r*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Surface_antenna_r::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Surface_antenna_r*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Surface_antenna_r::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Surface_antenna_r*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Surface_antenna_r::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Surface_antenna_r*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Antenna_r::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Antenna_r::Class_Name()
{
   return "Antenna_r";
}

//______________________________________________________________________________
const char *Antenna_r::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Antenna_r*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Antenna_r::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Antenna_r*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Antenna_r::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Antenna_r*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Antenna_r::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Antenna_r*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr String_r::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *String_r::Class_Name()
{
   return "String_r";
}

//______________________________________________________________________________
const char *String_r::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::String_r*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int String_r::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::String_r*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *String_r::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::String_r*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *String_r::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::String_r*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Station_r::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Station_r::Class_Name()
{
   return "Station_r";
}

//______________________________________________________________________________
const char *Station_r::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Station_r*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Station_r::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Station_r*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Station_r::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Station_r*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Station_r::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Station_r*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Report::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Report::Class_Name()
{
   return "Report";
}

//______________________________________________________________________________
const char *Report::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Report*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Report::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Report*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Report::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Report*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Report::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Report*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Event::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Event::Class_Name()
{
   return "Event";
}

//______________________________________________________________________________
const char *Event::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Event*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Event::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Event*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Event::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Event*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Event::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Event*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void Trigger::Streamer(TBuffer &R__b)
{
   // Stream an object of class Trigger.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Trigger::Class(),this);
   } else {
      R__b.WriteClassBuffer(Trigger::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Trigger(void *p) {
      return  p ? new(p) ::Trigger : new ::Trigger;
   }
   static void *newArray_Trigger(Long_t nElements, void *p) {
      return p ? new(p) ::Trigger[nElements] : new ::Trigger[nElements];
   }
   // Wrapper around operator delete
   static void delete_Trigger(void *p) {
      delete ((::Trigger*)p);
   }
   static void deleteArray_Trigger(void *p) {
      delete [] ((::Trigger*)p);
   }
   static void destruct_Trigger(void *p) {
      typedef ::Trigger current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Trigger

//______________________________________________________________________________
void Vector::Streamer(TBuffer &R__b)
{
   // Stream an object of class Vector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Vector::Class(),this);
   } else {
      R__b.WriteClassBuffer(Vector::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Vector(void *p) {
      return  p ? new(p) ::Vector : new ::Vector;
   }
   static void *newArray_Vector(Long_t nElements, void *p) {
      return p ? new(p) ::Vector[nElements] : new ::Vector[nElements];
   }
   // Wrapper around operator delete
   static void delete_Vector(void *p) {
      delete ((::Vector*)p);
   }
   static void deleteArray_Vector(void *p) {
      delete [] ((::Vector*)p);
   }
   static void destruct_Vector(void *p) {
      typedef ::Vector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Vector

//______________________________________________________________________________
void Position::Streamer(TBuffer &R__b)
{
   // Stream an object of class Position.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Position::Class(),this);
   } else {
      R__b.WriteClassBuffer(Position::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Position(void *p) {
      return  p ? new(p) ::Position : new ::Position;
   }
   static void *newArray_Position(Long_t nElements, void *p) {
      return p ? new(p) ::Position[nElements] : new ::Position[nElements];
   }
   // Wrapper around operator delete
   static void delete_Position(void *p) {
      delete ((::Position*)p);
   }
   static void deleteArray_Position(void *p) {
      delete [] ((::Position*)p);
   }
   static void destruct_Position(void *p) {
      typedef ::Position current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Position

//______________________________________________________________________________
void Parameters::Streamer(TBuffer &R__b)
{
   // Stream an object of class Parameters.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Parameters::Class(),this);
   } else {
      R__b.WriteClassBuffer(Parameters::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Parameters(void *p) {
      return  p ? new(p) ::Parameters : new ::Parameters;
   }
   static void *newArray_Parameters(Long_t nElements, void *p) {
      return p ? new(p) ::Parameters[nElements] : new ::Parameters[nElements];
   }
   // Wrapper around operator delete
   static void delete_Parameters(void *p) {
      delete ((::Parameters*)p);
   }
   static void deleteArray_Parameters(void *p) {
      delete [] ((::Parameters*)p);
   }
   static void destruct_Parameters(void *p) {
      typedef ::Parameters current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Parameters

//______________________________________________________________________________
void Surface_antenna::Streamer(TBuffer &R__b)
{
   // Stream an object of class Surface_antenna.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Surface_antenna::Class(),this);
   } else {
      R__b.WriteClassBuffer(Surface_antenna::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Surface_antenna(void *p) {
      return  p ? new(p) ::Surface_antenna : new ::Surface_antenna;
   }
   static void *newArray_Surface_antenna(Long_t nElements, void *p) {
      return p ? new(p) ::Surface_antenna[nElements] : new ::Surface_antenna[nElements];
   }
   // Wrapper around operator delete
   static void delete_Surface_antenna(void *p) {
      delete ((::Surface_antenna*)p);
   }
   static void deleteArray_Surface_antenna(void *p) {
      delete [] ((::Surface_antenna*)p);
   }
   static void destruct_Surface_antenna(void *p) {
      typedef ::Surface_antenna current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Surface_antenna

//______________________________________________________________________________
void Antenna::Streamer(TBuffer &R__b)
{
   // Stream an object of class Antenna.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Antenna::Class(),this);
   } else {
      R__b.WriteClassBuffer(Antenna::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Antenna(void *p) {
      return  p ? new(p) ::Antenna : new ::Antenna;
   }
   static void *newArray_Antenna(Long_t nElements, void *p) {
      return p ? new(p) ::Antenna[nElements] : new ::Antenna[nElements];
   }
   // Wrapper around operator delete
   static void delete_Antenna(void *p) {
      delete ((::Antenna*)p);
   }
   static void deleteArray_Antenna(void *p) {
      delete [] ((::Antenna*)p);
   }
   static void destruct_Antenna(void *p) {
      typedef ::Antenna current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Antenna

//______________________________________________________________________________
void Antenna_string::Streamer(TBuffer &R__b)
{
   // Stream an object of class Antenna_string.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Antenna_string::Class(),this);
   } else {
      R__b.WriteClassBuffer(Antenna_string::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Antenna_string(void *p) {
      return  p ? new(p) ::Antenna_string : new ::Antenna_string;
   }
   static void *newArray_Antenna_string(Long_t nElements, void *p) {
      return p ? new(p) ::Antenna_string[nElements] : new ::Antenna_string[nElements];
   }
   // Wrapper around operator delete
   static void delete_Antenna_string(void *p) {
      delete ((::Antenna_string*)p);
   }
   static void deleteArray_Antenna_string(void *p) {
      delete [] ((::Antenna_string*)p);
   }
   static void destruct_Antenna_string(void *p) {
      typedef ::Antenna_string current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Antenna_string

//______________________________________________________________________________
void ARA_station::Streamer(TBuffer &R__b)
{
   // Stream an object of class ARA_station.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ARA_station::Class(),this);
   } else {
      R__b.WriteClassBuffer(ARA_station::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ARA_station(void *p) {
      return  p ? new(p) ::ARA_station : new ::ARA_station;
   }
   static void *newArray_ARA_station(Long_t nElements, void *p) {
      return p ? new(p) ::ARA_station[nElements] : new ::ARA_station[nElements];
   }
   // Wrapper around operator delete
   static void delete_ARA_station(void *p) {
      delete ((::ARA_station*)p);
   }
   static void deleteArray_ARA_station(void *p) {
      delete [] ((::ARA_station*)p);
   }
   static void destruct_ARA_station(void *p) {
      typedef ::ARA_station current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ARA_station

//______________________________________________________________________________
void InstalledStation::Streamer(TBuffer &R__b)
{
   // Stream an object of class InstalledStation.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(InstalledStation::Class(),this);
   } else {
      R__b.WriteClassBuffer(InstalledStation::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_InstalledStation(void *p) {
      return  p ? new(p) ::InstalledStation : new ::InstalledStation;
   }
   static void *newArray_InstalledStation(Long_t nElements, void *p) {
      return p ? new(p) ::InstalledStation[nElements] : new ::InstalledStation[nElements];
   }
   // Wrapper around operator delete
   static void delete_InstalledStation(void *p) {
      delete ((::InstalledStation*)p);
   }
   static void deleteArray_InstalledStation(void *p) {
      delete [] ((::InstalledStation*)p);
   }
   static void destruct_InstalledStation(void *p) {
      typedef ::InstalledStation current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::InstalledStation

//______________________________________________________________________________
void IdealStation::Streamer(TBuffer &R__b)
{
   // Stream an object of class IdealStation.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(IdealStation::Class(),this);
   } else {
      R__b.WriteClassBuffer(IdealStation::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_IdealStation(void *p) {
      return  p ? new(p) ::IdealStation : new ::IdealStation;
   }
   static void *newArray_IdealStation(Long_t nElements, void *p) {
      return p ? new(p) ::IdealStation[nElements] : new ::IdealStation[nElements];
   }
   // Wrapper around operator delete
   static void delete_IdealStation(void *p) {
      delete ((::IdealStation*)p);
   }
   static void deleteArray_IdealStation(void *p) {
      delete [] ((::IdealStation*)p);
   }
   static void destruct_IdealStation(void *p) {
      typedef ::IdealStation current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::IdealStation

//______________________________________________________________________________
void Detector::Streamer(TBuffer &R__b)
{
   // Stream an object of class Detector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Detector::Class(),this);
   } else {
      R__b.WriteClassBuffer(Detector::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Detector(void *p) {
      return  p ? new(p) ::Detector : new ::Detector;
   }
   static void *newArray_Detector(Long_t nElements, void *p) {
      return p ? new(p) ::Detector[nElements] : new ::Detector[nElements];
   }
   // Wrapper around operator delete
   static void delete_Detector(void *p) {
      delete ((::Detector*)p);
   }
   static void deleteArray_Detector(void *p) {
      delete [] ((::Detector*)p);
   }
   static void destruct_Detector(void *p) {
      typedef ::Detector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Detector

//______________________________________________________________________________
void Settings::Streamer(TBuffer &R__b)
{
   // Stream an object of class Settings.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Settings::Class(),this);
   } else {
      R__b.WriteClassBuffer(Settings::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Settings(void *p) {
      return  p ? new(p) ::Settings : new ::Settings;
   }
   static void *newArray_Settings(Long_t nElements, void *p) {
      return p ? new(p) ::Settings[nElements] : new ::Settings[nElements];
   }
   // Wrapper around operator delete
   static void delete_Settings(void *p) {
      delete ((::Settings*)p);
   }
   static void deleteArray_Settings(void *p) {
      delete [] ((::Settings*)p);
   }
   static void destruct_Settings(void *p) {
      typedef ::Settings current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Settings

//______________________________________________________________________________
void Spectra::Streamer(TBuffer &R__b)
{
   // Stream an object of class Spectra.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Spectra::Class(),this);
   } else {
      R__b.WriteClassBuffer(Spectra::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Spectra(void *p) {
      return  p ? new(p) ::Spectra : new ::Spectra;
   }
   static void *newArray_Spectra(Long_t nElements, void *p) {
      return p ? new(p) ::Spectra[nElements] : new ::Spectra[nElements];
   }
   // Wrapper around operator delete
   static void delete_Spectra(void *p) {
      delete ((::Spectra*)p);
   }
   static void deleteArray_Spectra(void *p) {
      delete [] ((::Spectra*)p);
   }
   static void destruct_Spectra(void *p) {
      typedef ::Spectra current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Spectra

//______________________________________________________________________________
void EarthModel::Streamer(TBuffer &R__b)
{
   // Stream an object of class EarthModel.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(EarthModel::Class(),this);
   } else {
      R__b.WriteClassBuffer(EarthModel::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EarthModel(void *p) {
      return  p ? new(p) ::EarthModel : new ::EarthModel;
   }
   static void *newArray_EarthModel(Long_t nElements, void *p) {
      return p ? new(p) ::EarthModel[nElements] : new ::EarthModel[nElements];
   }
   // Wrapper around operator delete
   static void delete_EarthModel(void *p) {
      delete ((::EarthModel*)p);
   }
   static void deleteArray_EarthModel(void *p) {
      delete [] ((::EarthModel*)p);
   }
   static void destruct_EarthModel(void *p) {
      typedef ::EarthModel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::EarthModel

//______________________________________________________________________________
void IceModel::Streamer(TBuffer &R__b)
{
   // Stream an object of class IceModel.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(IceModel::Class(),this);
   } else {
      R__b.WriteClassBuffer(IceModel::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_IceModel(void *p) {
      return  p ? new(p) ::IceModel : new ::IceModel;
   }
   static void *newArray_IceModel(Long_t nElements, void *p) {
      return p ? new(p) ::IceModel[nElements] : new ::IceModel[nElements];
   }
   // Wrapper around operator delete
   static void delete_IceModel(void *p) {
      delete ((::IceModel*)p);
   }
   static void deleteArray_IceModel(void *p) {
      delete [] ((::IceModel*)p);
   }
   static void destruct_IceModel(void *p) {
      typedef ::IceModel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::IceModel

//______________________________________________________________________________
void Y::Streamer(TBuffer &R__b)
{
   // Stream an object of class Y.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Y::Class(),this);
   } else {
      R__b.WriteClassBuffer(Y::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Y(void *p) {
      return  p ? new(p) ::Y : new ::Y;
   }
   static void *newArray_Y(Long_t nElements, void *p) {
      return p ? new(p) ::Y[nElements] : new ::Y[nElements];
   }
   // Wrapper around operator delete
   static void delete_Y(void *p) {
      delete ((::Y*)p);
   }
   static void deleteArray_Y(void *p) {
      delete [] ((::Y*)p);
   }
   static void destruct_Y(void *p) {
      typedef ::Y current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Y

//______________________________________________________________________________
void Primaries::Streamer(TBuffer &R__b)
{
   // Stream an object of class Primaries.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Primaries::Class(),this);
   } else {
      R__b.WriteClassBuffer(Primaries::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Primaries(void *p) {
      return  p ? new(p) ::Primaries : new ::Primaries;
   }
   static void *newArray_Primaries(Long_t nElements, void *p) {
      return p ? new(p) ::Primaries[nElements] : new ::Primaries[nElements];
   }
   // Wrapper around operator delete
   static void delete_Primaries(void *p) {
      delete ((::Primaries*)p);
   }
   static void deleteArray_Primaries(void *p) {
      delete [] ((::Primaries*)p);
   }
   static void destruct_Primaries(void *p) {
      typedef ::Primaries current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Primaries

//______________________________________________________________________________
void Interaction::Streamer(TBuffer &R__b)
{
   // Stream an object of class Interaction.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Interaction::Class(),this);
   } else {
      R__b.WriteClassBuffer(Interaction::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Interaction(void *p) {
      return  p ? new(p) ::Interaction : new ::Interaction;
   }
   static void *newArray_Interaction(Long_t nElements, void *p) {
      return p ? new(p) ::Interaction[nElements] : new ::Interaction[nElements];
   }
   // Wrapper around operator delete
   static void delete_Interaction(void *p) {
      delete ((::Interaction*)p);
   }
   static void deleteArray_Interaction(void *p) {
      delete [] ((::Interaction*)p);
   }
   static void destruct_Interaction(void *p) {
      typedef ::Interaction current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Interaction

//______________________________________________________________________________
void Surface_antenna_r::Streamer(TBuffer &R__b)
{
   // Stream an object of class Surface_antenna_r.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Surface_antenna_r::Class(),this);
   } else {
      R__b.WriteClassBuffer(Surface_antenna_r::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Surface_antenna_r(void *p) {
      return  p ? new(p) ::Surface_antenna_r : new ::Surface_antenna_r;
   }
   static void *newArray_Surface_antenna_r(Long_t nElements, void *p) {
      return p ? new(p) ::Surface_antenna_r[nElements] : new ::Surface_antenna_r[nElements];
   }
   // Wrapper around operator delete
   static void delete_Surface_antenna_r(void *p) {
      delete ((::Surface_antenna_r*)p);
   }
   static void deleteArray_Surface_antenna_r(void *p) {
      delete [] ((::Surface_antenna_r*)p);
   }
   static void destruct_Surface_antenna_r(void *p) {
      typedef ::Surface_antenna_r current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Surface_antenna_r

//______________________________________________________________________________
void Antenna_r::Streamer(TBuffer &R__b)
{
   // Stream an object of class Antenna_r.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Antenna_r::Class(),this);
   } else {
      R__b.WriteClassBuffer(Antenna_r::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Antenna_r(void *p) {
      return  p ? new(p) ::Antenna_r : new ::Antenna_r;
   }
   static void *newArray_Antenna_r(Long_t nElements, void *p) {
      return p ? new(p) ::Antenna_r[nElements] : new ::Antenna_r[nElements];
   }
   // Wrapper around operator delete
   static void delete_Antenna_r(void *p) {
      delete ((::Antenna_r*)p);
   }
   static void deleteArray_Antenna_r(void *p) {
      delete [] ((::Antenna_r*)p);
   }
   static void destruct_Antenna_r(void *p) {
      typedef ::Antenna_r current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Antenna_r

//______________________________________________________________________________
void String_r::Streamer(TBuffer &R__b)
{
   // Stream an object of class String_r.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(String_r::Class(),this);
   } else {
      R__b.WriteClassBuffer(String_r::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_String_r(void *p) {
      return  p ? new(p) ::String_r : new ::String_r;
   }
   static void *newArray_String_r(Long_t nElements, void *p) {
      return p ? new(p) ::String_r[nElements] : new ::String_r[nElements];
   }
   // Wrapper around operator delete
   static void delete_String_r(void *p) {
      delete ((::String_r*)p);
   }
   static void deleteArray_String_r(void *p) {
      delete [] ((::String_r*)p);
   }
   static void destruct_String_r(void *p) {
      typedef ::String_r current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::String_r

//______________________________________________________________________________
void Station_r::Streamer(TBuffer &R__b)
{
   // Stream an object of class Station_r.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Station_r::Class(),this);
   } else {
      R__b.WriteClassBuffer(Station_r::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Station_r(void *p) {
      return  p ? new(p) ::Station_r : new ::Station_r;
   }
   static void *newArray_Station_r(Long_t nElements, void *p) {
      return p ? new(p) ::Station_r[nElements] : new ::Station_r[nElements];
   }
   // Wrapper around operator delete
   static void delete_Station_r(void *p) {
      delete ((::Station_r*)p);
   }
   static void deleteArray_Station_r(void *p) {
      delete [] ((::Station_r*)p);
   }
   static void destruct_Station_r(void *p) {
      typedef ::Station_r current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Station_r

//______________________________________________________________________________
void Report::Streamer(TBuffer &R__b)
{
   // Stream an object of class Report.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Report::Class(),this);
   } else {
      R__b.WriteClassBuffer(Report::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Report(void *p) {
      return  p ? new(p) ::Report : new ::Report;
   }
   static void *newArray_Report(Long_t nElements, void *p) {
      return p ? new(p) ::Report[nElements] : new ::Report[nElements];
   }
   // Wrapper around operator delete
   static void delete_Report(void *p) {
      delete ((::Report*)p);
   }
   static void deleteArray_Report(void *p) {
      delete [] ((::Report*)p);
   }
   static void destruct_Report(void *p) {
      typedef ::Report current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Report

//______________________________________________________________________________
void Event::Streamer(TBuffer &R__b)
{
   // Stream an object of class Event.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Event::Class(),this);
   } else {
      R__b.WriteClassBuffer(Event::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Event(void *p) {
      return  p ? new(p) ::Event : new ::Event;
   }
   static void *newArray_Event(Long_t nElements, void *p) {
      return p ? new(p) ::Event[nElements] : new ::Event[nElements];
   }
   // Wrapper around operator delete
   static void delete_Event(void *p) {
      delete ((::Event*)p);
   }
   static void deleteArray_Event(void *p) {
      delete [] ((::Event*)p);
   }
   static void destruct_Event(void *p) {
      typedef ::Event current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Event

namespace ROOT {
   static TClass *vectorlEvectorlEvectorlEdoublegRsPgRsPgR_Dictionary();
   static void vectorlEvectorlEvectorlEdoublegRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEvectorlEdoublegRsPgRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlEvectorlEdoublegRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEvectorlEdoublegRsPgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEvectorlEdoublegRsPgRsPgR(void *p);
   static void destruct_vectorlEvectorlEvectorlEdoublegRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<vector<double> > >*)
   {
      vector<vector<vector<double> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<vector<double> > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<vector<double> > >", -2, "vector", 210,
                  typeid(vector<vector<vector<double> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEvectorlEdoublegRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<vector<double> > >) );
      instance.SetNew(&new_vectorlEvectorlEvectorlEdoublegRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEvectorlEdoublegRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEvectorlEdoublegRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEvectorlEdoublegRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEvectorlEdoublegRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<vector<double> > > >()));

      ::ROOT::AddClassAlternate("vector<vector<vector<double> > >","std::vector<std::vector<std::vector<double, std::allocator<double> >, std::allocator<std::vector<double, std::allocator<double> > > >, std::allocator<std::vector<std::vector<double, std::allocator<double> >, std::allocator<std::vector<double, std::allocator<double> > > > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<vector<double> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEvectorlEdoublegRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<vector<double> > >*)0x0)->GetClass();
      vectorlEvectorlEvectorlEdoublegRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEvectorlEdoublegRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEvectorlEdoublegRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<vector<double> > > : new vector<vector<vector<double> > >;
   }
   static void *newArray_vectorlEvectorlEvectorlEdoublegRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<vector<double> > >[nElements] : new vector<vector<vector<double> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEvectorlEdoublegRsPgRsPgR(void *p) {
      delete ((vector<vector<vector<double> > >*)p);
   }
   static void deleteArray_vectorlEvectorlEvectorlEdoublegRsPgRsPgR(void *p) {
      delete [] ((vector<vector<vector<double> > >*)p);
   }
   static void destruct_vectorlEvectorlEvectorlEdoublegRsPgRsPgR(void *p) {
      typedef vector<vector<vector<double> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<vector<double> > >

namespace ROOT {
   static TClass *vectorlEvectorlEintgRsPgR_Dictionary();
   static void vectorlEvectorlEintgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEintgRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlEintgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEintgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEintgRsPgR(void *p);
   static void destruct_vectorlEvectorlEintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<int> >*)
   {
      vector<vector<int> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<int> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<int> >", -2, "vector", 210,
                  typeid(vector<vector<int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEintgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<int> >) );
      instance.SetNew(&new_vectorlEvectorlEintgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEintgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEintgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEintgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<int> > >()));

      ::ROOT::AddClassAlternate("vector<vector<int> >","std::vector<std::vector<int, std::allocator<int> >, std::allocator<std::vector<int, std::allocator<int> > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<int> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<int> >*)0x0)->GetClass();
      vectorlEvectorlEintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<int> > : new vector<vector<int> >;
   }
   static void *newArray_vectorlEvectorlEintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<int> >[nElements] : new vector<vector<int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEintgRsPgR(void *p) {
      delete ((vector<vector<int> >*)p);
   }
   static void deleteArray_vectorlEvectorlEintgRsPgR(void *p) {
      delete [] ((vector<vector<int> >*)p);
   }
   static void destruct_vectorlEvectorlEintgRsPgR(void *p) {
      typedef vector<vector<int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<int> >

namespace ROOT {
   static TClass *vectorlEvectorlEdoublegRsPgR_Dictionary();
   static void vectorlEvectorlEdoublegRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEdoublegRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlEdoublegRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEdoublegRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEdoublegRsPgR(void *p);
   static void destruct_vectorlEvectorlEdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<double> >*)
   {
      vector<vector<double> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<double> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<double> >", -2, "vector", 210,
                  typeid(vector<vector<double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEdoublegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<double> >) );
      instance.SetNew(&new_vectorlEvectorlEdoublegRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEdoublegRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEdoublegRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEdoublegRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<double> > >()));

      ::ROOT::AddClassAlternate("vector<vector<double> >","std::vector<std::vector<double, std::allocator<double> >, std::allocator<std::vector<double, std::allocator<double> > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<double> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<double> >*)0x0)->GetClass();
      vectorlEvectorlEdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEdoublegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<double> > : new vector<vector<double> >;
   }
   static void *newArray_vectorlEvectorlEdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<double> >[nElements] : new vector<vector<double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEdoublegRsPgR(void *p) {
      delete ((vector<vector<double> >*)p);
   }
   static void deleteArray_vectorlEvectorlEdoublegRsPgR(void *p) {
      delete [] ((vector<vector<double> >*)p);
   }
   static void destruct_vectorlEvectorlEdoublegRsPgR(void *p) {
      typedef vector<vector<double> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<double> >

namespace ROOT {
   static TClass *vectorlEintgR_Dictionary();
   static void vectorlEintgR_TClassManip(TClass*);
   static void *new_vectorlEintgR(void *p = 0);
   static void *newArray_vectorlEintgR(Long_t size, void *p);
   static void delete_vectorlEintgR(void *p);
   static void deleteArray_vectorlEintgR(void *p);
   static void destruct_vectorlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<int>*)
   {
      vector<int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<int>", -2, "vector", 210,
                  typeid(vector<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<int>) );
      instance.SetNew(&new_vectorlEintgR);
      instance.SetNewArray(&newArray_vectorlEintgR);
      instance.SetDelete(&delete_vectorlEintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEintgR);
      instance.SetDestructor(&destruct_vectorlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<int> >()));

      ::ROOT::AddClassAlternate("vector<int>","std::vector<int, std::allocator<int> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<int>*)0x0)->GetClass();
      vectorlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int> : new vector<int>;
   }
   static void *newArray_vectorlEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int>[nElements] : new vector<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEintgR(void *p) {
      delete ((vector<int>*)p);
   }
   static void deleteArray_vectorlEintgR(void *p) {
      delete [] ((vector<int>*)p);
   }
   static void destruct_vectorlEintgR(void *p) {
      typedef vector<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<int>

namespace ROOT {
   static TClass *vectorlEdoublegR_Dictionary();
   static void vectorlEdoublegR_TClassManip(TClass*);
   static void *new_vectorlEdoublegR(void *p = 0);
   static void *newArray_vectorlEdoublegR(Long_t size, void *p);
   static void delete_vectorlEdoublegR(void *p);
   static void deleteArray_vectorlEdoublegR(void *p);
   static void destruct_vectorlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<double>*)
   {
      vector<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<double>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<double>", -2, "vector", 210,
                  typeid(vector<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<double>) );
      instance.SetNew(&new_vectorlEdoublegR);
      instance.SetNewArray(&newArray_vectorlEdoublegR);
      instance.SetDelete(&delete_vectorlEdoublegR);
      instance.SetDeleteArray(&deleteArray_vectorlEdoublegR);
      instance.SetDestructor(&destruct_vectorlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<double> >()));

      ::ROOT::AddClassAlternate("vector<double>","std::vector<double, std::allocator<double> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<double>*)0x0)->GetClass();
      vectorlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double> : new vector<double>;
   }
   static void *newArray_vectorlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double>[nElements] : new vector<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdoublegR(void *p) {
      delete ((vector<double>*)p);
   }
   static void deleteArray_vectorlEdoublegR(void *p) {
      delete [] ((vector<double>*)p);
   }
   static void destruct_vectorlEdoublegR(void *p) {
      typedef vector<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<double>

namespace ROOT {
   static TClass *vectorlESurface_antenna_rgR_Dictionary();
   static void vectorlESurface_antenna_rgR_TClassManip(TClass*);
   static void *new_vectorlESurface_antenna_rgR(void *p = 0);
   static void *newArray_vectorlESurface_antenna_rgR(Long_t size, void *p);
   static void delete_vectorlESurface_antenna_rgR(void *p);
   static void deleteArray_vectorlESurface_antenna_rgR(void *p);
   static void destruct_vectorlESurface_antenna_rgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<Surface_antenna_r>*)
   {
      vector<Surface_antenna_r> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<Surface_antenna_r>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<Surface_antenna_r>", -2, "vector", 210,
                  typeid(vector<Surface_antenna_r>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlESurface_antenna_rgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<Surface_antenna_r>) );
      instance.SetNew(&new_vectorlESurface_antenna_rgR);
      instance.SetNewArray(&newArray_vectorlESurface_antenna_rgR);
      instance.SetDelete(&delete_vectorlESurface_antenna_rgR);
      instance.SetDeleteArray(&deleteArray_vectorlESurface_antenna_rgR);
      instance.SetDestructor(&destruct_vectorlESurface_antenna_rgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<Surface_antenna_r> >()));

      ::ROOT::AddClassAlternate("vector<Surface_antenna_r>","std::vector<Surface_antenna_r, std::allocator<Surface_antenna_r> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<Surface_antenna_r>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlESurface_antenna_rgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<Surface_antenna_r>*)0x0)->GetClass();
      vectorlESurface_antenna_rgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlESurface_antenna_rgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlESurface_antenna_rgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<Surface_antenna_r> : new vector<Surface_antenna_r>;
   }
   static void *newArray_vectorlESurface_antenna_rgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<Surface_antenna_r>[nElements] : new vector<Surface_antenna_r>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlESurface_antenna_rgR(void *p) {
      delete ((vector<Surface_antenna_r>*)p);
   }
   static void deleteArray_vectorlESurface_antenna_rgR(void *p) {
      delete [] ((vector<Surface_antenna_r>*)p);
   }
   static void destruct_vectorlESurface_antenna_rgR(void *p) {
      typedef vector<Surface_antenna_r> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<Surface_antenna_r>

namespace ROOT {
   static TClass *vectorlESurface_antennagR_Dictionary();
   static void vectorlESurface_antennagR_TClassManip(TClass*);
   static void *new_vectorlESurface_antennagR(void *p = 0);
   static void *newArray_vectorlESurface_antennagR(Long_t size, void *p);
   static void delete_vectorlESurface_antennagR(void *p);
   static void deleteArray_vectorlESurface_antennagR(void *p);
   static void destruct_vectorlESurface_antennagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<Surface_antenna>*)
   {
      vector<Surface_antenna> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<Surface_antenna>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<Surface_antenna>", -2, "vector", 210,
                  typeid(vector<Surface_antenna>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlESurface_antennagR_Dictionary, isa_proxy, 0,
                  sizeof(vector<Surface_antenna>) );
      instance.SetNew(&new_vectorlESurface_antennagR);
      instance.SetNewArray(&newArray_vectorlESurface_antennagR);
      instance.SetDelete(&delete_vectorlESurface_antennagR);
      instance.SetDeleteArray(&deleteArray_vectorlESurface_antennagR);
      instance.SetDestructor(&destruct_vectorlESurface_antennagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<Surface_antenna> >()));

      ::ROOT::AddClassAlternate("vector<Surface_antenna>","std::vector<Surface_antenna, std::allocator<Surface_antenna> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<Surface_antenna>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlESurface_antennagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<Surface_antenna>*)0x0)->GetClass();
      vectorlESurface_antennagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlESurface_antennagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlESurface_antennagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<Surface_antenna> : new vector<Surface_antenna>;
   }
   static void *newArray_vectorlESurface_antennagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<Surface_antenna>[nElements] : new vector<Surface_antenna>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlESurface_antennagR(void *p) {
      delete ((vector<Surface_antenna>*)p);
   }
   static void deleteArray_vectorlESurface_antennagR(void *p) {
      delete [] ((vector<Surface_antenna>*)p);
   }
   static void destruct_vectorlESurface_antennagR(void *p) {
      typedef vector<Surface_antenna> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<Surface_antenna>

namespace ROOT {
   static TClass *vectorlEString_rgR_Dictionary();
   static void vectorlEString_rgR_TClassManip(TClass*);
   static void *new_vectorlEString_rgR(void *p = 0);
   static void *newArray_vectorlEString_rgR(Long_t size, void *p);
   static void delete_vectorlEString_rgR(void *p);
   static void deleteArray_vectorlEString_rgR(void *p);
   static void destruct_vectorlEString_rgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<String_r>*)
   {
      vector<String_r> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<String_r>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<String_r>", -2, "vector", 210,
                  typeid(vector<String_r>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEString_rgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<String_r>) );
      instance.SetNew(&new_vectorlEString_rgR);
      instance.SetNewArray(&newArray_vectorlEString_rgR);
      instance.SetDelete(&delete_vectorlEString_rgR);
      instance.SetDeleteArray(&deleteArray_vectorlEString_rgR);
      instance.SetDestructor(&destruct_vectorlEString_rgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<String_r> >()));

      ::ROOT::AddClassAlternate("vector<String_r>","std::vector<String_r, std::allocator<String_r> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<String_r>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEString_rgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<String_r>*)0x0)->GetClass();
      vectorlEString_rgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEString_rgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEString_rgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<String_r> : new vector<String_r>;
   }
   static void *newArray_vectorlEString_rgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<String_r>[nElements] : new vector<String_r>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEString_rgR(void *p) {
      delete ((vector<String_r>*)p);
   }
   static void deleteArray_vectorlEString_rgR(void *p) {
      delete [] ((vector<String_r>*)p);
   }
   static void destruct_vectorlEString_rgR(void *p) {
      typedef vector<String_r> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<String_r>

namespace ROOT {
   static TClass *vectorlEStation_rgR_Dictionary();
   static void vectorlEStation_rgR_TClassManip(TClass*);
   static void *new_vectorlEStation_rgR(void *p = 0);
   static void *newArray_vectorlEStation_rgR(Long_t size, void *p);
   static void delete_vectorlEStation_rgR(void *p);
   static void deleteArray_vectorlEStation_rgR(void *p);
   static void destruct_vectorlEStation_rgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<Station_r>*)
   {
      vector<Station_r> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<Station_r>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<Station_r>", -2, "vector", 210,
                  typeid(vector<Station_r>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEStation_rgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<Station_r>) );
      instance.SetNew(&new_vectorlEStation_rgR);
      instance.SetNewArray(&newArray_vectorlEStation_rgR);
      instance.SetDelete(&delete_vectorlEStation_rgR);
      instance.SetDeleteArray(&deleteArray_vectorlEStation_rgR);
      instance.SetDestructor(&destruct_vectorlEStation_rgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<Station_r> >()));

      ::ROOT::AddClassAlternate("vector<Station_r>","std::vector<Station_r, std::allocator<Station_r> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<Station_r>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEStation_rgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<Station_r>*)0x0)->GetClass();
      vectorlEStation_rgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEStation_rgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEStation_rgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<Station_r> : new vector<Station_r>;
   }
   static void *newArray_vectorlEStation_rgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<Station_r>[nElements] : new vector<Station_r>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEStation_rgR(void *p) {
      delete ((vector<Station_r>*)p);
   }
   static void deleteArray_vectorlEStation_rgR(void *p) {
      delete [] ((vector<Station_r>*)p);
   }
   static void destruct_vectorlEStation_rgR(void *p) {
      typedef vector<Station_r> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<Station_r>

namespace ROOT {
   static TClass *vectorlEPositiongR_Dictionary();
   static void vectorlEPositiongR_TClassManip(TClass*);
   static void *new_vectorlEPositiongR(void *p = 0);
   static void *newArray_vectorlEPositiongR(Long_t size, void *p);
   static void delete_vectorlEPositiongR(void *p);
   static void deleteArray_vectorlEPositiongR(void *p);
   static void destruct_vectorlEPositiongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<Position>*)
   {
      vector<Position> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<Position>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<Position>", -2, "vector", 210,
                  typeid(vector<Position>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEPositiongR_Dictionary, isa_proxy, 0,
                  sizeof(vector<Position>) );
      instance.SetNew(&new_vectorlEPositiongR);
      instance.SetNewArray(&newArray_vectorlEPositiongR);
      instance.SetDelete(&delete_vectorlEPositiongR);
      instance.SetDeleteArray(&deleteArray_vectorlEPositiongR);
      instance.SetDestructor(&destruct_vectorlEPositiongR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<Position> >()));

      ::ROOT::AddClassAlternate("vector<Position>","std::vector<Position, std::allocator<Position> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<Position>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEPositiongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<Position>*)0x0)->GetClass();
      vectorlEPositiongR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEPositiongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEPositiongR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<Position> : new vector<Position>;
   }
   static void *newArray_vectorlEPositiongR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<Position>[nElements] : new vector<Position>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEPositiongR(void *p) {
      delete ((vector<Position>*)p);
   }
   static void deleteArray_vectorlEPositiongR(void *p) {
      delete [] ((vector<Position>*)p);
   }
   static void destruct_vectorlEPositiongR(void *p) {
      typedef vector<Position> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<Position>

namespace ROOT {
   static TClass *vectorlEInteractiongR_Dictionary();
   static void vectorlEInteractiongR_TClassManip(TClass*);
   static void *new_vectorlEInteractiongR(void *p = 0);
   static void *newArray_vectorlEInteractiongR(Long_t size, void *p);
   static void delete_vectorlEInteractiongR(void *p);
   static void deleteArray_vectorlEInteractiongR(void *p);
   static void destruct_vectorlEInteractiongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<Interaction>*)
   {
      vector<Interaction> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<Interaction>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<Interaction>", -2, "vector", 210,
                  typeid(vector<Interaction>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEInteractiongR_Dictionary, isa_proxy, 0,
                  sizeof(vector<Interaction>) );
      instance.SetNew(&new_vectorlEInteractiongR);
      instance.SetNewArray(&newArray_vectorlEInteractiongR);
      instance.SetDelete(&delete_vectorlEInteractiongR);
      instance.SetDeleteArray(&deleteArray_vectorlEInteractiongR);
      instance.SetDestructor(&destruct_vectorlEInteractiongR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<Interaction> >()));

      ::ROOT::AddClassAlternate("vector<Interaction>","std::vector<Interaction, std::allocator<Interaction> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<Interaction>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEInteractiongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<Interaction>*)0x0)->GetClass();
      vectorlEInteractiongR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEInteractiongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEInteractiongR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<Interaction> : new vector<Interaction>;
   }
   static void *newArray_vectorlEInteractiongR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<Interaction>[nElements] : new vector<Interaction>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEInteractiongR(void *p) {
      delete ((vector<Interaction>*)p);
   }
   static void deleteArray_vectorlEInteractiongR(void *p) {
      delete [] ((vector<Interaction>*)p);
   }
   static void destruct_vectorlEInteractiongR(void *p) {
      typedef vector<Interaction> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<Interaction>

namespace ROOT {
   static TClass *vectorlEInstalledStationgR_Dictionary();
   static void vectorlEInstalledStationgR_TClassManip(TClass*);
   static void *new_vectorlEInstalledStationgR(void *p = 0);
   static void *newArray_vectorlEInstalledStationgR(Long_t size, void *p);
   static void delete_vectorlEInstalledStationgR(void *p);
   static void deleteArray_vectorlEInstalledStationgR(void *p);
   static void destruct_vectorlEInstalledStationgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<InstalledStation>*)
   {
      vector<InstalledStation> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<InstalledStation>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<InstalledStation>", -2, "vector", 210,
                  typeid(vector<InstalledStation>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEInstalledStationgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<InstalledStation>) );
      instance.SetNew(&new_vectorlEInstalledStationgR);
      instance.SetNewArray(&newArray_vectorlEInstalledStationgR);
      instance.SetDelete(&delete_vectorlEInstalledStationgR);
      instance.SetDeleteArray(&deleteArray_vectorlEInstalledStationgR);
      instance.SetDestructor(&destruct_vectorlEInstalledStationgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<InstalledStation> >()));

      ::ROOT::AddClassAlternate("vector<InstalledStation>","std::vector<InstalledStation, std::allocator<InstalledStation> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<InstalledStation>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEInstalledStationgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<InstalledStation>*)0x0)->GetClass();
      vectorlEInstalledStationgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEInstalledStationgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEInstalledStationgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<InstalledStation> : new vector<InstalledStation>;
   }
   static void *newArray_vectorlEInstalledStationgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<InstalledStation>[nElements] : new vector<InstalledStation>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEInstalledStationgR(void *p) {
      delete ((vector<InstalledStation>*)p);
   }
   static void deleteArray_vectorlEInstalledStationgR(void *p) {
      delete [] ((vector<InstalledStation>*)p);
   }
   static void destruct_vectorlEInstalledStationgR(void *p) {
      typedef vector<InstalledStation> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<InstalledStation>

namespace ROOT {
   static TClass *vectorlEIdealStationgR_Dictionary();
   static void vectorlEIdealStationgR_TClassManip(TClass*);
   static void *new_vectorlEIdealStationgR(void *p = 0);
   static void *newArray_vectorlEIdealStationgR(Long_t size, void *p);
   static void delete_vectorlEIdealStationgR(void *p);
   static void deleteArray_vectorlEIdealStationgR(void *p);
   static void destruct_vectorlEIdealStationgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<IdealStation>*)
   {
      vector<IdealStation> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<IdealStation>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<IdealStation>", -2, "vector", 210,
                  typeid(vector<IdealStation>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEIdealStationgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<IdealStation>) );
      instance.SetNew(&new_vectorlEIdealStationgR);
      instance.SetNewArray(&newArray_vectorlEIdealStationgR);
      instance.SetDelete(&delete_vectorlEIdealStationgR);
      instance.SetDeleteArray(&deleteArray_vectorlEIdealStationgR);
      instance.SetDestructor(&destruct_vectorlEIdealStationgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<IdealStation> >()));

      ::ROOT::AddClassAlternate("vector<IdealStation>","std::vector<IdealStation, std::allocator<IdealStation> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<IdealStation>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEIdealStationgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<IdealStation>*)0x0)->GetClass();
      vectorlEIdealStationgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEIdealStationgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEIdealStationgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<IdealStation> : new vector<IdealStation>;
   }
   static void *newArray_vectorlEIdealStationgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<IdealStation>[nElements] : new vector<IdealStation>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEIdealStationgR(void *p) {
      delete ((vector<IdealStation>*)p);
   }
   static void deleteArray_vectorlEIdealStationgR(void *p) {
      delete [] ((vector<IdealStation>*)p);
   }
   static void destruct_vectorlEIdealStationgR(void *p) {
      typedef vector<IdealStation> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<IdealStation>

namespace ROOT {
   static TClass *vectorlEAntenna_stringgR_Dictionary();
   static void vectorlEAntenna_stringgR_TClassManip(TClass*);
   static void *new_vectorlEAntenna_stringgR(void *p = 0);
   static void *newArray_vectorlEAntenna_stringgR(Long_t size, void *p);
   static void delete_vectorlEAntenna_stringgR(void *p);
   static void deleteArray_vectorlEAntenna_stringgR(void *p);
   static void destruct_vectorlEAntenna_stringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<Antenna_string>*)
   {
      vector<Antenna_string> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<Antenna_string>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<Antenna_string>", -2, "vector", 210,
                  typeid(vector<Antenna_string>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEAntenna_stringgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<Antenna_string>) );
      instance.SetNew(&new_vectorlEAntenna_stringgR);
      instance.SetNewArray(&newArray_vectorlEAntenna_stringgR);
      instance.SetDelete(&delete_vectorlEAntenna_stringgR);
      instance.SetDeleteArray(&deleteArray_vectorlEAntenna_stringgR);
      instance.SetDestructor(&destruct_vectorlEAntenna_stringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<Antenna_string> >()));

      ::ROOT::AddClassAlternate("vector<Antenna_string>","std::vector<Antenna_string, std::allocator<Antenna_string> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<Antenna_string>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEAntenna_stringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<Antenna_string>*)0x0)->GetClass();
      vectorlEAntenna_stringgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEAntenna_stringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEAntenna_stringgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<Antenna_string> : new vector<Antenna_string>;
   }
   static void *newArray_vectorlEAntenna_stringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<Antenna_string>[nElements] : new vector<Antenna_string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEAntenna_stringgR(void *p) {
      delete ((vector<Antenna_string>*)p);
   }
   static void deleteArray_vectorlEAntenna_stringgR(void *p) {
      delete [] ((vector<Antenna_string>*)p);
   }
   static void destruct_vectorlEAntenna_stringgR(void *p) {
      typedef vector<Antenna_string> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<Antenna_string>

namespace ROOT {
   static TClass *vectorlEAntenna_rgR_Dictionary();
   static void vectorlEAntenna_rgR_TClassManip(TClass*);
   static void *new_vectorlEAntenna_rgR(void *p = 0);
   static void *newArray_vectorlEAntenna_rgR(Long_t size, void *p);
   static void delete_vectorlEAntenna_rgR(void *p);
   static void deleteArray_vectorlEAntenna_rgR(void *p);
   static void destruct_vectorlEAntenna_rgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<Antenna_r>*)
   {
      vector<Antenna_r> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<Antenna_r>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<Antenna_r>", -2, "vector", 210,
                  typeid(vector<Antenna_r>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEAntenna_rgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<Antenna_r>) );
      instance.SetNew(&new_vectorlEAntenna_rgR);
      instance.SetNewArray(&newArray_vectorlEAntenna_rgR);
      instance.SetDelete(&delete_vectorlEAntenna_rgR);
      instance.SetDeleteArray(&deleteArray_vectorlEAntenna_rgR);
      instance.SetDestructor(&destruct_vectorlEAntenna_rgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<Antenna_r> >()));

      ::ROOT::AddClassAlternate("vector<Antenna_r>","std::vector<Antenna_r, std::allocator<Antenna_r> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<Antenna_r>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEAntenna_rgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<Antenna_r>*)0x0)->GetClass();
      vectorlEAntenna_rgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEAntenna_rgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEAntenna_rgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<Antenna_r> : new vector<Antenna_r>;
   }
   static void *newArray_vectorlEAntenna_rgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<Antenna_r>[nElements] : new vector<Antenna_r>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEAntenna_rgR(void *p) {
      delete ((vector<Antenna_r>*)p);
   }
   static void deleteArray_vectorlEAntenna_rgR(void *p) {
      delete [] ((vector<Antenna_r>*)p);
   }
   static void destruct_vectorlEAntenna_rgR(void *p) {
      typedef vector<Antenna_r> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<Antenna_r>

namespace ROOT {
   static TClass *vectorlEAntennagR_Dictionary();
   static void vectorlEAntennagR_TClassManip(TClass*);
   static void *new_vectorlEAntennagR(void *p = 0);
   static void *newArray_vectorlEAntennagR(Long_t size, void *p);
   static void delete_vectorlEAntennagR(void *p);
   static void deleteArray_vectorlEAntennagR(void *p);
   static void destruct_vectorlEAntennagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<Antenna>*)
   {
      vector<Antenna> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<Antenna>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<Antenna>", -2, "vector", 210,
                  typeid(vector<Antenna>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEAntennagR_Dictionary, isa_proxy, 0,
                  sizeof(vector<Antenna>) );
      instance.SetNew(&new_vectorlEAntennagR);
      instance.SetNewArray(&newArray_vectorlEAntennagR);
      instance.SetDelete(&delete_vectorlEAntennagR);
      instance.SetDeleteArray(&deleteArray_vectorlEAntennagR);
      instance.SetDestructor(&destruct_vectorlEAntennagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<Antenna> >()));

      ::ROOT::AddClassAlternate("vector<Antenna>","std::vector<Antenna, std::allocator<Antenna> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<Antenna>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEAntennagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<Antenna>*)0x0)->GetClass();
      vectorlEAntennagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEAntennagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEAntennagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<Antenna> : new vector<Antenna>;
   }
   static void *newArray_vectorlEAntennagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<Antenna>[nElements] : new vector<Antenna>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEAntennagR(void *p) {
      delete ((vector<Antenna>*)p);
   }
   static void deleteArray_vectorlEAntennagR(void *p) {
      delete [] ((vector<Antenna>*)p);
   }
   static void destruct_vectorlEAntennagR(void *p) {
      typedef vector<Antenna> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<Antenna>

namespace ROOT {
   static TClass *vectorlEARA_stationgR_Dictionary();
   static void vectorlEARA_stationgR_TClassManip(TClass*);
   static void *new_vectorlEARA_stationgR(void *p = 0);
   static void *newArray_vectorlEARA_stationgR(Long_t size, void *p);
   static void delete_vectorlEARA_stationgR(void *p);
   static void deleteArray_vectorlEARA_stationgR(void *p);
   static void destruct_vectorlEARA_stationgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ARA_station>*)
   {
      vector<ARA_station> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ARA_station>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ARA_station>", -2, "vector", 210,
                  typeid(vector<ARA_station>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEARA_stationgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ARA_station>) );
      instance.SetNew(&new_vectorlEARA_stationgR);
      instance.SetNewArray(&newArray_vectorlEARA_stationgR);
      instance.SetDelete(&delete_vectorlEARA_stationgR);
      instance.SetDeleteArray(&deleteArray_vectorlEARA_stationgR);
      instance.SetDestructor(&destruct_vectorlEARA_stationgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ARA_station> >()));

      ::ROOT::AddClassAlternate("vector<ARA_station>","std::vector<ARA_station, std::allocator<ARA_station> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ARA_station>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEARA_stationgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ARA_station>*)0x0)->GetClass();
      vectorlEARA_stationgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEARA_stationgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEARA_stationgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ARA_station> : new vector<ARA_station>;
   }
   static void *newArray_vectorlEARA_stationgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ARA_station>[nElements] : new vector<ARA_station>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEARA_stationgR(void *p) {
      delete ((vector<ARA_station>*)p);
   }
   static void deleteArray_vectorlEARA_stationgR(void *p) {
      delete [] ((vector<ARA_station>*)p);
   }
   static void destruct_vectorlEARA_stationgR(void *p) {
      typedef vector<ARA_station> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ARA_station>

namespace {
  void TriggerDictionaryInitialization_eventSimDict_Impl() {
    static const char* headers[] = {
"Trigger.h",
"Detector.h",
"Settings.h",
"Spectra.h",
"IceModel.h",
"Primaries.h",
"Report.h",
"Event.h",
"RawIcrrStationHeader.h",
"RawIcrrStationEvent.h",
"RawAraStationEvent.h",
"FullIcrrHkEvent.h",
"AraEventCalibrator.h",
"IcrrTriggerMonitor.h",
"IcrrHkData.h",
"AraRawIcrrRFChannel.h",
"AraAntennaInfo.h",
"AraGeomTool.h",
"UsefulAraStationEvent.h",
"UsefulIcrrStationEvent.h",
"araIcrrStructures.h",
"AtriEventHkData.h",
"AtriSensorHkData.h",
"araAtriStructures.h",
"araSoft.h",
"araIcrrDefines.h",
"RawAtriSimpleStationEvent.h",
"RawAtriStationBlock.h",
"RawAraGenericHeader.h",
"RawAtriStationEvent.h",
"UsefulAtriStationEvent.h",
"AraStationInfo.h",
0
    };
    static const char* includePaths[] = {
"./",
"/cvmfs/ara.opensciencegrid.org/trunk/centos7/ara_build/include",
"/cvmfs/ara.opensciencegrid.org/trunk/centos7/root_build/include/",
"/users/PAS0654/machtay1/New_AraSim_Split/AraSim/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "eventSimDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$Trigger.h")))  Trigger;
class __attribute__((annotate("$clingAutoload$Vector.h")))  __attribute__((annotate("$clingAutoload$Detector.h")))  Vector;
class __attribute__((annotate("$clingAutoload$Position.h")))  __attribute__((annotate("$clingAutoload$Detector.h")))  Position;
class __attribute__((annotate("$clingAutoload$Detector.h")))  Parameters;
class __attribute__((annotate("$clingAutoload$Detector.h")))  Surface_antenna;
class __attribute__((annotate("$clingAutoload$Detector.h")))  Antenna;
class __attribute__((annotate("$clingAutoload$Detector.h")))  Antenna_string;
class __attribute__((annotate("$clingAutoload$Detector.h")))  ARA_station;
class __attribute__((annotate("$clingAutoload$Detector.h")))  InstalledStation;
class __attribute__((annotate("$clingAutoload$Detector.h")))  IdealStation;
class __attribute__((annotate("$clingAutoload$Detector.h")))  Detector;
class __attribute__((annotate("$clingAutoload$Settings.h")))  Settings;
class __attribute__((annotate("$clingAutoload$Spectra.h")))  Spectra;
class __attribute__((annotate("$clingAutoload$EarthModel.h")))  __attribute__((annotate("$clingAutoload$IceModel.h")))  EarthModel;
class __attribute__((annotate("$clingAutoload$IceModel.h")))  IceModel;
class __attribute__((annotate("$clingAutoload$Primaries.h")))  Y;
class __attribute__((annotate("$clingAutoload$Primaries.h")))  Primaries;
class __attribute__((annotate("$clingAutoload$Primaries.h")))  Interaction;
class __attribute__((annotate("$clingAutoload$Report.h")))  Surface_antenna_r;
class __attribute__((annotate("$clingAutoload$Report.h")))  Antenna_r;
class __attribute__((annotate("$clingAutoload$Report.h")))  String_r;
class __attribute__((annotate("$clingAutoload$Report.h")))  Station_r;
class __attribute__((annotate("$clingAutoload$Report.h")))  Report;
class __attribute__((annotate("$clingAutoload$Event.h")))  Event;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "eventSimDict dictionary payload"

#ifndef ARA_UTIL_EXISTS
  #define ARA_UTIL_EXISTS 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "Trigger.h"
#include "Detector.h"
#include "Settings.h"
#include "Spectra.h"
#include "IceModel.h"
#include "Primaries.h"
#include "Report.h"
#include "Event.h"
#include "RawIcrrStationHeader.h"
#include "RawIcrrStationEvent.h"
#include "RawAraStationEvent.h"
#include "FullIcrrHkEvent.h"
#include "AraEventCalibrator.h"
#include "IcrrTriggerMonitor.h"
#include "IcrrHkData.h"
#include "AraRawIcrrRFChannel.h"
#include "AraAntennaInfo.h"
#include "AraGeomTool.h"
#include "UsefulAraStationEvent.h"
#include "UsefulIcrrStationEvent.h"
#include "araIcrrStructures.h"
#include "AtriEventHkData.h"
#include "AtriSensorHkData.h"
#include "araAtriStructures.h"
#include "araSoft.h"
#include "araIcrrDefines.h"
#include "RawAtriSimpleStationEvent.h"
#include "RawAtriStationBlock.h"
#include "RawAraGenericHeader.h"
#include "RawAtriStationEvent.h"
#include "UsefulAtriStationEvent.h"
#include "AraStationInfo.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"ARA_station", payloadCode, "@",
"Antenna", payloadCode, "@",
"Antenna_r", payloadCode, "@",
"Antenna_string", payloadCode, "@",
"AraAntDir::EAraAntDir", payloadCode, "@",
"AraAntPol::EAraAntPol", payloadCode, "@",
"AraAntType::EAraAntType", payloadCode, "@",
"AraCalType::EAraCalType", payloadCode, "@",
"AraDaqChanType::EAraDaqChanType", payloadCode, "@",
"AraLabChip::EAraLabChip", payloadCode, "@",
"Detector", payloadCode, "@",
"EarthModel", payloadCode, "@",
"Event", payloadCode, "@",
"IceModel", payloadCode, "@",
"IdealStation", payloadCode, "@",
"InstalledStation", payloadCode, "@",
"Interaction", payloadCode, "@",
"Parameters", payloadCode, "@",
"Position", payloadCode, "@",
"Primaries", payloadCode, "@",
"Report", payloadCode, "@",
"Settings", payloadCode, "@",
"Spectra", payloadCode, "@",
"Station_r", payloadCode, "@",
"String_r", payloadCode, "@",
"Surface_antenna", payloadCode, "@",
"Surface_antenna_r", payloadCode, "@",
"Trigger", payloadCode, "@",
"Vector", payloadCode, "@",
"Y", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("eventSimDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_eventSimDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_eventSimDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_eventSimDict() {
  TriggerDictionaryInitialization_eventSimDict_Impl();
}
