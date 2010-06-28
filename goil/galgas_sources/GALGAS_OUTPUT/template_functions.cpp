//---------------------------------------------------------------------------*
//                                                                           *
//                      File 'template_functions.cpp'                        *
//                 Generated by version GALGAS_BETA_VERSION                  *
//                       june 21th, 2010, at 21h3'56"                        *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#include "version_libpm.h"
#if CURRENT_LIBPM_VERSION != VERSION_OF_LIBPM_USED_BY_GALGAS_COMPILER
  #error "This file has been compiled with a version of GALGAS that uses libpm version VERSION_OF_LIBPM_USED_BY_GALGAS_COMPILER, different than the current version (CURRENT_LIBPM_VERSION) of libpm"
#endif

//---------------------------------------------------------------------------*

#include "template_functions.h"
#include "galgas-utilities/C_Compiler.h"
#include "galgas/C_galgas_CLI_Options.h"

//---------------------------------------------------------------------------*

#include "goil_options.h"
#include "template_grammar.h"

//---------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  #define SOURCE_FILE_AT_LINE(line) "template_functions.gSemantics", line
  #define COMMA_SOURCE_FILE_AT_LINE(line) , SOURCE_FILE_AT_LINE(line)
#else
  #define SOURCE_FILE_AT_LINE(line) 
  #define COMMA_SOURCE_FILE_AT_LINE(line) 
#endif

//---------------------------------------------------------------------------*
//                                                                           *
//                           Function 'trueFalse'                            *
//                                                                           *
//---------------------------------------------------------------------------*

GALGASap_string function_trueFalse (GALGASap_bool & constinArgument_inBool,
                                    C_Compiler * /* inCompiler */
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGASap_string result_string ; // Returned variable
  //-------- @ifInstructionForGeneration
  if (isValidAndTrue (constinArgument_inBool)) {
    //-------- @assignmentInstructionForGeneration
    //--- @literalStringExpressionForGeneration
    GALGASap_string temp_0 ("true" COMMA_SOURCE_FILE_AT_LINE (41)) ;
    result_string = temp_0 ;
  }else{
    //-------- @assignmentInstructionForGeneration
    //--- @literalStringExpressionForGeneration
    GALGASap_string temp_1 ("false" COMMA_SOURCE_FILE_AT_LINE (43)) ;
    result_string = temp_1 ;
  }
//---
  return result_string ;
}


//---------------------------------------------------------------------------*
//  Introspection                                                            *
//---------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_trueFalse [2] = {
  & kTypeDescriptor_GALGAS_bool,
  NULL
} ;

//---------------------------------------------------------------------------*

static GALGASap_object functionWithGenericHeader_trueFalse (C_Compiler * inCompiler,
                                                            cRootObjectArray & inEffectiveParameterArray,
                                                            const GALGASap_location & inErrorLocation
                                                            COMMA_LOCATION_ARGS) {
  const bool ok = inCompiler->checkFunctionCallArguments ("trueFalse",
                                                          1,
                                                          functionArgs_trueFalse,
                                                          inEffectiveParameterArray,
                                                          inErrorLocation
                                                          COMMA_THERE) ;
  GALGASap_object result ;
  if (ok) {
    GALGASap_bool operand0 = inEffectiveParameterArray.objectAtIndex (0 COMMA_THERE) ;
    result = function_trueFalse (operand0, inCompiler COMMA_THERE).embedObject () ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_trueFalse ("trueFalse",
                                                           functionWithGenericHeader_trueFalse,
                                                           & kTypeDescriptor_GALGAS_string,
                                                           1,
                                                           functionArgs_trueFalse) ;


//---------------------------------------------------------------------------*
//                                                                           *
//                             Function 'yesNo'                              *
//                                                                           *
//---------------------------------------------------------------------------*

GALGASap_string function_yesNo (GALGASap_bool & constinArgument_inBool,
                                C_Compiler * /* inCompiler */
                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGASap_string result_string ; // Returned variable
  //-------- @ifInstructionForGeneration
  if (isValidAndTrue (constinArgument_inBool)) {
    //-------- @assignmentInstructionForGeneration
    //--- @literalStringExpressionForGeneration
    GALGASap_string temp_0 ("YES" COMMA_SOURCE_FILE_AT_LINE (49)) ;
    result_string = temp_0 ;
  }else{
    //-------- @assignmentInstructionForGeneration
    //--- @literalStringExpressionForGeneration
    GALGASap_string temp_1 ("NO" COMMA_SOURCE_FILE_AT_LINE (51)) ;
    result_string = temp_1 ;
  }
//---
  return result_string ;
}


//---------------------------------------------------------------------------*
//  Introspection                                                            *
//---------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_yesNo [2] = {
  & kTypeDescriptor_GALGAS_bool,
  NULL
} ;

//---------------------------------------------------------------------------*

static GALGASap_object functionWithGenericHeader_yesNo (C_Compiler * inCompiler,
                                                        cRootObjectArray & inEffectiveParameterArray,
                                                        const GALGASap_location & inErrorLocation
                                                        COMMA_LOCATION_ARGS) {
  const bool ok = inCompiler->checkFunctionCallArguments ("yesNo",
                                                          1,
                                                          functionArgs_yesNo,
                                                          inEffectiveParameterArray,
                                                          inErrorLocation
                                                          COMMA_THERE) ;
  GALGASap_object result ;
  if (ok) {
    GALGASap_bool operand0 = inEffectiveParameterArray.objectAtIndex (0 COMMA_THERE) ;
    result = function_yesNo (operand0, inCompiler COMMA_THERE).embedObject () ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_yesNo ("yesNo",
                                                       functionWithGenericHeader_yesNo,
                                                       & kTypeDescriptor_GALGAS_string,
                                                       1,
                                                       functionArgs_yesNo) ;


//---------------------------------------------------------------------------*
//                                                                           *
//                           Function 'TRUEFALSE'                            *
//                                                                           *
//---------------------------------------------------------------------------*

GALGASap_string function_TRUEFALSE (GALGASap_bool & constinArgument_inBool,
                                    C_Compiler * /* inCompiler */
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGASap_string result_string ; // Returned variable
  //-------- @ifInstructionForGeneration
  if (isValidAndTrue (constinArgument_inBool)) {
    //-------- @assignmentInstructionForGeneration
    //--- @literalStringExpressionForGeneration
    GALGASap_string temp_0 ("TRUE" COMMA_SOURCE_FILE_AT_LINE (57)) ;
    result_string = temp_0 ;
  }else{
    //-------- @assignmentInstructionForGeneration
    //--- @literalStringExpressionForGeneration
    GALGASap_string temp_1 ("FALSE" COMMA_SOURCE_FILE_AT_LINE (59)) ;
    result_string = temp_1 ;
  }
//---
  return result_string ;
}


//---------------------------------------------------------------------------*
//  Introspection                                                            *
//---------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_TRUEFALSE [2] = {
  & kTypeDescriptor_GALGAS_bool,
  NULL
} ;

//---------------------------------------------------------------------------*

static GALGASap_object functionWithGenericHeader_TRUEFALSE (C_Compiler * inCompiler,
                                                            cRootObjectArray & inEffectiveParameterArray,
                                                            const GALGASap_location & inErrorLocation
                                                            COMMA_LOCATION_ARGS) {
  const bool ok = inCompiler->checkFunctionCallArguments ("TRUEFALSE",
                                                          1,
                                                          functionArgs_TRUEFALSE,
                                                          inEffectiveParameterArray,
                                                          inErrorLocation
                                                          COMMA_THERE) ;
  GALGASap_object result ;
  if (ok) {
    GALGASap_bool operand0 = inEffectiveParameterArray.objectAtIndex (0 COMMA_THERE) ;
    result = function_TRUEFALSE (operand0, inCompiler COMMA_THERE).embedObject () ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_TRUEFALSE ("TRUEFALSE",
                                                           functionWithGenericHeader_TRUEFALSE,
                                                           & kTypeDescriptor_GALGAS_string,
                                                           1,
                                                           functionArgs_TRUEFALSE) ;


//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


