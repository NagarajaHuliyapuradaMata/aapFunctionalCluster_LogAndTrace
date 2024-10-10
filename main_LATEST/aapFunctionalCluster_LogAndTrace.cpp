/******************************************************************************/
/* File   : aapFunctionalCluster_LogAndTrace.cpp                              */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "interface_LogAndTrace_Logger.hpp"
#include "interface_LogAndTrace.hpp"
#include "interface_LogAndTrace_LogStream.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#define UNUSED(x)                                                        (x = x)

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class aapFunctionalCluster_LogAndTrace:
      public interface_LogAndTrace_Logger
   ,  public interface_LogAndTrace
   ,  public interface_LogAndTrace_LogStream
{
   public:
      void      IsEnabled         (void);
      void      Log               (MsgId ValueMsgId, Params ValueParams);
      LogStream LogDebug          (void);
      LogStream LogError          (void);
      LogStream LogFatal          (void);
      LogStream LogInfo           (void);
      LogStream LogVerbose        (void);
      LogStream LogWarn           (void);
      LogStream WithLevel         (void);
      void      Arg               (void);
      void      BinFormat         (void);
      Logger    CreateLogger      (void);
      void      HexFormat         (void);
      void      remoteClientState (void);
      void      Flush             (void);
/*
operator<<(): void
*/
      void      WithLocation      (void);
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
void aapFunctionalCluster_LogAndTrace::IsEnabled(void){
}

void aapFunctionalCluster_LogAndTrace::Log(
      MsgId  ValueMsgId
   ,  Params ValueParams
){
   UNUSED(ValueMsgId);
   UNUSED(ValueParams);
}

LogStream aapFunctionalCluster_LogAndTrace::LogDebug(void){
   return 0;
}

LogStream aapFunctionalCluster_LogAndTrace::LogError(void){
   return 0;
}

LogStream aapFunctionalCluster_LogAndTrace::LogFatal(void){
   return 0;
}

LogStream aapFunctionalCluster_LogAndTrace::LogInfo(void){
   return 0;
}

LogStream aapFunctionalCluster_LogAndTrace::LogVerbose(void){
   return 0;
}

LogStream aapFunctionalCluster_LogAndTrace::LogWarn(void){
   return 0;
}

LogStream aapFunctionalCluster_LogAndTrace::WithLevel(void){
   return 0;
}

void aapFunctionalCluster_LogAndTrace::Arg(void){
}

void aapFunctionalCluster_LogAndTrace::BinFormat(void){
}

Logger aapFunctionalCluster_LogAndTrace::CreateLogger(void){
   return 0;
}

void aapFunctionalCluster_LogAndTrace::HexFormat(void){
}

void aapFunctionalCluster_LogAndTrace::remoteClientState(void){
}

void aapFunctionalCluster_LogAndTrace::Flush(void){
}

/*
operator<<(): void
*/

void aapFunctionalCluster_LogAndTrace::WithLocation(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
